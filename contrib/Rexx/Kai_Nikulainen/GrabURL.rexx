/*$VER: GrabURL.rexx  � Kai Nikulainen                                  email: kajun@sci.fi 1.5 (29-Jun-97)
Grabs all URLs from the current message and displays them in a requester, from which you can send one to your browser, or save it to a hotlist.


   This script grabs all URLs from the current message and displays them
   in a requester.  From that requester you can send the URL to your browser.
   Currently supported browsers are AWeb, IBrowse and Voyager.
   
   All URLs which end with a character in variable dup_chars will be 
   duplicated and displayed also without that character.

   The script requires rexxreqtools.library and reqtools.library.
   
   Send bug reports, comments and government secrets to kajun@sci.fi
   
   Now you can find my scripts also at http://www.sci.fi/~kajun
*/
options results
call addlib('rexxreqtools.library',0,-30,0)
call addlib('rexxsupport.library',0,-30,0)

browser='run <>nil: Work:IBrowse/IBrowse'       /* Change this to suit your system */
hotlist='Work:IBrowse/IBrowse-hotlist.html'     /* Link may be added to this file */
dup_chars='.,!?"*%&)'   /* If one of these ends the URL, it will be duplicated */
wid=70                  /* how many characters of the URL is shown? */
maxbut=17               /* How many buttons fit the screen ? */
maxurl=17               /* How many lines of URLs fit the screen ? */
      title='GrabURL.rexx by knikulai@utu.fi'
  not_found='Sorry, could not find any URLs!'
found_these='The following URLs were found:'
  error_msg='Could not open file for reading!'
   desc_txt='Enter description for' || '0a'x
tags='rt_pubscrname=YAMSCREEN'  /* Change here the name of the screen YAM runs */
NL='0a'x                /* newline */
uc=0                    /* URL-counter */

address 'YAM'
GetMailInfo File
fname=result

if open(msg,fname,'R') then do
   do until eof(msg) | uc=maxurl
      rivi=translate(readln(msg),' ','"')
      rivi=rivi || '  '         /* Just making sure there is a space at the end */
      do while uc<maxurl & (pos('HTTPS://',upper(rivi))>0 | pos('HTTP://',upper(rivi))>0 | pos('FTP://',upper(rivi))>0)
          /* There might be several URLs on one line */
          b=pos('HTTP://',upper(rivi))                  /* beginning */
          if b=0 then b=pos('FTP://',upper(rivi))
/* Adding other types is easy, just add a line like this and add a condition above */ 
          if b=0 then b=pos('HTTPS://',upper(rivi))
          e=pos(' ',rivi,b)                             /* ending space */
          call AddURL(substr(rivi,b,e-b))               /* save URL */
          spare=url.uc
          do while pos(right(spare,1),dup_chars)>0 
          /* Add another URL without the last character */
              spare=left(url.uc,length(url.uc)-1)
              call AddURL(spare)              
              end
          rivi=right(rivi,length(rivi)-e)
          end /* do until pos('HTTP://'*/
      end /* do until eof(msg) */
   if uc=0 then
       call rtezrequest(not_found,,title,tags)
   else do
       body=found_these || NL
       buttons=''
       do i=1 to uc
           if i<10 then 
               shortcut='_'
           else
               shortcut=''
           if i<=maxbut then buttons=buttons || shortcut || i || '|'
           body=body || i || ') '
           if length(url.i)<=wid then
               body=body || url.i || NL
           else
               body=body || left(url.i,40) || '...' || right(url.i,wid-43) || NL
           end /* do i=1 to uc */
       buttons=buttons || '_Ok'
       sel=rtezrequest(body,buttons,title,'rtez_defaultresponse=0' tags)
       if sel>0 then do       
           lst=show('P') || '  '
           no_browser=1
           if pos('MINDWALKER',lst)>0 then do
              address 'MINDWALKER' 'OpenURL '|| url.sel
              no_browser=0
              end
           if pos('VOYAGER',lst)>0 then do
              address 'VOYAGER' 'OpenURL '|| url.sel
              no_browser=0
              end
           if pos('IBROWSE',lst)>0 then do
              address 'IBROWSE' 'GotoURL ' || url.sel
              no_browser=0
              end
           if pos('AWEB',lst)>0 then do
                address value substr(lst,pos('AWEB.',lst),6)            
                'Open ' || url.sel
                no_browser=0
                end
           if no_browser then do
                address 'YAM'
                buts="_Run browser|_Add URL to hotlist|_Exit script"
                if ~exists(hotlist) then buts="_Run browser|_Exit script"
                'Request "No browser is currently running!  What do you want to do?" "'buts'"' 
                if result=0 then exit
                if result=1 then
                        address command browser url.sel
                else do
                        if ~open(6,hotlist,'r') | ~open(7,'t:gu.tmp','w') then do
                                'Request "Could not write to hotlist" "_Ok"'
                                exit
                                end
                        do until upper(line)='<UL>' | eof(6)
                                line=readln(6)
                                call writeln(7,line)
                                end
                        desc=rtgetstring(url.sel,desc_txt || url.sel,title,,tags)
                        if desc='' then exit
                        call writeln(7,'<LI><A HREF="'url.sel'">'desc'</A>')
                        do until eof(6)
                                line=readln(6)
                                if ~eof(6) then call writeln(7,line)
                                end
                        call close(6)
                        call close(7)
                        address command 'copy' hotlist hotlist || '.old'
                        address command 'copy t:gu.tmp' hotlist
                        address command 'delete >nil: t:gu.tmp'
                        end
                end
           end /* if sel>0 then do */
       end /* else */
   end
else
   call rtezrequest(error_msg,,title,tags)
exit

AddURL:
  parse arg u
  do i=1 to uc
      if url.i=u then return
      end
  uc=uc+1
  url.uc=u
return

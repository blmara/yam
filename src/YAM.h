#ifndef MAIN_YAM_H
#define MAIN_YAM_H

/***************************************************************************

 YAM - Yet Another Mailer
 Copyright (C) 1995-2000 by Marcel Beck <mbeck@yam.ch>
 Copyright (C) 2000-2008 by YAM Open Source Team

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

 YAM Official Support Site :  http://www.yam.ch
 YAM OpenSource project    :  http://sourceforge.net/projects/yamos/

 $Id$

***************************************************************************/

#include <xpk/xpk.h>

#include "netinet/in.h"

#include "YAM_stringsizes.h"
#include "YAM_transfer.h"    // struct DownloadResult
#include "YAM_userlist.h"    // struct Users
#include "YAM_utilities.h"   // ASL_MAX

#include "BayesFilter.h"     // struct TokenAnalyzer
#include "Rexx.h"            // struct RuleResult
#include "Themes.h"          // struct Theme
#include "Timer.h"           // struct Timers
#include "Threads.h"         // struct Thread

// forward declarations
struct DiskObject;
struct AppIcon;
struct MsgPort;
struct RexxHost;
struct FileReqCache;
struct Locale;
struct Catalog;
struct MA_ClassData;
struct CO_ClassData;
struct AB_ClassData;
struct EA_ClassData;
struct WR_ClassData;
struct TR_ClassData;
struct ER_ClassData;
struct FI_ClassData;
struct FO_ClassData;
struct DI_ClassData;
struct ReadMailData;
struct codeset;
struct codesetList;
struct HashTable;
struct NotifyRequest;

/**************************************************************************/

enum GlobalDispatcherJob
{
  ID_CLOSEALL=1000,
  ID_RESTART,
  ID_ICONIFY,
  ID_LOGIN
};

/*** Global Structure ***/
struct Global
{
  // pointers first
  APTR                     SharedMemPool; // MEMF_SHARED memory pool
  Object *                 App;
  Object *                 WI_SEARCH;
  Object *                 NewMailSound_Obj;
  Object *                 SplashWinObject;
  Object *                 AboutWinObject;
  Object *                 AboutMUIObject;
  Object *                 UpdateNotifyWinObject;
  Object *                 ReadToolbarCacheObject;
  Object *                 WriteToolbarCacheObject;
  Object *                 AbookToolbarCacheObject;
  char *                   ER_Message[MAXERR];
  struct DiskObject *      HideIcon;
  struct AppIcon *         AppIcon;
  struct MsgPort *         AppPort;
  struct RexxHost *        RexxHost;
  struct FileReqCache *    FileReqCache[ASL_MAX];
  struct Locale *          Locale;
  struct Catalog *         Catalog;
  struct MA_ClassData *    MA;
  struct CO_ClassData *    CO;
  struct AB_ClassData *    AB;
  struct EA_ClassData *    EA[MAXEA];
  struct WR_ClassData *    WR[MAXWR+1];
  struct TR_ClassData *    TR;
  struct ER_ClassData *    ER;
  struct FI_ClassData *    FI;
  struct FO_ClassData *    FO;
  struct DI_ClassData *    DI;
  struct US_ClassData *    US;
  struct ReadMailData *    ActiveRexxRMData;
  struct codeset *         localCharset;
  struct codesetList *     codesetsList;
  struct HashTable *       imageCacheHashTable;
  struct NotifyRequest *   WR_NotifyRequest[MAXWR+1];
  struct FolderList *      folders;

  #if defined(__amigaos4__)
  struct MsgPort *         AppLibPort;
  #endif

  LONG                     Weights[12];
  LONG                     TR_Socket;
  LONG                     TR_SMTPflags;

  int                      PGPVersion;
  int                      CO_DST;
  int                      ER_NumErr;
  int                      ActiveWriteWin;
  enum IconImages          currentAppIcon;
  #if defined(__amigaos4__)
  enum IconImages          LastIconID;
  #endif
  time_t                   LastPGPUsage;

  #if defined(__amigaos4__)
  uint32                   applicationID;
  #endif

  BOOL                     Error;
  BOOL                     PGP5;
  BOOL                     AppIconQuiet;
  BOOL                     PGPPassVolatile;
  BOOL                     CO_Valid;
  BOOL                     TR_Debug;
  BOOL                     TR_Allow;
  BOOL                     TR_UseableTLS;
  BOOL                     TR_UseTLS;
  BOOL                     InStartupPhase;
  BOOL                     NoImageWarning;
  BOOL                     NoCatalogTranslation;
  BOOL                     DefIconsAvailable;

  struct DateStamp         StartDate;
  struct Users             Users;
  struct RuleResult        RuleResults;
  struct DownloadResult    LastDL;
  struct sockaddr_in       TR_INetSocketAddr;
  struct MinList           readMailDataList;
  struct MinList           xpkPackerList;
  struct MinList           zombieFileList;
  struct Theme             theme;
  struct TokenAnalyzer     spamFilter;
  struct Timers            timerData;

  // the data for our thread implementation
  struct Thread            mainThread;     // the main thread
  struct MinList           subThreadList;  // list of subthreads

  char                     ProgDir[SIZE_PATH];
  char                     ProgName[SIZE_FILE];
  char                     PGPPassPhrase[SIZE_DEFAULT];
  char                     MA_MailDir[SIZE_PATH];
  char                     AB_Filename[SIZE_PATHFILE];
  char                     CO_PrefsFile[SIZE_PATHFILE];
  char                     WR_Filename[MAXWR+1][SIZE_PATHFILE];
  char                     DI_Filename[SIZE_PATHFILE];
};

extern struct Global *G;

struct xpkPackerNode
{
  struct MinNode node;
  struct XpkPackerInfo info;
};

void PopUp(void);

#endif /* MAIN_YAM_H */


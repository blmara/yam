#ifndef YAM_WRITE_H
#define YAM_WRITE_H

/***************************************************************************

 YAM - Yet Another Mailer
 Copyright (C) 1995-2000 by Marcel Beck <mbeck@yam.ch>
 Copyright (C) 2000-2010 by YAM Open Source Team

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

#include <dos/dos.h>

#include "YAM_main.h"
#include "YAM_stringsizes.h"

// forward declarations
struct AppMessage;
struct codeset;
struct DateStamp;
struct Mail;
struct MailList;
struct ReadMailData;

// enumeration with security levels a mail can
// get so that it will be signed/encrypted and so on.
enum Security
{
  SEC_NONE=0,      // no security
  SEC_SIGN,        // PGP sign the message
  SEC_ENCRYPT,     // PGP encrypt the message
  SEC_BOTH,        // PGP sign&encrypt the message
  SEC_SENDANON,    // send the message anonymously
  SEC_DEFAULTS,    // use the preconfigured defaults
  SEC_MAXDUMMY
};

// WriteMailData structure which carries all necessary information
// during a write mail process. It is used while opening a write
// window, or even during silently creating an email in background
// (for Arexx stuff and so on).
// This structure uses a MinNode for making it possible to place
// all existing WriteMailData structs into the global YAM structure
// in an unlimited list allowing unlimited WriteWindows and such.
struct WriteMailData
{
  struct MinNode  node;                 // required for placing it into struct Global
  Object *        window;               // ptr to the associated window or NULL

  struct Mail *     refMail;            // ptr to the original mail this write operation was created from
  struct MailList * refMailList;        // ptr to a list of orginal mails.
  enum NewMailMode  mode;               // the compose mode this write mail operation
  char *            inReplyToMsgID;     // ptr to "In-Reply-To:" message header to compose the message for
  char *            references;         // ptr to "References:" message header to compose the message for
  struct codeset *  charset;            // the character set being used for this mail

  char filename[SIZE_PATHFILE];         // filename of tmp text file
  struct DateStamp lastFileChangeTime;  // when was this file touched for the last time
  struct NotifyRequest *notifyRequest;  // file notification request
  BOOL fileNotifyActive;                // is the file change notification currently active or not

  BOOL quietMode;                       // quietMode means no opened window, e.g. background processing
  enum Security oldSecurity;
};

struct Attach
{
  int  Size;

  BOOL IsMIME;
  BOOL IsTemp;

  char FilePath[SIZE_PATHFILE];
  char Name[SIZE_FILE];
  char ContentType[SIZE_CTYPE];
  char Description[SIZE_DEFAULT];
};

enum TransformMode
{
  ED_OPEN=0,
  ED_INSERT,
  ED_INSQUOT,
  ED_INSALTQUOT,
  ED_INSROT13,
  ED_PASQUOT,
  ED_PASALTQUOT,
  ED_PASROT13,
  ED_INSUUCODE
};

enum WriteMode
{
  WRITE_HOLD,
  WRITE_SEND,
  WRITE_QUEUE
};

// mail text encoding codes
enum Encoding
{
  ENC_7BIT,    // 7-bit US-ASCII
  ENC_8BIT,    // 8-bit enhanced ASCII
  ENC_QP,      // quoted-printable encoding
  ENC_B64,     // base64 encoding
  ENC_UUE,     // uucode encoding
  ENC_BIN      // binary encoding
};

struct WritePart
{
  struct WritePart *Next;
  const char *      ContentType;
  char *            Filename;
  char *            Description;
  char *            Name;
  struct codeset *  charset; // the character set being used for this part
  BOOL              IsTemp;
  enum Encoding     EncType;
};

struct Compose
{
  FILE *             FH;
  char *             MailTo;
  char *             MailCC;
  char *             MailBCC;
  char *             From;
  char *             ReplyTo;
  char *             RealName;
  const char *       Subject;
  char *             ExtHeader;
  char *             inReplyToMsgID; // ptr to In-Reply-To MsgIDs
  char *             references;     // ptr to References MsgIDs
  struct WritePart * FirstPart;
  struct Mail *      refMail;        // ptr to the original mail we composing a new one from.
  enum NewMailMode   Mode;           // the mode this mail was composed of
  int                Importance;
  int                Signature;
  BOOL               RequestMDN;     // should a MDN be requested
  BOOL               GenerateMDN;    // should a MDN report be generated?
  BOOL               DelSend;
  BOOL               UserInfo;
  enum Security      Security;
  enum Security      OldSecurity;
};

// Soft-style modes for text
enum SoftStyleMode
{
  SSM_NORMAL,
  SSM_BOLD,
  SSM_ITALIC,
  SSM_UNDERLINE,
  SSM_COLOR
};

void  EmitHeader(FILE *fh, const char *hdr, const char *body);
void  FreePartsList(struct WritePart *p);
char *WR_AutoSaveFile(const int winnr, char *dest, const size_t length);
void  WR_NewMail(enum WriteMode mode, int winnum);
BOOL  WriteOutMessage(struct Compose *comp);
void WriteContentTypeAndEncoding(FILE *fh, const struct WritePart *part);
const char *EncodingName(const enum Encoding encoding);
BOOL EncodePart(FILE *ofh, const struct WritePart *part);

struct WriteMailData *CreateWriteWindow(const enum NewMailMode mailMode, const BOOL quietMode);
struct WriteMailData *NewWriteMailWindow(struct Mail *mail, const int flags);
struct WriteMailData *NewBounceMailWindow(struct Mail *mail, const int flags);
struct WriteMailData *NewEditMailWindow(struct Mail *mail, const int flags);
struct WriteMailData *NewForwardMailWindow(struct MailList *mlist, const int flags);
struct WriteMailData *NewReplyMailWindow(struct MailList *mlist, const int flags, const char *replytxt);
BOOL SetWriteMailDataMailRef(const struct Mail *search, const struct Mail *newRef);
struct WriteMailData *AllocWriteMailData(void);
void FreeWriteMailData(struct WriteMailData *wmData);
BOOL CleanupWriteMailData(struct WriteMailData *wmData);
struct WritePart *NewMIMEpart(struct WriteMailData *wmData);
void CheckForAutoSaveFiles(void);

#endif /* YAM_WRITE_H */

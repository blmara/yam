#ifndef MAILLIST_H
#define MAILLIST_H 1

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

#include <exec/lists.h>
#include <exec/nodes.h>
#include <exec/types.h>

#include "YAM_mainFolder.h"

struct MailList
{
  struct MinList list;
  struct SignalSemaphore *lockSemaphore;
  ULONG count;
};

struct MailNode
{
  struct MinNode node;
  struct Mail *mail;
};

struct MailList *CreateMailList(void);
void DeleteMailList(struct MailList *mlist);
struct MailList *CloneMailList(struct MailList *mlist);
struct MailNode *AddMailNode(struct MailList *mlist, struct Mail *mail);
void RemoveMailNode(struct MailList *mlist, struct MailNode *mnode);
void DeleteMailNode(struct MailNode *mnode);
void LockMailList(struct MailList *mlist);
void UnlockMailList(struct MailList *mlist);
void SortMailList(struct MailList *mlist, int (* compare)(const struct Mail *m1, const struct Mail *m2));

// check if a mail list is not empty
#define IsMailListEmpty(mlist)          IsListEmpty((struct List *)(mlist))

// iterate through the list, the list must *NOT* be modified!
#define ForEachMailNode(mlist, mnode)   for(mnode = (struct MailNode *)(mlist)->list.mlh_Head; mnode->node.mln_Succ != NULL; mnode = (struct MailNode *)mnode->node.mln_Succ)

// get the first mail node of a list
#define FirstMailNode(mlist)            (((mlist) != NULL && (mlist)->list.mlh_Head != NULL) ? (struct MailNode *)(mlist)->list.mlh_Head : (struct MailNode *)NULL)

#endif /* MAILLIST_H */


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

#include <ctype.h>

#include "extrasrc.h"

#include "YAM.h"
#include "YAM_main.h"

#include "Rexx.h"

#include "Debug.h"

void rx_mailstatus(UNUSED struct RexxHost *host, void **rxd, enum RexxAction action, UNUSED struct RexxMsg *rexxmsg)
{
  struct rxd_mailstatus *rd = *rxd;

  ENTER();

  switch(action)
  {
    case RXIF_INIT:
    {
      *rxd = AllocVecPooled(G->SharedMemPool, sizeof(*rd));
    }
    break;

    case RXIF_ACTION:
    {
      switch (tolower(rd->arg.status[0]))
      {
        case 'o': MA_SetStatusTo(SFLAG_READ,              SFLAG_NEW, FALSE);                         break;
        case 'u': MA_SetStatusTo(SFLAG_NONE,              SFLAG_NEW|SFLAG_READ, FALSE);              break;
        case 'h': MA_SetStatusTo(SFLAG_HOLD|SFLAG_READ,   SFLAG_QUEUED|SFLAG_ERROR, FALSE);          break;
        case 'w': MA_SetStatusTo(SFLAG_QUEUED|SFLAG_READ, SFLAG_SENT|SFLAG_HOLD|SFLAG_ERROR, FALSE); break;

        default:
          rd->rc = RETURN_WARN;
      }
    }
    break;

    case RXIF_FREE:
    {
      FreeVecPooled(G->SharedMemPool, rd);
    }
    break;
  }

  LEAVE();
}

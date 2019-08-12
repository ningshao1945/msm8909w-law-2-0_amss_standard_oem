#ifndef __DSS_HDRREV0RATEINTERIAHANDLER_H__
#define __DSS_HDRREV0RATEINTERIAHANDLER_H__

/*====================================================

FILE:  DSS_HDRRev0RateInteriaHandler.h

SERVICES:
   Handle network outage events.

=====================================================

Copyright (c) 2008 - 2012 Qualcomm Technologies Incorporated.
All Rights Reserved.
Qualcomm Confidential and Proprietary

=====================================================*/
/*===========================================================================
  EDIT HISTORY FOR MODULE

  Please notice that the changes are listed in reverse chronological order.

  $Header: //commercial/MPSS.JO.2.0.c1.4/Main/modem_proc/datamodem/interface/dss/src/DSS_HDRRev0RateInteriaHandler.h#1 $
  $DateTime: 2016/12/13 08:00:03 $$Author: mplcsds1 $

  when       who what, where, why
  ---------- --- ------------------------------------------------------------
  2010-04-18 en  History added.

===========================================================================*/

#include "DSS_EventHandlerNetApp.h"

class DSSHDRRev0RateInteriaHandler : public DSSEventHandlerNetApp
{
protected:

  virtual void EventOccurred();
  virtual AEEResult RegisterIDL();

public :
  dss_iface_ioctl_event_enum_type registrationSuccess2Event(
    boolean registrationSuccess);
  static DSSHDRRev0RateInteriaHandler* CreateInstance();
  DSSHDRRev0RateInteriaHandler();

};

#endif // __DSS_HDRREV0RATEINTERIAHANDLER_H__

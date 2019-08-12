/*======================================================

FILE:  DSS_HandoffFailureHandler.cpp

GENERAL DESCRIPTION:
   Implementation of DSS_HandoffFailureHandler functions

=====================================================

Copyright (c) 2013 - 2015 Qualcomm Technologies Incorporated.
All Rights Reserved.
Qualcomm Confidential and Proprietary

=====================================================*/
/*===========================================================================
  EDIT HISTORY FOR MODULE

  Please notice that the changes are listed in reverse chronological order.

  $Header: //commercial/MPSS.JO.2.0.c1.4/Main/modem_proc/datamodem/interface/dss/src/DSS_HandoffFailureHandler.cpp#1 $
  $DateTime: 2016/12/13 08:00:03 $
  $Author: mplcsds1 $

  when       who what, where, why
  ---------- --- ------------------------------------------------------------
  2013-02-13 da  Created module.

===========================================================================*/

#include "DSS_HandoffFailureHandler.h"
#include "DSS_Common.h"
#include "DSS_IDSNetworkScope.h"
#include "DSS_IDSNetworkExtScope.h"
#include "ds_Net_INetworkExt.h"

using namespace ds::Net;

DSSHandoffFailureHandler::DSSHandoffFailureHandler()
{
   mEventType = EVENT_HANDLER_HANDOFF_FAILURE;
}

void DSSHandoffFailureHandler::EventOccurred()
{
   DSSIDSNetworkExtScope IDSNetworkExtScope;
   HandoffFailureinfoType handofffailureinfo;

   if ( AEE_SUCCESS != IDSNetworkExtScope.Init(mpParent) ) {
         return;
   }
   AEEResult res = IDSNetworkExtScope.Fetch()->GetHandoffFailureInfo(&handofffailureinfo);
   if(AEE_SUCCESS != res)
   {
      return;
   }
   if (mpHandlerDataClone->mpEventData->bReg) {
      dss_iface_ioctl_event_info_union_type eventInfo;
      memset(&eventInfo, 0, sizeof(dss_iface_ioctl_event_info_union_type));
      eventInfo.handoff_info.srat = (dss_iface_ioctl_handoff_enum_type)handofffailureinfo.srat;
      eventInfo.handoff_info.trat = (dss_iface_ioctl_handoff_enum_type)handofffailureinfo.trat;
      eventInfo.handoff_info.failure_reason = (dss_iface_ioctl_handoff_failure_reason_type)handofffailureinfo.failure_reason;
      DispatchCB(DSS_IFACE_IOCTL_HANDOFF_STATUS_FAILURE_EV, mpHandlerDataClone->mpEventData, &eventInfo);
   }
}

AEEResult DSSHandoffFailureHandler::RegisterIDL()
{
   DSSIDSNetworkScope IDSNetworkScope;
   INetworkExt *piNetworkExt = 0;
   AEEResult res = AEE_SUCCESS;
   DSSWeakRefScope WeakRefScope;
   IQI* pRegObj = NULL;

   if(!WeakRefScope.Init(mpParent)) {
      return AEE_EFAILED;
   }

   IDS_ERR_RET(IDSNetworkScope.Init(mpParent));

   IDS_ERR_RET(IDSNetworkScope.Fetch()->QueryInterface(AEEIID_INetworkExt,
                                                       (void**)&piNetworkExt));

   LOG_MSG_INFO1_1("DSSHandoffFailureHandler::RegisterIDL(): "
                   "Registering to QDS_EV_HANDOFF_FAILURE, NetworkExt obj 0x%p",
                   piNetworkExt);
   res = piNetworkExt->OnStateChange(mpSignal, NetworkExtEvent::QDS_EV_HANDOFF_FAILURE, &pRegObj);
   // regObj mechanism is currently not in effect by dsnet layer. 
   // No need for DSS to hold the allocated object to maintain the event registration. 
   // For design simplicity we release the regObj immediately.
   // If and when dsnet layer enforces the registration object concept this code need to be adapted accordingly.
   DSSCommon::ReleaseIf(&pRegObj);

   DSSCommon::ReleaseIf((IQI**)&piNetworkExt);

   return res;
}

DSSHandoffFailureHandler* DSSHandoffFailureHandler::CreateInstance()
{
   return new DSSHandoffFailureHandler;
}


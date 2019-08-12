#ifndef _POLICYMAN_SGLTE_H_
#define _POLICYMAN_SGLTE_H_

/**
  @file policyman_sglte.h

  @brief  Public interface to policyman's SGLTE policy
*/
/*
    Copyright (c) 2013,2015 QUALCOMM Technologies Incorporated.
    All Rights Reserved.
    Qualcomm Technologies Confidential and Proprietary

  Export of this technology or software is regulated by the U.S. Government.
  Diversion contrary to U.S. law prohibited.

  All ideas, data and information contained in or disclosed by this
  document are confidential and proprietary information of
  QUALCOMM Technologies Incorporated and all rights therein are expressly reserved.
  By accepting this material the recipient agrees that this material
  and the information contained therein are held in confidence and in
  trust and will not be used, copied, reproduced in whole or in part,
  nor its contents revealed in any manner to others without the express
  written permission of QUALCOMM Technologies Incorporated.

  $Header: //commercial/MPSS.JO.2.0.c1.4/Main/modem_proc/mmcp/api/public/policyman_sglte.h#1 $
  $DateTime: 2016/12/13 08:00:05 $
  $Author: mplcsds1 $
*/

#include "policyman.h"
#include "sys.h"


/*-------- policyman_sglte_plmn_is_sglte --------*/
/**
@brief  Determine whether a specific PLMN ID designates a network on which
        SGLTE is possible based on the SGLTE policy.

@param[in]

@return

*/
policyman_status_t policyman_sglte_plmn_is_sglte(
  sys_plmn_id_s_type  *pPlmnId,
  boolean             *pIsSglte
);


/*-------- policyman_sglte_plmn_is_sglte --------*/
/**
@brief  Determine whether SGLTE is allowed or not.

@param[in]

@return

*/
policyman_status_t policyman_is_sglte_allowed(
  boolean             *pIsSglte
);


#endif /* _POLICYMAN_SGLTE_H_ */

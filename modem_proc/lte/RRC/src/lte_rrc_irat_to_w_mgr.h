/*!
  @file
  lte_rrc_irat_to_w_mgr.h

  @brief
  External API for RRC w IRAT Mgr.

*/

/*===========================================================================

  Copyright (c) 2008 Qualcomm Technologies Incorporated. All Rights Reserved

  Qualcomm Proprietary

  Export of this technology or software is regulated by the U.S. Government.
  Diversion contrary to U.S. law prohibited.

  All ideas, data and information contained in or disclosed by
  this document are confidential and proprietary information of
  Qualcomm Technologies Incorporated and all rights therein are expressly reserved.
  By accepting this material the recipient agrees that this material
  and the information contained therein are held in confidence and in
  trust and will not be used, copied, reproduced in whole or in part,
  nor its contents revealed in any manner to others without the express
  written permission of Qualcomm Technologies Incorporated.

===========================================================================*/

/*===========================================================================

                        EDIT HISTORY FOR MODULE

This section contains comments describing changes made to the module.
Notice that changes are listed in reverse chronological order.

$Header: //commercial/MPSS.JO.2.0.c1.4/Main/modem_proc/lte/RRC/src/lte_rrc_irat_to_w_mgr.h#1 $

when       who     what, where, why
--------   ---     ----------------------------------------------------------
04/10/10   np      Helper function IRAT PSHO in progress
04/05/10   np      Initial version
===========================================================================*/

#ifndef LTE_RRC_IRAT_TO_W_H
#define LTE_RRC_IRAT_TO_W_H

/*===========================================================================

                           INCLUDE FILES

===========================================================================*/

/*===========================================================================

                   EXTERNAL DEFINITIONS AND TYPES

===========================================================================*/

/*===========================================================================

                    EXTERNAL FUNCTION PROTOTYPES

===========================================================================*/

/* Allocates and initializes dynamic memory */
extern void lte_rrc_irat_to_w_mgr_init(void);

/* Deallocates dynamic memory */
extern void lte_rrc_irat_to_w_mgr_deinit(void);

/* Check if L2W PSHO is in progress */
extern boolean lte_rrc_irat_to_w_mgr_psho_in_prog(void);

#endif /* LTE_RRC_IRAT_TO_W_H */


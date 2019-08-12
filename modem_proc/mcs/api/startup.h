#ifndef STARTUP_H
#define STARTUP_H

/*!
  @file   startup.h

  @brief  MCS startup header file

  @detail
  Defines startup related types and interfaces.

*/

/*===========================================================================

  Copyright (c) 2013 Qualcomm Technologies Incorporated.
  All Rights Reserved.
  Qualcomm Confidential and Proprietary

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

$Header: //commercial/MPSS.JO.2.0.c1.4/Main/modem_proc/mcs/api/startup.h#1 $

when       who     what, where, why
--------   ---     ----------------------------------------------------------
09/04/13   rj      Initial version

===========================================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*===========================================================================

                           INCLUDE FILES

===========================================================================*/

#include <comdef.h>      /* Definition of basic types and macros */

/*===========================================================================

                    EXTERNAL DEFINES

===========================================================================*/


/*===========================================================================

                    EXTERNAL FUNCTION PROTOTYPES

===========================================================================*/

/* Get ftm mode */
uint32 mcs_get_ftm_mode(void);

#ifdef __cplusplus
}
#endif

#endif /* STARTUP_H */


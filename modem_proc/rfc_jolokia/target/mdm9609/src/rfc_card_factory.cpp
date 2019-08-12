/*!
  @file
  rfc_card_factory.c

  @brief
  This module represents RF configuration file for all supported technologies
  for MDM9x00

*/

/*==============================================================================

Copyright (c) 2010, 2011, 2012, 2013 by Qualcomm Technologies, Incorporated.  All Rights Reserved.

==============================================================================*/

/*==============================================================================

                           EDIT HISTORY FOR FILE

This section contains comments describing changes made to this file.
Notice that changes are listed in reverse chronological order.

$Header: //commercial/MPSS.JO.2.0.c1.4/Main/modem_proc/rfc_jolokia/target/mdm9609/src/rfc_card_factory.cpp#1 $

when       who     what, where, why
--------------------------------------------------------------------------------
06/12/14   dr      Jolokia Linker errors fix
04/23/14   sd      Initial Revision

==============================================================================*/
extern "C" {
#include "comdef.h"
#include "rfcommon_core_error.h"
#include "rfc_card.h"
#include "rfc_vreg_mgr_wtr1605_sv.h"
#include "rfc_configurable_test_card_cmn_data.h"
#include "rfc_configurable_test_vreg_mgr.h"
#include "rfcommon_mdsp.h"
#include "rfcommon_msg.h"
} /* extern "C" */
#include "rfc_class.h"

/*==============================================================================

                               DATA DEFINITIONS

==============================================================================*/
/*==============================================================================

                              FUNCTION DEFINITIONS

==============================================================================*/
/*----------------------------------------------------------------------------*/
/* This funciton must be provided by the auto-gen card factory */
extern
boolean
rfc_factory
(
  rf_hw_type rf_hw,
  rfc_vreg_mgr** vreg_mgr_pp,
  rfc_common_data** rfc_data_pp
);
/*============================================================================*/
/*!
  @name RF Card Specific Initialization

  @brief
  This section contains all initialization functions which are specific to
  this RF Card.
*/

/*----------------------------------------------------------------------------*/
/*!
  @brief
  Set Card

  @details
  This function will set up the internal function pointers to control the
  specified RF HW Card.

  @param rf_hw
  RFC Hardware installed

  return
  Success or failure during set card operation.
*/
boolean rfc_set_card (rf_hw_type rf_hw)
{
  static boolean rfc_initialized = FALSE;
  rfc_intf *temp_p = NULL;
  rfc_vreg_mgr *vreg_mgr_p = NULL;
  rfc_common_data *rfc_data = NULL;
  system_clock_enum sysclk = SYS_CLK_XO;

  /* Check if the Card is set already */
  if(rfc_initialized)
  {
    return rfc_initialized; /* return */
  }
  
  rfc_factory(rf_hw, &vreg_mgr_p, &rfc_data);

  if (vreg_mgr_p == NULL || rfc_data == NULL)
  {
    RF_MSG_1 ( RF_ERROR, "rfc_set_card: Failed to Create rf_card objects (hwid=%d)",
               rf_hw );
    rfc_initialized = FALSE;
  }
  else
  {
    temp_p = new rfc_intf(rf_hw, sysclk);
    if (temp_p)
    {
      rfc_initialized = TRUE;
    }
  }

  return rfc_initialized;
} /* rfc_set_card() */


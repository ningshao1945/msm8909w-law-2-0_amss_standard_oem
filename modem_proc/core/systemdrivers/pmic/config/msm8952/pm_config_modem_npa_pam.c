/*! \file  pm_config_modem_npa_pam.c
 *  
 *  \brief  File Contains the PMIC NPA CMI Code
 *  \details  This file contains the needed definition and enum for PMIC NPA layer.
 *  
 *    PMIC code generation Version: 1.0.0.0
 *    PMIC code generation Locked Version: MSM8952_PM8950_NPA_v1p01_2014_12_29 - LOCKED

 *    This file contains code for Target specific settings and modes.
 *  
 *  &copy; Copyright 2014 Qualcomm Technologies, All Rights Reserved
 */

/*===========================================================================

                EDIT HISTORY FOR MODULE

  This document is created by a code generator, therefore this section will
  not contain comments describing changes made to the module over time.

$Header: //components/rel/core.mpss/3.5.c12.3/systemdrivers/pmic/config/msm8952/pm_config_modem_npa_pam.c#1 $ 
$DateTime: 2016/12/13 07:59:23 $  $Author: mplcsds1 $

when       who     what, where, why
--------   ---     ---------------------------------------------------------- 

===========================================================================*/

/*===========================================================================

                        INCLUDE HEADER FILES

===========================================================================*/

#include "pm_npa_device_clk_buff.h"
#include "pm_npa_device_ldo.h"
#include "pm_npa_device_smps.h"
#include "pm_npa.h"
#include "pm_modem_proc_npa.h"
#include "pm_modem_proc_npa_device.h"
/*===========================================================================

                        VARIABLES DEFINITION

===========================================================================*/

/* ANT1 Client */
pm_npa_ldo_kvps
pm_pam_ant1_a_ldo18 [] =
{
   // Mode: PMIC_NPA_MODE_ID_ANT_MODE_0
   // Comments: PMIC_NPA_MODE_ID_RF_ANT_SLEEP
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_ANT_MODE_1
   // Comments: PMIC_NPA_MODE_ID_RF_ANT_ACTIVE
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 2700000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 20,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 50,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_ANT_MODE_2
   // Comments: PMIC_NPA_MODE_ID_RF_ANT_ACTIVE_LPM_MODE
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 2700000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 1,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 50,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
};

pm_npa_pam_client_cfg_type
pm_pam_ant1_rails_info [] =
{
   {
      (void*)pm_pam_ant1_a_ldo18,
      PM_NPA_VREG_LDO
   },
};
/* PLL_SR2 Client */
pm_npa_ldo_kvps
pm_pam_pll_sr2_a_ldo7 [] =
{
   // Mode: PMIC_NPA_MODE_ID_GENERIC_STANDBY
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_GENERIC_ACTIVE
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 2,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 50,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
};

pm_npa_pam_client_cfg_type
pm_pam_pll_sr2_rails_info [] =
{
   {
      (void*)pm_pam_pll_sr2_a_ldo7,
      PM_NPA_VREG_LDO
   },
};
/* QFPROM Client */
pm_npa_ldo_kvps
pm_pam_qfprom_a_ldo6 [] =
{
   // Mode: PMIC_NPA_MODE_ID_GENERIC_STANDBY
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_GENERIC_ACTIVE
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 10,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 50,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
};

pm_npa_pam_client_cfg_type
pm_pam_qfprom_rails_info [] =
{
   {
      (void*)pm_pam_qfprom_a_ldo6,
      PM_NPA_VREG_LDO
   },
};
/* RAIL_CX Client */
pm_npa_smps_kvps
pm_pam_rail_cx_a_smps2 [] =
{
   // Mode: PMIC_NPA_MODE_ID_CORE_RAIL_OFF
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group. */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority). */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right). */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
   },
   // Mode: PMIC_NPA_MODE_ID_CORE_RAIL_RETENTION
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group. */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority). */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right). */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__1,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
   },
   // Mode: PMIC_NPA_MODE_ID_CORE_RAIL_LOW_MINUS
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group. */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority). */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right). */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
   },
   // Mode: PMIC_NPA_MODE_ID_CORE_RAIL_LOW
   // Comments: AKA SVS
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group. */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority). */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right). */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__3,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
   },
   // Mode: PMIC_NPA_MODE_ID_CORE_RAIL_NOMINAL
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group. */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority). */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right). */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__4,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
   },
   // Mode: PMIC_NPA_MODE_ID_CORE_RAIL_NOMINAL_PLUS
   // Comments: AKA Turbo
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group. */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority). */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right). */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__5,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
   },
   // Mode: PMIC_NPA_MODE_ID_CORE_RAIL_TURBO
   // Comments: AKA Super Turbo
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_SMPS_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_SMPS__AUTO,  /**< [AUTO (default), IPEAK, NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_FREQUENCY, 4, PM_SWITCHING_FREQ_FREQ_NONE,  /**< [xx MHz] -> max within a priority group. */
      PM_NPA_KEY_FREQUENCY_REASON, 4, PM_NPA_FREQ_REASON_NONE,  /**< Freq4 BT -> Freq4 GPS -> Freq4 WLAN -> Freq 4 WAN (lowest to highest priority). */
      PM_NPA_KEY_FOLLOW_QUIET_MODE, 4, PM_NPA_QUIET_MODE__DISABLE,  /**< [None, Quiet, Super Quiet] -> max aggregation (left to right). */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__6,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
   },
};

pm_npa_pam_client_cfg_type
pm_pam_rail_cx_rails_info [] =
{
   {
      (void*)pm_pam_rail_cx_a_smps2,
      PM_NPA_VREG_SMPS
   },
};
/* RAIL_MX Client */
pm_npa_ldo_kvps
pm_pam_rail_mx_a_ldo3 [] =
{
   // Mode: PMIC_NPA_MODE_ID_CORE_RAIL_OFF
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_CORE_RAIL_RETENTION
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 50,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__1,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_CORE_RAIL_LOW_MINUS
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_CORE_RAIL_LOW
   // Comments: AKA SVS
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 50,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__3,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_CORE_RAIL_NOMINAL
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 50,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__4,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_CORE_RAIL_NOMINAL_PLUS
   // Comments: AKA Turbo
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 50,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__5,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_CORE_RAIL_TURBO
   // Comments: AKA Super Turbo
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 50,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__6,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
};

pm_npa_pam_client_cfg_type
pm_pam_rail_mx_rails_info [] =
{
   {
      (void*)pm_pam_rail_mx_a_ldo3,
      PM_NPA_VREG_LDO
   },
};
/* RF1_TECH_1X Client */
pm_npa_clk_buff_kvps
pm_pam_rf1_tech_1x_a_clk_buff2 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
};
pm_npa_clk_buff_kvps
pm_pam_rf1_tech_1x_a_clk_buff3 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
};
pm_npa_clk_buff_kvps
pm_pam_rf1_tech_1x_a_clk_buff4 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
};
pm_npa_clk_buff_kvps
pm_pam_rf1_tech_1x_a_clk_buff5 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
};
pm_npa_ldo_kvps
pm_pam_rf1_tech_1x_a_ldo1 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 1720,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 1720,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 1720,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 1720,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
};
pm_npa_ldo_kvps
pm_pam_rf1_tech_1x_a_ldo4 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
};
pm_npa_ldo_kvps
pm_pam_rf1_tech_1x_a_ldo18 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 2700000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 2700000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 2700000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 2700000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
};
pm_npa_ldo_kvps
pm_pam_rf1_tech_1x_a_ldo19 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1225000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1225000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1225000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1225000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
};

pm_npa_pam_client_cfg_type
pm_pam_rf1_tech_1x_rails_info [] =
{
   {
      (void*)pm_pam_rf1_tech_1x_a_clk_buff2,
      PM_NPA_CLK_BUFF
   },
   {
      (void*)pm_pam_rf1_tech_1x_a_clk_buff3,
      PM_NPA_CLK_BUFF
   },
   {
      (void*)pm_pam_rf1_tech_1x_a_clk_buff4,
      PM_NPA_CLK_BUFF
   },
   {
      (void*)pm_pam_rf1_tech_1x_a_clk_buff5,
      PM_NPA_CLK_BUFF
   },
   {
      (void*)pm_pam_rf1_tech_1x_a_ldo1,
      PM_NPA_VREG_LDO
   },
   {
      (void*)pm_pam_rf1_tech_1x_a_ldo4,
      PM_NPA_VREG_LDO
   },
   {
      (void*)pm_pam_rf1_tech_1x_a_ldo18,
      PM_NPA_VREG_LDO
   },
   {
      (void*)pm_pam_rf1_tech_1x_a_ldo19,
      PM_NPA_VREG_LDO
   },
};
/* RF1_TECH_GPS Client */
pm_npa_clk_buff_kvps
pm_pam_rf1_tech_gps_a_clk_buff2 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_5
   // Comments: RF_Mode5: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_6
   // Comments: RF_Mode6: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_7
   // Comments: RF_Mode7: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_8
   // Comments: RF_Mode8: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
};
pm_npa_clk_buff_kvps
pm_pam_rf1_tech_gps_a_clk_buff3 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_5
   // Comments: RF_Mode5: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_6
   // Comments: RF_Mode6: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_7
   // Comments: RF_Mode7: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_8
   // Comments: RF_Mode8: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
};
pm_npa_clk_buff_kvps
pm_pam_rf1_tech_gps_a_clk_buff4 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_5
   // Comments: RF_Mode5: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_6
   // Comments: RF_Mode6: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_7
   // Comments: RF_Mode7: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_8
   // Comments: RF_Mode8: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
};
pm_npa_clk_buff_kvps
pm_pam_rf1_tech_gps_a_clk_buff5 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_5
   // Comments: RF_Mode5: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_6
   // Comments: RF_Mode6: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_7
   // Comments: RF_Mode7: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_8
   // Comments: RF_Mode8: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
};
pm_npa_ldo_kvps
pm_pam_rf1_tech_gps_a_ldo1 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 1720,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 1720,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 1720,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 1720,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_5
   // Comments: RF_Mode5: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 1720,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_6
   // Comments: RF_Mode6: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 1720,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_7
   // Comments: RF_Mode7: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 1720,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_8
   // Comments: RF_Mode8: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 1720,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
};
pm_npa_ldo_kvps
pm_pam_rf1_tech_gps_a_ldo4 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_5
   // Comments: RF_Mode5: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_6
   // Comments: RF_Mode6: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_7
   // Comments: RF_Mode7: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_8
   // Comments: RF_Mode8: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
};
pm_npa_ldo_kvps
pm_pam_rf1_tech_gps_a_ldo19 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1225000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1225000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1225000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1225000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_5
   // Comments: RF_Mode5: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1225000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_6
   // Comments: RF_Mode6: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1225000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_7
   // Comments: RF_Mode7: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1225000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_8
   // Comments: RF_Mode8: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1225000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
};

pm_npa_pam_client_cfg_type
pm_pam_rf1_tech_gps_rails_info [] =
{
   {
      (void*)pm_pam_rf1_tech_gps_a_clk_buff2,
      PM_NPA_CLK_BUFF
   },
   {
      (void*)pm_pam_rf1_tech_gps_a_clk_buff3,
      PM_NPA_CLK_BUFF
   },
   {
      (void*)pm_pam_rf1_tech_gps_a_clk_buff4,
      PM_NPA_CLK_BUFF
   },
   {
      (void*)pm_pam_rf1_tech_gps_a_clk_buff5,
      PM_NPA_CLK_BUFF
   },
   {
      (void*)pm_pam_rf1_tech_gps_a_ldo1,
      PM_NPA_VREG_LDO
   },
   {
      (void*)pm_pam_rf1_tech_gps_a_ldo4,
      PM_NPA_VREG_LDO
   },
   {
      (void*)pm_pam_rf1_tech_gps_a_ldo19,
      PM_NPA_VREG_LDO
   },
};
/* RF1_TECH_GPS_ELNA Client */
pm_npa_clk_buff_kvps
pm_pam_rf1_tech_gps_elna_a_clk_buff2 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_5
   // Comments: RF_Mode5: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_6
   // Comments: RF_Mode6: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_7
   // Comments: RF_Mode7: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_8
   // Comments: RF_Mode8: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
};
pm_npa_clk_buff_kvps
pm_pam_rf1_tech_gps_elna_a_clk_buff3 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_5
   // Comments: RF_Mode5: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_6
   // Comments: RF_Mode6: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_7
   // Comments: RF_Mode7: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_8
   // Comments: RF_Mode8: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
};
pm_npa_clk_buff_kvps
pm_pam_rf1_tech_gps_elna_a_clk_buff4 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_5
   // Comments: RF_Mode5: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_6
   // Comments: RF_Mode6: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_7
   // Comments: RF_Mode7: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_8
   // Comments: RF_Mode8: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
};
pm_npa_clk_buff_kvps
pm_pam_rf1_tech_gps_elna_a_clk_buff5 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_5
   // Comments: RF_Mode5: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_6
   // Comments: RF_Mode6: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_7
   // Comments: RF_Mode7: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_8
   // Comments: RF_Mode8: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
};
pm_npa_ldo_kvps
pm_pam_rf1_tech_gps_elna_a_ldo1 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 1720,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 1720,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 1720,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 1720,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_5
   // Comments: RF_Mode5: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 1720,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_6
   // Comments: RF_Mode6: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 1720,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_7
   // Comments: RF_Mode7: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 1720,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_8
   // Comments: RF_Mode8: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 1720,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
};
pm_npa_ldo_kvps
pm_pam_rf1_tech_gps_elna_a_ldo4 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_5
   // Comments: RF_Mode5: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_6
   // Comments: RF_Mode6: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_7
   // Comments: RF_Mode7: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_8
   // Comments: RF_Mode8: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
};
pm_npa_ldo_kvps
pm_pam_rf1_tech_gps_elna_a_ldo19 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1225000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1225000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1225000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1225000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_5
   // Comments: RF_Mode5: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1225000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_6
   // Comments: RF_Mode6: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1225000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_7
   // Comments: RF_Mode7: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1225000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_8
   // Comments: RF_Mode8: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: On
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1225000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
};

pm_npa_pam_client_cfg_type
pm_pam_rf1_tech_gps_elna_rails_info [] =
{
   {
      (void*)pm_pam_rf1_tech_gps_elna_a_clk_buff2,
      PM_NPA_CLK_BUFF
   },
   {
      (void*)pm_pam_rf1_tech_gps_elna_a_clk_buff3,
      PM_NPA_CLK_BUFF
   },
   {
      (void*)pm_pam_rf1_tech_gps_elna_a_clk_buff4,
      PM_NPA_CLK_BUFF
   },
   {
      (void*)pm_pam_rf1_tech_gps_elna_a_clk_buff5,
      PM_NPA_CLK_BUFF
   },
   {
      (void*)pm_pam_rf1_tech_gps_elna_a_ldo1,
      PM_NPA_VREG_LDO
   },
   {
      (void*)pm_pam_rf1_tech_gps_elna_a_ldo4,
      PM_NPA_VREG_LDO
   },
   {
      (void*)pm_pam_rf1_tech_gps_elna_a_ldo19,
      PM_NPA_VREG_LDO
   },
};
/* RF1_TECH_LTE Client */
pm_npa_clk_buff_kvps
pm_pam_rf1_tech_lte_a_clk_buff2 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
};
pm_npa_clk_buff_kvps
pm_pam_rf1_tech_lte_a_clk_buff3 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
};
pm_npa_clk_buff_kvps
pm_pam_rf1_tech_lte_a_clk_buff4 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
};
pm_npa_clk_buff_kvps
pm_pam_rf1_tech_lte_a_clk_buff5 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_CLK_BUFFER_ENABLE_KEY, 4, PM_NPA_CLK_BUFFER_PIN_CONTROL_ENABLE__NONE,  /**< [None (default), Enable ( EN1). */
   },
};
pm_npa_ldo_kvps
pm_pam_rf1_tech_lte_a_ldo1 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 1720,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 1720,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 1720,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1050000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 1720,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
};
pm_npa_ldo_kvps
pm_pam_rf1_tech_lte_a_ldo4 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 25,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
};
pm_npa_ldo_kvps
pm_pam_rf1_tech_lte_a_ldo18 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 2700000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 2700000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 2700000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 2700000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
};
pm_npa_ldo_kvps
pm_pam_rf1_tech_lte_a_ldo19 [] =
{
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_0
   // Comments: RF_Mode0: RF_SLEEP - All Clocks & Regulators Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_ALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_1
   // Comments: RF_Mode1: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1225000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_2
   // Comments: RF_Mode2: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: Off; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1225000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_3
   // Comments: RF_Mode3: RF_CLK1: On; LN_BBCLK: On; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1225000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
   // Mode: PMIC_NPA_MODE_ID_RF_MODE_4
   // Comments: RF_Mode4: RF_CLK1: On; LN_BBCLK: Off; RF_CLK2: On; BB_CLK2: Off
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__NPM,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1225000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
      PM_NPA_KEY_CORNER_LEVEL_KEY, 4, PM_NPA_CORNER_MODE__NONE,  /**< [None, Level1 (Retention), Level2, Level3, Level4, Level5, Level6 (SuperTurbo), Not Used] */
   },
};

pm_npa_pam_client_cfg_type
pm_pam_rf1_tech_lte_rails_info [] =
{
   {
      (void*)pm_pam_rf1_tech_lte_a_clk_buff2,
      PM_NPA_CLK_BUFF
   },
   {
      (void*)pm_pam_rf1_tech_lte_a_clk_buff3,
      PM_NPA_CLK_BUFF
   },
   {
      (void*)pm_pam_rf1_tech_lte_a_clk_buff4,
      PM_NPA_CLK_BUFF
   },
   {
      (void*)pm_pam_rf1_tech_lte_a_clk_buff5,
      PM_NPA_CLK_BUFF
   },
   {
      (void*)pm_pam_rf1_tech_lte_a_ldo1,
      PM_NPA_VREG_LDO
   },
   {
      (void*)pm_pam_rf1_tech_lte_a_ldo4,
      PM_NPA_VREG_LDO
   },
   {
      (void*)pm_pam_rf1_tech_lte_a_ldo18,
      PM_NPA_VREG_LDO
   },
   {
      (void*)pm_pam_rf1_tech_lte_a_ldo19,
      PM_NPA_VREG_LDO
   },
};
/* UIM1_ACTIVITY Client */
pm_npa_ldo_kvps
pm_pam_uim1_activity_a_ldo14 [] =
{
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_1
   // Comments: PMIC_NPA_MODE_ID_UIM_STANDBY
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 1,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_2
   // Comments: PMIC_NPA_MODE_ID_UIM_ACTIVE
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 50,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_3
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_4
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_5
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_6
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_7
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_8
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_9
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_10
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_11
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_12
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_13
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
};

pm_npa_pam_client_cfg_type
pm_pam_uim1_activity_rails_info [] =
{
   {
      (void*)pm_pam_uim1_activity_a_ldo14,
      PM_NPA_VREG_LDO
   },
};
/* UIM1_ENABLE Client */
pm_npa_ldo_kvps
pm_pam_uim1_enable_a_ldo14 [] =
{
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_1
   // Comments: PMIC_NPA_MODE_ID_UIM_NO_VOTE
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_2
   // Comments: PMIC_NPA_MODE_ID_UIM_CLASS_C_LOW
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1700000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 50,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_3
   // Comments: PMIC_NPA_MODE_ID_UIM_CLASS_C
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 50,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_4
   // Comments: PMIC_NPA_MODE_ID_UIM_CLASS_C_HIGH
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1900000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 50,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_5
   // Comments: PMIC_NPA_MODE_ID_UIM_CLASS_B_LOW
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 2850000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 50,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_6
   // Comments: PMIC_NPA_MODE_ID_UIM_CLASS_B
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 3000000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 50,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_7
   // Comments: PMIC_NPA_MODE_ID_UIM_CLASS_B_HIGH
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 3050000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 50,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_8
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_9
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_10
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_11
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_12
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_13
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
};

pm_npa_pam_client_cfg_type
pm_pam_uim1_enable_rails_info [] =
{
   {
      (void*)pm_pam_uim1_enable_a_ldo14,
      PM_NPA_VREG_LDO
   },
};
/* UIM2_ACTIVITY Client */
pm_npa_ldo_kvps
pm_pam_uim2_activity_a_ldo15 [] =
{
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_1
   // Comments: PMIC_NPA_MODE_ID_UIM_STANDBY
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 1,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_2
   // Comments: PMIC_NPA_MODE_ID_UIM_ACTIVE
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 50,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_3
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_4
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_5
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_6
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_7
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_8
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_9
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_10
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_11
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_12
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_13
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
};

pm_npa_pam_client_cfg_type
pm_pam_uim2_activity_rails_info [] =
{
   {
      (void*)pm_pam_uim2_activity_a_ldo15,
      PM_NPA_VREG_LDO
   },
};
/* UIM2_ENABLE Client */
pm_npa_ldo_kvps
pm_pam_uim2_enable_a_ldo15 [] =
{
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_1
   // Comments: PMIC_NPA_MODE_ID_UIM_NO_VOTE
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_2
   // Comments: PMIC_NPA_MODE_ID_UIM_CLASS_C_LOW
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1700000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 50,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_3
   // Comments: PMIC_NPA_MODE_ID_UIM_CLASS_C
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1800000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 50,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_4
   // Comments: PMIC_NPA_MODE_ID_UIM_CLASS_C_HIGH
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 1900000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 50,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_5
   // Comments: PMIC_NPA_MODE_ID_UIM_CLASS_B_LOW
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 2850000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 50,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_6
   // Comments: PMIC_NPA_MODE_ID_UIM_CLASS_B
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 3000000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 50,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_7
   // Comments: PMIC_NPA_MODE_ID_UIM_CLASS_B_HIGH
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_ENABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 3050000,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 50,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_8
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_9
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_10
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_11
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_12
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
   // Mode: PMIC_NPA_MODE_ID_UIM_MODE_13
   {
      PM_NPA_KEY_SOFTWARE_ENABLE, 4, PM_NPA_GENERIC_DISABLE,  /**< [Disable (default), Enable] -> max aggregation (left to right). */
      PM_NPA_KEY_LDO_SOFTWARE_MODE, 4, PM_NPA_SW_MODE_LDO__IPEAK,  /**< [BYPASS, IPEAK (default), NPM] -> max aggregation (left to right). */
      PM_NPA_KEY_PIN_CTRL_ENABLE, 4, PM_NPA_PIN_CONTROL_ENABLE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4] -> ORed value of list. */
      PM_NPA_KEY_PIN_CTRL_POWER_MODE, 4, PM_NPA_PIN_CONTROL_POWER_MODE__NONE,  /**< [NONE, EN1, EN2, EN3, EN4, SLEEPB] -> ORed value of list. */
      PM_NPA_KEY_MICRO_VOLT, 4, 0,  /**< [X uV] -> max aggregation. */
      PM_NPA_KEY_CURRENT, 4, 0,  /**< [X mA] -> summed aggregation. */
      PM_NPA_KEY_HEAD_ROOM, 4, 0,  /**< [X uV] -> voltage headroom needed. */
      PM_NPA_KEY_BYPASS_ALLOWED_KEY, 4, PM_NPA_BYPASS_DISALLOWED,  /**< [Allowed (default), Disallowed] */
   },
};

pm_npa_pam_client_cfg_type
pm_pam_uim2_enable_rails_info [] =
{
   {
      (void*)pm_pam_uim2_enable_a_ldo15,
      PM_NPA_VREG_LDO
   },
};

/*!
  @file
  rf_cdma_nv_bc10.c

  @details
  This file contains the definitions and declartions used by RF CDMA NV Manager
  for Bandclass 10. 
   
  @addtogroup RF_CDMA_COMMON_NV
  @{  
*/

/*==============================================================================

  Copyright (c) 2011 - 2014 Qualcomm Technologies Incorporated. All Rights Reserved

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

==============================================================================*/

/*==============================================================================

                           EDIT HISTORY FOR FILE

  This section contains comments describing changes made to this file.
  Notice that changes are listed in reverse chronological order.

  $Header: //commercial/MPSS.JO.2.0.c1.4/Main/modem_proc/rftech_cdma/common/rf/src/rf_cdma_nv_bc10.c#1 $

when       who     what, where, why
--------   ---     ------------------------------------------------------------- 
01/16/15   vr     CDMA predictive clipping NV based power thresh support
04/29/14   cd      Add NV definitions for 8 PA state loading
01/24/14   zhw     Pin Cal vs Freq support
01/23/14   zhw     Add RFNV_CDMA/HDR_C3_1X_SPUR_TABLE_I to static table 
08/12/13   Saul    XPT. DPD Scaling.
07/19/13   Saul    XPT. ET delay vs freq vs temp support.
07/03/13   zhw     Antenna Tuner CL control data NV support
06/19/13   APU     Added new NV for ET delay. 
06/10/13   JJ      Remove legacy NVs
03/11/13   cd      Add support for loading new lin vs temp vs freq Pin and 
                   Pout NV items
02/22/13   Saul    Tx ET Path Delay NV support.
08/24/12   cd      CDMA EPT Temp and HDET feature support
07/10/12   Saul    MultiLin. Added V2 and V3 NV-loading support to CDMA.
07/09/12   cri     Added remaining support for loading EPT config param from NV 
06/25/12   cri     Added support for loading multi-lin 2 for CDMA
06/14/12   cd      Removed old NV table and old NV loading functionality
06/06/12   cd      - Remove legacy unused NV tables
                   - Remove functionality to load unused NV items
                   - Dynamically allocate NV data structures only for bands 
                     that are supported via BC Config NV item
05/14/12   cd      Move lim vs temp SAR NV items to static table
03/22/12   id      Added support for converting Tx freq to chan
03/08/12   cd      Added Tx GTR Threshold NV item
02/15/12   sar     Removed RF_HAS_HDR_P2_P3_DYNAMIC_PA_SWITCH_POINT_ADJUST.
02/13/12   sar     Feature reduction changes.
02/08/12   sty     Added NVs for spurs
02/08/12   cd      Added Chain 2 LPM HDET NV 
02/03/12   cd      Added LPM HDET NV item ID  
01/27/12   APU     Added new NV items for HDR PWR LIMITS.
01/25/12   sty     revert previous change since rfnv_items.h has not been changed
01/25/12   sty     Added RFNV_1X_Cx_SPURS_TABLE_I and RFNV_HDR_Cx_SPURS_TABLE_I 
                   for rf_cdma_nv_bc10_static_items_map
12/19/11   aro     Support to load C2 and C3 HDR Rx/Tx Switchpoint NV
12/12/11   bmg     Added CDMA SV chain 2 DSI SAR limit NVs
12/02/11   cd      Load legacy swpts as default for SV chain 
12/02/11   cd      Load Tx MultiLin APT Adjust static NV data  
12/01/11   cd      Load new Tx switchpoint NV for 1x and HDR 
10/24/11   adk     Added RF NV items for RF_PATH_3 (DRX for the second RTR)
10/19/11   cd      Add lin_vs_temp NV items
10/12/11   bmg     Added lim vs temp and SAR lim vs temp NV items
09/20/11   cd      Initial Release.

==============================================================================*/

#include "rfa_variation.h"
#include "comdef.h"
#include "rf_cdma_nv.h"
#include "rf_cdma_nv_bc10.h"
#include "rf_cdma_lna.h"
#include "rfcommon_core_error.h"
#include "rfcommon_msg.h"
#include "rf_cdma_utils_freq.h"

/*----------------------------------------------------------------------------*/
/*! RF Calibration NV Item Mapping for Band Class 10 */
static rf_cdma_cal_nv_items_map_type 
rf_cdma_nv_bc10_cal_items_map[RF_CDMA_NV_PATH_NUM] =
{
  /* RF_PATH_0 Calibration NV items */
  {
    /* rx_cal_chan_list */
    RFNV_C0_BC10_RX_CAL_CHAN_I,
    /* rx_cal_chan_lru_list */
    RFNV_C0_BC10_RX_CAL_CHAN_LRU_I,
    /* dvga */
    RFNV_C0_BC10_VGA_GAIN_OFFSET_I,
    /* dvga_vs_freq */
    RFNV_C0_BC10_VGA_GAIN_OFFSET_VS_FREQ_I,
    /* lna_1 */
    RFNV_C0_BC10_LNA_1_OFFSET_I,
    /* lna_1_vs_freq */
    RFNV_C0_BC10_LNA_1_OFFSET_VS_FREQ_I,
    /* lna_2 */
    RFNV_C0_BC10_LNA_2_OFFSET_I,
    /* lna_2_vs_freq */
    RFNV_C0_BC10_LNA_2_OFFSET_VS_FREQ_I,
    /* lna_3 */
    RFNV_C0_BC10_LNA_3_OFFSET_I,
    /* lna_3_vs_freq */
    RFNV_C0_BC10_LNA_3_OFFSET_VS_FREQ_I,
    /* lna_4 */
    RFNV_C0_BC10_LNA_4_OFFSET_I,
    /* lna_4_vs_freq */
    RFNV_C0_BC10_LNA_4_OFFSET_VS_FREQ_I,
    /* im2_i */
    RFNV_C0_BC10_IM2_I_VALUE_I,
    /* im2_q */
    RFNV_C0_BC10_IM2_Q_VALUE_I,
    /* im2_gm */
    RFNV_C0_BC10_IM2_TRANSCONDUCTOR_VALUE_I,
    /* im2_lpm1 */
    RFNV_C0_BC10_IM2_LPM_1_I,
    /* im2_lpm2 */
    RFNV_C0_BC10_IM2_LPM_2_I,
    /* intelliceiver_cal */
    RFNV_C0_BC10_INTELLICEIVER_CAL_I,
    /* tx_cal_chan_list */
    RFNV_C0_BC10_TX_CAL_CHAN_I,
    /* multi_lin */
    RFNV_CDMA_C0_BC10_TX_MULTI_LIN_DATA_I,
    /* multi_lin V2 */
    RFNV_CDMA_C0_BC10_TX_MULTI_LIN_V2_DATA_I,
    /* multi_lin V3 */
    RFNV_CDMA_C0_BC10_TX_MULTI_LIN_V3_DATA_I,
    /* lim_vs_freq */
    RFNV_BC10_TX_LIM_VS_FREQ_I,
    /* hpm_exp_hdet_vs_agc */
    RFNV_BC10_EXP_HDET_VS_AGC_V2_I,
    /* hpm_hdet_off */
    RFNV_BC10_HDET_OFF_V2_I,
    /* hpm_hdet_spn */
    RFNV_BC10_HDET_SPN_V2_I,
    /* lpm_hdet */
    RFNV_CDMA_C0_BC10_TX_EXP_LPM_HDET_I,
    /* hdet_vs_freq */
    RFNV_CDMA_C0_BC10_TX_HDET_VS_FREQ_I,
    /* et_path_delay */
    RFNV_CDMA_C0_BC10_TX_ET_DELAY_I,
    /* et_path_delay with freq compensation */
    RFNV_CDMA_C0_BC10_TX_ET_DELAY_VS_FREQ_I,
    /* et_path_delay_offsets_vs_freq_vs_temp */
    RFNV_CDMA_C0_BC10_TX_ET_DELAY_OFFSETS_VS_FREQ_VS_TEMP_I,
    /* xpt_dpd_scaling */
    RFNV_CDMA_C0_BC10_TX_XPT_DPD_SCALING_I,
    /* pin_cal_vs_freq */
    RFNV_CDMA_C0_BC10_PIN_CAL_VS_FREQ_I,
    /* Rx calibrated channel list with LNA vs Freqs. */
    RFNV_CDMA_BC10_RX_CAL_DATA_I
  },

  /* RF_PATH_1 Calibration NV items */
  {
    /* rx_cal_chan_list */
    RFNV_C1_BC10_RX_CAL_CHAN_I,
    /* rx_cal_chan_lru_list */
    RFNV_C1_BC10_RX_CAL_CHAN_LRU_I,
    /* dvga */
    RFNV_C1_BC10_VGA_GAIN_OFFSET_I,
    /* dvga_vs_freq */
    RFNV_C1_BC10_VGA_GAIN_OFFSET_VS_FREQ_I,
    /* lna_1 */
    RFNV_C1_BC10_LNA_1_OFFSET_I,
    /* lna_1_vs_freq */
    RFNV_C1_BC10_LNA_1_OFFSET_VS_FREQ_I,
    /* lna_2 */
    RFNV_C1_BC10_LNA_2_OFFSET_I,
    /* lna_2_vs_freq */
    RFNV_C1_BC10_LNA_2_OFFSET_VS_FREQ_I,
    /* lna_3 */
    RFNV_C1_BC10_LNA_3_OFFSET_I,
    /* lna_3_vs_freq */
    RFNV_C1_BC10_LNA_3_OFFSET_VS_FREQ_I,
    /* lna_4 */
    RFNV_C1_BC10_LNA_4_OFFSET_I,
    /* lna_4_vs_freq */
    RFNV_C1_BC10_LNA_4_OFFSET_VS_FREQ_I,
    /* im2_i */
    RFNV_C1_BC10_IM2_I_VALUE_I,
    /* im2_q */
    RFNV_C1_BC10_IM2_Q_VALUE_I,
    /* im2_gm */
    RFNV_C1_BC10_IM2_TRANSCONDUCTOR_VALUE_I,
    /* im2_lpm1 */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* im2_lpm2 */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* intelliceiver_cal */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* tx_cal_chan_list */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* multi_lin */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* multi_lin V2 */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* multi_lin V3 */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* lim_vs_freq */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* hpm_exp_hdet_vs_agc */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* hpm_hdet_off */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* hpm_hdet_spn */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* lpm_hdet */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* hdet_vs_freq */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* et_path_delay */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* et_path_delay with freq compensation */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* et_path_delay_offsets_vs_freq_vs_temp */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* xpt_dpd_scaling */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* pin_cal_vs_freq */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* Rx calibrated channel list with LNA vs Freqs. */
    RFNV_CDMA_BC10_RX_CAL_DATA_I
  },

  /* RF_PATH_2 Calibration NV items */
  {
    /* rx_cal_chan_list */
    RFNV_C2_BC10_RX_CAL_CHAN_I,
    /* rx_cal_chan_lru_list */
    RFNV_C2_BC10_RX_CAL_CHAN_LRU_I,
    /* dvga */
    RFNV_C2_BC10_VGA_GAIN_OFFSET_I,
    /* dvga_vs_freq */
    RFNV_C2_BC10_VGA_GAIN_OFFSET_VS_FREQ_I,
    /* lna_1 */
    RFNV_C2_BC10_LNA_1_OFFSET_I,
    /* lna_1_vs_freq */
    RFNV_C2_BC10_LNA_1_OFFSET_VS_FREQ_I,
    /* lna_2 */
    RFNV_C2_BC10_LNA_2_OFFSET_I,
    /* lna_2_vs_freq */
    RFNV_C2_BC10_LNA_2_OFFSET_VS_FREQ_I,
    /* lna_3 */
    RFNV_C2_BC10_LNA_3_OFFSET_I,
    /* lna_3_vs_freq */
    RFNV_C2_BC10_LNA_3_OFFSET_VS_FREQ_I,
    /* lna_4 */
    RFNV_C2_BC10_LNA_4_OFFSET_I,
    /* lna_4_vs_freq */
    RFNV_C2_BC10_LNA_4_OFFSET_VS_FREQ_I,
    /* im2_i */
    RFNV_C2_BC10_IM2_I_VALUE_I,
    /* im2_q */
    RFNV_C2_BC10_IM2_Q_VALUE_I,
    /* im2_gm */
    RFNV_C2_BC10_IM2_TRANSCONDUCTOR_VALUE_I,
    /* im2_lpm1 */
    RFNV_C2_BC10_IM2_LPM_1_I,
    /* im2_lpm2 */
    RFNV_C2_BC10_IM2_LPM_2_I,
    /* intelliceiver_cal */
    RFNV_C2_BC10_INTELLICEIVER_CAL_I,
    /* tx_cal_chan_list */
    RFNV_C2_BC10_TX_CAL_CHAN_I,
    /* multi_lin */
    RFNV_CDMA_C2_BC10_TX_MULTI_LIN_DATA_I,
    /* multi_lin V2 */
    RFNV_CDMA_C2_BC10_TX_MULTI_LIN_V2_DATA_I,
    /* multi_lin V3 */
    RFNV_CDMA_C2_BC10_TX_MULTI_LIN_V3_DATA_I,
    /* lim_vs_freq */
    RFNV_CDMA_C2_BC10_TX_LIM_VS_FREQ_I,
    /* hpm_exp_hdet_vs_agc */
    RFNV_CDMA_C2_BC10_EXP_HDET_VS_AGC_V2_I,
    /* hpm_hdet_off */
    RFNV_CDMA_C2_BC10_HDET_OFF_V2_I,
    /* hpm_hdet_spn */
    RFNV_CDMA_C2_BC10_HDET_SPN_V2_I,
    /* lpm_hdet */
    RFNV_CDMA_C2_BC10_TX_EXP_LPM_HDET_I,
    /* hdet_vs_freq */
    RFNV_CDMA_C2_BC10_TX_HDET_VS_FREQ_I,
    /* et_path_delay */
    RFNV_CDMA_C2_BC10_TX_ET_DELAY_I,
    /* et_path_delay with freq compensation */
    RFNV_CDMA_C2_BC10_TX_ET_DELAY_VS_FREQ_I,
    /* et_path_delay_offsets_vs_freq_vs_temp */
    RFNV_CDMA_C2_BC10_TX_ET_DELAY_OFFSETS_VS_FREQ_VS_TEMP_I,
    /* xpt_dpd_scaling */
    RFNV_CDMA_C2_BC10_TX_XPT_DPD_SCALING_I,
    /* pin_cal_vs_freq */
    RFNV_CDMA_C2_BC10_PIN_CAL_VS_FREQ_I,
    /* Rx calibrated channel list with LNA vs Freqs. */
    RFNV_CDMA_BC10_RX_CAL_DATA_I
  },

  /* RF_PATH_3 Calibration NV items */
  {
    /* rx_cal_chan_list */
    RFNV_C3_BC10_RX_CAL_CHAN_I,
    /* rx_cal_chan_lru_list */
    RFNV_C3_BC10_RX_CAL_CHAN_LRU_I,
    /* dvga */
    RFNV_C3_BC10_VGA_GAIN_OFFSET_I,
    /* dvga_vs_freq */
    RFNV_C3_BC10_VGA_GAIN_OFFSET_VS_FREQ_I,
    /* lna_1 */
    RFNV_C3_BC10_LNA_1_OFFSET_I,
    /* lna_1_vs_freq */
    RFNV_C3_BC10_LNA_1_OFFSET_VS_FREQ_I,
    /* lna_2 */
    RFNV_C3_BC10_LNA_2_OFFSET_I,
    /* lna_2_vs_freq */
    RFNV_C3_BC10_LNA_2_OFFSET_VS_FREQ_I,
    /* lna_3 */
    RFNV_C3_BC10_LNA_3_OFFSET_I,
    /* lna_3_vs_freq */
    RFNV_C3_BC10_LNA_3_OFFSET_VS_FREQ_I,
    /* lna_4 */
    RFNV_C3_BC10_LNA_4_OFFSET_I,
    /* lna_4_vs_freq */
    RFNV_C3_BC10_LNA_4_OFFSET_VS_FREQ_I,
    /* im2_i */
    RFNV_C3_BC10_IM2_I_VALUE_I,
    /* im2_q */
    RFNV_C3_BC10_IM2_Q_VALUE_I,
    /* im2_gm */
    RFNV_C3_BC10_IM2_TRANSCONDUCTOR_VALUE_I,
    /* im2_lpm1 */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* im2_lpm2 */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* intelliceiver_cal */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* tx_cal_chan_list */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* multi_lin */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* multi_lin V2 */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* multi_lin V3 */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* lim_vs_freq */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* hpm_exp_hdet_vs_agc */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* hpm_hdet_off */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* hpm_hdet_spn */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* lpm_hdet */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* hdet_vs_freq */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* et_path_delay */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* et_path_delay with freq compensation */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* et_path_delay_offsets_vs_freq_vs_temp */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* xpt_dpd_scaling */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* pin_cal_vs_freq */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* Rx calibrated channel list with LNA vs Freqs. */
    RFNV_CDMA_BC10_RX_CAL_DATA_I
  }
};

/*----------------------------------------------------------------------------*/
/*! RF Static NV Item Mapping for Band Class 10 */
static rf_cdma_static_nv_items_map_type
rf_cdma_nv_bc10_static_items_map[RF_CDMA_NV_PATH_NUM] =
{
  /* RF_PATH_0 Static NV items */
  {
    /* rx_1x_swpts */
    RFNV_CDMA_C0_BC10_1X_RX_SWITCHPOINTS_I,
    /* rx_dor0_a_swpts */   
    RFNV_CDMA_C0_BC10_DOR0_A_RX_SWITCHPOINTS_I,
    /* rx_dorb_sc_swpts */
    RFNV_CDMA_C0_BC10_DORB_SC_RX_SWITCHPOINTS_I,
    /* rx_dorb_mc_swpts */
    RFNV_CDMA_C0_BC10_DORB_MC_RX_SWITCHPOINTS_I,
    /* intelliceiver_det_thresh */
    RFNV_C0_BC10_INTELLICEIVER_DET_THRESH_I,
    /* Antenna Tuner */
    RFNV_CDMA_C0_BC10_ANT_TUNER_I,
    /* bc_pa_r_map */
    RFNV_BC10_PA_R_MAP_I,
    /* enc_btf_delay */
    RFNV_BC10_ENC_BTF_I,
    /* pa_r1_rise */
    RFNV_BC10_PA_R1_RISE_I,
    /* pa_r1_fall */
    RFNV_BC10_PA_R1_FALL_I,
    /* pa_r2_rise */
    RFNV_BC10_PA_R2_RISE_I,
    /* pa_r2_fall */
    RFNV_BC10_PA_R2_FALL_I,
    /* pa_r3_rise */
    RFNV_BC10_PA_R3_RISE_I,
    /* pa_r3_fall */
    RFNV_BC10_PA_R3_FALL_I,
    /* access_1x_swpts */
    RFNV_CDMA_C0_BC10_1X_TX_ACCESS_SWITCHPOINTS_I,
    /* voice_1x_swpts */
    RFNV_CDMA_C0_BC10_1X_TX_VOICE_SWITCHPOINTS_I,
    /* data_1x_swpts */
    RFNV_CDMA_C0_BC10_1X_TX_DATA_SWITCHPOINTS_I,
    /* access_hdr_swpts */
    RFNV_CDMA_C0_BC10_HDR_TX_ACCESS_SWITCHPOINTS_I,
    /* dor0_hdr_swpts */
    RFNV_CDMA_C0_BC10_HDR_TX_DOR0_SWITCHPOINTS_I,
    /* dora_hdr_swpts */
    RFNV_CDMA_C0_BC10_HDR_TX_DORA_SWITCHPOINTS_I,
    /* dorb_hdr_swpts */
    RFNV_CDMA_C0_BC10_HDR_TX_DORB_MC_SWITCHPOINTS_I,
    /* lin_vs_temp */
    RFNV_CDMA_C0_BC10_TX_PWR_TEMP_COMP_I,
    /* multi_lin_apt_adj */
    RFNV_CDMA_C0_BC10_TX_MULTI_LIN_APT_ADJ_I,
    /* hdr_tx_max_pwr*/
    RFNV_CDMA_C0_BC10_HDR_TX_PWR_LIM_DATA_I, 
    /* onex_spur_table */
    RFNV_CDMA_C0_1X_SPUR_TABLE_I,
    /* hdr_spur_table */
    RFNV_CDMA_C0_HDR_SPUR_TABLE_I,
    /* tx_gtr_thresh */
    RFNV_CDMA_C0_BC10_TX_GTR_THRESH_I,
    /* lim_vs_temp_sar_0 */
    RFNV_BC10_TX_LIM_VS_TEMP_I,
    /* lim_vs_temp_sar_1_8 */
    RFNV_BC10_TX_LIM_VS_TEMP_SAR_LVLS,
    /* DPD configuration parameters */
    RFNV_CDMA_C0_BC10_TX_EPT_DPD_CONFIG_PARAMS_I,
    /* hdet_vs_temp */
    RFNV_CDMA_C0_BC10_TX_HDET_VS_TEMP_I,
    /* lim_vs_temp_vs_freq */
    RFNV_CDMA_C0_BC10_TX_LIM_VS_TEMP_VS_FREQ_I,
    /* hdet_mod_range */
    RFNV_CDMA_C0_BC10_HDET_MOD_RANGE_I,
    /* lin_vs_temp_vs_freq_pin */
    RFNV_CDMA_C0_BC10_TX_LIN_VS_TEMP_VS_FREQ_P_IN_I,
    /* lin_vs_temp_vs_freq_pout */
    RFNV_CDMA_C0_BC10_TX_LIN_VS_TEMP_VS_FREQ_P_OUT_I,
    /* ant_tuner_cl*/
    RFNV_CDMA_C0_BC10_ANT_TUNER_CL_I,
    /* pa_static_nv */
    RFNV_CDMA_C0_BC10_PA_STATIC_I,
    /* pa_static_nv_z */
    RFNV_CDMA_C0_BC10_PA_STATIC_Z_I,
    /* pred_clip_power_threshold_nv*/
    RFNV_CDMA_C0_BC10_PRED_CLIP_POWER_THRESH_I,
  },

  /* RF_PATH_1 Static NV items */
  {
    /* rx_1x_swpts */
    RFNV_CDMA_C1_BC10_1X_RX_SWITCHPOINTS_I,
    /* rx_dor0_a_swpts */
    RFNV_CDMA_C1_BC10_DOR0_A_RX_SWITCHPOINTS_I,
    /* rx_dorb_sc_swpts */
    RFNV_CDMA_C1_BC10_DORB_SC_RX_SWITCHPOINTS_I,
    /* rx_dorb_mc_swpts */
    RFNV_CDMA_C1_BC10_DORB_MC_RX_SWITCHPOINTS_I,
    /* intelliceiver_det_thresh */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* Antenna Tuner */
    RFNV_CDMA_C1_BC10_ANT_TUNER_I,
    /* bc_pa_r_map */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* enc_btf_delay */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* pa_r1_rise */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* pa_r1_fall */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* pa_r2_rise */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* pa_r2_fall */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* pa_r3_rise */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* pa_r3_fall */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* access_1x_swpts */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* voice_1x_swpts */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* data_1x_swpts */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* access_hdr_swpts */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* dor0_hdr_swpts */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* dora_hdr_swpts */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* dorb_hdr_swpts */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* lin_vs_temp */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* multi_lin_apt_adj */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* hdr_tx_max_pwr*/
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* onex_spur_table */
    RFNV_CDMA_C1_1X_SPUR_TABLE_I,
    /* hdr_spur_table */
    RFNV_CDMA_C1_HDR_SPUR_TABLE_I,
    /* tx_gtr_thresh */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* lim_vs_temp_sar_0 */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* lim_vs_temp_sar_1_8 */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* DPD configuration parameters */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* hdet_vs_temp */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* lim_vs_temp_vs_freq */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* hdet_mod_range */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* lin_vs_temp_vs_freq_pin */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* lin_vs_temp_vs_freq_pout */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* ant_tuner_cl*/
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* pa_static_nv */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* pa_static_nv_z */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* pred_clip_power_threshold_nv*/
    RF_CDMA_NV_INVALID_NV_ITEM,
  },

  /* RF_PATH_2 Static NV items */
  {
    /* rx_1x_swpts */
    RFNV_CDMA_C2_BC10_1X_RX_SWITCHPOINTS_I,
    /* rx_dor0_a_swpts */
    RFNV_CDMA_C2_BC10_DOR0_A_RX_SWITCHPOINTS_I,
    /* rx_dorb_sc_swpts */
    RFNV_CDMA_C2_BC10_DORB_SC_RX_SWITCHPOINTS_I,
    /* rx_dorb_mc_swpts */
    RFNV_CDMA_C2_BC10_DORB_MC_RX_SWITCHPOINTS_I,
    /* intelliceiver_det_thresh */
    RFNV_C2_BC10_INTELLICEIVER_DET_THRESH_I,
    /* Antenna Tuner */
    RFNV_CDMA_C2_BC10_ANT_TUNER_I,
    /* bc_pa_r_map */
    RFNV_CDMA_C2_BC10_PA_R_MAP_I,
    /* enc_btf_delay */
    RFNV_CDMA_C2_BC10_1X_ENC_BTF_I,
    /* pa_r1_rise */
    RFNV_BC10_PA_R1_RISE_I,
    /* pa_r1_fall */
    RFNV_BC10_PA_R1_FALL_I,
    /* pa_r2_rise */
    RFNV_BC10_PA_R2_RISE_I,
    /* pa_r2_fall */
    RFNV_BC10_PA_R2_FALL_I,
    /* pa_r3_rise */
    RFNV_BC10_PA_R3_RISE_I,
    /* pa_r3_fall */
    RFNV_BC10_PA_R3_FALL_I,
    /* access_1x_swpts */
    RFNV_CDMA_C2_BC10_1X_TX_ACCESS_SWITCHPOINTS_I,
    /* voice_1x_swpts */
    RFNV_CDMA_C2_BC10_1X_TX_VOICE_SWITCHPOINTS_I,
    /* data_1x_swpts */
    RFNV_CDMA_C2_BC10_1X_TX_DATA_SWITCHPOINTS_I,
    /* access_hdr_swpts */
    RFNV_CDMA_C2_BC10_HDR_TX_ACCESS_SWITCHPOINTS_I,
    /* dor0_hdr_swpts */
    RFNV_CDMA_C2_BC10_HDR_TX_DOR0_SWITCHPOINTS_I,
    /* dora_hdr_swpts */
    RFNV_CDMA_C2_BC10_HDR_TX_DORA_SWITCHPOINTS_I,
    /* dorb_hdr_swpts */
    RFNV_CDMA_C2_BC10_HDR_TX_DORB_MC_SWITCHPOINTS_I,
    /* lin_vs_temp */
    RFNV_CDMA_C2_BC10_TX_PWR_TEMP_COMP_I,
    /* multi_lin_apt_adj */
    RFNV_CDMA_C2_BC10_TX_MULTI_LIN_APT_ADJ_I,
    /* hdr_tx_max_pwr*/
    RFNV_CDMA_C2_BC10_HDR_TX_PWR_LIM_DATA_I, 
    /* onex_spur_table */
    RFNV_CDMA_C2_1X_SPUR_TABLE_I,
    /* hdr_spur_table */
    RFNV_CDMA_C2_HDR_SPUR_TABLE_I,
    /* tx_gtr_thresh */
    RFNV_CDMA_C2_BC10_TX_GTR_THRESH_I,
    /* lim_vs_temp_sar_0 */
    RFNV_CDMA_C2_BC10_TX_LIM_VS_TEMP_I,
    /* lim_vs_temp_sar_1_8 */
    RFNV_C2_BC10_TX_LIM_VS_TEMP_SAR_LVLS,
    /* DPD configuration parameters */
    RFNV_CDMA_C2_BC10_TX_EPT_DPD_CONFIG_PARAMS_I,
    /* hdet_vs_temp */
    RFNV_CDMA_C2_BC10_TX_HDET_VS_TEMP_I,
    /* lim_vs_temp_vs_freq */
    RFNV_CDMA_C2_BC10_TX_LIM_VS_TEMP_VS_FREQ_I,
    /* hdet_mod_range */
    RFNV_CDMA_C2_BC10_HDET_MOD_RANGE_I,
    /* lin_vs_temp_vs_freq_pin */
    RFNV_CDMA_C2_BC10_TX_LIN_VS_TEMP_VS_FREQ_P_IN_I,
    /* lin_vs_temp_vs_freq_pout */
    RFNV_CDMA_C2_BC10_TX_LIN_VS_TEMP_VS_FREQ_P_OUT_I,
    /* ant_tuner_cl*/
    RFNV_CDMA_C2_BC10_ANT_TUNER_CL_I,
    /* pa_static_nv */
    RFNV_CDMA_C2_BC10_PA_STATIC_I,
    /* pa_static_nv_z */
    RFNV_CDMA_C2_BC10_PA_STATIC_Z_I,
    /* pred_clip_power_threshold_nv*/
    RFNV_CDMA_C2_BC10_PRED_CLIP_POWER_THRESH_I,
  },

  /* RF_PATH_3 Static NV items */
  {
    /* rx_1x_swpts */
    RFNV_CDMA_C3_BC10_1X_RX_SWITCHPOINTS_I,
    /* rx_dor0_a_swpts */
    RFNV_CDMA_C3_BC10_DOR0_A_RX_SWITCHPOINTS_I,
    /* rx_dorb_sc_swpts */
    RFNV_CDMA_C3_BC10_DORB_SC_RX_SWITCHPOINTS_I,
    /* rx_dorb_mc_swpts */
    RFNV_CDMA_C3_BC10_DORB_MC_RX_SWITCHPOINTS_I,
    /* intelliceiver_det_thresh */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* Antenna Tuner */
    RFNV_CDMA_C3_BC10_ANT_TUNER_I,
    /* bc_pa_r_map */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* enc_btf_delay */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* pa_r1_rise */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* pa_r1_fall */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* pa_r2_rise */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* pa_r2_fall */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* pa_r3_rise */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* pa_r3_fall */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* access_1x_swpts */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* voice_1x_swpts */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* data_1x_swpts */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* access_hdr_swpts */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* dor0_hdr_swpts */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* dora_hdr_swpts */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* dorb_hdr_swpts */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* lin_vs_temp */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* multi_lin_apt_adj */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* hdr_tx_max_pwr*/
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* onex_spur_table */
    RFNV_CDMA_C3_1X_SPUR_TABLE_I,
    /* hdr_spur_table */
    RFNV_CDMA_C3_HDR_SPUR_TABLE_I,
    /* tx_gtr_thresh */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* lim_vs_temp_sar_0 */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* lim_vs_temp_sar_1_8 */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* DPD configuration parameters */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* hdet_vs_temp */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* lim_vs_temp_vs_freq */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* hdet_mod_range */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* lin_vs_temp_vs_freq_pin */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* lin_vs_temp_vs_freq_pout */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* ant_tuner_cl*/
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* pa_static_nv */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* pa_static_nv_z */
    RF_CDMA_NV_INVALID_NV_ITEM,
    /* pred_clip_power_threshold_nv*/
    RF_CDMA_NV_INVALID_NV_ITEM,
  }
};

/*============================================================================*/
/*!
  @name BandClass 10 functions

  @brief
  This section contains functions pertaining to BC10
*/
/*! @{ */

/*----------------------------------------------------------------------------*/
/*!
  @brief
  Return BC10 RF Calibration NV Table Pointer
 
  @param nv_path
  NV path for which items are requested
 
  @return
  BC10 RF Calibration NV Table Pointer
*/
rf_cdma_cal_nv_items_map_type*
rf_cdma_nv_get_bc10_calibration_table
(
  rf_cdma_nv_path_type nv_path
)
{

  return ( &rf_cdma_nv_bc10_cal_items_map[nv_path] );

} /* rf_cdma_nv_get_bc10_calibration_table */

/*----------------------------------------------------------------------------*/
/*!
  @brief
  Return BC10 RF Static NV Table Pointer
 
  @param nv_path
  NV path for which items are requested
 
  @return
  BC10 RF Static NV Table Pointer
*/
rf_cdma_static_nv_items_map_type*
rf_cdma_nv_get_bc10_static_nv_table
(
  rf_cdma_nv_path_type nv_path
)
{

  return ( &rf_cdma_nv_bc10_static_items_map[nv_path] );

} /* rf_cdma_nv_get_bc10_static_nv_table */

/*----------------------------------------------------------------------------*/
/*!
  @brief
  Convert BC10 channel value to Tx frequency for use by NV loading functionality
 
  @details
  This function will be provided as a handler to common NV functions that need
  to query information related to CDMA band/chan to Tx carrier frequency
  relation
 
  @param channel
  Channel for which Tx carrier frequency is requested
 
  @return
  Tx carrier frequency in kHz
*/
uint32
rf_cdma_nv_bc10_convert_chan_to_tx_freq
(
  uint16 channel
)
{
  return ( rf_cdma_get_tx_carrier_freq ( RFM_CDMA_BC10, channel ) );
} /* rf_cdma_nv_bc10_convert_chan_to_tx_freq */

/*----------------------------------------------------------------------------*/
/*!
  @brief
  Convert BC10 Tx freq to Channel for use by NV loading functionality
 
  @details
  This function will be provided as a handler to common NV functions that need
  to query information related to CDMA Tx freq to channel
  relation
 
  @param channel
  Tx Freq for which Channel is requested
 
  @return
  Channel 
*/
uint16
rf_cdma_nv_bc10_convert_tx_freq_to_chan
(
  uint32 freq
)
{
  return ( rf_cdma_get_tx_chan_from_freq ( RFM_CDMA_BC10, freq ) );
} /* rf_cdma_nv_bc10_convert_tx_freq_to_chan */

/*! @} */

/*! @} */

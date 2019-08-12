
#ifndef RFLM_DTR_RX_FW_INTF_AG_H
#define RFLM_DTR_RX_FW_INTF_AG_H


#ifdef __cplusplus
extern "C" {
#endif

/*
WARNING: This file is auto-generated.

Generated at:    Fri Jan 29 12:18:26 2016
Generated using: lm_autogen.exe v5.1.36
Generated from:  v6.4.XX of Jolokia_RxFE_Register_Settings.xlsx
*/

/*=============================================================================

           R X    A U T O G E N    F I L E

GENERAL DESCRIPTION
  This file is auto-generated and it captures the modem register settings 
  configured by FW, provided by the rflm_dtr_rx.

Copyright (c) 2009, 2010, 2011, 2012, 2013, 2014, 2015 by Qualcomm Technologies, Inc.  All Rights Reserved.

$DateTime: 2016/12/13 07:59:25 $
$Header: //commercial/MPSS.JO.2.0.c1.4/Main/modem_proc/rfmodem_jolokia/api/fw/rflm_dtr_rx_fw_intf_ag.h#1 $

=============================================================================*/


/*=============================================================================
                           INCLUDE FILES
=============================================================================*/

#include "comdef.h" 



/*==============================================================================

Interface Revision Information

==============================================================================*/

#define RFLM_DTR_RX_MAJOR_REV 6
#define RFLM_DTR_RX_FW_INTF_REV 4

/*==============================================================================

Options for CONFIG_MASK

==============================================================================*/

#define RFLM_DTR_RX_STATIC_MASK 0x1 	/* Used to configure the set of registers that will be configured by SW just once; Rest may be updated dynamically from SW and needs to be written as independent blocks*/ 
#define RFLM_DTR_RX_ADC_CFG_MASK 0x2 /* This Control Word triggers programming of the Bolt registers to program ADC sampling clock*/ 
#define RFLM_DTR_RX_COMMON_NOTCH_01_MASK 0x4 /* This Control Word triggers programming of the URxFE registers to program the common notches.*/ 
#define RFLM_DTR_RX_COMMON_NOTCH_23_MASK 0x8 /* This Control Word triggers programming of the URxFE registers to program the common notches.*/ 
#define RFLM_DTR_RX_IQMC_MASK 0x10 /* This Control Word triggers programming of all notch related registers in a WB chain*/ 
#define RFLM_DTR_RX_NOTCH_MASK 0x20 /* This Control Word triggers programming of all notch related registers in a WB chain*/ 
#define RFLM_DTR_RX_URXFE_NB0_MASK 0x40 /* This Control Word triggers programming of the URxFE registers to program the first NB chain in a NB group.*/ 
#define RFLM_DTR_RX_CSR_FREQ_OFFSET_NB0_MASK 0x80 /* This Control Word triggers programming of the URxFE registers to program the second NB chain's cordic rotator frequency offset in a NB group.*/ 
#define RFLM_DTR_RX_URXFE_NB1_MASK 0x100 /* This Control Word triggers programming of the URxFE registers to program the second NB chain*/ 
#define RFLM_DTR_RX_CSR_FREQ_OFFSET_NB1_MASK 0x200 /* This Control Word triggers programming of the URxFE registers to program the second NB chain's cordic rotator frequency offset in a NB group.*/ 
#define RFLM_DTR_RX_URXFE_NB2_MASK 0x400 /* This Control Word triggers programming of the URxFE registers to program the third NB chain in a NB group.*/ 
#define RFLM_DTR_RX_CSR_FREQ_OFFSET_NB2_MASK 0x800 /* This Control Word triggers programming of the URxFE registers to program the third NB chain's cordic rotator frequency offset in a NB group.*/ 

#define RFLM_DTR_RX_FULL_CFG_MASK ( RFLM_DTR_RX_STATIC_MASK | RFLM_DTR_RX_ADC_CFG_MASK | RFLM_DTR_RX_IQMC_MASK | RFLM_DTR_RX_NOTCH_MASK | RFLM_DTR_RX_URXFE_NB0_MASK | RFLM_DTR_RX_CSR_FREQ_OFFSET_NB0_MASK | RFLM_DTR_RX_URXFE_NB1_MASK | RFLM_DTR_RX_CSR_FREQ_OFFSET_NB1_MASK | RFLM_DTR_RX_URXFE_NB2_MASK | RFLM_DTR_RX_CSR_FREQ_OFFSET_NB2_MASK )	/* This control word triggers programming all static and dynamic regsiters in the buffer */

#define RFLM_DTR_RX_NB0_CFG_MASK ( RFLM_DTR_RX_URXFE_NB0_MASK | RFLM_DTR_RX_CSR_FREQ_OFFSET_NB0_MASK ) /* This control word triggers programming all dynamic NB0 register blocks */
#define RFLM_DTR_RX_NB2_CFG_MASK ( RFLM_DTR_RX_URXFE_NB2_MASK | RFLM_DTR_RX_CSR_FREQ_OFFSET_NB2_MASK ) /* This control word triggers programming all dynamic NB2 register blocks */
#define RFLM_DTR_RX_NB1_CFG_MASK ( RFLM_DTR_RX_URXFE_NB1_MASK | RFLM_DTR_RX_CSR_FREQ_OFFSET_NB1_MASK ) /* This control word triggers programming all dynamic NB1 register blocks */

#define RFLM_DTR_RX_GSM_MASK RFLM_DTR_RX_STATIC_MASK	/* This control word triggers programming the GSM set of RxFE registers */

#define RFLM_DTR_RX_NUM_CMNNOTCH_BLOCKS 2 /* Macro defining the number of blocks of common notches available for allocation */




#define RFLM_DTR_RX_UNUSED_INDEX 0xF

/* This struct captures the autogenerated header, for Revision information, etc. */
typedef struct
{
  uint8 major_rev;  /* Indicates Product Line */ 
  uint8 fw_intf_rev;  /* Indicates FW RX Intf Rev */ 
  uint8 sw_settings_rev;  /* Indicates SW Settings Rev for the given FW Intf */ 
}rflm_dtr_rx_header_struct;



/* This struct captures the different indices used to index into the HWIO registers. */
typedef struct ALIGN(4)
{
  uint8 rxfe_cn_idx_0;
  uint8 a_idx_0;
  uint8 wbw_idx_0;
  uint8 nbn_idx_0;
  uint8 nbn_idx_1;
  uint8 nbn_idx_2;
}rflm_dtr_rx_indices_struct;



 /* Group CSR_XO_VARS: */ 
/* This block contains RxLM variables used by FW for programming XO / frequency error related RxFE registers*/
typedef struct
{
  uint32 csr_clk_hz_c0;
  uint32 csr_clk_hz_c1;
  uint32 csr_clk_hz_c2;
  uint32 csr_ideal_val_c0;
  uint32 csr_ideal_val_c1;
  uint32 csr_ideal_val_c2;
  uint32 f_lo_inv_24u19;
}rflm_dtr_rx_csr_xo_vars_group_struct;



 /* Group XO_VARS: */ 
/* This block contains RxLM variables used by FW for programming XO / frequency error related RxFE registers*/
typedef struct
{
  uint32 csr_res_inv_c0;
  uint32 csr_res_inv_c1;
  uint32 csr_res_inv_c2;
}rflm_dtr_rx_xo_vars_group_struct;



 /* Group VSRC_XO_VARS: */ 
/* This block contains RxLM variables used by FW for programming XO / frequency error related RxFE registers*/
typedef struct
{
  uint32 vsrc_t1byt2_ideal_val_q7;
  uint32 vsrc_t1byt2_scale;
  uint32 vsrc_t2byt1m1_ideal_val_q32;
  uint32 vsrc_t2byt1_ideal_scale;
}rflm_dtr_rx_vsrc_xo_vars_group_struct;



 /* Group STMR_XO_VARS: */ 
/* This block contains RxLM variables used by FW for programming XO / frequency error related RxFE registers*/
typedef struct
{
  uint32 stmr_fcw_ideal_val;
  uint32 stmr_fcw_scale;
}rflm_dtr_rx_stmr_xo_vars_group_struct;



 /* Group DELAY_VARS: */ 
/* This block contains RxLM variables used by FW for programming XO / frequency error related RxFE registers*/
typedef struct
{
  uint32 rxfe_delay_nb0_in_sctr;
  uint32 rxfe_delay_nb1_in_sctr;
  uint32 rxfe_delay_nb2_in_sctr;
  uint32 adc_vsrc_delay_in_off_clk;
}rflm_dtr_rx_delay_vars_group_struct;



 /* Group DVGA_VARS: */ 
/* This block contains RxLM variables used by FW for programming XO / frequency error related RxFE registers*/
typedef struct
{
  int32 dvga_offset_c0;
  int32 dvga_offset_c1;
  int32 dvga_offset_c2;
}rflm_dtr_rx_dvga_vars_group_struct;



 /* Group VSRC_VARS: */ 
/* This block contains RxLM variables used by FW for programming XO / frequency error related RxFE registers*/
typedef struct
{
  uint32 vsrc_output_rate;
}rflm_dtr_rx_vsrc_vars_group_struct;



 /* Group ADC_VARS: */ 
/* This block contains RxLM variables used by FW for programming XO / frequency error related RxFE registers*/
typedef struct
{
  uint32 adc_insertion_loss_delta;
}rflm_dtr_rx_adc_vars_group_struct;



 /* Group CSR_PHASE_COMP_VARS: */ 
/* This block contains RxLM variables used by FW for programming XO / frequency error related RxFE registers*/
typedef struct
{
  uint32 csr_phase_offset[6];
}rflm_dtr_rx_csr_phase_comp_vars_group_struct;



 /* Group NOTCH_THRESH: */ 
/* This block contains RxLM variables used by FW for programming XO / frequency error related RxFE registers*/
typedef struct
{
  uint32 notch_sampling_rate;
  int32 wb_notch_filt_threshold[3];
  int32 cmn_notch_filt01_threshold[2];
  int32 cmn_notch_filt23_threshold[2];
}rflm_dtr_rx_notch_thresh_group_struct;



 /* Group SCALE_VARS: */ 
/* This block contains RxLM variables used by FW for programming XO / frequency error related RxFE registers*/
typedef struct
{
  int32 wbdc_scale;
  int32 wbdc_offset;
  int32 wbpwr_scale;
  int32 nbpwr0_scale;
  int32 nbpwr1_scale;
  int32 nbpwr2_scale;
  int32 lte_k_norm_factor;
  int32 lte_k_nbee_to_dbv;
}rflm_dtr_rx_scale_vars_group_struct;



 /* Group VSRC_WA_COUNT: */ 
/* This block consist of the URxFE registers to program a WB chain.*/
typedef struct
{
  uint32 rxfe_wb_vsrc_sctr_wa_wbw;
}rflm_dtr_rx_vsrc_wa_count_group_struct;





typedef enum
{
  RFLM_DTR_RX_FW_GROUP_CSR_XO_VARS,	/* Use Struct: rflm_dtr_rx_csr_xo_vars_group_struct */
  RFLM_DTR_RX_FW_GROUP_XO_VARS,	/* Use Struct: rflm_dtr_rx_xo_vars_group_struct */
  RFLM_DTR_RX_FW_GROUP_VSRC_XO_VARS,	/* Use Struct: rflm_dtr_rx_vsrc_xo_vars_group_struct */
  RFLM_DTR_RX_FW_GROUP_STMR_XO_VARS,	/* Use Struct: rflm_dtr_rx_stmr_xo_vars_group_struct */
  RFLM_DTR_RX_FW_GROUP_DELAY_VARS,	/* Use Struct: rflm_dtr_rx_delay_vars_group_struct */
  RFLM_DTR_RX_FW_GROUP_DVGA_VARS,	/* Use Struct: rflm_dtr_rx_dvga_vars_group_struct */
  RFLM_DTR_RX_FW_GROUP_VSRC_VARS,	/* Use Struct: rflm_dtr_rx_vsrc_vars_group_struct */
  RFLM_DTR_RX_FW_GROUP_ADC_VARS,	/* Use Struct: rflm_dtr_rx_adc_vars_group_struct */
  RFLM_DTR_RX_FW_GROUP_CSR_PHASE_COMP_VARS,	/* Use Struct: rflm_dtr_rx_csr_phase_comp_vars_group_struct */
  RFLM_DTR_RX_FW_GROUP_NOTCH_THRESH,	/* Use Struct: rflm_dtr_rx_notch_thresh_group_struct */
  RFLM_DTR_RX_FW_GROUP_SCALE_VARS,	/* Use Struct: rflm_dtr_rx_scale_vars_group_struct */
  RFLM_DTR_RX_FW_GROUP_VSRC_WA_COUNT,	/* Use Struct: rflm_dtr_rx_vsrc_wa_count_group_struct */
  RFLM_DTR_RX_INDICES_FW_GROUP,	/* Use Struct: rflm_dtr_rx_indices_struct */
  RFLM_DTR_RX_FW_GROUP_NUM,
  RFLM_DTR_RX_FW_GROUP_INVALID
}rflm_dtr_rx_fw_export_group_id;


#ifdef __cplusplus
}
#endif



#endif



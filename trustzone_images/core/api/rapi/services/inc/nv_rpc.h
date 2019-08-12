#ifndef NV_RPC_H
#define NV_RPC_H

/* NV TOOL VERSION: 4.37 */
/* GENERATED: MON JUN  7 2010 */
/*=============================================================================
                                N V _ R P C . H

GENERAL DESCRIPTION
  This is an AUTO GENERATED file that provides declarations pertaining to the
  exporting of the nv api using ONCRPC.

  ---------------------------------------------------------------------------
  Copyright (c) 2010 Qualcomm Technologies Incorporated.
  All Rights Reserved. QUALCOMM Proprietary and Confidential.
  ---------------------------------------------------------------------------
=============================================================================*/

/*=============================================================================

                              Edit History

                             AUTO GENERATED                                  */
/* Generated by following versions of Htorpc modules:
Id: //source/qcom/qct/core/mproc/tools/rel/04.07/htorpc/htorpc.pl#8 
Id: //source/qcom/qct/core/mproc/tools/rel/04.07/htorpc/lib/Htorpc/Start.pm#3 
Id: //source/qcom/qct/core/mproc/tools/rel/04.07/htorpc/lib/Htorpc/Htoxdr.pm#1 
Id: //source/qcom/qct/core/mproc/tools/rel/04.07/htorpc/lib/Htorpc/XDR.pm#3 
Id: //source/qcom/qct/core/mproc/tools/rel/04.07/htorpc/lib/Htorpc/Output.pm#7 
Id: //source/qcom/qct/core/mproc/tools/rel/04.07/htorpc/lib/Htorpc/Parser.pm#2 
Id: //source/qcom/qct/core/mproc/tools/rel/04.07/htorpc/lib/Htorpc/Metacomments.pm#5 
Id: //source/qcom/qct/core/mproc/tools/rel/04.07/htorpc/lib/Htorpc/SymbolTable.pm#3  

nv Definition File(s):
Id: //source/qcom/qct/core/services/nv/meta/main/latest/inc/nv.h#5
=============================================================================*/
/*=============================================================================
$Header: //components/rel/tz.bf/2.5.c10/trustzone_images/core/api/rapi/services/inc/nv_rpc.h#1 $ 
=============================================================================*/


/* Include ONCRPC headers */
#include "oncrpc.h"
#include "comdef.h"

#define NVPROG					0x3000000E
#define NVVERS					0x00090002 /* 0x00090002 */
/*defines for feature and tool version*/
#define NV_TOOLVERS					0x00040025
#define NV_FEATURES					0x00000001
 

#define NV_BUILT_VERS                                     	0x00090001
#define NV_RTRE_POLLING_CONTROL_VERS                      	0x00090001
#define NV_CMD_EXT_REMOTE_VERS                            	0x00090001
#define NV_RTRE_USE_RUIM_FOR_NAM_VERS                     	0x00090001
#define NV_READ_ERR_LOG_VERS                              	0x00090001
#define NV_RPC_GLUE_CODE_INFO_REMOTE_VERS                 	0x00090001
#define NV_RTRE_POLLING_FOR_NAM_VERS                      	0x00090001
#define NV_PRL_IS_VALID_VERS                              	0x00090001
#define NV_PRL_VERSION_VERS                               	0x00090001
#define NV_WRITE_ERR_LOG_VERS                             	0x00090001
#define NV_NULL_VERS                                      	0x00090001
#define NV_API_VERSIONS_VERS                              	0x00090001
#define NV_MAX_SIZE_OF_ROAMING_LIST_VERS                  	0x00090001
#define NV_CMD_REMOTE_VERS                                	0x00090001
#define NV_RTRE_CONTROL_VERS                              	0x00090001
#define NV_DETERMINE_ESN_VALIDITY_VERS                    	0x00090001
/* prototypes for the app_init routines for the api and the api's callback
 * services
 */
extern void nv_app_init( void );
extern void nvcb_app_init( void );

/* prototypes for the app_lock routines for the api and the api's callback
 * services
 */
#define nv_app_enable()  nv_app_lock( FALSE )
#define nv_app_disable() nv_app_lock( TRUE )
extern void nv_app_lock( boolean lock );

#define nvcb_app_enable()  nvcb_app_lock( FALSE )
#define nvcb_app_disable() nvcb_app_lock( TRUE )
extern void nvcb_app_lock( boolean lock );

/* prototypes for glue code info querty functions:
 *
 * toolvers   : Tool version
 * features   : Features turned on in the code.
 *              0x00000001    ONCRPC Server Cleanup Support
 * proghash   : Unique hash value that represents the API XDR definition
 * cbproghash : Unique hash value that represents the Callbacks' XDR definition
 */
extern boolean nv_rpc_glue_code_info_remote    /* REMOTE INFO */
(
  uint32 *toolvers,
  uint32 *features,
  uint32 *proghash,
  uint32 *cbproghash
);
extern boolean nv_rpc_glue_code_info_local     /* LOCAL INFO */
(
  uint32 *toolvers,
  uint32 *features,
  uint32 *proghash,
  uint32 *cbproghash
);

/* prototype for API null routine */
extern boolean nv_null(void);

/* prototype for API version function */
extern uint32 *nv_api_versions
(
   uint32 *len
);

/* Start forward xdr procedure numbers */

#define ONCRPC_NV_NULL_PROC 0 
 #define ONCRPC_NV_RPC_GLUE_CODE_INFO_REMOTE_PROC 1 
 #define ONCRPC_NV_READ_ERR_LOG_PROC 2 
 #define ONCRPC_NV_WRITE_ERR_LOG_PROC 3 
 #define ONCRPC_NV_MAX_SIZE_OF_ROAMING_LIST_PROC 4 
 #define ONCRPC_NV_PRL_IS_VALID_PROC 5 
 #define ONCRPC_NV_BUILT_PROC 6 
 #define ONCRPC_NV_PRL_VERSION_PROC 7 
 #define ONCRPC_NV_DETERMINE_ESN_VALIDITY_PROC 8 
 #define ONCRPC_NV_CMD_REMOTE_PROC 9 
 #define ONCRPC_NV_CMD_EXT_REMOTE_PROC 10 
 #define ONCRPC_NV_RTRE_CONTROL_PROC 11 
 #define ONCRPC_NV_RTRE_USE_RUIM_FOR_NAM_PROC 12 
 #define ONCRPC_NV_RTRE_POLLING_CONTROL_PROC 13 
 #define ONCRPC_NV_RTRE_POLLING_FOR_NAM_PROC 14 
 #define ONCRPC_NV_API_VERSIONS_PROC 0xFFFFFFFF 



















/* End forward xdr procedure numbers */
/* Start callback xdr procedure numbers */
/* End callback xdr procedure numbers */


/* XDR Routine Prototypes go here */

/*
 * nv_minmax_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_minmax_type (xdr_s_type *xdrs, nv_minmax_type const *sptr);

/*
 * nv_minmax_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_minmax_type (xdr_s_type *xdrs, nv_minmax_type *sptr);

/*
 * nv_sec_code_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_sec_code_type (xdr_s_type *xdrs, nv_sec_code_type const *sptr);

/*
 * nv_sec_code_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_sec_code_type (xdr_s_type *xdrs, nv_sec_code_type *sptr);

/*
 * nv_enabled_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_enabled_type (xdr_s_type *xdrs, nv_enabled_type const *sptr);

/*
 * nv_enabled_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_enabled_type (xdr_s_type *xdrs, nv_enabled_type *sptr);

/*
 * nv_a_key_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_a_key_type (xdr_s_type *xdrs, nv_a_key_type const *sptr);

/*
 * nv_a_key_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_a_key_type (xdr_s_type *xdrs, nv_a_key_type *sptr);

/*
 * nv_a_key_chksum_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_a_key_chksum_type (xdr_s_type *xdrs, nv_a_key_chksum_type const *sptr);

/*
 * nv_a_key_chksum_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_a_key_chksum_type (xdr_s_type *xdrs, nv_a_key_chksum_type *sptr);

/*
 * nv_ssd_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ssd_type (xdr_s_type *xdrs, nv_ssd_type const *sptr);

/*
 * nv_ssd_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ssd_type (xdr_s_type *xdrs, nv_ssd_type *sptr);

/*
 * nv_pap_user_id_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_pap_user_id_type (xdr_s_type *xdrs, nv_pap_user_id_type const *sptr);

/*
 * nv_pap_user_id_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_pap_user_id_type (xdr_s_type *xdrs, nv_pap_user_id_type *sptr);

/*
 * nv_pap_password_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_pap_password_type (xdr_s_type *xdrs, nv_pap_password_type const *sptr);

/*
 * nv_pap_password_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_pap_password_type (xdr_s_type *xdrs, nv_pap_password_type *sptr);

/*
 * nv_ppp_password_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ppp_password_type (xdr_s_type *xdrs, nv_ppp_password_type const *sptr);

/*
 * nv_ppp_password_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ppp_password_type (xdr_s_type *xdrs, nv_ppp_password_type *sptr);

/*
 * nv_ppp_user_id_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ppp_user_id_type (xdr_s_type *xdrs, nv_ppp_user_id_type const *sptr);

/*
 * nv_ppp_user_id_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ppp_user_id_type (xdr_s_type *xdrs, nv_ppp_user_id_type *sptr);

/*
 * nv_sec_device_key_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_sec_device_key_type (xdr_s_type *xdrs, nv_sec_device_key_type const *sptr);

/*
 * nv_sec_device_key_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_sec_device_key_type (xdr_s_type *xdrs, nv_sec_device_key_type *sptr);

/*
 * nv_esn_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_esn_type (xdr_s_type *xdrs, nv_esn_type const *sptr);

/*
 * nv_esn_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_esn_type (xdr_s_type *xdrs, nv_esn_type *sptr);

/*
 * nv_esn_chksum_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_esn_chksum_type (xdr_s_type *xdrs, nv_esn_chksum_type const *sptr);

/*
 * nv_esn_chksum_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_esn_chksum_type (xdr_s_type *xdrs, nv_esn_chksum_type *sptr);

/*
 * nv_config_chksum_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_config_chksum_type (xdr_s_type *xdrs, nv_config_chksum_type const *sptr);

/*
 * nv_config_chksum_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_config_chksum_type (xdr_s_type *xdrs, nv_config_chksum_type *sptr);

/*
 * nv_nam_chksum_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_nam_chksum_type (xdr_s_type *xdrs, nv_nam_chksum_type const *sptr);

/*
 * nv_nam_chksum_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_nam_chksum_type (xdr_s_type *xdrs, nv_nam_chksum_type *sptr);

/*
 * nv_run_time_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_run_time_type (xdr_s_type *xdrs, nv_run_time_type const *sptr);

/*
 * nv_run_time_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_run_time_type (xdr_s_type *xdrs, nv_run_time_type *sptr);

/*
 * nv_err_log_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_err_log_type (xdr_s_type *xdrs, nv_err_log_type const *sptr);

/*
 * nv_err_log_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_err_log_type (xdr_s_type *xdrs, nv_err_log_type *sptr);

/*
 * nv_fsc_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_fsc_type (xdr_s_type *xdrs, nv_fsc_type const *sptr);

/*
 * nv_fsc_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_fsc_type (xdr_s_type *xdrs, nv_fsc_type *sptr);

/*
 * nv_fsc2_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_fsc2_type (xdr_s_type *xdrs, nv_fsc2_type const *sptr);

/*
 * nv_fsc2_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_fsc2_type (xdr_s_type *xdrs, nv_fsc2_type *sptr);

/*
 * nv_fsc2_chksum_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_fsc2_chksum_type (xdr_s_type *xdrs, nv_fsc2_chksum_type const *sptr);

/*
 * nv_fsc2_chksum_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_fsc2_chksum_type (xdr_s_type *xdrs, nv_fsc2_chksum_type *sptr);

/*
 * nv_wdc_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_wdc_type (xdr_s_type *xdrs, nv_wdc_type const *sptr);

/*
 * nv_wdc_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_wdc_type (xdr_s_type *xdrs, nv_wdc_type *sptr);

/*
 * nv_up_key_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_up_key_type (xdr_s_type *xdrs, nv_up_key_type const *sptr);

/*
 * nv_up_key_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_up_key_type (xdr_s_type *xdrs, nv_up_key_type *sptr);

/*
 * nv_sid_lock_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_sid_lock_type (xdr_s_type *xdrs, nv_sid_lock_type const *sptr);

/*
 * nv_sid_lock_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_sid_lock_type (xdr_s_type *xdrs, nv_sid_lock_type *sptr);

/*
 * nv_sid_acq_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_sid_acq_type (xdr_s_type *xdrs, nv_sid_acq_type const *sptr);

/*
 * nv_sid_acq_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_sid_acq_type (xdr_s_type *xdrs, nv_sid_acq_type *sptr);

/*
 * nv_min1_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_min1_type (xdr_s_type *xdrs, nv_min1_type const *sptr);

/*
 * nv_min1_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_min1_type (xdr_s_type *xdrs, nv_min1_type *sptr);

/*
 * nv_min2_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_min2_type (xdr_s_type *xdrs, nv_min2_type const *sptr);

/*
 * nv_min2_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_min2_type (xdr_s_type *xdrs, nv_min2_type *sptr);

/*
 * nv_firstchp_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_firstchp_type (xdr_s_type *xdrs, nv_firstchp_type const *sptr);

/*
 * nv_firstchp_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_firstchp_type (xdr_s_type *xdrs, nv_firstchp_type *sptr);

/*
 * nv_sid_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_sid_type (xdr_s_type *xdrs, nv_sid_type const *sptr);

/*
 * nv_sid_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_sid_type (xdr_s_type *xdrs, nv_sid_type *sptr);

/*
 * nv_analog_reg_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_analog_reg_type (xdr_s_type *xdrs, nv_analog_reg_type const *sptr);

/*
 * nv_analog_reg_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_analog_reg_type (xdr_s_type *xdrs, nv_analog_reg_type *sptr);

/*
 * nv_cdmach_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_cdmach_type (xdr_s_type *xdrs, nv_cdmach_type const *sptr);

/*
 * nv_cdmach_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_cdmach_type (xdr_s_type *xdrs, nv_cdmach_type *sptr);

/*
 * nv_mob_term_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_mob_term_type (xdr_s_type *xdrs, nv_mob_term_type const *sptr);

/*
 * nv_mob_term_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_mob_term_type (xdr_s_type *xdrs, nv_mob_term_type *sptr);

/*
 * nv_accolc_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_accolc_type (xdr_s_type *xdrs, nv_accolc_type const *sptr);

/*
 * nv_accolc_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_accolc_type (xdr_s_type *xdrs, nv_accolc_type *sptr);

/*
 * nv_call_time_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_call_time_type (xdr_s_type *xdrs, nv_call_time_type const *sptr);

/*
 * nv_call_time_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_call_time_type (xdr_s_type *xdrs, nv_call_time_type *sptr);

/*
 * nv_sid_nid_pair_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_sid_nid_pair_type (xdr_s_type *xdrs, nv_sid_nid_pair_type const *sptr);

/*
 * nv_sid_nid_pair_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_sid_nid_pair_type (xdr_s_type *xdrs, nv_sid_nid_pair_type *sptr);

/*
 * nv_home_sid_nid_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_home_sid_nid_type (xdr_s_type *xdrs, nv_home_sid_nid_type const *sptr);

/*
 * nv_home_sid_nid_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_home_sid_nid_type (xdr_s_type *xdrs, nv_home_sid_nid_type *sptr);

/*
 * nv_sid_nid_lock_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_sid_nid_lock_type (xdr_s_type *xdrs, nv_sid_nid_lock_type const *sptr);

/*
 * nv_sid_nid_lock_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_sid_nid_lock_type (xdr_s_type *xdrs, nv_sid_nid_lock_type *sptr);

/*
 * nv_pref_voice_so_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_pref_voice_so_type (xdr_s_type *xdrs, nv_pref_voice_so_type const *sptr);

/*
 * nv_pref_voice_so_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_pref_voice_so_type (xdr_s_type *xdrs, nv_pref_voice_so_type *sptr);

/*
 * nv_imsi_mcc_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_imsi_mcc_type (xdr_s_type *xdrs, nv_imsi_mcc_type const *sptr);

/*
 * nv_imsi_mcc_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_imsi_mcc_type (xdr_s_type *xdrs, nv_imsi_mcc_type *sptr);

/*
 * nv_imsi_11_12_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_imsi_11_12_type (xdr_s_type *xdrs, nv_imsi_11_12_type const *sptr);

/*
 * nv_imsi_11_12_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_imsi_11_12_type (xdr_s_type *xdrs, nv_imsi_11_12_type *sptr);

/*
 * nv_imsi_addr_num_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_imsi_addr_num_type (xdr_s_type *xdrs, nv_imsi_addr_num_type const *sptr);

/*
 * nv_imsi_addr_num_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_imsi_addr_num_type (xdr_s_type *xdrs, nv_imsi_addr_num_type *sptr);

/*
 * nv_dir_number_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_dir_number_type (xdr_s_type *xdrs, nv_dir_number_type const *sptr);

/*
 * nv_dir_number_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_dir_number_type (xdr_s_type *xdrs, nv_dir_number_type *sptr);

/*
 * nv_mob_dir_data_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_mob_dir_data_type (xdr_s_type *xdrs, nv_mob_dir_data_type const *sptr);

/*
 * nv_mob_dir_data_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_mob_dir_data_type (xdr_s_type *xdrs, nv_mob_dir_data_type *sptr);

/*
 * nv_roaming_list_union_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_roaming_list_union_type (xdr_s_type *xdrs, nv_roaming_list_union_type const *sptr);

/*
 * nv_roaming_list_union_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_roaming_list_union_type (xdr_s_type *xdrs, nv_roaming_list_union_type *sptr);

/*
 * nv_pref_mode_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_pref_mode_type (xdr_s_type *xdrs, nv_pref_mode_type const *sptr);

/*
 * nv_pref_mode_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_pref_mode_type (xdr_s_type *xdrs, nv_pref_mode_type *sptr);

/*
 * nv_count_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_count_type (xdr_s_type *xdrs, nv_count_type const *sptr);

/*
 * nv_count_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_count_type (xdr_s_type *xdrs, nv_count_type *sptr);

/*
 * struct_nv_sid_nid_type_pair_arr XDR_NV_SEND
 */
boolean xdr_nv_send_struct_nv_sid_nid_type_pair_arr (xdr_s_type *xdrs, nv_sid_nid_pair_type  const (*objp)[1]);

/*
 * struct_nv_sid_nid_type_pair_arr XDR_NV_RECV
 */
boolean xdr_nv_recv_struct_nv_sid_nid_type_pair_arr (xdr_s_type *xdrs, nv_sid_nid_pair_type (*objp)[1]);

/*
 * nv_sid_nid_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_sid_nid_type (xdr_s_type *xdrs, nv_sid_nid_type const *sptr);

/*
 * nv_sid_nid_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_sid_nid_type (xdr_s_type *xdrs, nv_sid_nid_type *sptr);

/*
 * nv_min_chksum_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_min_chksum_type (xdr_s_type *xdrs, nv_min_chksum_type const *sptr);

/*
 * nv_min_chksum_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_min_chksum_type (xdr_s_type *xdrs, nv_min_chksum_type *sptr);

/*
 * nv_name_nam_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_name_nam_type (xdr_s_type *xdrs, nv_name_nam_type const *sptr);

/*
 * nv_name_nam_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_name_nam_type (xdr_s_type *xdrs, nv_name_nam_type *sptr);

/*
 * nv_sys_pref_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_sys_pref_type (xdr_s_type *xdrs, nv_sys_pref_type const *sptr);

/*
 * nv_sys_pref_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_sys_pref_type (xdr_s_type *xdrs, nv_sys_pref_type *sptr);

/*
 * nv_data_pkt_orig_str_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_data_pkt_orig_str_type (xdr_s_type *xdrs, nv_data_pkt_orig_str_type const *sptr);

/*
 * nv_data_pkt_orig_str_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_data_pkt_orig_str_type (xdr_s_type *xdrs, nv_data_pkt_orig_str_type *sptr);

/*
 * nv_ds_mip_gen_user_prof_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ds_mip_gen_user_prof_type (xdr_s_type *xdrs, nv_ds_mip_gen_user_prof_type const *sptr);

/*
 * nv_ds_mip_gen_user_prof_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ds_mip_gen_user_prof_type (xdr_s_type *xdrs, nv_ds_mip_gen_user_prof_type *sptr);

/*
 * nv_ds_mip_ss_user_prof_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ds_mip_ss_user_prof_type (xdr_s_type *xdrs, nv_ds_mip_ss_user_prof_type const *sptr);

/*
 * nv_ds_mip_ss_user_prof_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ds_mip_ss_user_prof_type (xdr_s_type *xdrs, nv_ds_mip_ss_user_prof_type *sptr);

/*
 * nv_ds_mip_mn_ha_time_delta_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ds_mip_mn_ha_time_delta_type (xdr_s_type *xdrs, nv_ds_mip_mn_ha_time_delta_type const *sptr);

/*
 * nv_ds_mip_mn_ha_time_delta_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ds_mip_mn_ha_time_delta_type (xdr_s_type *xdrs, nv_ds_mip_mn_ha_time_delta_type *sptr);

/*
 * nv_ds_mip_dmu_pkoid_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ds_mip_dmu_pkoid_type (xdr_s_type *xdrs, nv_ds_mip_dmu_pkoid_type const *sptr);

/*
 * nv_ds_mip_dmu_pkoid_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ds_mip_dmu_pkoid_type (xdr_s_type *xdrs, nv_ds_mip_dmu_pkoid_type *sptr);

/*
 * nv_ds_mip_dmu_mn_auth_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ds_mip_dmu_mn_auth_type (xdr_s_type *xdrs, nv_ds_mip_dmu_mn_auth_type const *sptr);

/*
 * nv_ds_mip_dmu_mn_auth_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ds_mip_dmu_mn_auth_type (xdr_s_type *xdrs, nv_ds_mip_dmu_mn_auth_type *sptr);

/*
 * nv_rtsp_proxy_server_addr XDR_NV_SEND
 */
boolean xdr_nv_send_nv_rtsp_proxy_server_addr (xdr_s_type *xdrs, nv_rtsp_proxy_server_addr const *uptr, unsigned short  obj_disc);

/*
 * nv_rtsp_proxy_server_addr XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_rtsp_proxy_server_addr (xdr_s_type *xdrs, nv_rtsp_proxy_server_addr *uptr, unsigned short  obj_disc);

/*
 * nv_rtsp_proxy_server_addr_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_rtsp_proxy_server_addr_type (xdr_s_type *xdrs, nv_rtsp_proxy_server_addr_type const *sptr);

/*
 * nv_rtsp_proxy_server_addr_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_rtsp_proxy_server_addr_type (xdr_s_type *xdrs, nv_rtsp_proxy_server_addr_type *sptr);

/*
 * nv_pkt_dial_string_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_pkt_dial_string_type (xdr_s_type *xdrs, nv_pkt_dial_string_type const *sptr);

/*
 * nv_pkt_dial_string_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_pkt_dial_string_type (xdr_s_type *xdrs, nv_pkt_dial_string_type *sptr);

/*
 * nv_ppp_configure_data_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ppp_configure_data_type (xdr_s_type *xdrs, nv_ppp_configure_data_type const *sptr);

/*
 * nv_ppp_configure_data_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ppp_configure_data_type (xdr_s_type *xdrs, nv_ppp_configure_data_type *sptr);

/*
 * nv_ps_ipv6_iid_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ps_ipv6_iid_type (xdr_s_type *xdrs, nv_ps_ipv6_iid_type const *sptr);

/*
 * nv_ps_ipv6_iid_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ps_ipv6_iid_type (xdr_s_type *xdrs, nv_ps_ipv6_iid_type *sptr);

/*
 * nv_ip6_sm_config_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ip6_sm_config_type (xdr_s_type *xdrs, nv_ip6_sm_config_type const *sptr);

/*
 * nv_ip6_sm_config_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ip6_sm_config_type (xdr_s_type *xdrs, nv_ip6_sm_config_type *sptr);

/*
 * nv_ipv6_address_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ipv6_address_type (xdr_s_type *xdrs, nv_ipv6_address_type const *sptr);

/*
 * nv_ipv6_address_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ipv6_address_type (xdr_s_type *xdrs, nv_ipv6_address_type *sptr);

/*
 * nv_hdramp_address_data_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_hdramp_address_data_type (xdr_s_type *xdrs, nv_hdramp_address_data_type const *sptr);

/*
 * nv_hdramp_address_data_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_hdramp_address_data_type (xdr_s_type *xdrs, nv_hdramp_address_data_type *sptr);

/*
 * nv_hdr_an_auth_nai_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_hdr_an_auth_nai_type (xdr_s_type *xdrs, nv_hdr_an_auth_nai_type const *sptr);

/*
 * nv_hdr_an_auth_nai_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_hdr_an_auth_nai_type (xdr_s_type *xdrs, nv_hdr_an_auth_nai_type *sptr);

/*
 * nv_hdr_an_auth_password_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_hdr_an_auth_password_type (xdr_s_type *xdrs, nv_hdr_an_auth_password_type const *sptr);

/*
 * nv_hdr_an_auth_password_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_hdr_an_auth_password_type (xdr_s_type *xdrs, nv_hdr_an_auth_password_type *sptr);

/*
 * nv_hdr_an_ppp_password_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_hdr_an_ppp_password_type (xdr_s_type *xdrs, nv_hdr_an_ppp_password_type const *sptr);

/*
 * nv_hdr_an_ppp_password_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_hdr_an_ppp_password_type (xdr_s_type *xdrs, nv_hdr_an_ppp_password_type *sptr);

/*
 * nv_hdr_an_auth_passwd_long_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_hdr_an_auth_passwd_long_type (xdr_s_type *xdrs, nv_hdr_an_auth_passwd_long_type const *sptr);

/*
 * nv_hdr_an_auth_passwd_long_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_hdr_an_auth_passwd_long_type (xdr_s_type *xdrs, nv_hdr_an_auth_passwd_long_type *sptr);

/*
 * nv_hdr_an_auth_user_id_long_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_hdr_an_auth_user_id_long_type (xdr_s_type *xdrs, nv_hdr_an_auth_user_id_long_type const *sptr);

/*
 * nv_hdr_an_auth_user_id_long_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_hdr_an_auth_user_id_long_type (xdr_s_type *xdrs, nv_hdr_an_auth_user_id_long_type *sptr);

/*
 * nv_sms_bc_service_table_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_sms_bc_service_table_type (xdr_s_type *xdrs, nv_sms_bc_service_table_type const *sptr);

/*
 * nv_sms_bc_service_table_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_sms_bc_service_table_type (xdr_s_type *xdrs, nv_sms_bc_service_table_type *sptr);

/*
 * nv_sms_vm_number_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_sms_vm_number_type (xdr_s_type *xdrs, nv_sms_vm_number_type const *sptr);

/*
 * nv_sms_vm_number_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_sms_vm_number_type (xdr_s_type *xdrs, nv_sms_vm_number_type *sptr);

/*
 * nv_sms_routing_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_sms_routing_type (xdr_s_type *xdrs, nv_sms_routing_type const *sptr);

/*
 * nv_sms_routing_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_sms_routing_type (xdr_s_type *xdrs, nv_sms_routing_type *sptr);

/*
 * nv_dial_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_dial_type (xdr_s_type *xdrs, nv_dial_type const *sptr);

/*
 * nv_dial_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_dial_type (xdr_s_type *xdrs, nv_dial_type *sptr);

/*
 * nv_stdial_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_stdial_type (xdr_s_type *xdrs, nv_stdial_type const *sptr);

/*
 * nv_stdial_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_stdial_type (xdr_s_type *xdrs, nv_stdial_type *sptr);

/*
 * nv_stack_idx_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_stack_idx_type (xdr_s_type *xdrs, nv_stack_idx_type const *sptr);

/*
 * nv_stack_idx_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_stack_idx_type (xdr_s_type *xdrs, nv_stack_idx_type *sptr);

/*
 * nv_page_set_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_page_set_type (xdr_s_type *xdrs, nv_page_set_type const *sptr);

/*
 * nv_page_set_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_page_set_type (xdr_s_type *xdrs, nv_page_set_type *sptr);

/*
 * nv_page_msg_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_page_msg_type (xdr_s_type *xdrs, nv_page_msg_type const *sptr);

/*
 * nv_page_msg_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_page_msg_type (xdr_s_type *xdrs, nv_page_msg_type *sptr);

/*
 * nv_banner_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_banner_type (xdr_s_type *xdrs, nv_banner_type const *sptr);

/*
 * nv_banner_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_banner_type (xdr_s_type *xdrs, nv_banner_type *sptr);

/*
 * nv_auto_answer_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_auto_answer_type (xdr_s_type *xdrs, nv_auto_answer_type const *sptr);

/*
 * nv_auto_answer_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_auto_answer_type (xdr_s_type *xdrs, nv_auto_answer_type *sptr);

/*
 * nv_auto_redial_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_auto_redial_type (xdr_s_type *xdrs, nv_auto_redial_type const *sptr);

/*
 * nv_auto_redial_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_auto_redial_type (xdr_s_type *xdrs, nv_auto_redial_type *sptr);

/*
 * nv_lock_code_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_lock_code_type (xdr_s_type *xdrs, nv_lock_code_type const *sptr);

/*
 * nv_lock_code_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_lock_code_type (xdr_s_type *xdrs, nv_lock_code_type *sptr);

/*
 * nv_call_cnt_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_call_cnt_type (xdr_s_type *xdrs, nv_call_cnt_type const *sptr);

/*
 * nv_call_cnt_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_call_cnt_type (xdr_s_type *xdrs, nv_call_cnt_type *sptr);

/*
 * nv_ruim_chv_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ruim_chv_type (xdr_s_type *xdrs, nv_ruim_chv_type const *sptr);

/*
 * nv_ruim_chv_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ruim_chv_type (xdr_s_type *xdrs, nv_ruim_chv_type *sptr);

/*
 * nv_bd_addr_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_bd_addr_type (xdr_s_type *xdrs, nv_bd_addr_type const *sptr);

/*
 * nv_bd_addr_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_bd_addr_type (xdr_s_type *xdrs, nv_bd_addr_type *sptr);

/*
 * nv_srv_domain_pref_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_srv_domain_pref_type (xdr_s_type *xdrs, nv_srv_domain_pref_type const *sptr);

/*
 * nv_srv_domain_pref_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_srv_domain_pref_type (xdr_s_type *xdrs, nv_srv_domain_pref_type *sptr);

/*
 * nv_err_fatal_options_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_err_fatal_options_type (xdr_s_type *xdrs, nv_err_fatal_options_type const *sptr);

/*
 * nv_err_fatal_options_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_err_fatal_options_type (xdr_s_type *xdrs, nv_err_fatal_options_type *sptr);

/*
 * nv_ue_imei_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ue_imei_type (xdr_s_type *xdrs, nv_ue_imei_type const *sptr);

/*
 * nv_ue_imei_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ue_imei_type (xdr_s_type *xdrs, nv_ue_imei_type *sptr);

/*
 * nv_ds_mip_rm_nai_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ds_mip_rm_nai_type (xdr_s_type *xdrs, nv_ds_mip_rm_nai_type const *sptr);

/*
 * nv_ds_mip_rm_nai_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ds_mip_rm_nai_type (xdr_s_type *xdrs, nv_ds_mip_rm_nai_type *sptr);

/*
 * nv_ds_sip_rm_nai_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ds_sip_rm_nai_type (xdr_s_type *xdrs, nv_ds_sip_rm_nai_type const *sptr);

/*
 * nv_ds_sip_rm_nai_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ds_sip_rm_nai_type (xdr_s_type *xdrs, nv_ds_sip_rm_nai_type *sptr);

/*
 * nv_trm_config_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_trm_config_type (xdr_s_type *xdrs, nv_trm_config_type const *sptr);

/*
 * nv_trm_config_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_trm_config_type (xdr_s_type *xdrs, nv_trm_config_type *sptr);

/*
 * nv_rmnet_autoconnect_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_rmnet_autoconnect_type (xdr_s_type *xdrs, nv_rmnet_autoconnect_type const *sptr);

/*
 * nv_rmnet_autoconnect_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_rmnet_autoconnect_type (xdr_s_type *xdrs, nv_rmnet_autoconnect_type *sptr);

/*
 * nv_nitz_plmn_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_nitz_plmn_type (xdr_s_type *xdrs, nv_nitz_plmn_type const *sptr);

/*
 * nv_nitz_plmn_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_nitz_plmn_type (xdr_s_type *xdrs, nv_nitz_plmn_type *sptr);

/*
 * nv_hdrkep_config_params_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_hdrkep_config_params_type (xdr_s_type *xdrs, nv_hdrkep_config_params_type const *sptr);

/*
 * nv_hdrkep_config_params_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_hdrkep_config_params_type (xdr_s_type *xdrs, nv_hdrkep_config_params_type *sptr);

/*
 * nv_hdrscmdb_secure_config_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_hdrscmdb_secure_config_type (xdr_s_type *xdrs, nv_hdrscmdb_secure_config_type const *sptr);

/*
 * nv_hdrscmdb_secure_config_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_hdrscmdb_secure_config_type (xdr_s_type *xdrs, nv_hdrscmdb_secure_config_type *sptr);

/*
 * nv_gpsone_password_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_gpsone_password_type (xdr_s_type *xdrs, nv_gpsone_password_type const *sptr);

/*
 * nv_gpsone_password_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_gpsone_password_type (xdr_s_type *xdrs, nv_gpsone_password_type *sptr);

/*
 * nv_dcvsapps_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_dcvsapps_type (xdr_s_type *xdrs, nv_dcvsapps_type const *sptr);

/*
 * nv_dcvsapps_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_dcvsapps_type (xdr_s_type *xdrs, nv_dcvsapps_type *sptr);

/*
 * nv_ipv6_priv_addr_config XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ipv6_priv_addr_config (xdr_s_type *xdrs, nv_ipv6_priv_addr_config const *sptr);

/*
 * nv_ipv6_priv_addr_config XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ipv6_priv_addr_config (xdr_s_type *xdrs, nv_ipv6_priv_addr_config *sptr);

/*
 * nv_nd_config_items XDR_NV_SEND
 */
boolean xdr_nv_send_nv_nd_config_items (xdr_s_type *xdrs, nv_nd_config_items const *sptr);

/*
 * nv_nd_config_items XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_nd_config_items (xdr_s_type *xdrs, nv_nd_config_items *sptr);

/*
 * nv_jcdma_ruimid XDR_NV_SEND
 */
boolean xdr_nv_send_nv_jcdma_ruimid (xdr_s_type *xdrs, nv_jcdma_ruimid const *sptr);

/*
 * nv_jcdma_ruimid XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_jcdma_ruimid (xdr_s_type *xdrs, nv_jcdma_ruimid *sptr);

/*
 * nv_jcdma_uim_lock_data XDR_NV_SEND
 */
boolean xdr_nv_send_nv_jcdma_uim_lock_data (xdr_s_type *xdrs, nv_jcdma_uim_lock_data const *sptr);

/*
 * nv_jcdma_uim_lock_data XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_jcdma_uim_lock_data (xdr_s_type *xdrs, nv_jcdma_uim_lock_data *sptr);

/*
 * nv_ds_at_v250_registers_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ds_at_v250_registers_type (xdr_s_type *xdrs, nv_ds_at_v250_registers_type const *sptr);

/*
 * nv_ds_at_v250_registers_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ds_at_v250_registers_type (xdr_s_type *xdrs, nv_ds_at_v250_registers_type *sptr);

/*
 * nv_ds_at_s_registers_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ds_at_s_registers_type (xdr_s_type *xdrs, nv_ds_at_s_registers_type const *sptr);

/*
 * nv_ds_at_s_registers_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ds_at_s_registers_type (xdr_s_type *xdrs, nv_ds_at_s_registers_type *sptr);

/*
 * nv_process_restart_switch_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_process_restart_switch_type (xdr_s_type *xdrs, nv_process_restart_switch_type const *sptr);

/*
 * nv_process_restart_switch_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_process_restart_switch_type (xdr_s_type *xdrs, nv_process_restart_switch_type *sptr);

/*
 * nv_ds_at_csas_csca_register XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ds_at_csas_csca_register (xdr_s_type *xdrs, nv_ds_at_csas_csca_register const *sptr);

/*
 * nv_ds_at_csas_csca_register XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ds_at_csas_csca_register (xdr_s_type *xdrs, nv_ds_at_csas_csca_register *sptr);

/*
 * nv_ds_at_csas_csmp_settings XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ds_at_csas_csmp_settings (xdr_s_type *xdrs, nv_ds_at_csas_csmp_settings const *sptr);

/*
 * nv_ds_at_csas_csmp_settings XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ds_at_csas_csmp_settings (xdr_s_type *xdrs, nv_ds_at_csas_csmp_settings *sptr);

/*
 * nv_ds_at_csas_cscb_settings XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ds_at_csas_cscb_settings (xdr_s_type *xdrs, nv_ds_at_csas_cscb_settings const *sptr);

/*
 * nv_ds_at_csas_cscb_settings XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ds_at_csas_cscb_settings (xdr_s_type *xdrs, nv_ds_at_csas_cscb_settings *sptr);

/*
 * nv_ds_sip_profile_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ds_sip_profile_type (xdr_s_type *xdrs, nv_ds_sip_profile_type const *sptr);

/*
 * nv_ds_sip_profile_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ds_sip_profile_type (xdr_s_type *xdrs, nv_ds_sip_profile_type *sptr);

/*
 * nv_ds_sip_profile_nai_info_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ds_sip_profile_nai_info_type (xdr_s_type *xdrs, nv_ds_sip_profile_nai_info_type const *sptr);

/*
 * nv_ds_sip_profile_nai_info_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ds_sip_profile_nai_info_type (xdr_s_type *xdrs, nv_ds_sip_profile_nai_info_type *sptr);

/*
 * nv_ds_sip_ppp_ss_info_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ds_sip_ppp_ss_info_type (xdr_s_type *xdrs, nv_ds_sip_ppp_ss_info_type const *sptr);

/*
 * nv_ds_sip_ppp_ss_info_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ds_sip_ppp_ss_info_type (xdr_s_type *xdrs, nv_ds_sip_ppp_ss_info_type *sptr);

/*
 * nv_iwlan_operator_id_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_iwlan_operator_id_type (xdr_s_type *xdrs, nv_iwlan_operator_id_type const *sptr);

/*
 * nv_iwlan_operator_id_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_iwlan_operator_id_type (xdr_s_type *xdrs, nv_iwlan_operator_id_type *sptr);

/*
 * nv_iwlan_realm_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_iwlan_realm_type (xdr_s_type *xdrs, nv_iwlan_realm_type const *sptr);

/*
 * nv_iwlan_realm_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_iwlan_realm_type (xdr_s_type *xdrs, nv_iwlan_realm_type *sptr);

/*
 * nv_iwlan_pdif_fqdn_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_iwlan_pdif_fqdn_type (xdr_s_type *xdrs, nv_iwlan_pdif_fqdn_type const *sptr);

/*
 * nv_iwlan_pdif_fqdn_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_iwlan_pdif_fqdn_type (xdr_s_type *xdrs, nv_iwlan_pdif_fqdn_type *sptr);

/*
 * nv_ppp_vsncp_config_data_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ppp_vsncp_config_data_type (xdr_s_type *xdrs, nv_ppp_vsncp_config_data_type const *sptr);

/*
 * nv_ppp_vsncp_config_data_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ppp_vsncp_config_data_type (xdr_s_type *xdrs, nv_ppp_vsncp_config_data_type *sptr);

/*
 * nv_eap_shared_secret_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_eap_shared_secret_type (xdr_s_type *xdrs, nv_eap_shared_secret_type const *sptr);

/*
 * nv_eap_shared_secret_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_eap_shared_secret_type (xdr_s_type *xdrs, nv_eap_shared_secret_type *sptr);

/*
 * nv_wlan_atheros_specific_cfg XDR_NV_SEND
 */
boolean xdr_nv_send_nv_wlan_atheros_specific_cfg (xdr_s_type *xdrs, nv_wlan_atheros_specific_cfg const *sptr);

/*
 * nv_wlan_atheros_specific_cfg XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_wlan_atheros_specific_cfg (xdr_s_type *xdrs, nv_wlan_atheros_specific_cfg *sptr);

/*
 * nv_ehrpd_milenage_op_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ehrpd_milenage_op_type (xdr_s_type *xdrs, nv_ehrpd_milenage_op_type const *sptr);

/*
 * nv_ehrpd_milenage_op_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ehrpd_milenage_op_type (xdr_s_type *xdrs, nv_ehrpd_milenage_op_type *sptr);

/*
 * nv_ehrpd_imsi_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_ehrpd_imsi_type (xdr_s_type *xdrs, nv_ehrpd_imsi_type const *sptr);

/*
 * nv_ehrpd_imsi_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_ehrpd_imsi_type (xdr_s_type *xdrs, nv_ehrpd_imsi_type *sptr);

/*
 * nv_hs_usb_phy_config_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_hs_usb_phy_config_type (xdr_s_type *xdrs, nv_hs_usb_phy_config_type const *sptr);

/*
 * nv_hs_usb_phy_config_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_hs_usb_phy_config_type (xdr_s_type *xdrs, nv_hs_usb_phy_config_type *sptr);

/*
 * nv_data_call_over_ehrpd_only_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_data_call_over_ehrpd_only_type (xdr_s_type *xdrs, nv_data_call_over_ehrpd_only_type const *sptr);

/*
 * nv_data_call_over_ehrpd_only_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_data_call_over_ehrpd_only_type (xdr_s_type *xdrs, nv_data_call_over_ehrpd_only_type *sptr);

/*
 * union_nv_item_type_ecc_list_arr XDR_NV_SEND
 */
boolean xdr_nv_send_union_nv_item_type_ecc_list_arr (xdr_s_type *xdrs, __packed byte  const (*objp)[3]);

/*
 * union_nv_item_type_ecc_list_arr XDR_NV_RECV
 */
boolean xdr_nv_recv_union_nv_item_type_ecc_list_arr (xdr_s_type *xdrs, __packed byte (*objp)[3]);

/*
 * nv_item_type XDR_NV_SEND
 */
boolean xdr_nv_send_nv_item_type (xdr_s_type *xdrs, nv_item_type const *uptr, nv_items_enum_type obj_disc);

/*
 * nv_item_type XDR_NV_RECV
 */
boolean xdr_nv_recv_nv_item_type (xdr_s_type *xdrs, nv_item_type *uptr, nv_items_enum_type obj_disc);

#endif /* ! NV_RPC_H */

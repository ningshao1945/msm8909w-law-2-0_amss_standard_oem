#ifndef REMOTE_STORAGE_RPC_H
#define REMOTE_STORAGE_RPC_H

/* REMOTE_STORAGE TOOL VERSION: 4.34 */
/*=============================================================================
                    R E M O T E _ S T O R A G E _ R P C . H

GENERAL DESCRIPTION
  This is an AUTO GENERATED file that provides declarations pertaining to the
  exporting of the remote_storage api using ONCRPC.

  ---------------------------------------------------------------------------
  Copyright (c) 2010 Qualcomm Technologies Incorporated.
  All Rights Reserved. QUALCOMM Proprietary and Confidential.
  ---------------------------------------------------------------------------
=============================================================================*/

/*=============================================================================

                              Edit History

                             AUTO GENERATED                                  */
/* Generated by following versions of Htorpc modules:
Id: //source/qcom/qct/core/mproc/tools/rel/04.01/htorpc/htorpc.pl#18 
Id: //source/qcom/qct/core/mproc/tools/rel/04.01/htorpc/lib/Htorpc/Start.pm#2 
Id: //source/qcom/qct/core/mproc/tools/rel/04.01/htorpc/lib/Htorpc/Htoxdr.pm#1 
Id: //source/qcom/qct/core/mproc/tools/rel/04.01/htorpc/lib/Htorpc/XDR.pm#6 
Id: //source/qcom/qct/core/mproc/tools/rel/04.01/htorpc/lib/Htorpc/Output.pm#26 
Id: //source/qcom/qct/core/mproc/tools/rel/04.01/htorpc/lib/Htorpc/Parser.pm#1 
Id: //source/qcom/qct/core/mproc/tools/rel/04.01/htorpc/lib/Htorpc/Metacomments.pm#4 
Id: //source/qcom/qct/core/mproc/tools/rel/04.01/htorpc/lib/Htorpc/SymbolTable.pm#2  

remote_storage Definition File(s):
Id: //source/qcom/qct/core/storage/remotefs/01/amss/remote_storage.h#2
=============================================================================*/
/*=============================================================================
$Header: //components/rel/tz.bf/2.5.c10/trustzone_images/core/api/rapi/storage/inc/remote_storage_rpc.h#1 $ 
=============================================================================*/


/* Include ONCRPC headers */
#include "oncrpc.h"
#include "comdef.h"

#define REMOTE_STORAGEPROG					0x300000a7
#define REMOTE_STORAGEVERS					0x00010001 /* 0x00010001 */
/*defines for feature and tool version*/
#define REMOTE_STORAGE_TOOLVERS					0x00040022
#define REMOTE_STORAGE_FEATURES					0x00000001
 

#define REMOTEFS_SRV_REGISTER_WRITE_IOVEC_VERS            	0x00010001
#define REMOTE_STORAGE_NULL_VERS                          	0x00010001
#define REMOTEFS_SRV_REGISTER_READ_IOVEC_VERS             	0x00010001
#define REMOTE_STORAGE_API_VERSIONS_VERS                  	0x00010001
#define REMOTE_STORAGE_RPC_GLUE_CODE_INFO_REMOTE_VERS     	0x00010001
#define REMOTEFS_SRV_UN_REGISTER_CB_VERS                  	0x00010001
#define REMOTEFS_SRV_REGISTER_CB_VERS                     	0x00010001
#define REMOTEFS_SRV_WRITE_FINISH_VERS                    	0x00010001
#define REMOTEFS_SRV_REGISTER_OPEN_VERS                   	0x00010001
#define REMOTEFS_SRV_FORCE_SYNC_VERS                      	0x00010001
#define REMOTEFS_SRV_GET_SYNC_STATUS_VERS                 	0x00010001
#define REMOTE_STORAGECBPROG					0x310000a7
#define REMOTE_STORAGECBVERS					0x00010001 /* 0x00010001 */

#define REMOTEFS_SRV_READ_IOVEC_CB_TYPE_VERS              	0X00010001
#define REMOTE_STORAGE_CB_NULL_VERS                       	0X00010001
#define REMOTEFS_SRV_EVENT_CB_TYPE_VERS                   	0X00010001
#define REMOTEFS_SRV_OPEN_CB_TYPE_VERS                    	0X00010001
#define REMOTEFS_SRV_WRITE_IOVEC_CB_TYPE_VERS             	0X00010001
/* prototypes for the app_init routines for the api and the api's callback
 * services
 */
extern void remote_storage_app_init( void );
extern void remote_storagecb_app_init( void );

/* prototypes for the app_lock routines for the api and the api's callback
 * services
 */
#define remote_storage_app_enable()  remote_storage_app_lock( FALSE )
#define remote_storage_app_disable() remote_storage_app_lock( TRUE )
extern void remote_storage_app_lock( boolean lock );

#define remote_storagecb_app_enable()  remote_storagecb_app_lock( FALSE )
#define remote_storagecb_app_disable() remote_storagecb_app_lock( TRUE )
extern void remote_storagecb_app_lock( boolean lock );

/* prototypes for glue code info querty functions:
 *
 * toolvers   : Tool version
 * features   : Features turned on in the code.
 *              0x00000001    ONCRPC Server Cleanup Support
 * proghash   : Unique hash value that represents the API XDR definition
 * cbproghash : Unique hash value that represents the Callbacks' XDR definition
 */
extern boolean remote_storage_rpc_glue_code_info_remote    /* REMOTE INFO */
(
  uint32 *toolvers,
  uint32 *features,
  uint32 *proghash,
  uint32 *cbproghash
);
extern boolean remote_storage_rpc_glue_code_info_local     /* LOCAL INFO */
(
  uint32 *toolvers,
  uint32 *features,
  uint32 *proghash,
  uint32 *cbproghash
);

/* prototype for API null routine */
extern boolean remote_storage_null(void);

/* prototype for API version function */
extern uint32 *remote_storage_api_versions
(
   uint32 *len
);

/* Start forward xdr procedure numbers */

#define ONCRPC_REMOTE_STORAGE_NULL_PROC 0
#define ONCRPC_REMOTE_STORAGE_RPC_GLUE_CODE_INFO_REMOTE_PROC 1

#define ONCRPC_REMOTEFS_SRV_WRITE_FINISH_PROC 2
#define ONCRPC_REMOTEFS_SRV_REGISTER_OPEN_PROC 3
#define ONCRPC_REMOTEFS_SRV_REGISTER_WRITE_IOVEC_PROC 4
#define ONCRPC_REMOTEFS_SRV_REGISTER_CB_PROC 5
#define ONCRPC_REMOTEFS_SRV_UN_REGISTER_CB_PROC 6
#define ONCRPC_REMOTEFS_SRV_FORCE_SYNC_PROC 7
#define ONCRPC_REMOTEFS_SRV_GET_SYNC_STATUS_PROC 8
#define ONCRPC_REMOTEFS_SRV_REGISTER_READ_IOVEC_PROC 9
#define ONCRPC_REMOTE_STORAGE_API_VERSIONS_PROC 0xFFFFFFFF


/* End forward xdr procedure numbers */
/* Start callback xdr procedure numbers */
#define ONCRPC_REMOTEFS_SRV_OPEN_CB_TYPE_PROC 1
#define ONCRPC_REMOTEFS_SRV_WRITE_IOVEC_CB_TYPE_PROC 2
#define ONCRPC_REMOTEFS_SRV_EVENT_CB_TYPE_PROC 3
#define ONCRPC_REMOTEFS_SRV_READ_IOVEC_CB_TYPE_PROC 4
/* End callback xdr procedure numbers */


/* XDR Routine Prototypes go here */

/*
 * struct remotefs_iovec_desc XDR_REMOTE_STORAGE_SEND
 */
boolean xdr_remote_storage_send_remotefs_iovec_desc (xdr_s_type *xdrs, struct remotefs_iovec_desc const *sptr);

/*
 * struct remotefs_iovec_desc XDR_REMOTE_STORAGE_RECV
 */
boolean xdr_remote_storage_recv_remotefs_iovec_desc (xdr_s_type *xdrs, struct remotefs_iovec_desc *sptr);

/*
 * struct remotefs_srv_close_args XDR_REMOTE_STORAGE_SEND
 */
boolean xdr_remote_storage_send_remotefs_srv_close_args (xdr_s_type *xdrs, struct remotefs_srv_close_args const *sptr);

/*
 * struct remotefs_srv_close_args XDR_REMOTE_STORAGE_RECV
 */
boolean xdr_remote_storage_recv_remotefs_srv_close_args (xdr_s_type *xdrs, struct remotefs_srv_close_args *sptr);

/*
 * struct remotefs_srv_write_block_args XDR_REMOTE_STORAGE_SEND
 */
boolean xdr_remote_storage_send_remotefs_srv_write_block_args (xdr_s_type *xdrs, struct remotefs_srv_write_block_args const *sptr);

/*
 * struct remotefs_srv_write_block_args XDR_REMOTE_STORAGE_RECV
 */
boolean xdr_remote_storage_recv_remotefs_srv_write_block_args (xdr_s_type *xdrs, struct remotefs_srv_write_block_args *sptr);

/*
 * struct remotefs_srv_get_dev_error_args XDR_REMOTE_STORAGE_SEND
 */
boolean xdr_remote_storage_send_remotefs_srv_get_dev_error_args (xdr_s_type *xdrs, struct remotefs_srv_get_dev_error_args const *sptr);

/*
 * struct remotefs_srv_get_dev_error_args XDR_REMOTE_STORAGE_RECV
 */
boolean xdr_remote_storage_recv_remotefs_srv_get_dev_error_args (xdr_s_type *xdrs, struct remotefs_srv_get_dev_error_args *sptr);

/*
 * struct remotefs_srv_send_user_data_args XDR_REMOTE_STORAGE_SEND
 */
boolean xdr_remote_storage_send_remotefs_srv_send_user_data_args (xdr_s_type *xdrs, struct remotefs_srv_send_user_data_args const *sptr);

/*
 * struct remotefs_srv_send_user_data_args XDR_REMOTE_STORAGE_RECV
 */
boolean xdr_remote_storage_recv_remotefs_srv_send_user_data_args (xdr_s_type *xdrs, struct remotefs_srv_send_user_data_args *sptr);

/*
 * union remotefs_srv_evnt_info_u XDR_REMOTE_STORAGE_SEND
 */
boolean xdr_remote_storage_send_remotefs_srv_evnt_info_u (xdr_s_type *xdrs, union remotefs_srv_evnt_info_u const *uptr, remotefs_srv_event_e_type obj_disc);

/*
 * union remotefs_srv_evnt_info_u XDR_REMOTE_STORAGE_RECV
 */
boolean xdr_remote_storage_recv_remotefs_srv_evnt_info_u (xdr_s_type *xdrs, union remotefs_srv_evnt_info_u *uptr, remotefs_srv_event_e_type obj_disc);

#endif /* ! REMOTE_STORAGE_RPC_H */

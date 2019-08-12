#ifndef PING_APPS_RPC_H
#define PING_APPS_RPC_H

/* PING_APPS TOOL VERSION: 4.33 */
/*=============================================================================
                         P I N G _ A P P S _ R P C . H

GENERAL DESCRIPTION
  This is an AUTO GENERATED file that provides declarations pertaining to the
  exporting of the ping_apps api using ONCRPC.

  ---------------------------------------------------------------------------
  Copyright (c) 2009 Qualcomm Technologies Incorporated.
  All Rights Reserved. QUALCOMM Proprietary and Confidential.
  ---------------------------------------------------------------------------
=============================================================================*/

/*=============================================================================

                              Edit History

                             AUTO GENERATED                                  */
/* Generated by following versions of Htorpc modules:
Id: //source/qcom/qct/core/mproc/tools/rel/04.07/htorpc/htorpc.pl#4 
Id: //source/qcom/qct/core/mproc/tools/rel/04.07/htorpc/lib/Htorpc/Start.pm#2 
Id: //source/qcom/qct/core/mproc/tools/rel/04.07/htorpc/lib/Htorpc/Htoxdr.pm#1 
Id: //source/qcom/qct/core/mproc/tools/rel/04.07/htorpc/lib/Htorpc/XDR.pm#2 
Id: //source/qcom/qct/core/mproc/tools/rel/04.07/htorpc/lib/Htorpc/Output.pm#4 
Id: //source/qcom/qct/core/mproc/tools/rel/04.07/htorpc/lib/Htorpc/Parser.pm#1 
Id: //source/qcom/qct/core/mproc/tools/rel/04.07/htorpc/lib/Htorpc/Metacomments.pm#3 
Id: //source/qcom/qct/core/mproc/tools/rel/04.07/htorpc/lib/Htorpc/SymbolTable.pm#2  
=============================================================================*/
/*=============================================================================
$Header: //components/rel/tz.bf/2.5.c10/trustzone_images/core/api/rapi/mproc/inc/ping_apps_rpc.h#1 $ 
=============================================================================*/


/* Include ONCRPC headers */
#include "oncrpc.h"
#include "comdef.h"

#define PING_APPSPROG					0x30000082
#define PING_APPSVERS					0x00010001 /* 0x00010001 */
/*defines for feature and tool version*/
#define PING_APPS_TOOLVERS					0x00040021
#define PING_APPS_FEATURES					0x00000001
 

#define PING_APPS_REGISTER_DATA_CB_VERS                   	0x00010001
#define PING_APPS_UN_REGISTER_VERS                        	0x00010001
#define PING_APPS_REGISTER_VERS                           	0x00010001
#define PING_APPS_NULL_VERS                               	0x00010001
#define PING_APPS_API_VERSIONS_VERS                       	0x00010001
#define PING_APPS_RPC_GLUE_CODE_INFO_REMOTE_VERS          	0x00010001
#define PING_APPS_DATA_VERS                               	0x00010001
#define PING_APPS_UN_REGISTER_DATA_CB_VERS                	0x00010001
#define PING_APPSCBPROG					0x31000082
#define PING_APPSCBVERS					0x00010001 /* 0x00010001 */

#define PING_APPS_CB_NULL_VERS                            	0X00010001
#define PING_APPS_CB_F_TYPE_VERS                          	0X00010001
#define PING_APPS_DATA_CB_F_TYPE_VERS                     	0X00010001
/* prototypes for the app_init routines for the api and the api's callback
 * services
 */
extern void ping_apps_app_init( void );
extern void ping_appscb_app_init( void );

/* prototypes for the app_lock routines for the api and the api's callback
 * services
 */
#define ping_apps_app_enable()  ping_apps_app_lock( FALSE )
#define ping_apps_app_disable() ping_apps_app_lock( TRUE )
extern void ping_apps_app_lock( boolean lock );

#define ping_appscb_app_enable()  ping_appscb_app_lock( FALSE )
#define ping_appscb_app_disable() ping_appscb_app_lock( TRUE )
extern void ping_appscb_app_lock( boolean lock );

/* prototypes for glue code info querty functions:
 *
 * toolvers   : Tool version
 * features   : Features turned on in the code.
 *              0x00000001    ONCRPC Server Cleanup Support
 * proghash   : Unique hash value that represents the API XDR definition
 * cbproghash : Unique hash value that represents the Callbacks' XDR definition
 */
extern boolean ping_apps_rpc_glue_code_info_remote    /* REMOTE INFO */
(
  uint32 *toolvers,
  uint32 *features,
  uint32 *proghash,
  uint32 *cbproghash
);
extern boolean ping_apps_rpc_glue_code_info_local     /* LOCAL INFO */
(
  uint32 *toolvers,
  uint32 *features,
  uint32 *proghash,
  uint32 *cbproghash
);

/* prototype for API null routine */
extern boolean ping_apps_null(void);

/* prototype for API version function */
extern uint32 *ping_apps_api_versions
(
   uint32 *len
);

/* Start forward xdr procedure numbers */

#define ONCRPC_PING_APPS_NULL_PROC 0
#define ONCRPC_PING_APPS_RPC_GLUE_CODE_INFO_REMOTE_PROC 1

#define ONCRPC_PING_APPS_REGISTER_PROC 2
#define ONCRPC_PING_APPS_UN_REGISTER_PROC 3
#define ONCRPC_PING_APPS_DATA_PROC 4
#define ONCRPC_PING_APPS_UN_REGISTER_DATA_CB_PROC 5
#define ONCRPC_PING_APPS_REGISTER_DATA_CB_PROC 6
#define ONCRPC_PING_APPS_API_VERSIONS_PROC 0xFFFFFFFF


/* End forward xdr procedure numbers */
/* Start callback xdr procedure numbers */
#define ONCRPC_PING_APPS_DATA_CB_F_TYPE_PROC 1
#define ONCRPC_PING_APPS_CB_F_TYPE_PROC 2
/* End callback xdr procedure numbers */


/* XDR Routine Prototypes go here */

#endif /* ! PING_APPS_RPC_H */

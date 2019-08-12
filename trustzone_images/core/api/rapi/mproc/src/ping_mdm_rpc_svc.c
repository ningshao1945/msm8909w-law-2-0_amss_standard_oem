/* PING_MDM_RPC TOOL VERSION: 4.35 */
/*=============================================================================
                      P I N G _ M D M _ R P C _ S V C . C

GENERAL DESCRIPTION
  This is an AUTO GENERATED file that dispatches RPC requests targetting the
  ping_mdm_rpc api.

  ---------------------------------------------------------------------------
  Copyright (c) 2009 Qualcomm Technologies Incorporated.
  All Rights Reserved. QUALCOMM Proprietary and Confidential.
  ---------------------------------------------------------------------------
=============================================================================*/

/*=============================================================================

                              Edit History

                             AUTO GENERATED                                  */
/* Generated by following versions of Htorpc modules:
Id: //source/qcom/qct/core/mproc/tools/rel/04.07/htorpc/htorpc.pl#7 
Id: //source/qcom/qct/core/mproc/tools/rel/04.07/htorpc/lib/Htorpc/Start.pm#2 
Id: //source/qcom/qct/core/mproc/tools/rel/04.07/htorpc/lib/Htorpc/Htoxdr.pm#1 
Id: //source/qcom/qct/core/mproc/tools/rel/04.07/htorpc/lib/Htorpc/XDR.pm#2 
Id: //source/qcom/qct/core/mproc/tools/rel/04.07/htorpc/lib/Htorpc/Output.pm#6 
Id: //source/qcom/qct/core/mproc/tools/rel/04.07/htorpc/lib/Htorpc/Parser.pm#1 
Id: //source/qcom/qct/core/mproc/tools/rel/04.07/htorpc/lib/Htorpc/Metacomments.pm#4 
Id: //source/qcom/qct/core/mproc/tools/rel/04.07/htorpc/lib/Htorpc/SymbolTable.pm#2   

ping_mdm_rpc Definition File(s):
Id: //source/qcom/qct/core/api/rapi/mproc/rel/04.07/inc/ping_mdm_rpc.h#1
=============================================================================*/
/*=============================================================================
$Header: //components/rel/tz.bf/2.5.c10/trustzone_images/core/api/rapi/mproc/src/ping_mdm_rpc_svc.c#1 $ 
=============================================================================*/


/* Include files */
#include "oncrpc.h"
#include "ping_mdm_rpc.h"
#include "ping_mdm_rpc_rpc.h"

/* Only one copy needed per API */
//static opaque_auth Ping_mdm_rpcCred = { ONCRPC_AUTH_NONE, 0, 0 };
static opaque_auth Ping_mdm_rpcVerf = { ONCRPC_AUTH_NONE, 0, 0 };

static opaque_auth Ping_mdm_rpccbCred = { ONCRPC_AUTH_NONE, 0, 0 };
static opaque_auth Ping_mdm_rpccbVerf = { ONCRPC_AUTH_NONE, 0, 0 };

/*=======================================================================
            Arg structs for the abnormal exit of client handlers
=======================================================================*/

typedef struct
{
  ping_mdm_cb_f_type *cb1;

} ping_mdm_un_register_release_args_s_type;

static boolean ping_mdm_un_register_release_args_s_type_compare(void *s1, void *s2)
{
  ping_mdm_un_register_release_args_s_type *ss1 = (ping_mdm_un_register_release_args_s_type *) s1;
  ping_mdm_un_register_release_args_s_type *ss2 = (ping_mdm_un_register_release_args_s_type *) s2;

  if ( s1 == NULL || s2 == NULL )
  {
    return (s1 == s2);
  }

  if ( ss1->cb1 != ss2->cb1 )
  {
    return FALSE;
  }

  return TRUE;
} /* ping_mdm_un_register_release_args_s_type_compare */

typedef struct
{
  ping_mdm_data_cb_f_type *cb1;

} ping_mdm_un_register_data_cb_release_args_s_type;

static boolean ping_mdm_un_register_data_cb_release_args_s_type_compare(void *s1, void *s2)
{
  ping_mdm_un_register_data_cb_release_args_s_type *ss1 = (ping_mdm_un_register_data_cb_release_args_s_type *) s1;
  ping_mdm_un_register_data_cb_release_args_s_type *ss2 = (ping_mdm_un_register_data_cb_release_args_s_type *) s2;

  if ( s1 == NULL || s2 == NULL )
  {
    return (s1 == s2);
  }

  if ( ss1->cb1 != ss2->cb1 )
  {
    return FALSE;
  }

  return TRUE;
} /* ping_mdm_un_register_data_cb_release_args_s_type_compare */
/*=======================================================================
           Default handlers called upon abnormal client exit
=======================================================================*/

static void ping_mdm_register_release(void *__rel_args)
{
  ping_mdm_un_register( ((ping_mdm_un_register_release_args_s_type *)__rel_args)->cb1 );
  oncrpc_mem_free(__rel_args);
} /* ping_mdm_register_release */

static void ping_mdm_register_data_cb_release(void *__rel_args)
{
  ping_mdm_un_register_data_cb( ((ping_mdm_un_register_data_cb_release_args_s_type *)__rel_args)->cb1 );
  oncrpc_mem_free(__rel_args);
} /* ping_mdm_register_data_cb_release */

static void ping_mdm_register_random_data_cb_release(void *__rel_args)
{
  ping_mdm_un_register_data_cb( ((ping_mdm_un_register_data_cb_release_args_s_type *)__rel_args)->cb1 );
  oncrpc_mem_free(__rel_args);
} /* ping_mdm_register_random_data_cb_release */
/*=======================================================================
             Prototypes for the API's RPC Server Functions
=======================================================================*/

static void ping_mdm_rpcprog_0x00010002 ( struct svc_req *rqstp, xdr_s_type *srv );
static void ping_mdm_rpc_null_0x00010002( xdr_s_type *svc );
static void ping_mdm_rpc_rpc_glue_code_info_remote_0x00010002( xdr_s_type *svc );
static void ping_mdm_rpc_api_versions_0x00010002( xdr_s_type *srv );

static void ping_mdm_register_0x00010002( xdr_s_type *srv );

static void ping_mdm_un_register_0x00010002( xdr_s_type *srv );

static void ping_mdm_data_0x00010002( xdr_s_type *srv );

static void ping_mdm_un_register_data_cb_0x00010002( xdr_s_type *srv );

static void ping_mdm_register_data_cb_0x00010002( xdr_s_type *srv );

static void ping_mdm_register_random_data_cb_0x00010002( xdr_s_type *srv );

static void ping_mdm_reset_nominal_tasks_0x00010002( xdr_s_type *srv );

static void ping_mdm_get_current_num_tasks_0x00010002( xdr_s_type *srv );

static void ping_mdm_get_max_tasks_0x00010002( xdr_s_type *srv );


/*=======================================================================
             Prototypes for the API's Callback RPC clients
=======================================================================*/

static boolean ping_mdm_data_cb_f_type_clnt_0x00010002(uint32 *data,  uint32 size_words,  uint32 sum);

static void ping_mdm_cb_f_type_clnt_0x00010002(int val);

/******************************************************************************/
/*=======================================================================
             API RPC Server Implementation
=======================================================================*/
static uint32 ping_mdm_rpc_api_versions_table[] = {  0x00010001 , 0x00010002  };

uint32 * ping_mdm_rpc_api_versions(uint32 *size_entries)
{
  *size_entries = sizeof( ping_mdm_rpc_api_versions_table) / sizeof(uint32);
  return ping_mdm_rpc_api_versions_table;
}

void ping_mdm_rpc_app_init( void )
{
  (void) svc_register_auto_apiversions(PING_MDM_RPCPROG, PING_MDM_RPCVERS, ping_mdm_rpcprog_0x00010002, 
                                       ping_mdm_rpc_api_versions);
} /* ping_mdm_rpc_app_init */

void ping_mdm_rpc_app_lock( boolean lock )
{
  svc_lock( PING_MDM_RPCPROG, PING_MDM_RPCVERS, lock );
} /* ping_mdm_rpc_app_lock */

static void ping_mdm_rpcprog_0x00010002 ( struct svc_req *rqstp, xdr_s_type *srv )
{
  switch ( rqstp->rq_proc ) {
    case ONCRPC_PING_MDM_RPC_NULL_PROC:
      ping_mdm_rpc_null_0x00010002( srv );
      break;
    case ONCRPC_PING_MDM_RPC_RPC_GLUE_CODE_INFO_REMOTE_PROC:
      ping_mdm_rpc_rpc_glue_code_info_remote_0x00010002( srv );
      break;
    case ONCRPC_PING_MDM_REGISTER_PROC:
      ping_mdm_register_0x00010002( srv );
      break;
    case ONCRPC_PING_MDM_UN_REGISTER_PROC:
      ping_mdm_un_register_0x00010002( srv );
      break;
    case ONCRPC_PING_MDM_DATA_PROC:
      ping_mdm_data_0x00010002( srv );
      break;
    case ONCRPC_PING_MDM_UN_REGISTER_DATA_CB_PROC:
      ping_mdm_un_register_data_cb_0x00010002( srv );
      break;
    case ONCRPC_PING_MDM_REGISTER_DATA_CB_PROC:
      ping_mdm_register_data_cb_0x00010002( srv );
      break;
    case ONCRPC_PING_MDM_REGISTER_RANDOM_DATA_CB_PROC:
      ping_mdm_register_random_data_cb_0x00010002( srv );
      break;
    case ONCRPC_PING_MDM_RESET_NOMINAL_TASKS_PROC:
      ping_mdm_reset_nominal_tasks_0x00010002( srv );
      break;
    case ONCRPC_PING_MDM_GET_CURRENT_NUM_TASKS_PROC:
      ping_mdm_get_current_num_tasks_0x00010002( srv );
      break;
    case ONCRPC_PING_MDM_GET_MAX_TASKS_PROC:
      ping_mdm_get_max_tasks_0x00010002( srv );
      break;
    case ONCRPC_PING_MDM_RPC_API_VERSIONS_PROC:
      ping_mdm_rpc_api_versions_0x00010002( srv );
      break;

    default:
      // invalid RPC procedure number
      (void) XDR_MSG_DONE( srv );
      svcerr_default_err( srv, rqstp, ping_mdm_rpc_api_versions  );
      break;
  }

  oncrpcxdr_mem_free( srv );
} /* ping_mdm_rpcprog_0x00010002 */

/******************************************************************************/

static void ping_mdm_rpc_null_0x00010002( xdr_s_type *srv )
{
  if ( ! XDR_MSG_DONE( srv ) ) {
    // send svcerr_decode reply
    svcerr_decode( srv );
    return;
  }

  if ( ! xdr_reply_msg_start( srv, &Ping_mdm_rpcVerf ) ) {
    // send svcerr_systemerr reply
    svcerr_systemerr( srv );
    return;
  }

  if ( ! XDR_MSG_SEND( srv, NULL ) ) {
    XDR_MSG_SEND_ERR( srv, NULL );
  }
} /* ping_mdm_rpc_null_0x00010002 */

static void ping_mdm_rpc_rpc_glue_code_info_remote_0x00010002( xdr_s_type *srv )
{
  uint32 toolvers   = PING_MDM_RPC_TOOLVERS; /* 4.35 */
  uint32 proghash   = 0x00010002; /* 0x00010002 */
  uint32 cbproghash = 0x00010002; /* 0x00010002 */
  uint32 features   = PING_MDM_RPC_FEATURES; /* ONCRPC Server Cleanup Support */
                      

  if ( ! XDR_MSG_DONE( srv ) ) {
    // send svcerr_decode reply
    svcerr_decode( srv );
    return;
  }

  if ( ! xdr_reply_msg_start( srv, &Ping_mdm_rpcVerf ) ||
       ! XDR_SEND_UINT32( srv, &toolvers ) ||
       ! XDR_SEND_UINT32( srv, &features ) ||
       ! XDR_SEND_UINT32( srv, &proghash ) ||
       ! XDR_SEND_UINT32( srv, &cbproghash ) )
  {
    // send svcerr_systemerr reply
    svcerr_systemerr( srv );
    return;
  }

  if ( ! XDR_MSG_SEND( srv, NULL ) ) {
    XDR_MSG_SEND_ERR( srv, NULL );
  }
} /* ping_mdm_rpc_rpc_glue_code_info_remote_0x00010002 */

static void ping_mdm_register_0x00010002( xdr_s_type *srv )
{
  boolean xdr_status = TRUE;
  int xdr_op_number = 0;
  uint32 cb_id1;
  ping_mdm_cb_f_type *cb1;
  int num;

  unsigned long ping_mdm_register_result;

  /* XDR OP NUMBER = 1 */
  xdr_op_number = 1;
  xdr_status = XDR_RECV_UINT32( srv, &cb_id1 );

  /*lint -save -e611*/
  cb1 = (ping_mdm_cb_f_type *) rpc_svc_callback_register( (void *) ping_mdm_cb_f_type_clnt_0x00010002, srv, cb_id1 ); 
  /*lint -restore */

  /* XDR OP NUMBER = 2 */
  if ( xdr_status )
  {
    xdr_op_number = 2;
    xdr_status = XDR_RECV_INT( srv, &num );
  }

  if ( xdr_status )
  {
    xdr_op_number++;
  }

  if ( ! XDR_MSG_DONE( srv ) || ! xdr_status ) {
    XDR_OP_ERR( srv, xdr_op_number );
    // send svcerr_decode reply
    svcerr_decode( srv );
    return;
  }

  ping_mdm_register_result = ping_mdm_register(cb1, num);

  /* XDR OP NUMBER = 1 */
  xdr_op_number = 1;
  xdr_status = xdr_reply_msg_start( srv, &Ping_mdm_rpcVerf );

  /* XDR OP NUMBER = 2 */
  if ( xdr_status )
  {
    xdr_op_number = 2;
    xdr_status = XDR_SEND_UINT32( srv, &ping_mdm_register_result );
  }

  if ( ! xdr_status )
  {
    XDR_OP_ERR( srv, xdr_op_number );
    // send svcerr_systemerr reply
    svcerr_systemerr( srv );
    return;
  }

  if ( ! XDR_MSG_SEND( srv, NULL ) ) {
    XDR_MSG_SEND_ERR( srv, NULL );
  }

  { /* -------------------------------------------------------------------------
     * Register a release handler for this function with ONCRPC to be called
     * if the client dies before calling ping_mdm_un_register
     */
    ping_mdm_un_register_release_args_s_type *__rel_args;
    __rel_args = oncrpc_mem_alloc(sizeof(ping_mdm_un_register_release_args_s_type));
    memset((void *)__rel_args, 0, sizeof(ping_mdm_un_register_release_args_s_type));

    __rel_args->cb1 = cb1;

    oncrpc_register_client_exit_notification_cb( srv,
                                                 ping_mdm_register_release,
                                                  __rel_args );
  } /* ---------------------------------------------------------------------- */
} /* ping_mdm_register_0x00010002 */

static void ping_mdm_un_register_0x00010002( xdr_s_type *srv )
{
  boolean xdr_status = TRUE;
  int xdr_op_number = 0;
  uint32 cb_id1;
  ping_mdm_cb_f_type *cb1;

  unsigned long ping_mdm_un_register_result;


  ping_mdm_un_register_release_args_s_type __comp_args;
  ping_mdm_un_register_release_args_s_type *__saved_args = NULL;

  /* XDR OP NUMBER = 1 */
  xdr_op_number = 1;
  xdr_status = XDR_RECV_UINT32( srv, &cb_id1 );

  /*lint -save -e611*/
  cb1 = (ping_mdm_cb_f_type *) rpc_svc_callback_register( (void *) ping_mdm_cb_f_type_clnt_0x00010002, srv, cb_id1 ); 
  /*lint -restore */

  /* XDR OP NUMBER = 1 */
  xdr_op_number = 1;

  if ( ! XDR_MSG_DONE( srv ) || ! xdr_status ) {
    XDR_OP_ERR( srv, xdr_op_number );
    // send svcerr_decode reply
    svcerr_decode( srv );
    return;
  }

  { /* -------------------------------------------------------------------------
     * Deregister the release handler from ONCRPC since the client called
     * the release API on its own.
     */
    __comp_args.cb1 = cb1;

    __saved_args = (ping_mdm_un_register_release_args_s_type *) oncrpc_unregister_client_exit_notification_cb
                               ( srv,
                                 ping_mdm_register_release,
                                 &__comp_args,
                                 ping_mdm_un_register_release_args_s_type_compare );
  } /* ---------------------------------------------------------------------- */

  ping_mdm_un_register_result = ping_mdm_un_register(cb1);

  /* XDR OP NUMBER = 1 */
  xdr_op_number = 1;
  xdr_status = xdr_reply_msg_start( srv, &Ping_mdm_rpcVerf );

  /* XDR OP NUMBER = 2 */
  if ( xdr_status )
  {
    xdr_op_number = 2;
    xdr_status = XDR_SEND_UINT32( srv, &ping_mdm_un_register_result );
  }

  if ( ! xdr_status )
  {
    XDR_OP_ERR( srv, xdr_op_number );
    // send svcerr_systemerr reply
    svcerr_systemerr( srv );
    return;
  }

  if ( ! XDR_MSG_SEND( srv, NULL ) ) {
    XDR_MSG_SEND_ERR( srv, NULL );
  }

  { /* -------------------------------------------------------------------------
     * Free the data that was allocated for the saved struct ( __saved_args )
     */
    if ( __saved_args != NULL )
    {
      oncrpc_mem_free(__saved_args);
    }
  } /* ---------------------------------------------------------------------- */
} /* ping_mdm_un_register_0x00010002 */

static void ping_mdm_data_0x00010002( xdr_s_type *srv )
{
  boolean xdr_status = TRUE;
  int xdr_op_number = 0;
  uint32 i;
  void *memset_temp;
  uint32 length_uint32;
  uint32 *data = NULL;
  uint32 size_words;

  uint32 ping_mdm_data_result;

  /* XDR OP NUMBER = 1 */
  xdr_op_number = 1;
  xdr_status = XDR_RECV_UINT32( srv, &length_uint32 );

  /* XDR OP NUMBER = 2 */
  if ( xdr_status && length_uint32 > 0 )
  {
    xdr_op_number  = 2;
    memset_temp = oncrpcxdr_mem_alloc( srv, length_uint32 * sizeof( *data ));
    memset(memset_temp, 0, length_uint32 * sizeof( *data ));
    data = memset_temp;


    /* Calling array of XDR routines */
    for ( i = 0; xdr_status && i < (length_uint32); i++ ) {
      /*lint -save -e545*/
      xdr_status = XDR_RECV_UINT32( srv, &(data[i]) );
      /*lint -restore */
    }
  }

  /* XDR OP NUMBER = 3 */
  if ( xdr_status )
  {
    xdr_op_number = 3;
    xdr_status = XDR_RECV_UINT32( srv, &size_words );
  }

  if ( xdr_status )
  {
    xdr_op_number++;
  }

  if ( ! XDR_MSG_DONE( srv ) || ! xdr_status ) {
    XDR_OP_ERR( srv, xdr_op_number );
    // send svcerr_decode reply
    svcerr_decode( srv );
    return;
  }

  ping_mdm_data_result = ping_mdm_data(data, size_words);

  /* XDR OP NUMBER = 1 */
  xdr_op_number = 1;
  xdr_status = xdr_reply_msg_start( srv, &Ping_mdm_rpcVerf );

  /* XDR OP NUMBER = 2 */
  if ( xdr_status )
  {
    xdr_op_number = 2;
    xdr_status = XDR_SEND_UINT32( srv, &ping_mdm_data_result );
  }

  if ( ! xdr_status )
  {
    XDR_OP_ERR( srv, xdr_op_number );
    // send svcerr_systemerr reply
    svcerr_systemerr( srv );
    return;
  }

  if ( ! XDR_MSG_SEND( srv, NULL ) ) {
    XDR_MSG_SEND_ERR( srv, NULL );
  }
} /* ping_mdm_data_0x00010002 */

static void ping_mdm_un_register_data_cb_0x00010002( xdr_s_type *srv )
{
  boolean xdr_status = TRUE;
  int xdr_op_number = 0;
  uint32 cb_id1;
  ping_mdm_data_cb_f_type *cb1;

  unsigned long ping_mdm_un_register_data_cb_result;


  ping_mdm_un_register_data_cb_release_args_s_type __comp_args;
  ping_mdm_un_register_data_cb_release_args_s_type *__saved_args = NULL;

  /* XDR OP NUMBER = 1 */
  xdr_op_number = 1;
  xdr_status = XDR_RECV_UINT32( srv, &cb_id1 );

  /*lint -save -e611*/
  cb1 = (ping_mdm_data_cb_f_type *) rpc_svc_callback_register( (void *) ping_mdm_data_cb_f_type_clnt_0x00010002, srv, cb_id1 ); 
  /*lint -restore */

  /* XDR OP NUMBER = 1 */
  xdr_op_number = 1;

  if ( ! XDR_MSG_DONE( srv ) || ! xdr_status ) {
    XDR_OP_ERR( srv, xdr_op_number );
    // send svcerr_decode reply
    svcerr_decode( srv );
    return;
  }

  { /* -------------------------------------------------------------------------
     * Deregister the release handler from ONCRPC since the client called
     * the release API on its own.
     */
    __comp_args.cb1 = cb1;

    __saved_args = (ping_mdm_un_register_data_cb_release_args_s_type *) oncrpc_unregister_client_exit_notification_cb
                               ( srv,
                                 ping_mdm_register_random_data_cb_release,
                                 &__comp_args,
                                 ping_mdm_un_register_data_cb_release_args_s_type_compare );
  } /* ---------------------------------------------------------------------- */

  ping_mdm_un_register_data_cb_result = ping_mdm_un_register_data_cb(cb1);

  /* XDR OP NUMBER = 1 */
  xdr_op_number = 1;
  xdr_status = xdr_reply_msg_start( srv, &Ping_mdm_rpcVerf );

  /* XDR OP NUMBER = 2 */
  if ( xdr_status )
  {
    xdr_op_number = 2;
    xdr_status = XDR_SEND_UINT32( srv, &ping_mdm_un_register_data_cb_result );
  }

  if ( ! xdr_status )
  {
    XDR_OP_ERR( srv, xdr_op_number );
    // send svcerr_systemerr reply
    svcerr_systemerr( srv );
    return;
  }

  if ( ! XDR_MSG_SEND( srv, NULL ) ) {
    XDR_MSG_SEND_ERR( srv, NULL );
  }

  { /* -------------------------------------------------------------------------
     * Free the data that was allocated for the saved struct ( __saved_args )
     */
    if ( __saved_args != NULL )
    {
      oncrpc_mem_free(__saved_args);
    }
  } /* ---------------------------------------------------------------------- */
} /* ping_mdm_un_register_data_cb_0x00010002 */

static void ping_mdm_register_data_cb_0x00010002( xdr_s_type *srv )
{
  boolean xdr_status = TRUE;
  int xdr_op_number = 0;
  uint32 cb_id1;
  ping_mdm_data_cb_f_type *cb1;
  uint32 num_callbacks;
  uint32 size_words;
  uint32 interval_ms;
  uint32 num_tasks;

  unsigned long ping_mdm_register_data_cb_result;

  /* XDR OP NUMBER = 1 */
  xdr_op_number = 1;
  xdr_status = XDR_RECV_UINT32( srv, &cb_id1 );

  /*lint -save -e611*/
  cb1 = (ping_mdm_data_cb_f_type *) rpc_svc_callback_register( (void *) ping_mdm_data_cb_f_type_clnt_0x00010002, srv, cb_id1 ); 
  /*lint -restore */

  /* XDR OP NUMBER = 2 */
  if ( xdr_status )
  {
    xdr_op_number = 2;
    xdr_status = XDR_RECV_UINT32( srv, &num_callbacks );
  }

  /* XDR OP NUMBER = 3 */
  if ( xdr_status )
  {
    xdr_op_number = 3;
    xdr_status = XDR_RECV_UINT32( srv, &size_words );
  }

  /* XDR OP NUMBER = 4 */
  if ( xdr_status )
  {
    xdr_op_number = 4;
    xdr_status = XDR_RECV_UINT32( srv, &interval_ms );
  }

  /* XDR OP NUMBER = 5 */
  if ( xdr_status )
  {
    xdr_op_number = 5;
    xdr_status = XDR_RECV_UINT32( srv, &num_tasks );
  }

  if ( xdr_status )
  {
    xdr_op_number++;
  }

  if ( ! XDR_MSG_DONE( srv ) || ! xdr_status ) {
    XDR_OP_ERR( srv, xdr_op_number );
    // send svcerr_decode reply
    svcerr_decode( srv );
    return;
  }

  ping_mdm_register_data_cb_result = ping_mdm_register_data_cb(cb1, num_callbacks, size_words, interval_ms, num_tasks);

  /* XDR OP NUMBER = 1 */
  xdr_op_number = 1;
  xdr_status = xdr_reply_msg_start( srv, &Ping_mdm_rpcVerf );

  /* XDR OP NUMBER = 2 */
  if ( xdr_status )
  {
    xdr_op_number = 2;
    xdr_status = XDR_SEND_UINT32( srv, &ping_mdm_register_data_cb_result );
  }

  if ( ! xdr_status )
  {
    XDR_OP_ERR( srv, xdr_op_number );
    // send svcerr_systemerr reply
    svcerr_systemerr( srv );
    return;
  }

  if ( ! XDR_MSG_SEND( srv, NULL ) ) {
    XDR_MSG_SEND_ERR( srv, NULL );
  }

  { /* -------------------------------------------------------------------------
     * Register a release handler for this function with ONCRPC to be called
     * if the client dies before calling ping_mdm_un_register_data_cb
     */
    ping_mdm_un_register_data_cb_release_args_s_type *__rel_args;
    __rel_args = oncrpc_mem_alloc(sizeof(ping_mdm_un_register_data_cb_release_args_s_type));
    memset((void *)__rel_args, 0, sizeof(ping_mdm_un_register_data_cb_release_args_s_type));

    __rel_args->cb1 = cb1;

    oncrpc_register_client_exit_notification_cb( srv,
                                                 ping_mdm_register_data_cb_release,
                                                  __rel_args );
  } /* ---------------------------------------------------------------------- */
} /* ping_mdm_register_data_cb_0x00010002 */

static void ping_mdm_register_random_data_cb_0x00010002( xdr_s_type *srv )
{
  boolean xdr_status = TRUE;
  int xdr_op_number = 0;
  uint32 cb_id1;
  ping_mdm_data_cb_f_type *cb1;
  uint32 num_callbacks;
  uint32 size_words_min;
  uint32 size_words_max;
  uint32 interval_ms;
  uint32 num_tasks;

  unsigned long ping_mdm_register_random_data_cb_result;

  /* XDR OP NUMBER = 1 */
  xdr_op_number = 1;
  xdr_status = XDR_RECV_UINT32( srv, &cb_id1 );

  /*lint -save -e611*/
  cb1 = (ping_mdm_data_cb_f_type *) rpc_svc_callback_register( (void *) ping_mdm_data_cb_f_type_clnt_0x00010002, srv, cb_id1 ); 
  /*lint -restore */

  /* XDR OP NUMBER = 2 */
  if ( xdr_status )
  {
    xdr_op_number = 2;
    xdr_status = XDR_RECV_UINT32( srv, &num_callbacks );
  }

  /* XDR OP NUMBER = 3 */
  if ( xdr_status )
  {
    xdr_op_number = 3;
    xdr_status = XDR_RECV_UINT32( srv, &size_words_min );
  }

  /* XDR OP NUMBER = 4 */
  if ( xdr_status )
  {
    xdr_op_number = 4;
    xdr_status = XDR_RECV_UINT32( srv, &size_words_max );
  }

  /* XDR OP NUMBER = 5 */
  if ( xdr_status )
  {
    xdr_op_number = 5;
    xdr_status = XDR_RECV_UINT32( srv, &interval_ms );
  }

  /* XDR OP NUMBER = 6 */
  if ( xdr_status )
  {
    xdr_op_number = 6;
    xdr_status = XDR_RECV_UINT32( srv, &num_tasks );
  }

  if ( xdr_status )
  {
    xdr_op_number++;
  }

  if ( ! XDR_MSG_DONE( srv ) || ! xdr_status ) {
    XDR_OP_ERR( srv, xdr_op_number );
    // send svcerr_decode reply
    svcerr_decode( srv );
    return;
  }

  ping_mdm_register_random_data_cb_result = ping_mdm_register_random_data_cb(cb1, num_callbacks, size_words_min, size_words_max, interval_ms, num_tasks);

  /* XDR OP NUMBER = 1 */
  xdr_op_number = 1;
  xdr_status = xdr_reply_msg_start( srv, &Ping_mdm_rpcVerf );

  /* XDR OP NUMBER = 2 */
  if ( xdr_status )
  {
    xdr_op_number = 2;
    xdr_status = XDR_SEND_UINT32( srv, &ping_mdm_register_random_data_cb_result );
  }

  if ( ! xdr_status )
  {
    XDR_OP_ERR( srv, xdr_op_number );
    // send svcerr_systemerr reply
    svcerr_systemerr( srv );
    return;
  }

  if ( ! XDR_MSG_SEND( srv, NULL ) ) {
    XDR_MSG_SEND_ERR( srv, NULL );
  }

  { /* -------------------------------------------------------------------------
     * Register a release handler for this function with ONCRPC to be called
     * if the client dies before calling ping_mdm_un_register_data_cb
     */
    ping_mdm_un_register_data_cb_release_args_s_type *__rel_args;
    __rel_args = oncrpc_mem_alloc(sizeof(ping_mdm_un_register_data_cb_release_args_s_type));
    memset((void *)__rel_args, 0, sizeof(ping_mdm_un_register_data_cb_release_args_s_type));

    __rel_args->cb1 = cb1;

    oncrpc_register_client_exit_notification_cb( srv,
                                                 ping_mdm_register_random_data_cb_release,
                                                  __rel_args );
  } /* ---------------------------------------------------------------------- */
} /* ping_mdm_register_random_data_cb_0x00010002 */

static void ping_mdm_reset_nominal_tasks_0x00010002( xdr_s_type *srv )
{
  boolean xdr_status = TRUE;
  int xdr_op_number = 0;
  uint32 ping_mdm_reset_nominal_tasks_result;

  /* XDR OP NUMBER = 1 */
  xdr_op_number = 1;

  if ( ! XDR_MSG_DONE( srv ) || ! xdr_status ) {
    XDR_OP_ERR( srv, xdr_op_number );
    // send svcerr_decode reply
    svcerr_decode( srv );
    return;
  }

  ping_mdm_reset_nominal_tasks_result = ping_mdm_reset_nominal_tasks();

  /* XDR OP NUMBER = 1 */
  xdr_op_number = 1;
  xdr_status = xdr_reply_msg_start( srv, &Ping_mdm_rpcVerf );

  /* XDR OP NUMBER = 2 */
  if ( xdr_status )
  {
    xdr_op_number = 2;
    xdr_status = XDR_SEND_UINT32( srv, &ping_mdm_reset_nominal_tasks_result );
  }

  if ( ! xdr_status )
  {
    XDR_OP_ERR( srv, xdr_op_number );
    // send svcerr_systemerr reply
    svcerr_systemerr( srv );
    return;
  }

  if ( ! XDR_MSG_SEND( srv, NULL ) ) {
    XDR_MSG_SEND_ERR( srv, NULL );
  }
} /* ping_mdm_reset_nominal_tasks_0x00010002 */

static void ping_mdm_get_current_num_tasks_0x00010002( xdr_s_type *srv )
{
  boolean xdr_status = TRUE;
  int xdr_op_number = 0;
  uint32 ping_mdm_get_current_num_tasks_result;

  /* XDR OP NUMBER = 1 */
  xdr_op_number = 1;

  if ( ! XDR_MSG_DONE( srv ) || ! xdr_status ) {
    XDR_OP_ERR( srv, xdr_op_number );
    // send svcerr_decode reply
    svcerr_decode( srv );
    return;
  }

  ping_mdm_get_current_num_tasks_result = ping_mdm_get_current_num_tasks();

  /* XDR OP NUMBER = 1 */
  xdr_op_number = 1;
  xdr_status = xdr_reply_msg_start( srv, &Ping_mdm_rpcVerf );

  /* XDR OP NUMBER = 2 */
  if ( xdr_status )
  {
    xdr_op_number = 2;
    xdr_status = XDR_SEND_UINT32( srv, &ping_mdm_get_current_num_tasks_result );
  }

  if ( ! xdr_status )
  {
    XDR_OP_ERR( srv, xdr_op_number );
    // send svcerr_systemerr reply
    svcerr_systemerr( srv );
    return;
  }

  if ( ! XDR_MSG_SEND( srv, NULL ) ) {
    XDR_MSG_SEND_ERR( srv, NULL );
  }
} /* ping_mdm_get_current_num_tasks_0x00010002 */

static void ping_mdm_get_max_tasks_0x00010002( xdr_s_type *srv )
{
  boolean xdr_status = TRUE;
  int xdr_op_number = 0;
  uint32 ping_mdm_get_max_tasks_result;

  /* XDR OP NUMBER = 1 */
  xdr_op_number = 1;

  if ( ! XDR_MSG_DONE( srv ) || ! xdr_status ) {
    XDR_OP_ERR( srv, xdr_op_number );
    // send svcerr_decode reply
    svcerr_decode( srv );
    return;
  }

  ping_mdm_get_max_tasks_result = ping_mdm_get_max_tasks();

  /* XDR OP NUMBER = 1 */
  xdr_op_number = 1;
  xdr_status = xdr_reply_msg_start( srv, &Ping_mdm_rpcVerf );

  /* XDR OP NUMBER = 2 */
  if ( xdr_status )
  {
    xdr_op_number = 2;
    xdr_status = XDR_SEND_UINT32( srv, &ping_mdm_get_max_tasks_result );
  }

  if ( ! xdr_status )
  {
    XDR_OP_ERR( srv, xdr_op_number );
    // send svcerr_systemerr reply
    svcerr_systemerr( srv );
    return;
  }

  if ( ! XDR_MSG_SEND( srv, NULL ) ) {
    XDR_MSG_SEND_ERR( srv, NULL );
  }
} /* ping_mdm_get_max_tasks_0x00010002 */

/*=========================================================================== 
              API Standard function for api versioning
===========================================================================*/

static void ping_mdm_rpc_api_versions_0x00010002( xdr_s_type *srv )
{
  boolean xdr_status = TRUE;
  int xdr_op_number = 0;
  uint32 i;
  boolean output_pointer_not_null;
  uint32 length_uint32;
  uint32 *len = NULL;

  uint32 *ping_mdm_rpc_api_versions_result = NULL;

  /* XDR OP NUMBER = 1 */
  xdr_op_number = 1;
  /* The server must know whether to allocate memory for the output parameter
   * len or not. A boolean is received to indicate that.
   */
  xdr_status = XDR_RECV_UINT8( srv, &output_pointer_not_null );

  if ( xdr_status && output_pointer_not_null ) {
    len = oncrpcxdr_mem_alloc( srv, sizeof(*len) );
  }

  if ( xdr_status )
  {
    xdr_op_number++;
  }

  if ( ! XDR_MSG_DONE( srv ) || ! xdr_status ) {
    XDR_OP_ERR( srv, xdr_op_number );
    // send svcerr_decode reply
    svcerr_decode( srv );
    return;
  }

  ping_mdm_rpc_api_versions_result = ping_mdm_rpc_api_versions(len);

  /* XDR OP NUMBER = 1 */
  xdr_op_number = 1;
  xdr_status = xdr_reply_msg_start( srv, &Ping_mdm_rpcVerf );

  /* XDR OP NUMBER = 2 */
  if ( xdr_status )
  {
    xdr_op_number = 2;
    if ( ping_mdm_rpc_api_versions_result != NULL ) {
      length_uint32 = *len;

      xdr_status = XDR_SEND_UINT32( srv, &length_uint32 );

      /* XDR OP NUMBER = 3 */
      if ( xdr_status )
      {
        xdr_op_number  = 3;

        /* Calling array of XDR routines */
        for ( i = 0; xdr_status && i < (length_uint32); i++ ) {
          /*lint -save -e545*/
          xdr_status = XDR_SEND_UINT32( srv, &(ping_mdm_rpc_api_versions_result[i]) );
          /*lint -restore */
        }
      }
    } else {
      length_uint32 = 0;

      xdr_status = XDR_SEND_UINT32( srv, &length_uint32 );
    }
  }

  /* XDR OP NUMBER = 3 */
  if ( xdr_status )
  {
    xdr_op_number = 3;
    /*lint -save -e123*/
    XDR_SEND_POINTER( srv, &len, XDR_SEND_UINT32, xdr_status );
    /*lint -restore */
  }

  if ( ! xdr_status )
  {
    XDR_OP_ERR( srv, xdr_op_number );
    // send svcerr_systemerr reply
    svcerr_systemerr( srv );
    return;
  }

  if ( ! XDR_MSG_SEND( srv, NULL ) ) {
    XDR_MSG_SEND_ERR( srv, NULL );
  }
} /* ping_mdm_rpc_api_versions_0x00010002 */

/*=========================================================================== 
              API Callback Clients
===========================================================================*/

static boolean ping_mdm_data_cb_f_type_clnt_0x00010002(uint32 *data,  uint32 size_words,  uint32 sum)
{
  xdr_s_type       *clnt          = NULL;
  rpc_reply_header  reply_header;
  rpc_cb_data_type *rpc_cb_data   = NULL;
  boolean           xdr_status    = TRUE;
  int               xdr_op_number = 0;

  unsigned long int i;
  unsigned long int length_unsigned_long_int;
  boolean cmd_cb_func_result;


  rpc_cb_data = rpc_svc_cb_data_lookup();

  if ( rpc_cb_data == NULL )
  {
    RPC_SVC_CB_DATA_LOOKUP_ERR();
    return FALSE;
  }

  clnt = rpc_clnt_for_callback( rpc_cb_data );

  oncrpcxdr_mem_free( clnt );

  /* XDR OP NUMBER = 1 */
  xdr_op_number = 1;
  xdr_status = xdr_call_msg_start( clnt,
                                   PING_MDM_RPCCBPROG, PING_MDM_DATA_CB_F_TYPE_VERS,
                                   ONCRPC_PING_MDM_DATA_CB_F_TYPE_PROC, &Ping_mdm_rpccbCred, &Ping_mdm_rpccbVerf );

  /* XDR OP NUMBER = 2 */
  if ( xdr_status )
  {
    xdr_op_number = 2;
    xdr_status = XDR_SEND_UINT32( clnt, &rpc_cb_data->cb_id );
  }

  /* XDR OP NUMBER = 3 */
  if ( xdr_status )
  {
    xdr_op_number = 3;
    if ( data != NULL ) {
      length_unsigned_long_int = size_words;

      xdr_status = XDR_SEND_UINT32( clnt, &length_unsigned_long_int );

      /* XDR OP NUMBER = 4 */
      if ( xdr_status )
      {
        xdr_op_number  = 4;

        /* Calling array of XDR routines */
        for ( i = 0; xdr_status && i < (length_unsigned_long_int); i++ ) {
          /*lint -save -e545*/
          xdr_status = XDR_SEND_UINT32( clnt, &(data[i]) );
          /*lint -restore */
        }
      }
    } else {
      length_unsigned_long_int = 0;

      xdr_status = XDR_SEND_UINT32( clnt, &length_unsigned_long_int );
    }
  }

  /* XDR OP NUMBER = 5 */
  if ( xdr_status )
  {
    xdr_op_number = 5;
    xdr_status = XDR_SEND_UINT32( clnt, &size_words );
  }

  /* XDR OP NUMBER = 6 */
  if ( xdr_status )
  {
    xdr_op_number = 6;
    xdr_status = XDR_SEND_UINT32( clnt, &sum );
  }

  if ( ! xdr_status )
  {
    XDR_OP_ERR(clnt, xdr_op_number);
    return FALSE;
  }

  /* Send the RPC message and block waiting for a reply */
  if ( ! XDR_MSG_SEND( clnt, &reply_header ) )
  {
    XDR_MSG_SEND_ERR( clnt, &reply_header );
    return FALSE;
  }
  /* XDR OP NUMBER = 1 */
  xdr_op_number = 1;

  if ( reply_header.stat != RPC_MSG_ACCEPTED ) {
    XDR_CALL_REJECTED_ERR( clnt, &reply_header );
    xdr_status = FALSE;
  }

  if ( reply_header.u.ar.stat != RPC_ACCEPT_SUCCESS ) {
    XDR_ERR_ON_SERVER_ERR( clnt, &reply_header );
    xdr_status = FALSE;
  }

  /* XDR OP NUMBER = 2 */
  if ( xdr_status )
  {
    xdr_op_number = 2;
    xdr_status = XDR_RECV_BOOLEAN( clnt, &cmd_cb_func_result );
  }

  if ( xdr_status )
  {
    xdr_op_number++;
  }

  if ( ! XDR_MSG_DONE( clnt ) || ! xdr_status )
  {
        XDR_OP_ERR( clnt, xdr_op_number );
    return FALSE;
  }

  return cmd_cb_func_result;
} /* ping_mdm_data_cb_f_type_clnt_0x00010002 */


static void ping_mdm_cb_f_type_clnt_0x00010002(int val)
{
  xdr_s_type       *clnt          = NULL;
  rpc_reply_header  reply_header;
  rpc_cb_data_type *rpc_cb_data   = NULL;
  boolean           xdr_status    = TRUE;
  int               xdr_op_number = 0;

  rpc_cb_data = rpc_svc_cb_data_lookup();

  if ( rpc_cb_data == NULL )
  {
    RPC_SVC_CB_DATA_LOOKUP_ERR();
    return;
  }

  clnt = rpc_clnt_for_callback( rpc_cb_data );

  oncrpcxdr_mem_free( clnt );

  /* XDR OP NUMBER = 1 */
  xdr_op_number = 1;
  xdr_status = xdr_call_msg_start( clnt,
                                   PING_MDM_RPCCBPROG, PING_MDM_CB_F_TYPE_VERS,
                                   ONCRPC_PING_MDM_CB_F_TYPE_PROC, &Ping_mdm_rpccbCred, &Ping_mdm_rpccbVerf );

  /* XDR OP NUMBER = 2 */
  if ( xdr_status )
  {
    xdr_op_number = 2;
    xdr_status = XDR_SEND_UINT32( clnt, &rpc_cb_data->cb_id );
  }

  /* XDR OP NUMBER = 3 */
  if ( xdr_status )
  {
    xdr_op_number = 3;
    xdr_status = XDR_SEND_INT( clnt, &val );
  }

  if ( ! xdr_status )
  {
    XDR_OP_ERR(clnt, xdr_op_number);
    return;
  }

  /* Send the RPC message and block waiting for a reply */
  if ( ! XDR_MSG_SEND( clnt, &reply_header ) )
  {
    XDR_MSG_SEND_ERR( clnt, &reply_header );
    return;
  }
  /* XDR OP NUMBER = 1 */
  xdr_op_number = 1;

  if ( reply_header.stat != RPC_MSG_ACCEPTED ) {
    XDR_CALL_REJECTED_ERR( clnt, &reply_header );
    xdr_status = FALSE;
  }

  if ( reply_header.u.ar.stat != RPC_ACCEPT_SUCCESS ) {
    XDR_ERR_ON_SERVER_ERR( clnt, &reply_header );
    xdr_status = FALSE;
  }

  if ( xdr_status )
  {
    xdr_op_number++;
  }

  if ( ! XDR_MSG_DONE( clnt ) || ! xdr_status )
  {
        XDR_OP_ERR( clnt, xdr_op_number );
    return;
  }
} /* ping_mdm_cb_f_type_clnt_0x00010002 */



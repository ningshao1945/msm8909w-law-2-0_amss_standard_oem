/* REMOTE_STORAGE TOOL VERSION: 4.34 */
/*=============================================================================
                    R E M O T E _ S T O R A G E _ X D R . C

GENERAL DESCRIPTION
  This is an AUTO GENERATED file that provides xdr encode/decode routines
  specific to the data types used in the exported remote_storage API.

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
$Header: //components/rel/tz.bf/2.5.c10/trustzone_images/core/api/rapi/storage/src/remote_storage_xdr.c#1 $ 
=============================================================================*/


/* Include files */
#include "oncrpc.h"
#include "remote_storage.h"
#include "remote_storage_rpc.h"


/*=======================================================================
                  XDR send/recv routines for API types
=======================================================================*/


/*
 * struct remotefs_iovec_desc XDR_REMOTE_STORAGE_SEND
 */
boolean xdr_remote_storage_send_remotefs_iovec_desc (xdr_s_type *xdrs, struct remotefs_iovec_desc const *sptr)
{
  if ( ! XDR_SEND_UINT32( xdrs, &(sptr->sector_addr) ) ) {
    return (FALSE);
  }

  if ( ! XDR_SEND_UINT32( xdrs, &(sptr->data_phy_addr) ) ) {
    return (FALSE);
  }

  if ( ! XDR_SEND_UINT32( xdrs, &(sptr->num_sector) ) ) {
    return (FALSE);
  }

  return (TRUE);
} /* xdr_remote_storage_send_remotefs_iovec_desc */

/*
 * struct remotefs_iovec_desc XDR_REMOTE_STORAGE_RECV
 */
boolean xdr_remote_storage_recv_remotefs_iovec_desc (xdr_s_type *xdrs, struct remotefs_iovec_desc *sptr)
{
  if ( ! XDR_RECV_UINT32( xdrs, &(sptr->sector_addr) ) ) {
    return (FALSE);
  }

  if ( ! XDR_RECV_UINT32( xdrs, &(sptr->data_phy_addr) ) ) {
    return (FALSE);
  }

  if ( ! XDR_RECV_UINT32( xdrs, &(sptr->num_sector) ) ) {
    return (FALSE);
  }

  return (TRUE);
} /* xdr_remote_storage_recv_remotefs_iovec_desc */




/*
 * struct remotefs_srv_close_args XDR_REMOTE_STORAGE_SEND
 */
boolean xdr_remote_storage_send_remotefs_srv_close_args (xdr_s_type *xdrs, struct remotefs_srv_close_args const *sptr)
{
  if ( ! XDR_SEND_HANDLE( xdrs, &(sptr->handle) ) ) {
    return (FALSE);
  }

  return (TRUE);
} /* xdr_remote_storage_send_remotefs_srv_close_args */

/*
 * struct remotefs_srv_close_args XDR_REMOTE_STORAGE_RECV
 */
boolean xdr_remote_storage_recv_remotefs_srv_close_args (xdr_s_type *xdrs, struct remotefs_srv_close_args *sptr)
{
  if ( ! XDR_RECV_HANDLE( xdrs, &(sptr->handle) ) ) {
    return (FALSE);
  }

  return (TRUE);
} /* xdr_remote_storage_recv_remotefs_srv_close_args */




/*
 * struct remotefs_srv_write_block_args XDR_REMOTE_STORAGE_SEND
 */
boolean xdr_remote_storage_send_remotefs_srv_write_block_args (xdr_s_type *xdrs, struct remotefs_srv_write_block_args const *sptr)
{
  if ( ! XDR_SEND_HANDLE( xdrs, &(sptr->handle) ) ) {
    return (FALSE);
  }

  if ( ! XDR_SEND_UINT32( xdrs, &(sptr->data_addr) ) ) {
    return (FALSE);
  }

  if ( ! XDR_SEND_UINT32( xdrs, &(sptr->sector_data) ) ) {
    return (FALSE);
  }

  if ( ! XDR_SEND_UINT32( xdrs, &(sptr->counts) ) ) {
    return (FALSE);
  }

  return (TRUE);
} /* xdr_remote_storage_send_remotefs_srv_write_block_args */

/*
 * struct remotefs_srv_write_block_args XDR_REMOTE_STORAGE_RECV
 */
boolean xdr_remote_storage_recv_remotefs_srv_write_block_args (xdr_s_type *xdrs, struct remotefs_srv_write_block_args *sptr)
{
  if ( ! XDR_RECV_HANDLE( xdrs, &(sptr->handle) ) ) {
    return (FALSE);
  }

  if ( ! XDR_RECV_UINT32( xdrs, &(sptr->data_addr) ) ) {
    return (FALSE);
  }

  if ( ! XDR_RECV_UINT32( xdrs, &(sptr->sector_data) ) ) {
    return (FALSE);
  }

  if ( ! XDR_RECV_UINT32( xdrs, &(sptr->counts) ) ) {
    return (FALSE);
  }

  return (TRUE);
} /* xdr_remote_storage_recv_remotefs_srv_write_block_args */




/*
 * struct remotefs_srv_get_dev_error_args XDR_REMOTE_STORAGE_SEND
 */
boolean xdr_remote_storage_send_remotefs_srv_get_dev_error_args (xdr_s_type *xdrs, struct remotefs_srv_get_dev_error_args const *sptr)
{
  if ( ! XDR_SEND_HANDLE( xdrs, &(sptr->handle) ) ) {
    return (FALSE);
  }

  return (TRUE);
} /* xdr_remote_storage_send_remotefs_srv_get_dev_error_args */

/*
 * struct remotefs_srv_get_dev_error_args XDR_REMOTE_STORAGE_RECV
 */
boolean xdr_remote_storage_recv_remotefs_srv_get_dev_error_args (xdr_s_type *xdrs, struct remotefs_srv_get_dev_error_args *sptr)
{
  if ( ! XDR_RECV_HANDLE( xdrs, &(sptr->handle) ) ) {
    return (FALSE);
  }

  return (TRUE);
} /* xdr_remote_storage_recv_remotefs_srv_get_dev_error_args */




/*
 * struct remotefs_srv_send_user_data_args XDR_REMOTE_STORAGE_SEND
 */
boolean xdr_remote_storage_send_remotefs_srv_send_user_data_args (xdr_s_type *xdrs, struct remotefs_srv_send_user_data_args const *sptr)
{
  if ( ! XDR_SEND_HANDLE( xdrs, &(sptr->handle) ) ) {
    return (FALSE);
  }

  if ( ! XDR_SEND_UINT32( xdrs, &(sptr->user_data) ) ) {
    return (FALSE);
  }

  return (TRUE);
} /* xdr_remote_storage_send_remotefs_srv_send_user_data_args */

/*
 * struct remotefs_srv_send_user_data_args XDR_REMOTE_STORAGE_RECV
 */
boolean xdr_remote_storage_recv_remotefs_srv_send_user_data_args (xdr_s_type *xdrs, struct remotefs_srv_send_user_data_args *sptr)
{
  if ( ! XDR_RECV_HANDLE( xdrs, &(sptr->handle) ) ) {
    return (FALSE);
  }

  if ( ! XDR_RECV_UINT32( xdrs, &(sptr->user_data) ) ) {
    return (FALSE);
  }

  return (TRUE);
} /* xdr_remote_storage_recv_remotefs_srv_send_user_data_args */




/*
 * union remotefs_srv_evnt_info_u XDR_REMOTE_STORAGE_SEND
 */
boolean xdr_remote_storage_send_remotefs_srv_evnt_info_u (xdr_s_type *xdrs, union remotefs_srv_evnt_info_u const *uptr, remotefs_srv_event_e_type obj_disc)
{
  switch ( obj_disc ){
 case REMOTEFS_SRV_EVNT_CLOSE:
      if ( ! xdr_remote_storage_send_remotefs_srv_close_args( xdrs, &(uptr->remotefs_srv_close) ) ) {
        return (FALSE);
      }

      break;
 case REMOTEFS_SRV_EVNT_WRITE_BLOCK:
      if ( ! xdr_remote_storage_send_remotefs_srv_write_block_args( xdrs, &(uptr->remotefs_srv_write_block) ) ) {
        return (FALSE);
      }

      break;
 case REMOTEFS_SRV_EVNT_GET_DEV_ERROR:
      if ( ! xdr_remote_storage_send_remotefs_srv_get_dev_error_args( xdrs, &(uptr->remotefs_srv_get_dev_error) ) ) {
        return (FALSE);
      }

      break;
 case REMOTEFS_SRV_EVNT_SEND_USER_DATA:
      if ( ! xdr_remote_storage_send_remotefs_srv_send_user_data_args( xdrs, &(uptr->remotefs_srv_send_user_data) ) ) {
        return (FALSE);
      }

      break;
    default:

      XDR_UNKNOWN_DISCRIMINATOR_MSG(obj_disc);

  }

  return (TRUE);
} /* xdr_remote_storage_send_remotefs_srv_evnt_info_u */

/*
 * union remotefs_srv_evnt_info_u XDR_REMOTE_STORAGE_RECV
 */
boolean xdr_remote_storage_recv_remotefs_srv_evnt_info_u (xdr_s_type *xdrs, union remotefs_srv_evnt_info_u *uptr, remotefs_srv_event_e_type obj_disc)
{
  switch ( obj_disc ){
 case REMOTEFS_SRV_EVNT_CLOSE:
      if ( ! xdr_remote_storage_recv_remotefs_srv_close_args( xdrs, &(uptr->remotefs_srv_close) ) ) {
        return (FALSE);
      }

      break;
 case REMOTEFS_SRV_EVNT_WRITE_BLOCK:
      if ( ! xdr_remote_storage_recv_remotefs_srv_write_block_args( xdrs, &(uptr->remotefs_srv_write_block) ) ) {
        return (FALSE);
      }

      break;
 case REMOTEFS_SRV_EVNT_GET_DEV_ERROR:
      if ( ! xdr_remote_storage_recv_remotefs_srv_get_dev_error_args( xdrs, &(uptr->remotefs_srv_get_dev_error) ) ) {
        return (FALSE);
      }

      break;
 case REMOTEFS_SRV_EVNT_SEND_USER_DATA:
      if ( ! xdr_remote_storage_recv_remotefs_srv_send_user_data_args( xdrs, &(uptr->remotefs_srv_send_user_data) ) ) {
        return (FALSE);
      }

      break;
    default:

      XDR_UNKNOWN_DISCRIMINATOR_MSG(obj_disc);

  }

  return (TRUE);
} /* xdr_remote_storage_recv_remotefs_srv_evnt_info_u */




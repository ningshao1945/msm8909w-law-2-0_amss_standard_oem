#ifndef SNS_SAM_RMD_SVC_SERVICE_01_H
#define SNS_SAM_RMD_SVC_SERVICE_01_H
/**
  @file sns_sam_rmd_v01.h

  @brief This is the public header file which defines the SNS_SAM_RMD_SVC service Data structures.

  This header file defines the types and structures that were defined in
  SNS_SAM_RMD_SVC. It contains the constant values defined, enums, structures,
  messages, and service message IDs (in that order) Structures that were
  defined in the IDL as messages contain mandatory elements, optional
  elements, a combination of mandatory and optional elements (mandatory
  always come before optionals in the structure), or nothing (null message)

  An optional element in a message is preceded by a uint8_t value that must be
  set to true if the element is going to be included. When decoding a received
  message, the uint8_t values will be set to true or false by the decode
  routine, and should be checked before accessing the values that they
  correspond to.

  Variable sized arrays are defined as static sized arrays with an unsigned
  integer (32 bit) preceding it that must be set to the number of elements
  in the array that are valid. For Example:

  uint32_t test_opaque_len;
  uint8_t test_opaque[16];

  If only 4 elements are added to test_opaque[] then test_opaque_len must be
  set to 4 before sending the message.  When decoding, the _len value is set 
  by the decode routine and should be checked so that the correct number of
  elements in the array will be accessed.

*/
/*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*
  
  Copyright (c) 2010-2014 Qualcomm Technologies, Inc. All Rights Reserved
  Qualcomm Technologies Confidential and Proprietary



  $Header: //commercial/MPSS.JO.2.0.c1.4/Main/modem_proc/qmimsgs/sns_sam_rmd/api/sns_sam_rmd_v01.h#1 $
 *====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*/
/*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====* 
 *THIS IS AN AUTO GENERATED FILE. DO NOT ALTER IN ANY WAY
 *====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*/

/* This file was generated with Tool version 6.6 
   It was generated on: Thu Feb 27 2014 (Spin 0)
   From IDL File: sns_sam_rmd_v01.idl */

/** @defgroup SNS_SAM_RMD_SVC_qmi_consts Constant values defined in the IDL */
/** @defgroup SNS_SAM_RMD_SVC_qmi_msg_ids Constant values for QMI message IDs */
/** @defgroup SNS_SAM_RMD_SVC_qmi_enums Enumerated types used in QMI messages */
/** @defgroup SNS_SAM_RMD_SVC_qmi_messages Structures sent as QMI messages */
/** @defgroup SNS_SAM_RMD_SVC_qmi_aggregates Aggregate types used in QMI messages */
/** @defgroup SNS_SAM_RMD_SVC_qmi_accessor Accessor for QMI service object */
/** @defgroup SNS_SAM_RMD_SVC_qmi_version Constant values for versioning information */

#include <stdint.h>
#include "qmi_idl_lib.h"
#include "sns_sam_common_v01.h"
#include "sns_common_v01.h"
#include "sns_sam_qmd_v01.h"


#ifdef __cplusplus
extern "C" {
#endif

/** @addtogroup SNS_SAM_RMD_SVC_qmi_version
    @{
  */
/** Major Version Number of the IDL used to generate this file */
#define SNS_SAM_RMD_SVC_V01_IDL_MAJOR_VERS 0x01
/** Revision Number of the IDL used to generate this file */
#define SNS_SAM_RMD_SVC_V01_IDL_MINOR_VERS 0x04
/** Major Version Number of the qmi_idl_compiler used to generate this file */
#define SNS_SAM_RMD_SVC_V01_IDL_TOOL_VERS 0x06
/** Maximum Defined Message ID */
#define SNS_SAM_RMD_SVC_V01_MAX_MESSAGE_ID 0x0024
/**
    @}
  */


/** @addtogroup SNS_SAM_RMD_SVC_qmi_consts 
    @{ 
  */
#define SNS_SAM_RMD_SUID_V01 0x33c24438f54afd3e
/**
    @}
  */

/*Service Message Definition*/
/** @addtogroup SNS_SAM_RMD_SVC_qmi_msg_ids
    @{
  */
#define SNS_SAM_RMD_CANCEL_REQ_V01 0x0000
#define SNS_SAM_RMD_CANCEL_RESP_V01 0x0000
#define SNS_SAM_RMD_VERSION_REQ_V01 0x0001
#define SNS_SAM_RMD_VERSION_RESP_V01 0x0001
#define SNS_SAM_RMD_ENABLE_REQ_V01 0x0002
#define SNS_SAM_RMD_ENABLE_RESP_V01 0x0002
#define SNS_SAM_RMD_DISABLE_REQ_V01 0x0003
#define SNS_SAM_RMD_DISABLE_RESP_V01 0x0003
#define SNS_SAM_RMD_GET_REPORT_REQ_V01 0x0004
#define SNS_SAM_RMD_GET_REPORT_RESP_V01 0x0004
#define SNS_SAM_RMD_REPORT_IND_V01 0x0005
#define SNS_SAM_RMD_ERROR_IND_V01 0x0006
#define SNS_SAM_RMD_GET_ATTRIBUTES_REQ_V01 0x0024
#define SNS_SAM_RMD_GET_ATTRIBUTES_RESP_V01 0x0024
/**
    @}
  */

/* Service Object Accessor */
/** @addtogroup wms_qmi_accessor 
    @{
  */
/** This function is used internally by the autogenerated code.  Clients should use the
   macro SNS_SAM_RMD_SVC_get_service_object_v01( ) that takes in no arguments. */
qmi_idl_service_object_type SNS_SAM_RMD_SVC_get_service_object_internal_v01
 ( int32_t idl_maj_version, int32_t idl_min_version, int32_t library_version );
 
/** This macro should be used to get the service object */ 
#define SNS_SAM_RMD_SVC_get_service_object_v01( ) \
          SNS_SAM_RMD_SVC_get_service_object_internal_v01( \
            SNS_SAM_RMD_SVC_V01_IDL_MAJOR_VERS, SNS_SAM_RMD_SVC_V01_IDL_MINOR_VERS, \
            SNS_SAM_RMD_SVC_V01_IDL_TOOL_VERS )
/** 
    @} 
  */


#ifdef __cplusplus
}
#endif
#endif


#ifndef PS_IPDC_H
#define PS_IPDC_H
/*===========================================================================
                     P S _ I P D C . H

DESCRIPTION
  Header file for the IP Data Compression (IPDC) protocol.
 

Copyright (c) 2013 QUALCOMM Technologies Incorporated.
All Rights Reserved.
Qualcomm Confidential and Proprietary
===========================================================================*/
/*===========================================================================

                            EDIT HISTORY FOR FILE


when        who    what, where, why
--------    ---    ----------------------------------------------------------
01/07/13    pc    Created module.
===========================================================================*/


/*===========================================================================

                     INCLUDE FILES FOR MODULE

===========================================================================*/

#ifdef TEST_FRAMEWORK   // Data Services' Off Target Test Framework
  #error code not present
#endif

#ifdef __cplusplus
extern "C" {
#endif

#include "dsm.h"


/*===========================================================================

                Q2E DATA ACCELERATION (DACC) PREFILL DATA

===========================================================================*/
static const byte ipdc_q2e_dacc_prefill[] =
{
0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x1c, 0x00, 0x01, 0x41, 0x63, 0x63, 0x65, 0x70, 0x74, 0x3a, 0x20, 0x41, 0x63, 0x63, 0x65, 0x70, 0x74, 0x2d, 0x43, 0x68, 0x61, 0x72, 0x73,
0x65, 0x74, 0x3a, 0x20, 0x41, 0x63, 0x63, 0x65, 0x70, 0x74, 0x2d, 0x45, 0x6e, 0x63, 0x6f, 0x64, 0x69, 0x6e, 0x67, 0x3a, 0x20, 0x41, 0x63, 0x63, 0x65, 0x70, 0x74, 0x2d, 0x4c, 0x61, 0x6e, 0x67, 0x75, 0x61, 0x67, 0x65, 0x3a, 0x20, 0x41, 0x63,
0x63, 0x65, 0x70, 0x74, 0x2d, 0x44, 0x61, 0x74, 0x65, 0x74, 0x69, 0x6d, 0x65, 0x3a, 0x20, 0x41, 0x75, 0x74, 0x68, 0x6f, 0x72, 0x69, 0x7a, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x20, 0x43, 0x61, 0x63, 0x68, 0x65, 0x2d, 0x43, 0x6f, 0x6e, 0x74,
0x72, 0x6f, 0x6c, 0x3a, 0x20, 0x43, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x20, 0x43, 0x6f, 0x6f, 0x6b, 0x69, 0x65, 0x3a, 0x20, 0x43, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x4c, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x3a,
0x20, 0x43, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x4d, 0x44, 0x35, 0x3a, 0x20, 0x43, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x54, 0x79, 0x70, 0x65, 0x3a, 0x20, 0x44, 0x61, 0x74, 0x65, 0x3a, 0x20, 0x45, 0x78, 0x70, 0x65, 0x63, 0x74,
0x3a, 0x20, 0x46, 0x72, 0x6f, 0x6d, 0x3a, 0x20, 0x48, 0x6f, 0x73, 0x74, 0x3a, 0x20, 0x49, 0x66, 0x2d, 0x4d, 0x61, 0x74, 0x63, 0x68, 0x3a, 0x20, 0x49, 0x66, 0x2d, 0x4d, 0x6f, 0x64, 0x69, 0x66, 0x69, 0x65, 0x64, 0x2d, 0x53, 0x69, 0x6e, 0x63,
0x65, 0x3a, 0x20, 0x49, 0x66, 0x2d, 0x4e, 0x6f, 0x6e, 0x65, 0x2d, 0x4d, 0x61, 0x74, 0x63, 0x68, 0x3a, 0x20, 0x49, 0x66, 0x2d, 0x52, 0x61, 0x6e, 0x67, 0x65, 0x3a, 0x20, 0x49, 0x66, 0x2d, 0x55, 0x6e, 0x6d, 0x6f, 0x64, 0x69, 0x66, 0x69, 0x65,
0x64, 0x2d, 0x53, 0x69, 0x6e, 0x63, 0x65, 0x3a, 0x20, 0x4d, 0x61, 0x78, 0x2d, 0x46, 0x6f, 0x72, 0x77, 0x61, 0x72, 0x64, 0x73, 0x3a, 0x20, 0x50, 0x72, 0x61, 0x67, 0x6d, 0x61, 0x3a, 0x20, 0x50, 0x72, 0x6f, 0x78, 0x79, 0x2d, 0x41, 0x75, 0x74,
0x68, 0x6f, 0x72, 0x69, 0x7a, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x20, 0x52, 0x61, 0x6e, 0x67, 0x65, 0x3a, 0x20, 0x52, 0x65, 0x66, 0x65, 0x72, 0x65, 0x72, 0x3a, 0x20, 0x54, 0x45, 0x3a, 0x20, 0x55, 0x70, 0x67, 0x72, 0x61, 0x64, 0x65, 0x3a,
0x20, 0x55, 0x73, 0x65, 0x72, 0x2d, 0x41, 0x67, 0x65, 0x6e, 0x74, 0x3a, 0x20, 0x56, 0x69, 0x61, 0x3a, 0x20, 0x57, 0x61, 0x72, 0x6e, 0x69, 0x6e, 0x67, 0x3a, 0x20, 0x58, 0x2d, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x65, 0x64, 0x2d, 0x57,
0x69, 0x74, 0x68, 0x3a, 0x20, 0x44, 0x4e, 0x54, 0x3a, 0x20, 0x58, 0x2d, 0x46, 0x6f, 0x72, 0x77, 0x61, 0x72, 0x64, 0x65, 0x64, 0x2d, 0x46, 0x6f, 0x72, 0x3a, 0x20, 0x58, 0x2d, 0x46, 0x6f, 0x72, 0x77, 0x61, 0x72, 0x64, 0x65, 0x64, 0x2d, 0x50,
0x72, 0x6f, 0x74, 0x6f, 0x3a, 0x20, 0x46, 0x72, 0x6f, 0x6e, 0x74, 0x2d, 0x45, 0x6e, 0x64, 0x2d, 0x48, 0x74, 0x74, 0x70, 0x73, 0x3a, 0x20, 0x58, 0x2d, 0x41, 0x31, 0x54, 0x44, 0x65, 0x76, 0x69, 0x63, 0x65, 0x49, 0x64, 0x3a, 0x20, 0x58, 0x2d,
0x57, 0x61, 0x70, 0x2d, 0x50, 0x72, 0x6f, 0x66, 0x69, 0x6c, 0x65, 0x3a, 0x20, 0x50, 0x72, 0x6f, 0x78, 0x79, 0x2d, 0x43, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x20, 0x47, 0x45, 0x54, 0x20, 0x2f, 0x48, 0x54, 0x54, 0x50,
0x2f, 0x31, 0x2e, 0x31, 0x69, 0x6e, 0x64, 0x65, 0x78, 0x2e, 0x68, 0x74, 0x6d, 0x6c, 0x67, 0x7a, 0x69, 0x70, 0x2c, 0x20, 0x64, 0x65, 0x66, 0x6c, 0x61, 0x74, 0x65, 0x65, 0x6e, 0x2d, 0x55, 0x53, 0x2c, 0x20, 0x65, 0x6e, 0x69, 0x6d, 0x61, 0x67,
0x65, 0x2f, 0x6a, 0x70, 0x67, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x2f, 0x70, 0x6e, 0x67, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x2f, 0x2a, 0x74, 0x65, 0x78, 0x74, 0x2f, 0x63, 0x73, 0x73, 0x74, 0x65, 0x78, 0x74, 0x2f, 0x68, 0x74, 0x6d, 0x6c, 0x61, 0x70,
0x70, 0x6c, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x2f, 0x78, 0x68, 0x74, 0x6d, 0x6c, 0x2b, 0x78, 0x6d, 0x6c, 0x61, 0x70, 0x70, 0x6c, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x2f, 0x78, 0x6d, 0x6c, 0x6b, 0x65, 0x65, 0x70, 0x2d, 0x61,
0x6c, 0x69, 0x76, 0x65, 0x4d, 0x6f, 0x7a, 0x69, 0x6c, 0x6c, 0x61, 0x57, 0x69, 0x6e, 0x64, 0x6f, 0x77, 0x73, 0x47, 0x65, 0x63, 0x6b, 0x6f, 0x46, 0x69, 0x72, 0x65, 0x66, 0x6f, 0x78, 0x57, 0x65, 0x62, 0x4b, 0x69, 0x74, 0x58, 0x4d, 0x4c, 0x48,
0x74, 0x74, 0x70, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x03, 0x77, 0x77, 0x77, 0x06, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x03, 0x63, 0x6f, 0x6d, 0x77, 0x77, 0x77, 0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x63, 0x6f, 0x6d, 0x0d,
0x0a, 0x03, 0x77, 0x77, 0x77, 0x08, 0x66, 0x61, 0x63, 0x65, 0x62, 0x6f, 0x6f, 0x6b, 0x03, 0x63, 0x6f, 0x6d, 0x77, 0x77, 0x77, 0x2e, 0x66, 0x61, 0x63, 0x65, 0x62, 0x6f, 0x6f, 0x6b, 0x2e, 0x63, 0x6f, 0x6d, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77,
0x07, 0x79, 0x6f, 0x75, 0x74, 0x75, 0x62, 0x65, 0x03, 0x63, 0x6f, 0x6d, 0x77, 0x77, 0x77, 0x2e, 0x79, 0x6f, 0x75, 0x74, 0x75, 0x62, 0x65, 0x2e, 0x63, 0x6f, 0x6d, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77, 0x05, 0x79, 0x61, 0x68, 0x6f, 0x6f, 0x03,
0x63, 0x6f, 0x6d, 0x77, 0x77, 0x77, 0x2e, 0x79, 0x61, 0x68, 0x6f, 0x6f, 0x2e, 0x63, 0x6f, 0x6d, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77, 0x05, 0x62, 0x61, 0x69, 0x64, 0x75, 0x03, 0x63, 0x6f, 0x6d, 0x77, 0x77, 0x77, 0x2e, 0x62, 0x61, 0x69, 0x64,
0x75, 0x2e, 0x63, 0x6f, 0x6d, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77, 0x09, 0x77, 0x69, 0x6b, 0x69, 0x70, 0x65, 0x64, 0x69, 0x61, 0x03, 0x6f, 0x72, 0x67, 0x77, 0x77, 0x77, 0x2e, 0x77, 0x69, 0x6b, 0x69, 0x70, 0x65, 0x64, 0x69, 0x61, 0x2e, 0x6f,
0x72, 0x67, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77, 0x04, 0x6c, 0x69, 0x76, 0x65, 0x03, 0x63, 0x6f, 0x6d, 0x77, 0x77, 0x77, 0x2e, 0x6c, 0x69, 0x76, 0x65, 0x2e, 0x63, 0x6f, 0x6d, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77, 0x02, 0x71, 0x71, 0x03, 0x63,
0x6f, 0x6d, 0x77, 0x77, 0x77, 0x2e, 0x71, 0x71, 0x2e, 0x63, 0x6f, 0x6d, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77, 0x06, 0x61, 0x6d, 0x61, 0x7a, 0x6f, 0x6e, 0x03, 0x63, 0x6f, 0x6d, 0x77, 0x77, 0x77, 0x2e, 0x61, 0x6d, 0x61, 0x7a, 0x6f, 0x6e, 0x2e,
0x63, 0x6f, 0x6d, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77, 0x07, 0x74, 0x77, 0x69, 0x74, 0x74, 0x65, 0x72, 0x03, 0x63, 0x6f, 0x6d, 0x77, 0x77, 0x77, 0x2e, 0x74, 0x77, 0x69, 0x74, 0x74, 0x65, 0x72, 0x2e, 0x63, 0x6f, 0x6d, 0x0d, 0x0a, 0x03, 0x77,
0x77, 0x77, 0x08, 0x62, 0x6c, 0x6f, 0x67, 0x73, 0x70, 0x6f, 0x74, 0x03, 0x63, 0x6f, 0x6d, 0x77, 0x77, 0x77, 0x2e, 0x62, 0x6c, 0x6f, 0x67, 0x73, 0x70, 0x6f, 0x74, 0x2e, 0x63, 0x6f, 0x6d, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77, 0x08, 0x6c, 0x69,
0x6e, 0x6b, 0x65, 0x64, 0x69, 0x6e, 0x03, 0x63, 0x6f, 0x6d, 0x77, 0x77, 0x77, 0x2e, 0x6c, 0x69, 0x6e, 0x6b, 0x65, 0x64, 0x69, 0x6e, 0x2e, 0x63, 0x6f, 0x6d, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77, 0x06, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x02,
0x63, 0x6f, 0x02, 0x69, 0x6e, 0x77, 0x77, 0x77, 0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x63, 0x6f, 0x2e, 0x69, 0x6e, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77, 0x06, 0x74, 0x61, 0x6f, 0x62, 0x61, 0x6f, 0x03, 0x63, 0x6f, 0x6d, 0x77, 0x77,
0x77, 0x2e, 0x74, 0x61, 0x6f, 0x62, 0x61, 0x6f, 0x2e, 0x63, 0x6f, 0x6d, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77, 0x05, 0x79, 0x61, 0x68, 0x6f, 0x6f, 0x02, 0x63, 0x6f, 0x02, 0x6a, 0x70, 0x77, 0x77, 0x77, 0x2e, 0x79, 0x61, 0x68, 0x6f, 0x6f, 0x2e,
0x63, 0x6f, 0x2e, 0x6a, 0x70, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77, 0x04, 0x62, 0x69, 0x6e, 0x67, 0x03, 0x63, 0x6f, 0x6d, 0x77, 0x77, 0x77, 0x2e, 0x62, 0x69, 0x6e, 0x67, 0x2e, 0x63, 0x6f, 0x6d, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77, 0x06, 0x79,
0x61, 0x6e, 0x64, 0x65, 0x78, 0x02, 0x72, 0x75, 0x77, 0x77, 0x77, 0x2e, 0x79, 0x61, 0x6e, 0x64, 0x65, 0x78, 0x2e, 0x72, 0x75, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77, 0x03, 0x6d, 0x73, 0x6e, 0x03, 0x63, 0x6f, 0x6d, 0x77, 0x77, 0x77, 0x2e, 0x6d,
0x73, 0x6e, 0x2e, 0x63, 0x6f, 0x6d, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77, 0x04, 0x65, 0x62, 0x61, 0x79, 0x03, 0x63, 0x6f, 0x6d, 0x77, 0x77, 0x77, 0x2e, 0x65, 0x62, 0x61, 0x79, 0x2e, 0x63, 0x6f, 0x6d, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77, 0x06,
0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x02, 0x63, 0x6f, 0x02, 0x6a, 0x70, 0x77, 0x77, 0x77, 0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x63, 0x6f, 0x2e, 0x6a, 0x70, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77, 0x09, 0x77, 0x6f, 0x72, 0x64, 0x70,
0x72, 0x65, 0x73, 0x73, 0x03, 0x63, 0x6f, 0x6d, 0x77, 0x77, 0x77, 0x2e, 0x77, 0x6f, 0x72, 0x64, 0x70, 0x72, 0x65, 0x73, 0x73, 0x2e, 0x63, 0x6f, 0x6d, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77, 0x04, 0x73, 0x69, 0x6e, 0x61, 0x03, 0x63, 0x6f, 0x6d,
0x02, 0x63, 0x6e, 0x77, 0x77, 0x77, 0x2e, 0x73, 0x69, 0x6e, 0x61, 0x2e, 0x63, 0x6f, 0x6d, 0x2e, 0x63, 0x6e, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77, 0x06, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x03, 0x63, 0x6f, 0x6d, 0x02, 0x68, 0x6b, 0x77, 0x77,
0x77, 0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x63, 0x6f, 0x6d, 0x2e, 0x68, 0x6b, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77, 0x06, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x02, 0x64, 0x65, 0x77, 0x77, 0x77, 0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c,
0x65, 0x2e, 0x64, 0x65, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77, 0x02, 0x76, 0x6b, 0x03, 0x63, 0x6f, 0x6d, 0x77, 0x77, 0x77, 0x2e, 0x76, 0x6b, 0x2e, 0x63, 0x6f, 0x6d, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77, 0x06, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65,
0x02, 0x63, 0x6f, 0x02, 0x75, 0x6b, 0x77, 0x77, 0x77, 0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x63, 0x6f, 0x2e, 0x75, 0x6b, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77, 0x06, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x02, 0x66, 0x72, 0x77, 0x77,
0x77, 0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x66, 0x72, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77, 0x09, 0x6d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x03, 0x63, 0x6f, 0x6d, 0x77, 0x77, 0x77, 0x2e, 0x6d, 0x69, 0x63, 0x72, 0x6f,
0x73, 0x6f, 0x66, 0x74, 0x2e, 0x63, 0x6f, 0x6d, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77, 0x03, 0x31, 0x36, 0x33, 0x03, 0x63, 0x6f, 0x6d, 0x77, 0x77, 0x77, 0x2e, 0x31, 0x36, 0x33, 0x2e, 0x63, 0x6f, 0x6d, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77, 0x04,
0x6d, 0x61, 0x69, 0x6c, 0x02, 0x72, 0x75, 0x77, 0x77, 0x77, 0x2e, 0x6d, 0x61, 0x69, 0x6c, 0x2e, 0x72, 0x75, 0x0d, 0x0a, 0x03, 0x77, 0x77, 0x77, 0x06, 0x74, 0x75, 0x6d, 0x62, 0x6c, 0x72, 0x03, 0x63, 0x6f, 0x6d, 0x77, 0x77, 0x77, 0x2e, 0x74,
0x75, 0x6d, 0x62, 0x6c, 0x72, 0x2e, 0x63, 0x6f, 0x6d, 0x0d, 0x0a, 0x0d, 0x0a, 0x02, 0x6c, 0x67, 0x03, 0x63, 0x6f, 0x6d, 0x00, 0x00, 0x01, 0x00, 0x01, 0x03, 0x61, 0x70, 0x69, 0x07, 0x74, 0x77, 0x69, 0x74, 0x74, 0x65, 0x72, 0x03, 0x63, 0x6f,
0x6d, 0x00, 0x00, 0x01, 0x00, 0x01, 0x03, 0x61, 0x70, 0x69, 0x08, 0x66, 0x61, 0x63, 0x65, 0x62, 0x6f, 0x6f, 0x6b, 0x03, 0x63, 0x6f, 0x6d, 0x00, 0x00, 0x01, 0x00, 0x01, 0x03, 0x7a, 0x74, 0x65, 0x03, 0x63, 0x6f, 0x6d, 0x00, 0x00, 0x01, 0x00,
0x01, 0x04, 0x70, 0x75, 0x73, 0x68, 0x05, 0x61, 0x70, 0x70, 0x6c, 0x65, 0x03, 0x63, 0x6f, 0x6d, 0x00, 0x00, 0x01, 0x00, 0x01, 0x05, 0x61, 0x70, 0x70, 0x6c, 0x65, 0x03, 0x63, 0x6f, 0x6d, 0x00, 0x00, 0x01, 0x00, 0x01, 0x05, 0x67, 0x72, 0x61,
0x70, 0x68, 0x08, 0x66, 0x61, 0x63, 0x65, 0x62, 0x6f, 0x6f, 0x6b, 0x03, 0x63, 0x6f, 0x6d, 0x00, 0x00, 0x01, 0x00, 0x01, 0x05, 0x6d, 0x74, 0x61, 0x6c, 0x6b, 0x06, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x03, 0x63, 0x6f, 0x6d, 0x00, 0x00, 0x01,
0x00, 0x01, 0x06, 0x68, 0x75, 0x61, 0x77, 0x65, 0x69, 0x03, 0x63, 0x6f, 0x6d, 0x00, 0x00, 0x01, 0x00, 0x01, 0x06, 0x6f, 0x72, 0x63, 0x61, 0x72, 0x74, 0x08, 0x66, 0x61, 0x63, 0x65, 0x62, 0x6f, 0x6f, 0x6b, 0x03, 0x63, 0x6f, 0x6d, 0x00, 0x00,
0x01, 0x00, 0x01, 0x07, 0x61, 0x6e, 0x64, 0x72, 0x6f, 0x69, 0x64, 0x07, 0x63, 0x6c, 0x69, 0x65, 0x6e, 0x74, 0x73, 0x06, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x03, 0x63, 0x6f, 0x6d, 0x00, 0x00, 0x01, 0x00, 0x01, 0x07, 0x73, 0x61, 0x6d, 0x73,
0x75, 0x6e, 0x67, 0x03, 0x63, 0x6f, 0x6d, 0x00, 0x00, 0x01, 0x00, 0x01, 0x0c, 0x73, 0x6f, 0x6e, 0x79, 0x65, 0x72, 0x69, 0x63, 0x73, 0x73, 0x6f, 0x6e, 0x03, 0x63, 0x6f, 0x6d, 0x00, 0x00, 0x01, 0x00, 0x01
};


/*===========================================================================

                              DATA DECLARATIONS

===========================================================================*/

#define PS_IPDC_MAX_NUM_MATCHES          255
#define PS_IPDC_MIN_MATCH_IN_BYTES        5
#define PS_IPDC_LONGEST_MATCH_IN_BYTES  127 + PS_IPDC_MIN_MATCH_IN_BYTES // Do not increase beyond 132 as there is only 7 bits in the Ptr Meta Data block to indicate the match length (132 max char match length - 5 char minimum match length = 127)!


#define IPDC_COMPRESSION_THRESHOLD_MIN			              0
#define IPDC_COMPRESSION_THRESHOLD_MAX			             99

#define IPDC_NUM_HEADER_BYTES_2_COMPRESS_DECOMPRESS_MIN	     20
#define IPDC_NUM_HEADER_BYTES_2_COMPRESS_DECOMPRESS_MAX	    100


/*---------------------------------------------------------------------------
  Enums for IP Data Compression (IPDC) packet types 
---------------------------------------------------------------------------*/
typedef enum
{
  IPDC_PKT_TYPE_UNKNOWN,
  IPDC_PKT_IPV4_PKT_UNCOMPRESSED,
  IPDC_PKT_IPV4_PKT_COMPRESSED,
  IPDC_PKT_IPV4_PKT_COMPRESSION_FAILED,
  IPDC_PKT_IPV4_PKT_DECOMPRESSION_FAILED,

  IPDC_PKT_MAX
} ipdc_pkt_e_type;


typedef void* ipdc_handle_type;


/*---------------------------------------------
  IP Data Compression (IPDC) Hash Algorithm IDs 
 ----------------------------------------------*/
typedef enum
{
  IPDC_HASH_ALG_1 = 1,
  IPDC_HASH_ALG_2,
  IPDC_HASH_ALG_3,
  IPDC_HASH_ALG_4,
  IPDC_HASH_ALG_5,
  IPDC_HASH_ALG_6
}ipdc_hash_algorithm_e_type;


/*---------------------------------------------
  IP Data Compression (IPDC)
    Compressor's Hash Key/Extendedd Compression
	Memory (ECM) Resources Preallocation Size 
 ----------------------------------------------*/
typedef enum
{
  IPDC_HK_ECM_PREALLOC_4096 = 0,
  IPDC_HK_ECM_PREALLOC_8192,
  IPDC_HK_ECM_PREALLOC_16384,
  IPDC_HK_ECM_PREALLOC_32768,
  IPDC_HK_ECM_PREALLOC_65536
}ipdc_hk_ecm_prealloc_size_e_type;

/*---------------------------------------------
  IP Data Compression (IPDC) Compression 
  Configuration Type 
 ----------------------------------------------*/
typedef enum
{
  IPDC_COMP_CFG_COMPRESS_ENTIRE_PKT = 0,
  IPDC_COMP_CFG_COMPRESS_HEADER_ONLY
}ipdc_compression_config_e_type;

/*---------------------------------------------
  IP Data Compression (IPDC)
    Compression Memory Capacity 
 ----------------------------------------------*/
typedef enum
{
  IPDC_COMPRESSION_MEM_SIZE_2048 = 0,
  IPDC_COMPRESSION_MEM_SIZE_4096,
  IPDC_COMPRESSION_MEM_SIZE_8192,
  IPDC_COMPRESSION_MEM_SIZE_16384
}ipdc_compression_mem_size_e_type;

#define IPDC_COMPRESSION_MEM_MAX  16384

/*---------------------------------------------
  IP Data Compression (IPDC)
    Hash Bucket Size 
 ----------------------------------------------*/
typedef enum
{
  IPDC_HB_SIZE_256 = 0,
  IPDC_HB_SIZE_512,
  IPDC_HB_SIZE_1024,
  IPDC_HB_SIZE_2048,
  IPDC_HB_SIZE_4096,
  IPDC_HB_SIZE_8192,
  IPDC_HB_SIZE_16384,
  IPDC_HB_SIZE_32768
}ipdc_hb_size_e_type;

/*---------------------------------------------------------------------------
  IPDC Channel parameters

  Description of parameters:
---------------------------------------------------------------------------*/


typedef struct
{
  ipdc_compression_mem_size_e_type cmp_mem_size;
  uint8                            num_hdr_bytes_2_comp;
  ipdc_compression_config_e_type   comp_cfg_type;
  uint8                            comp_thld;
  ipdc_hb_size_e_type              hb_size;
  ipdc_hk_ecm_prealloc_size_e_type hk_and_ecm_rsc_prealloc_size;   
#ifdef FEATURE_IPDC_OFFTARGET
  ipdc_hash_algorithm_e_type       hash_alg;
#elif !defined (BOA_APPS)          // UE Target Specific Parameters needed for DPL Logging
  uint8                            rlc_ul_log_chan_id;
#endif // !FEATURE_IPDC_OFFTARGET 

  uint8                            num_pkts_to_test_comp;
  uint8                            num_pkts_to_not_test_init_mult;
  uint16                           max_num_pkts_to_not_test;
} ipdc_comp_config_options_s_type;


typedef struct
{
  ipdc_compression_mem_size_e_type decmp_mem_size;
  uint8                            num_hdr_bytes_2_decomp;
} ipdc_decomp_config_options_s_type;


typedef struct
{
  ipdc_handle_type          handle;     /* IPDC instance                 */
  dsm_item_type           **src_dsm_item;
  dsm_item_type           **target_dsm_item;
  boolean                   log_metrics;
  boolean                   log_stats; 
  boolean                   log_comp_pkt;
  boolean                   log_cmp_mem;
} ipdc_req_pkt_comp_info_type;


/*===========================================================================

                      PUBLIC FUNCTION DECLARATIONS

===========================================================================*/
/*===========================================================================
FUNCTION IPDC_POWERUP_INIT

DESCRIPTION
  Initializes the IPDC layer at powerup.  Sets up the IPDC memory heap.

  THIS FUNCTION MUST BE CALLED BEFORE ANY IPDC INSTANCE IS ALLOCATED.

DEPENDENCIES
  None

RETURN VALUE
  None

SIDE EFFECTS
  Initializes IPDC state variables
===========================================================================*/
boolean ipdc_powerup_init
(
  void
);


/*===========================================================================
FUNCTION IPDC_ALLOC

DESCRIPTION
  Allocates a IPDC Instance and returns a handle to it.  

  If only compressor parameters are passed, only a Compressor Engine will
  be allocated for the IPDC Instance.  Similarly if only decompressor 
  parameters are passed only a Decompressor Engine will be allocated for 
  the IPDC Instance.

  A NULL return indicates failure to allocate an IPDC instance.
  The handle is passed to all IPDC compression and decompression
  functions and is freed with a call to ipdc_free().

  
DEPENDENCIES
  The IPDC memheap must have been initialized prior to calling ipdc_alloc()

RETURN VALUE
  non-NULL   IPDC instance handle on success
  NULL       on failure 
  

SIDE EFFECTS
  Allocates a IPDC instance configuring it with the passed configuration
  parameters.
===========================================================================*/
ipdc_handle_type ipdc_alloc
(
  const ipdc_comp_config_options_s_type       * const comp_channel_params,
  const ipdc_decomp_config_options_s_type     * const decomp_channel_params,
  const byte                                  * const mem_prefill_buffer_ptr,
  uint16                                        mem_prefill_size
);

/*===========================================================================
FUNCTION IPDC_COMPRESS

DESCRIPTION
  The IPDC compression function.  It takes the IPDC instance handle along
  with the packet to compress and returns the compressed packet in pkt along
  with the compressed packet type in pkt_type argument.

DEPENDENCIES
  A valid handle must be passed.

RETURN VALUE
   0   if successful.
  -1   in case of error

SIDE EFFECTS
  Compresses the packet if successful returning it in pkt.  
===========================================================================*/
int ipdc_compress
(
  ipdc_req_pkt_comp_info_type  *comp_pkt_info_ptr
);

/*===========================================================================
FUNCTION IPDC_GET_UNCOMPRESSED_PKT

DESCRIPTION
  This function creates an uncompressed packet from an original packet.
  It takes the IPDC instance handle along with the original packet and
  adds the IPDC Header byte indicating that nothing was compressed in the
  packet.  Nothing Compressed packet is returned in pkt argument.


DEPENDENCIES
  A valid handle must be passed.

RETURN VALUE
   0   if successful.
  -1   in case of error

SIDE EFFECTS
  Compresses the packet if successful returning it in pkt.  
===========================================================================*/
int ipdc_get_uncompressed_pkt
(
  ipdc_req_pkt_comp_info_type   *comp_pkt_info_ptr,
  boolean                        chain_src_dsm_to_targer_dsm
);

/*===========================================================================
FUNCTION IPDC_DECOMPRESS

DESCRIPTION
  The IPDC decompression function.  It takes the IPDC instance handle along
  with the packet to compress and returns the decompressed packet in pkt along
  with the decompressed packet type in pkt_type argument.

DEPENDENCIES
  A valid handle must be passed.

RETURN VALUE
   0   if successful.
  -1   in case of error

SIDE EFFECTS
  Decompresses the data packet if successful returning it in pkt.  
===========================================================================*/
int ipdc_decompress
(
  ipdc_handle_type               handle,  /* IPDC instance                 */
  dsm_item_type                **pkt      /* Packet to decompress          */
);


/*===========================================================================
FUNCTION IPDC_FREE

DESCRIPTION
  Frees the IPDC instance.  The handle should not be used after a call to
  ipdc_free().

DEPENDENCIES
  A valid handle must be passed

RETURN VALUE
  None

SIDE EFFECTS
  Frees the IPDC instance
===========================================================================*/
void ipdc_free
(
  ipdc_handle_type          handle     /* Instance of IPDC                 */
);

/*===========================================================================
FUNCTION IPDC_FLUSH_COMP_MEM

DESCRIPTION
  Flushes the IPDC instance's Compressor Memory.  

DEPENDENCIES
  A valid handle must be passed

RETURN VALUE
  None

SIDE EFFECTS
  Flushes the IPDC instance's Compressor Memory  
===========================================================================*/
void ipdc_flush_comp_mem
(
  ipdc_handle_type          handle,     /* Instance of IPDC                 */
  const byte              * const mem_prefill_buffer_ptr,
  uint16                    mem_prefill_size
);

/*===========================================================================
FUNCTION IPDC_RESET_COMP_STATS

DESCRIPTION
  Resets the IPDC instance's Compressor Engine's Statistics.  

DEPENDENCIES
  A valid handle must be passed

RETURN VALUE
  None

SIDE EFFECTS
  Resets the IPDC instance's Compressor Engine's Statistics. 
===========================================================================*/
void ipdc_reset_comp_stats
(
  ipdc_handle_type          handle     /* Instance of IPDC                 */
);

/*===========================================================================
FUNCTION IPDC_FLUSH_DECOMP_MEM

DESCRIPTION
  Flushes the IPDC instance's Decompressor Memory.  

DEPENDENCIES
  A valid handle must be passed

RETURN VALUE
  None

SIDE EFFECTS
  Flushes the IPDC instance's Decompressor Memory
===========================================================================*/
void ipdc_flush_decomp_mem
(
  ipdc_handle_type          handle,     /* Instance of IPDC                 */
  const byte              * const mem_prefill_buffer_ptr,
  uint16                    mem_prefill_size
);

/*===========================================================================
FUNCTION IPDC_RESET_DECOMP_STATS

DESCRIPTION
  Resets the IPDC instance's Decompressor Engine's Statistics.  

DEPENDENCIES
  A valid handle must be passed

RETURN VALUE
  None

SIDE EFFECTS
  Resets the IPDC instance's Decompressor Engine's Statistics. 
===========================================================================*/
void ipdc_reset_decomp_stats
(
  ipdc_handle_type          handle     /* Instance of IPDC                 */
);

#ifdef __cplusplus
}
#endif

#endif /* PS_IPDC_H */

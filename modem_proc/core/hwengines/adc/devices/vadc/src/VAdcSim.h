#ifndef VADCSIM_H
#define VADCSIM_H
/*============================================================================
  @file VAdcSim.h
 
  VAdc unit test.
 
 
                Copyright (c) 2012 Qualcomm Technologies, Inc.
                All Rights Reserved.
                Qualcomm Technologies Proprietary and Confidential.
============================================================================*/
/* $Header: //components/rel/core.mpss/3.5.c12.3/hwengines/adc/devices/vadc/src/VAdcSim.h#1 $ */

/*-------------------------------------------------------------------------
 * Include Files
 * ----------------------------------------------------------------------*/
#include "DalVAdc.h"

/*-------------------------------------------------------------------------
 * Preprocessor Definitions and Constants
 * ----------------------------------------------------------------------*/

/*-------------------------------------------------------------------------
 * Type Declarations
 * ----------------------------------------------------------------------*/

/*-------------------------------------------------------------------------
 * Function Declarations and Documentation
 * ----------------------------------------------------------------------*/
int32 VAdcSim_ReadLong(uint32 uOffset, unsigned char *pucData, uint32 uDataLen, uint32 *puTotalBytesRead);
int32 VAdcSim_WriteLong(uint32 uOffset, unsigned char *pucData, uint32 uDataLen);

#endif /* #ifndef VADCSIM_H */


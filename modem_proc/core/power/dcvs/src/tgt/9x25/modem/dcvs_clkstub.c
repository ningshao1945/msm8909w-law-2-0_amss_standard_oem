/**********************************************************************
 * dcvs_clkstub.c
 *
 * Provides the interface for querying clock information on the 8960 Target.
 * Every target has an implementation of this file.
 * The targets can have one of the following clock plan data types::
 * DCVS_PRIMARY_CLOCK_PLAN_DATA_TYPE
 * DCVS_LOCAL_CLOCK_PLAN_DATA_TYPE
 * 
 * The priority of the clock plan retrieval is ::
 * DCVS_PRIMARY_CLOCK_PLAN_DATA_TYPE
 * Query from the resource
 * DCVS_LOCAL_CLOCK_PLAN_DATA_TYPE
 * 
 *
 * EXTERNALIZED FUNCTIONS
 *
 * Copyright (C) 2011-2013 by QUALCOMM Technologies, Incorporated
 * All Rights Reserved.
 *
 **********************************************************************/
/*===========================================================================
                        Edit History
$Header: //components/rel/core.mpss/3.5.c12.3/power/dcvs/src/tgt/9x25/modem/dcvs_clkstub.c#1 $
$DateTime: 2016/12/13 07:59:23 $

when       who     what, where, why
--------   ----    ----------------------------------------------------------- 
04/12/13   nj      Added V2 clock plan + chip detection logic to choose plan 
03/26/13   nj      Updates to clock plan - lowered BW requests for CPUFreq<576
12/07/12   nj      Updates to clock plan
11/06/12   nj      Updates to the Clock plan table
09/11/12   nj      Initializing clkticks per second variable 
09/05/12   nj      Updated the clock plan
03/16/12   nj      initial checkin
=============================================================================*/


#include "comdef.h"
#include "dcvs_target.h"
#include "dcvs_core.h"
#include "DDIChipInfo.h"
#include "CoreVerify.h"

/* This local clock plan table is converted into the format of the
   primary clock plan table and is used if the primary plan is not available.*/

DCVS_LOCAL_CLOCK_PLAN_DATA_TYPE localClockPlanData[]=
{
  {787200}
};

/* The lookup table of requested mips and the corresponding 
   CPU frequency(In KHz)  and Bus AXI Frequency.(In MBps) 
*/
DCVS_PRIMARY_CLOCK_PLAN_DATA_TYPE primaryClockPlanDataV1[] =
{
  {115,    115200, 532},
  {144,    144000, 532},
  {192,    192000, 532}, 
  {288,    288000, 532},
  {384,    384000, 532},
  {576,    576000, 2128},
  {691,    691200, 2128},
 };

DCVS_PRIMARY_CLOCK_PLAN_DATA_TYPE primaryClockPlanDataV2[] =
{
  {115,    115200, 532},
  {144,    144000, 532},
  {192,    192000, 532}, 
  {288,    288000, 532},
  {384,    384000, 532},
  {576,    576000, 2128},
  {691,    691200, 2128},
  {787,    787200, 2128},
};

DCVS_LOCAL_CLOCK_PLAN_DATA_TYPE* DCVSTargetClockPlanLocalGet(void)
{
  /* Return the local clock plan table */
  return(localClockPlanData);
}

uint32 DCVSTargetClockPlanLocalNumLevelsGet(void)
{
  /* Return the number of entries in the local clock plan table. */
  return(sizeof(localClockPlanData)/sizeof(DCVS_LOCAL_CLOCK_PLAN_DATA_TYPE));
}

DCVS_TARGET_CLOCK_PLAN_INFO_TYPE dcvsTargetClockPlan = 
{
  /* The clock plan table having mappings of mips and processor frequency.*/
  primaryClockPlanDataV2,
  /* The number of performance levels in the clock plan for this target. */
  sizeof(primaryClockPlanDataV2)/sizeof(DCVS_PRIMARY_CLOCK_PLAN_DATA_TYPE),
  /* Target specific frequency conversion functions. */
  NULL,
  NULL,
  NULL,
  19200000    /* This is the freq. of the QTimer source (timer clock frequency) */
};


DCVS_TARGET_CLOCK_PLAN_INFO_TYPE* DCVSTargetClockPlanInfoGet(void)
{
  // Determine chip version

  DalChipInfoVersionType chipVersion;
  CORE_VERIFY(chipVersion = DalChipInfo_ChipVersion());

  if (chipVersion < 0x00020000)
  {
      dcvsTargetClockPlan.clockPlanTable = primaryClockPlanDataV1;  
      dcvsTargetClockPlan.numLevels = sizeof(primaryClockPlanDataV1)/sizeof(DCVS_PRIMARY_CLOCK_PLAN_DATA_TYPE);
  }
  /* Return the local clock plan info of the target. */
  return(&dcvsTargetClockPlan);
}

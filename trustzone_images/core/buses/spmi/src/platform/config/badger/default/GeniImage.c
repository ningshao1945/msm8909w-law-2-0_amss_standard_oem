/**
 * THIS FILE WAS AUTOGENERATED -- DO NOT EDIT DIRECTLY.
 * Derived from: geni_image_0_spmi_r1_IPCAT_1_1_0-1_2_0-2_1_0.txt
 *
 * See genGeniSource.sh
 *
 * Copyright (c) 2013 by Qualcomm Technologies Incorporated. All Rights Reserved.
 * 
 */

#include "SpmiTypes.h"
#include "SpmiHal.h"

static const uint32 GENI_CFG_RAM_COUNT = 101;
static const uint32 GENI_CFG_RAM_VALUES[] =
{
   0x0000FFFF,  // GENI_CFG_RAMn[0]
   0x00000001,  // GENI_CFG_RAMn[1]
   0x00048A0C,  // GENI_CFG_RAMn[2]
   0x0019C470,  // GENI_CFG_RAMn[3]
   0x0005921C,  // GENI_CFG_RAMn[4]
   0x0019C470,  // GENI_CFG_RAMn[5]
   0x0006EA00,  // GENI_CFG_RAMn[6]
   0x0016C000,  // GENI_CFG_RAMn[7]
   0x00076608,  // GENI_CFG_RAMn[8]
   0x00100000,  // GENI_CFG_RAMn[9]
   0x00076688,  // GENI_CFG_RAMn[10]
   0x00100000,  // GENI_CFG_RAMn[11]
   0x00076648,  // GENI_CFG_RAMn[12]
   0x00100000,  // GENI_CFG_RAMn[13]
   0x000766C8,  // GENI_CFG_RAMn[14]
   0x00100000,  // GENI_CFG_RAMn[15]
   0x0007BA28,  // GENI_CFG_RAMn[16]
   0x00100840,  // GENI_CFG_RAMn[17]
   0x0008D2A8,  // GENI_CFG_RAMn[18]
   0x00108810,  // GENI_CFG_RAMn[19]
   0x00094A68,  // GENI_CFG_RAMn[20]
   0x00108810,  // GENI_CFG_RAMn[21]
   0x0009D258,  // GENI_CFG_RAMn[22]
   0x00000000,  // GENI_CFG_RAMn[23]
   0x000A72D8,  // GENI_CFG_RAMn[24]
   0x001008A0,  // GENI_CFG_RAMn[25]
   0x000AF238,  // GENI_CFG_RAMn[26]
   0x001008A0,  // GENI_CFG_RAMn[27]
   0x000B3204,  // GENI_CFG_RAMn[28]
   0x0016C000,  // GENI_CFG_RAMn[29]
   0x000B8A02,  // GENI_CFG_RAMn[30]
   0x00108810,  // GENI_CFG_RAMn[31]
   0x000BF206,  // GENI_CFG_RAMn[32]
   0x00108810,  // GENI_CFG_RAMn[33]
   0x000C4E01,  // GENI_CFG_RAMn[34]
   0x00100000,  // GENI_CFG_RAMn[35]
   0x00041618,  // GENI_CFG_RAMn[36]
   0x00044612,  // GENI_CFG_RAMn[37]
   0x0004500F,  // GENI_CFG_RAMn[38]
   0x0004500F,  // GENI_CFG_RAMn[39]
   0x00005000,  // GENI_CFG_RAMn[40]
   0x00048D48,  // GENI_CFG_RAMn[41]
   0x00086252,  // GENI_CFG_RAMn[42]
   0x00150088,  // GENI_CFG_RAMn[43]
   0x00041618,  // GENI_CFG_RAMn[44]
   0x00044612,  // GENI_CFG_RAMn[45]
   0x0004500F,  // GENI_CFG_RAMn[46]
   0x0004500F,  // GENI_CFG_RAMn[47]
   0x00046080,  // GENI_CFG_RAMn[48]
   0x00051051,  // GENI_CFG_RAMn[49]
   0x0002BC00,  // GENI_CFG_RAMn[50]
   0x0008F26C,  // GENI_CFG_RAMn[51]
   0x0000D000,  // GENI_CFG_RAMn[52]
   0x0018E800,  // GENI_CFG_RAMn[53]
   0x0008C064,  // GENI_CFG_RAMn[54]
   0x00041623,  // GENI_CFG_RAMn[55]
   0x00042628,  // GENI_CFG_RAMn[56]
   0x00001E00,  // GENI_CFG_RAMn[57]
   0x00085052,  // GENI_CFG_RAMn[58]
   0x00041627,  // GENI_CFG_RAMn[59]
   0x00105000,  // GENI_CFG_RAMn[60]
   0x00041627,  // GENI_CFG_RAMn[61]
   0x00045147,  // GENI_CFG_RAMn[62]
   0x00045000,  // GENI_CFG_RAMn[63]
   0x0004A25F,  // GENI_CFG_RAMn[64]
   0x0005313E,  // GENI_CFG_RAMn[65]
   0x0008527F,  // GENI_CFG_RAMn[66]
   0x00040051,  // GENI_CFG_RAMn[67]
   0x0004BE68,  // GENI_CFG_RAMn[68]
   0x0018E800,  // GENI_CFG_RAMn[69]
   0x00043209,  // GENI_CFG_RAMn[70]
   0x00044051,  // GENI_CFG_RAMn[71]
   0x00004800,  // GENI_CFG_RAMn[72]
   0x0008505F,  // GENI_CFG_RAMn[73]
   0x00043209,  // GENI_CFG_RAMn[74]
   0x00044051,  // GENI_CFG_RAMn[75]
   0x00004800,  // GENI_CFG_RAMn[76]
   0x0008504F,  // GENI_CFG_RAMn[77]
   0x0004A627,  // GENI_CFG_RAMn[78]
   0x00045000,  // GENI_CFG_RAMn[79]
   0x0004A25E,  // GENI_CFG_RAMn[80]
   0x00055090,  // GENI_CFG_RAMn[81]
   0x00116000,  // GENI_CFG_RAMn[82]
   0x00043209,  // GENI_CFG_RAMn[83]
   0x00044051,  // GENI_CFG_RAMn[84]
   0x00044828,  // GENI_CFG_RAMn[85]
   0x00080063,  // GENI_CFG_RAMn[86]
   0x00041627,  // GENI_CFG_RAMn[87]
   0x000850AC,  // GENI_CFG_RAMn[88]
   0x00041623,  // GENI_CFG_RAMn[89]
   0x00002600,  // GENI_CFG_RAMn[90]
   0x0008505F,  // GENI_CFG_RAMn[91]
   0x0004161A,  // GENI_CFG_RAMn[92]
   0x00002800,  // GENI_CFG_RAMn[93]
   0x00085052,  // GENI_CFG_RAMn[94]
   0x0004161A,  // GENI_CFG_RAMn[95]
   0x00002800,  // GENI_CFG_RAMn[96]
   0x00086061,  // GENI_CFG_RAMn[97]
   0x000416A0,  // GENI_CFG_RAMn[98]
   0x00147C28,  // GENI_CFG_RAMn[99]
   0x00000000,  // GENI_CFG_RAMn[100]
};

void SpmiMaster_LoadFirmware()
{
   // Set config registers
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG0_ADDR, 0x0202187F );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG1_ADDR, 0x00027F7B );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG2_ADDR, 0x000076BF );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG3_ADDR, 0x0007F8FE );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG4_ADDR, 0x000FFEFE );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG5_ADDR, 0x208802AB );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG6_ADDR, 0x00005512 );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG7_ADDR, 0x03880001 );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG8_ADDR, 0x0000021F );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG9_ADDR, 0x0007F8FE );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG10_ADDR, 0x000FFEFE );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG11_ADDR, 0x00041000 );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG12_ADDR, 0x00000000 );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG13_ADDR, 0x00000000 );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG14_ADDR, 0x00000000 );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG15_ADDR, 0x002DC896 );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG16_ADDR, 0x00000009 );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG17_ADDR, 0x001FC3FD );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG18_ADDR, 0x00080102 );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG19_ADDR, 0x00100000 );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG20_ADDR, 0x00000008 );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG21_ADDR, 0x00208800 );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG22_ADDR, 0x0068B800 );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG23_ADDR, 0x00000800 );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG24_ADDR, 0x00483000 );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG25_ADDR, 0x00555555 );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG26_ADDR, 0x00397A41 );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG27_ADDR, 0x00000000 );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG28_ADDR, 0x00000000 );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG29_ADDR, 0x00000000 );
   SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_REG30_ADDR, 0x00000000 );

   // Load RAM image
   for(uint32 i = 0; i < GENI_CFG_RAM_COUNT && i <= HWIO_PMIC_ARB_SPMI_GENI_CFG_RAMn_MAXn; i++) {
      SPMI_HWIO_OUT( HWIO_PMIC_ARB_SPMI_GENI_CFG_RAMn_ADDR(i), GENI_CFG_RAM_VALUES[i] );
   }
}

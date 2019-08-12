/**
 * This file was generated by the Objective Systems ASN1C Compiler
 * (http://www.obj-sys.com).  Version: 6.6.5, Date: 22-Oct-2013.
 */
 
/*===========================================================================

  $Header: //commercial/MPSS.JO.2.0.c1.4/Main/modem_proc/gps/gnss/sm/tm/prot/osys/v6_6_5/inc/rtkey_supl.h#1 $
  $DateTime: 2016/12/13 07:59:45 $
 
============================================================================*/
 
#ifndef RTKEY_H
#define RTKEY_H

#ifdef __cplusplus
extern "C" {
#endif

/*
Licensed copy
*/
static const unsigned char _rtkey[] = { \
0x23, 0x9f, 0x35, 0x56, 0xd4, 0x26, 0x1f, 0x3d,  \
0xc4, 0x27, 0x72, 0xd3, 0xe4, 0x8c, 0xf1, 0x55,  \
0x6e, 0x5b, 0xae, 0xf1, 0x6c, 0xa1, 0x0c, 0xd2,  \
0xf6, 0x66, 0x1f, 0x33, 0x1f, 0x52, 0xed, 0xa1,  \
0x15, 0xbd, 0x13, 0xa2, 0x1d, 0x48, 0x9f, 0x37,  \
0x60, 0x31, 0xb0, 0xd0, 0xb5, 0xde, 0x53, 0x14,  \
0x3d, 0x63, 0x72, 0xf0, 0x11, 0x8e, 0x3f, 0x59,  \
0x8f, 0x86, 0x0c, 0x79, 0x91, 0xa5, 0x23, 0x76 \
} ;

#define rtInitContext(pctxt) \
rtInitContextUsingKey(pctxt,_rtkey,sizeof(_rtkey))

#define rtNewContext() \
rtNewContextUsingKey(_rtkey,sizeof(_rtkey))

#define rtXmlInitContext(pctxt) \
rtXmlInitContextUsingKey(pctxt,_rtkey,sizeof(_rtkey))

#define ASN1C_VERSION "6.6.5"
#define AC_VERSION_INT 665

#ifdef __cplusplus
}
#endif

#endif

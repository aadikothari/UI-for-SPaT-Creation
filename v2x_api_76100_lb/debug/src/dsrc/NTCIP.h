/**
 * This file was generated by the Objective Systems ASN1C Compiler
 * (http://www.obj-sys.com).
 */
#ifndef NTCIP_H
#define NTCIP_H

#include <stdio.h>
#include <stdlib.h>
#include "rtpersrc/asn1PerCppTypes.h"
#include "rtsrc/asn1CppTypes.h"
#include "rtsrc/rtPrintToStream.h"
#include "rtsrc/asn1type.h"
#include "rtxmlsrc/asn1xml.h"
#include "rtxmlsrc/rtXmlCppMsgBuf.h"
#include "rtsrc/asn1type.h"
#include "rtjsonsrc/asn1json.h"
#include "rtjsonsrc/rtJsonCppMsgBuf.h"

/**
 * Header file for ASN.1 module NTCIP
 */
/**************************************************************/
/*                                                            */
/*  EssPrecipYesNo                                            */
/*                                                            */
/**************************************************************/
/*
EssPrecipYesNo ::= ENUMERATED { precip(1), noPrecip(2), error(3) }
*/
struct EXTERN EssPrecipYesNo {
   enum Root {
      precip = 1,
      noPrecip = 2,
      error = 3
   } ;
} ;

typedef OSUINT32 ASN1T_EssPrecipYesNo;

EXTERN int asn1PE_EssPrecipYesNo (OSCTXT* pctxt, ASN1T_EssPrecipYesNo value);

EXTERN int asn1PD_EssPrecipYesNo (OSCTXT* pctxt, ASN1T_EssPrecipYesNo* pvalue);

EXTERN int XmlEnc_EssPrecipYesNo (OSCTXT* pctxt, ASN1T_EssPrecipYesNo value, 
   const OSUTF8CHAR* elemName, const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_EssPrecipYesNo (OSCTXT* pctxt, ASN1T_EssPrecipYesNo* pvalue)
   ;

EXTERN int asn1JsonEnc_EssPrecipYesNo (OSCTXT *pctxt, ASN1T_EssPrecipYesNo *pvalue);

EXTERN int asn1JsonDec_EssPrecipYesNo (OSCTXT *pctxt, ASN1T_EssPrecipYesNo *pvalue);

EXTERN int asn1PrtToStrm_EssPrecipYesNo (OSCTXT *pctxt, 
   const char* name, const ASN1T_EssPrecipYesNo* pvalue);

EXTERN ASN1T_EssPrecipYesNo* new_ASN1T_EssPrecipYesNo (ASN1CType& ccobj);

EXTERN extern const OSEnumItem ASN1T_EssPrecipYesNo_ENUMTAB[];
#define ASN1T_EssPrecipYesNo_ENUMTABSIZE 3

EXTERN const OSUTF8CHAR* ASN1T_EssPrecipYesNo_ToString (OSINT32 value);

EXTERN int ASN1T_EssPrecipYesNo_ToEnum (OSCTXT* pctxt,
   const OSUTF8CHAR* value, ASN1T_EssPrecipYesNo* pvalue);

EXTERN int ASN1T_EssPrecipYesNo_ToEnum2 (OSCTXT* pctxt,
   const OSUTF8CHAR* value, OSSIZE valueLen, ASN1T_EssPrecipYesNo* pvalue);

/**************************************************************/
/*                                                            */
/*  EssPrecipRate                                             */
/*                                                            */
/**************************************************************/
/*
EssPrecipRate ::= INTEGER (0..65535)
*/
typedef OSUINT16 ASN1T_EssPrecipRate;

EXTERN int asn1PE_EssPrecipRate (OSCTXT* pctxt, ASN1T_EssPrecipRate value);

EXTERN int asn1PD_EssPrecipRate (OSCTXT* pctxt, ASN1T_EssPrecipRate* pvalue);

EXTERN int XmlEnc_EssPrecipRate (OSCTXT* pctxt, ASN1T_EssPrecipRate value, 
   const OSUTF8CHAR* elemName, const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_EssPrecipRate (OSCTXT* pctxt, ASN1T_EssPrecipRate* pvalue);

EXTERN int asn1JsonEnc_EssPrecipRate (OSCTXT *pctxt, ASN1T_EssPrecipRate *pvalue);

EXTERN int asn1JsonDec_EssPrecipRate (OSCTXT *pctxt, ASN1T_EssPrecipRate *pvalue);

EXTERN int asn1PrtToStrm_EssPrecipRate (OSCTXT *pctxt, 
   const char* name, const ASN1T_EssPrecipRate* pvalue);

EXTERN ASN1T_EssPrecipRate* new_ASN1T_EssPrecipRate (ASN1CType& ccobj);

/**************************************************************/
/*                                                            */
/*  EssPrecipSituation                                        */
/*                                                            */
/**************************************************************/
/*
EssPrecipSituation ::= ENUMERATED { other(1), unknown(2), noPrecipitation(3), unidentifiedSlight(4), unidentifiedModerate(5), unidentifiedHeavy(6), snowSlight(7), snowModerate(8), snowHeavy(9), rainSlight(10), rainModerate(11), rainHeavy(12), frozenPrecipitationSlight(13), frozenPrecipitationModerate(14), frozenPrecipitationHeavy(15) }
*/
struct EXTERN EssPrecipSituation {
   enum Root {
      other = 1,
      unknown = 2,
      noPrecipitation = 3,
      unidentifiedSlight = 4,
      unidentifiedModerate = 5,
      unidentifiedHeavy = 6,
      snowSlight = 7,
      snowModerate = 8,
      snowHeavy = 9,
      rainSlight = 10,
      rainModerate = 11,
      rainHeavy = 12,
      frozenPrecipitationSlight = 13,
      frozenPrecipitationModerate = 14,
      frozenPrecipitationHeavy = 15
   } ;
} ;

typedef OSUINT32 ASN1T_EssPrecipSituation;

EXTERN int asn1PE_EssPrecipSituation (OSCTXT* pctxt, ASN1T_EssPrecipSituation value);

EXTERN int asn1PD_EssPrecipSituation (OSCTXT* pctxt, ASN1T_EssPrecipSituation* pvalue);

EXTERN int XmlEnc_EssPrecipSituation (OSCTXT* pctxt, 
   ASN1T_EssPrecipSituation value, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_EssPrecipSituation (OSCTXT* pctxt, 
   ASN1T_EssPrecipSituation* pvalue);

EXTERN int asn1JsonEnc_EssPrecipSituation (OSCTXT *pctxt, ASN1T_EssPrecipSituation *pvalue);

EXTERN int asn1JsonDec_EssPrecipSituation (OSCTXT *pctxt, ASN1T_EssPrecipSituation *pvalue);

EXTERN int asn1PrtToStrm_EssPrecipSituation (OSCTXT *pctxt, 
   const char* name, const ASN1T_EssPrecipSituation* pvalue);

EXTERN ASN1T_EssPrecipSituation* 
   new_ASN1T_EssPrecipSituation (ASN1CType& ccobj);

EXTERN extern const OSEnumItem ASN1T_EssPrecipSituation_ENUMTAB[];
#define ASN1T_EssPrecipSituation_ENUMTABSIZE 15

EXTERN const OSUTF8CHAR* ASN1T_EssPrecipSituation_ToString (OSINT32 value);

EXTERN int ASN1T_EssPrecipSituation_ToEnum (OSCTXT* pctxt,
   const OSUTF8CHAR* value, ASN1T_EssPrecipSituation* pvalue);

EXTERN int ASN1T_EssPrecipSituation_ToEnum2 (OSCTXT* pctxt,
   const OSUTF8CHAR* value, OSSIZE valueLen, ASN1T_EssPrecipSituation* pvalue)
      ;

/**************************************************************/
/*                                                            */
/*  EssSolarRadiation                                         */
/*                                                            */
/**************************************************************/
/*
EssSolarRadiation ::= INTEGER (0..65535)
*/
typedef OSUINT16 ASN1T_EssSolarRadiation;

EXTERN int asn1PE_EssSolarRadiation (OSCTXT* pctxt, ASN1T_EssSolarRadiation value);

EXTERN int asn1PD_EssSolarRadiation (OSCTXT* pctxt, ASN1T_EssSolarRadiation* pvalue);

EXTERN int XmlEnc_EssSolarRadiation (OSCTXT* pctxt, 
   ASN1T_EssSolarRadiation value, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_EssSolarRadiation (OSCTXT* pctxt, 
   ASN1T_EssSolarRadiation* pvalue);

EXTERN int asn1JsonEnc_EssSolarRadiation (OSCTXT *pctxt, ASN1T_EssSolarRadiation *pvalue);

EXTERN int asn1JsonDec_EssSolarRadiation (OSCTXT *pctxt, ASN1T_EssSolarRadiation *pvalue);

EXTERN int asn1PrtToStrm_EssSolarRadiation (OSCTXT *pctxt, 
   const char* name, const ASN1T_EssSolarRadiation* pvalue);

EXTERN ASN1T_EssSolarRadiation* new_ASN1T_EssSolarRadiation (ASN1CType& ccobj)
   ;

/**************************************************************/
/*                                                            */
/*  EssMobileFriction                                         */
/*                                                            */
/**************************************************************/
/*
EssMobileFriction ::= INTEGER (0..101)
*/
typedef OSUINT8 ASN1T_EssMobileFriction;

EXTERN int asn1PE_EssMobileFriction (OSCTXT* pctxt, ASN1T_EssMobileFriction value);

EXTERN int asn1PD_EssMobileFriction (OSCTXT* pctxt, ASN1T_EssMobileFriction* pvalue);

EXTERN int XmlEnc_EssMobileFriction (OSCTXT* pctxt, 
   ASN1T_EssMobileFriction value, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_EssMobileFriction (OSCTXT* pctxt, 
   ASN1T_EssMobileFriction* pvalue);

EXTERN int asn1JsonEnc_EssMobileFriction (OSCTXT *pctxt, ASN1T_EssMobileFriction *pvalue);

EXTERN int asn1JsonDec_EssMobileFriction (OSCTXT *pctxt, ASN1T_EssMobileFriction *pvalue);

EXTERN int asn1PrtToStrm_EssMobileFriction (OSCTXT *pctxt, 
   const char* name, const ASN1T_EssMobileFriction* pvalue);

EXTERN ASN1T_EssMobileFriction* new_ASN1T_EssMobileFriction (ASN1CType& ccobj)
   ;

#endif

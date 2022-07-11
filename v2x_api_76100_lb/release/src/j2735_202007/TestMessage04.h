/**
 * This file was generated by the Objective Systems ASN1C Compiler
 * (http://www.obj-sys.com).
 */
#ifndef TESTMESSAGE04_H
#define TESTMESSAGE04_H

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
 * Header file for ASN.1 module TestMessage04
 */
/**************************************************************/
/*                                                            */
/*  TestMessage04_regional                                    */
/*                                                            */
/**************************************************************/
/*
Type was extracted from 'TestMessage04'
*/
struct EXTERN ASN1T_TestMessage04_regional {
   OSUINT8 regionId;
   ASN1TOpenType regExtValue;
} ;

EXTERN int asn1PE_TestMessage04_regional (OSCTXT* pctxt, ASN1T_TestMessage04_regional* pvalue);

EXTERN int asn1PD_TestMessage04_regional (OSCTXT* pctxt, ASN1T_TestMessage04_regional* pvalue);

EXTERN int XmlEnc_TestMessage04_regional (OSCTXT* pctxt, 
   ASN1T_TestMessage04_regional* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_TestMessage04_regional (OSCTXT* pctxt, 
   ASN1T_TestMessage04_regional* pvalue);

EXTERN int asn1JsonEnc_TestMessage04_regional (OSCTXT *pctxt, ASN1T_TestMessage04_regional *pvalue);

EXTERN int asn1JsonDec_TestMessage04_regional (OSCTXT *pctxt, ASN1T_TestMessage04_regional *pvalue);

EXTERN int asn1PrtToStrm_TestMessage04_regional (OSCTXT *pctxt, 
   const char* name, const ASN1T_TestMessage04_regional* pvalue);

EXTERN ASN1T_TestMessage04_regional* 
   new_ASN1T_TestMessage04_regional (ASN1CType& ccobj);

EXTERN int asn1Init_TestMessage04_regional (ASN1T_TestMessage04_regional* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_TestMessage04_regional (OSCTXT *pctxt, 
   ASN1T_TestMessage04_regional* pvalue);

/**************************************************************/
/*                                                            */
/*  TestMessage04                                             */
/*                                                            */
/**************************************************************/
/*
TestMessage04 ::= SEQUENCE {
   header [0] Header OPTIONAL,
   regional [1] SEQUENCE {
      regionId [0] REG-EXT-ID-AND-TYPE.&id ({Reg-TestMessage04}),
      regExtValue [1] EXPLICIT REG-EXT-ID-AND-TYPE.&Type ({Reg-TestMessage04}{@regionId})
   } OPTIONAL,
   ...
}
*/
struct EXTERN ASN1T_TestMessage04 {
   struct {
      unsigned headerPresent : 1;
      unsigned regionalPresent : 1;
   } m;
   struct ASN1T_Header *header;
   ASN1T_TestMessage04_regional regional;
   ASN1TSeqExt extElem1;
   ASN1T_TestMessage04 ();
} ;

EXTERN int asn1PE_TestMessage04 (OSCTXT* pctxt, ASN1T_TestMessage04* pvalue);

EXTERN int asn1PD_TestMessage04 (OSCTXT* pctxt, ASN1T_TestMessage04* pvalue);

EXTERN int XmlEnc_TestMessage04 (OSCTXT* pctxt, ASN1T_TestMessage04* pvalue, 
   const OSUTF8CHAR* elemName, const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_TestMessage04 (OSCTXT* pctxt, ASN1T_TestMessage04* pvalue);

EXTERN int asn1JsonEnc_TestMessage04 (OSCTXT *pctxt, ASN1T_TestMessage04 *pvalue);

EXTERN int asn1JsonDec_TestMessage04 (OSCTXT *pctxt, ASN1T_TestMessage04 *pvalue);

EXTERN int asn1PrtToStrm_TestMessage04 (OSCTXT *pctxt, 
   const char* name, const ASN1T_TestMessage04* pvalue);

EXTERN ASN1T_TestMessage04* new_ASN1T_TestMessage04 (ASN1CType& ccobj);

EXTERN int asn1Init_TestMessage04 (ASN1T_TestMessage04* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_TestMessage04 (OSCTXT *pctxt, ASN1T_TestMessage04* pvalue);

#endif

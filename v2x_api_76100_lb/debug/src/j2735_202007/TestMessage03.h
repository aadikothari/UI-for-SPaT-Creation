/**
 * This file was generated by the Objective Systems ASN1C Compiler
 * (http://www.obj-sys.com).
 */
#ifndef TESTMESSAGE03_H
#define TESTMESSAGE03_H

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
 * Header file for ASN.1 module TestMessage03
 */
/**************************************************************/
/*                                                            */
/*  TestMessage03_regional                                    */
/*                                                            */
/**************************************************************/
/*
Type was extracted from 'TestMessage03'
*/
struct EXTERN ASN1T_TestMessage03_regional {
   OSUINT8 regionId;
   ASN1TOpenType regExtValue;
} ;

EXTERN int asn1PE_TestMessage03_regional (OSCTXT* pctxt, ASN1T_TestMessage03_regional* pvalue);

EXTERN int asn1PD_TestMessage03_regional (OSCTXT* pctxt, ASN1T_TestMessage03_regional* pvalue);

EXTERN int XmlEnc_TestMessage03_regional (OSCTXT* pctxt, 
   ASN1T_TestMessage03_regional* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_TestMessage03_regional (OSCTXT* pctxt, 
   ASN1T_TestMessage03_regional* pvalue);

EXTERN int asn1JsonEnc_TestMessage03_regional (OSCTXT *pctxt, ASN1T_TestMessage03_regional *pvalue);

EXTERN int asn1JsonDec_TestMessage03_regional (OSCTXT *pctxt, ASN1T_TestMessage03_regional *pvalue);

EXTERN int asn1PrtToStrm_TestMessage03_regional (OSCTXT *pctxt, 
   const char* name, const ASN1T_TestMessage03_regional* pvalue);

EXTERN ASN1T_TestMessage03_regional* 
   new_ASN1T_TestMessage03_regional (ASN1CType& ccobj);

EXTERN int asn1Init_TestMessage03_regional (ASN1T_TestMessage03_regional* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_TestMessage03_regional (OSCTXT *pctxt, 
   ASN1T_TestMessage03_regional* pvalue);

/**************************************************************/
/*                                                            */
/*  TestMessage03                                             */
/*                                                            */
/**************************************************************/
/*
TestMessage03 ::= SEQUENCE {
   header [0] Header OPTIONAL,
   regional [1] SEQUENCE {
      regionId [0] REG-EXT-ID-AND-TYPE.&id ({Reg-TestMessage03}),
      regExtValue [1] EXPLICIT REG-EXT-ID-AND-TYPE.&Type ({Reg-TestMessage03}{@regionId})
   } OPTIONAL,
   ...
}
*/
struct EXTERN ASN1T_TestMessage03 {
   struct {
      unsigned headerPresent : 1;
      unsigned regionalPresent : 1;
   } m;
   struct ASN1T_Header *header;
   ASN1T_TestMessage03_regional regional;
   ASN1TSeqExt extElem1;
   ASN1T_TestMessage03 ();
} ;

EXTERN int asn1PE_TestMessage03 (OSCTXT* pctxt, ASN1T_TestMessage03* pvalue);

EXTERN int asn1PD_TestMessage03 (OSCTXT* pctxt, ASN1T_TestMessage03* pvalue);

EXTERN int XmlEnc_TestMessage03 (OSCTXT* pctxt, ASN1T_TestMessage03* pvalue, 
   const OSUTF8CHAR* elemName, const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_TestMessage03 (OSCTXT* pctxt, ASN1T_TestMessage03* pvalue);

EXTERN int asn1JsonEnc_TestMessage03 (OSCTXT *pctxt, ASN1T_TestMessage03 *pvalue);

EXTERN int asn1JsonDec_TestMessage03 (OSCTXT *pctxt, ASN1T_TestMessage03 *pvalue);

EXTERN int asn1PrtToStrm_TestMessage03 (OSCTXT *pctxt, 
   const char* name, const ASN1T_TestMessage03* pvalue);

EXTERN ASN1T_TestMessage03* new_ASN1T_TestMessage03 (ASN1CType& ccobj);

EXTERN int asn1Init_TestMessage03 (ASN1T_TestMessage03* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_TestMessage03 (OSCTXT *pctxt, ASN1T_TestMessage03* pvalue);

#endif
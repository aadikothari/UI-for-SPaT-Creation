/**
 * This file was generated by the Objective Systems ASN1C Compiler
 * (http://www.obj-sys.com).
 */
#ifndef TESTMESSAGE10_H
#define TESTMESSAGE10_H

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
 * Header file for ASN.1 module TestMessage10
 */
/**************************************************************/
/*                                                            */
/*  TestMessage10_regional                                    */
/*                                                            */
/**************************************************************/
/*
Type was extracted from 'TestMessage10'
*/
struct EXTERN ASN1T_TestMessage10_regional {
   OSUINT8 regionId;
   ASN1TOpenType regExtValue;
} ;

EXTERN int asn1PE_TestMessage10_regional (OSCTXT* pctxt, ASN1T_TestMessage10_regional* pvalue);

EXTERN int asn1PD_TestMessage10_regional (OSCTXT* pctxt, ASN1T_TestMessage10_regional* pvalue);

EXTERN int XmlEnc_TestMessage10_regional (OSCTXT* pctxt, 
   ASN1T_TestMessage10_regional* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_TestMessage10_regional (OSCTXT* pctxt, 
   ASN1T_TestMessage10_regional* pvalue);

EXTERN int asn1JsonEnc_TestMessage10_regional (OSCTXT *pctxt, ASN1T_TestMessage10_regional *pvalue);

EXTERN int asn1JsonDec_TestMessage10_regional (OSCTXT *pctxt, ASN1T_TestMessage10_regional *pvalue);

EXTERN int asn1PrtToStrm_TestMessage10_regional (OSCTXT *pctxt, 
   const char* name, const ASN1T_TestMessage10_regional* pvalue);

EXTERN ASN1T_TestMessage10_regional* 
   new_ASN1T_TestMessage10_regional (ASN1CType& ccobj);

EXTERN int asn1Init_TestMessage10_regional (ASN1T_TestMessage10_regional* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_TestMessage10_regional (OSCTXT *pctxt, 
   ASN1T_TestMessage10_regional* pvalue);

/**************************************************************/
/*                                                            */
/*  TestMessage10                                             */
/*                                                            */
/**************************************************************/
/*
TestMessage10 ::= SEQUENCE {
   header [0] Header OPTIONAL,
   regional [1] SEQUENCE {
      regionId [0] REG-EXT-ID-AND-TYPE.&id ({Reg-TestMessage10}),
      regExtValue [1] EXPLICIT REG-EXT-ID-AND-TYPE.&Type ({Reg-TestMessage10}{@regionId})
   } OPTIONAL,
   ...
}
*/
struct EXTERN ASN1T_TestMessage10 {
   struct {
      unsigned headerPresent : 1;
      unsigned regionalPresent : 1;
   } m;
   struct ASN1T_Header *header;
   ASN1T_TestMessage10_regional regional;
   ASN1TSeqExt extElem1;
   ASN1T_TestMessage10 ();
} ;

EXTERN int asn1PE_TestMessage10 (OSCTXT* pctxt, ASN1T_TestMessage10* pvalue);

EXTERN int asn1PD_TestMessage10 (OSCTXT* pctxt, ASN1T_TestMessage10* pvalue);

EXTERN int XmlEnc_TestMessage10 (OSCTXT* pctxt, ASN1T_TestMessage10* pvalue, 
   const OSUTF8CHAR* elemName, const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_TestMessage10 (OSCTXT* pctxt, ASN1T_TestMessage10* pvalue);

EXTERN int asn1JsonEnc_TestMessage10 (OSCTXT *pctxt, ASN1T_TestMessage10 *pvalue);

EXTERN int asn1JsonDec_TestMessage10 (OSCTXT *pctxt, ASN1T_TestMessage10 *pvalue);

EXTERN int asn1PrtToStrm_TestMessage10 (OSCTXT *pctxt, 
   const char* name, const ASN1T_TestMessage10* pvalue);

EXTERN ASN1T_TestMessage10* new_ASN1T_TestMessage10 (ASN1CType& ccobj);

EXTERN int asn1Init_TestMessage10 (ASN1T_TestMessage10* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_TestMessage10 (OSCTXT *pctxt, ASN1T_TestMessage10* pvalue);

#endif

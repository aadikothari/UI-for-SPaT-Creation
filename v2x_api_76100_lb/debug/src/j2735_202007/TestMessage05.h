/**
 * This file was generated by the Objective Systems ASN1C Compiler
 * (http://www.obj-sys.com).
 */
#ifndef TESTMESSAGE05_H
#define TESTMESSAGE05_H

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
 * Header file for ASN.1 module TestMessage05
 */
/**************************************************************/
/*                                                            */
/*  TestMessage05_regional                                    */
/*                                                            */
/**************************************************************/
/*
Type was extracted from 'TestMessage05'
*/
struct EXTERN ASN1T_TestMessage05_regional {
   OSUINT8 regionId;
   ASN1TOpenType regExtValue;
} ;

EXTERN int asn1PE_TestMessage05_regional (OSCTXT* pctxt, ASN1T_TestMessage05_regional* pvalue);

EXTERN int asn1PD_TestMessage05_regional (OSCTXT* pctxt, ASN1T_TestMessage05_regional* pvalue);

EXTERN int XmlEnc_TestMessage05_regional (OSCTXT* pctxt, 
   ASN1T_TestMessage05_regional* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_TestMessage05_regional (OSCTXT* pctxt, 
   ASN1T_TestMessage05_regional* pvalue);

EXTERN int asn1JsonEnc_TestMessage05_regional (OSCTXT *pctxt, ASN1T_TestMessage05_regional *pvalue);

EXTERN int asn1JsonDec_TestMessage05_regional (OSCTXT *pctxt, ASN1T_TestMessage05_regional *pvalue);

EXTERN int asn1PrtToStrm_TestMessage05_regional (OSCTXT *pctxt, 
   const char* name, const ASN1T_TestMessage05_regional* pvalue);

EXTERN ASN1T_TestMessage05_regional* 
   new_ASN1T_TestMessage05_regional (ASN1CType& ccobj);

EXTERN int asn1Init_TestMessage05_regional (ASN1T_TestMessage05_regional* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_TestMessage05_regional (OSCTXT *pctxt, 
   ASN1T_TestMessage05_regional* pvalue);

/**************************************************************/
/*                                                            */
/*  TestMessage05                                             */
/*                                                            */
/**************************************************************/
/*
TestMessage05 ::= SEQUENCE {
   header [0] Header OPTIONAL,
   regional [1] SEQUENCE {
      regionId [0] REG-EXT-ID-AND-TYPE.&id ({Reg-TestMessage05}),
      regExtValue [1] EXPLICIT REG-EXT-ID-AND-TYPE.&Type ({Reg-TestMessage05}{@regionId})
   } OPTIONAL,
   ...
}
*/
struct EXTERN ASN1T_TestMessage05 {
   struct {
      unsigned headerPresent : 1;
      unsigned regionalPresent : 1;
   } m;
   struct ASN1T_Header *header;
   ASN1T_TestMessage05_regional regional;
   ASN1TSeqExt extElem1;
   ASN1T_TestMessage05 ();
} ;

EXTERN int asn1PE_TestMessage05 (OSCTXT* pctxt, ASN1T_TestMessage05* pvalue);

EXTERN int asn1PD_TestMessage05 (OSCTXT* pctxt, ASN1T_TestMessage05* pvalue);

EXTERN int XmlEnc_TestMessage05 (OSCTXT* pctxt, ASN1T_TestMessage05* pvalue, 
   const OSUTF8CHAR* elemName, const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_TestMessage05 (OSCTXT* pctxt, ASN1T_TestMessage05* pvalue);

EXTERN int asn1JsonEnc_TestMessage05 (OSCTXT *pctxt, ASN1T_TestMessage05 *pvalue);

EXTERN int asn1JsonDec_TestMessage05 (OSCTXT *pctxt, ASN1T_TestMessage05 *pvalue);

EXTERN int asn1PrtToStrm_TestMessage05 (OSCTXT *pctxt, 
   const char* name, const ASN1T_TestMessage05* pvalue);

EXTERN ASN1T_TestMessage05* new_ASN1T_TestMessage05 (ASN1CType& ccobj);

EXTERN int asn1Init_TestMessage05 (ASN1T_TestMessage05* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_TestMessage05 (OSCTXT *pctxt, ASN1T_TestMessage05* pvalue);

#endif

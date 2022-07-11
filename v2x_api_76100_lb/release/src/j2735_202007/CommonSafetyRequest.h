/**
 * This file was generated by the Objective Systems ASN1C Compiler
 * (http://www.obj-sys.com).
 */
#ifndef COMMONSAFETYREQUEST_H
#define COMMONSAFETYREQUEST_H

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

#include "rtsrc/ASN1CSeqOfList.h"

/**
 * Header file for ASN.1 module CommonSafetyRequest
 */
/**************************************************************/
/*                                                            */
/*  RequestedItem                                             */
/*                                                            */
/**************************************************************/
/*
RequestedItem ::= ENUMERATED { reserved(0), itemA(1), itemB(2), itemC(3), itemD(4), itemE(5), itemF(6), itemG(7), itemI(8), itemJ(9), itemK(10), itemL(11), itemM(12), itemN(13), itemO(14), itemP(15), itemQ(16), ... }
*/
struct EXTERN RequestedItem {
   enum Root {
      reserved = 0,
      itemA = 1,
      itemB = 2,
      itemC = 3,
      itemD = 4,
      itemE = 5,
      itemF = 6,
      itemG = 7,
      itemI = 8,
      itemJ = 9,
      itemK = 10,
      itemL = 11,
      itemM = 12,
      itemN = 13,
      itemO = 14,
      itemP = 15,
      itemQ = 16
   } ;
} ;

typedef OSUINT32 ASN1T_RequestedItem;

EXTERN int asn1PE_RequestedItem (OSCTXT* pctxt, ASN1T_RequestedItem value);

EXTERN int asn1PD_RequestedItem (OSCTXT* pctxt, ASN1T_RequestedItem* pvalue);

EXTERN int XmlEnc_RequestedItem (OSCTXT* pctxt, ASN1T_RequestedItem value, 
   const OSUTF8CHAR* elemName, const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_RequestedItem (OSCTXT* pctxt, ASN1T_RequestedItem* pvalue);

EXTERN int asn1JsonEnc_RequestedItem (OSCTXT *pctxt, ASN1T_RequestedItem *pvalue);

EXTERN int asn1JsonDec_RequestedItem (OSCTXT *pctxt, ASN1T_RequestedItem *pvalue);

EXTERN int asn1PrtToStrm_RequestedItem (OSCTXT *pctxt, 
   const char* name, const ASN1T_RequestedItem* pvalue);

EXTERN ASN1T_RequestedItem* new_ASN1T_RequestedItem (ASN1CType& ccobj);

EXTERN extern const OSEnumItem ASN1T_RequestedItem_ENUMTAB[];
#define ASN1T_RequestedItem_ENUMTABSIZE 17

EXTERN const OSUTF8CHAR* ASN1T_RequestedItem_ToString (OSINT32 value);

EXTERN int ASN1T_RequestedItem_ToEnum (OSCTXT* pctxt,
   const OSUTF8CHAR* value, ASN1T_RequestedItem* pvalue);

EXTERN int ASN1T_RequestedItem_ToEnum2 (OSCTXT* pctxt,
   const OSUTF8CHAR* value, OSSIZE valueLen, ASN1T_RequestedItem* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestedItemList                                         */
/*                                                            */
/**************************************************************/
/*
RequestedItemList ::= SEQUENCE (SIZE (1..32)) OF RequestedItem
*/
typedef struct EXTERN ASN1T_RequestedItemList {
   OSUINT8 n;
   ASN1T_RequestedItem elem[32];
   ASN1T_RequestedItemList () : n(0) {}
} ASN1T_RequestedItemList;

class EXTERN ASN1C_RequestedItemList :
public ASN1CType
{
protected:
   ASN1T_RequestedItemList& msgData;
public:
   /**
    * Control class: ASN1C_RequestedItemList
    * Data class:    ASN1T_RequestedItemList
    *
    * Constructs an instance of the control class given an instance of
    * the data class.
    *
    * WARNING: this creates an internal context to use for memory
    * allocations which will be deleted when the object goes out of
    * scope. This object must be used in the same method in which the
    * data class object is being used.
    *
    * @param data    A reference to an instance of the data class.
    */
   ASN1C_RequestedItemList (ASN1T_RequestedItemList& data);

   /**
    * Control class: ASN1C_RequestedItemList<br/>
    * Data class: ASN1T_RequestedItemList<br/>
    *
    * Constructs an instance of the control class given an instance
    * of an encode or decode buffer and an instance of
    * the data class.
    *
    * @param msgBuf Reference to an instance of an encode or
    *                  decode buffer.
    * @param data   Reference to an instance of the data class.
    */
   ASN1C_RequestedItemList (OSRTMessageBufferIF& msgBuf
      , ASN1T_RequestedItemList& data);

   /**
    * Control class: ASN1C_RequestedItemList<br/>
    * Data class: ASN1T_RequestedItemList<br/>
    *
    * Constructs an instance of the control class given an instance of
    * an \c ASN1CType control class and an instance of the
    * given data class.
    *
    * @param ccobj  Reference to a control class instance.
    * @param data   Reference to an instance of the data class. */
   ASN1C_RequestedItemList (ASN1CType& ccobj, ASN1T_RequestedItemList& data);

   virtual ~ASN1C_RequestedItemList () {}

private:
   ASN1C_RequestedItemList& operator= (const ASN1C_RequestedItemList&) {return *this;}
} ;

EXTERN int asn1PE_RequestedItemList (OSCTXT* pctxt, ASN1T_RequestedItemList* pvalue);

EXTERN int asn1PD_RequestedItemList (OSCTXT* pctxt, ASN1T_RequestedItemList* pvalue);

EXTERN int XmlEnc_RequestedItemList (OSCTXT* pctxt, 
   ASN1T_RequestedItemList* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_RequestedItemList (OSCTXT* pctxt, 
   ASN1T_RequestedItemList* pvalue);

EXTERN int asn1JsonEnc_RequestedItemList (OSCTXT *pctxt, ASN1T_RequestedItemList *pvalue);

EXTERN int asn1JsonDec_RequestedItemList (OSCTXT *pctxt, ASN1T_RequestedItemList *pvalue);

EXTERN int asn1PrtToStrm_RequestedItemList (OSCTXT *pctxt, 
   const char* name, const ASN1T_RequestedItemList* pvalue);

EXTERN int asn1Init_RequestedItemList (ASN1T_RequestedItemList* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

/**************************************************************/
/*                                                            */
/*  CommonSafetyRequest_regional_element                      */
/*                                                            */
/**************************************************************/
/*
Type was extracted from 'CommonSafetyRequest'
*/
struct EXTERN ASN1T_CommonSafetyRequest_regional_element {
   OSUINT8 regionId;
   ASN1TOpenType regExtValue;
} ;

EXTERN int asn1PE_CommonSafetyRequest_regional_element (OSCTXT* pctxt, ASN1T_CommonSafetyRequest_regional_element* pvalue);

EXTERN int asn1PD_CommonSafetyRequest_regional_element (OSCTXT* pctxt, ASN1T_CommonSafetyRequest_regional_element* pvalue);

EXTERN int XmlEnc_CommonSafetyRequest_regional_element (OSCTXT* pctxt, 
   ASN1T_CommonSafetyRequest_regional_element* pvalue, 
   const OSUTF8CHAR* elemName, const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_CommonSafetyRequest_regional_element (OSCTXT* pctxt, 
   ASN1T_CommonSafetyRequest_regional_element* pvalue);

EXTERN int asn1JsonEnc_CommonSafetyRequest_regional_element (OSCTXT *pctxt, ASN1T_CommonSafetyRequest_regional_element *pvalue);

EXTERN int asn1JsonDec_CommonSafetyRequest_regional_element (OSCTXT *pctxt, ASN1T_CommonSafetyRequest_regional_element *pvalue);

EXTERN int asn1PrtToStrm_CommonSafetyRequest_regional_element (OSCTXT *pctxt, 
   const char* name, const ASN1T_CommonSafetyRequest_regional_element* pvalue);

EXTERN ASN1T_CommonSafetyRequest_regional_element* 
   new_ASN1T_CommonSafetyRequest_regional_element (ASN1CType& ccobj);

EXTERN int asn1Init_CommonSafetyRequest_regional_element (
   ASN1T_CommonSafetyRequest_regional_element* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_CommonSafetyRequest_regional_element (OSCTXT *pctxt, 
   ASN1T_CommonSafetyRequest_regional_element* pvalue);

/**************************************************************/
/*                                                            */
/*  CommonSafetyRequest_regional                              */
/*                                                            */
/**************************************************************/
/*
Type was extracted from 'CommonSafetyRequest'
*/
/* List of ASN1T_CommonSafetyRequest_regional_element */
typedef ASN1TSeqOfList ASN1T_CommonSafetyRequest_regional;

class EXTERN ASN1C_CommonSafetyRequest_regional :
public ASN1CSeqOfList
{
protected:
   ASN1T_CommonSafetyRequest_regional& msgData;
public:
   /**
    * Control class: ASN1C_CommonSafetyRequest_regional
    * Data class:    ASN1T_CommonSafetyRequest_regional
    *
    * Constructs an instance of the control class given an instance of
    * the data class.
    *
    * WARNING: this creates an internal context to use for memory
    * allocations which will be deleted when the object goes out of
    * scope. This object must be used in the same method in which the
    * data class object is being used.
    *
    * @param data    A reference to an instance of the data class.
    */
   ASN1C_CommonSafetyRequest_regional
       (ASN1T_CommonSafetyRequest_regional& data);

   /**
    * Control class: ASN1C_CommonSafetyRequest_regional<br/>
    * Data class: ASN1T_CommonSafetyRequest_regional<br/>
    *
    * Constructs an instance of the control class given an instance
    * of an encode or decode buffer and an instance of
    * the data class.
    *
    * @param msgBuf Reference to an instance of an encode or
    *                  decode buffer.
    * @param data   Reference to an instance of the data class.
    */
   ASN1C_CommonSafetyRequest_regional (OSRTMessageBufferIF& msgBuf
      , ASN1T_CommonSafetyRequest_regional& data);

   /**
    * Control class: ASN1C_CommonSafetyRequest_regional<br/>
    * Data class: ASN1T_CommonSafetyRequest_regional<br/>
    *
    * Constructs an instance of the control class given an instance of
    * an \c ASN1CType control class and an instance of the
    * given data class.
    *
    * @param ccobj  Reference to a control class instance.
    * @param data   Reference to an instance of the data class. */
   ASN1C_CommonSafetyRequest_regional (ASN1CType& ccobj
      , ASN1T_CommonSafetyRequest_regional& data);

   virtual ~ASN1C_CommonSafetyRequest_regional () {}

   /**
    * Data class: ASN1T_CommonSafetyRequest_regional_element<br/>
    *
    * Appends an instance of the data class to the end of the list.
    *
    * @param  elem     Pointer to an instance of the data class.
    */
   void Append (ASN1T_CommonSafetyRequest_regional_element* elem);

   void freeMemory();
   /**
    * Data class: ASN1T_CommonSafetyRequest_regional_element.<br/>
    *
    * Creates a new instance of the data class.
    *
    * @return    Pointer to the new instance of the data class.
    */
   ASN1T_CommonSafetyRequest_regional_element* NewElement ();

   /**
    * Data class: ASN1T_CommonSafetyRequest_regional_element.<br/>
    *
    * Creates a new instance of the data class and appends it
    * to the end of the list.
    *
    * @return    Pointer to a new instance of the data class.
    */
   ASN1T_CommonSafetyRequest_regional_element* AppendNewElement ();

   /* Get IE using regionId key value */
   /* index element type is forward referenced */
   ASN1T_CommonSafetyRequest_regional_element* GetIE (OSUINT8 regionId);

   /* Get all matching IEs using regionId key value */
   int GetAllIEs (OSUINT8 regionId, 
      ASN1T_CommonSafetyRequest_regional* pmatches);

private:
   ASN1C_CommonSafetyRequest_regional& operator= (const ASN1C_CommonSafetyRequest_regional&) {return *this;}
} ;

EXTERN int asn1PE_CommonSafetyRequest_regional (OSCTXT* pctxt, ASN1T_CommonSafetyRequest_regional* pvalue);

EXTERN int asn1PD_CommonSafetyRequest_regional (OSCTXT* pctxt, ASN1T_CommonSafetyRequest_regional* pvalue);

EXTERN int XmlEnc_CommonSafetyRequest_regional (OSCTXT* pctxt, 
   ASN1T_CommonSafetyRequest_regional* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_CommonSafetyRequest_regional (OSCTXT* pctxt, 
   ASN1T_CommonSafetyRequest_regional* pvalue);

EXTERN int asn1JsonEnc_CommonSafetyRequest_regional (OSCTXT *pctxt, ASN1T_CommonSafetyRequest_regional *pvalue);

EXTERN int asn1JsonDec_CommonSafetyRequest_regional (OSCTXT *pctxt, ASN1T_CommonSafetyRequest_regional *pvalue);

EXTERN int asn1PrtToStrm_CommonSafetyRequest_regional (OSCTXT *pctxt, 
   const char* name, const ASN1T_CommonSafetyRequest_regional* pvalue);

EXTERN int asn1Init_CommonSafetyRequest_regional (
   ASN1T_CommonSafetyRequest_regional* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_CommonSafetyRequest_regional (OSCTXT *pctxt, 
   ASN1T_CommonSafetyRequest_regional* pvalue);

/**************************************************************/
/*                                                            */
/*  CommonSafetyRequest                                       */
/*                                                            */
/**************************************************************/
/*
CommonSafetyRequest ::= SEQUENCE {
   timeStamp [0] MinuteOfTheYear OPTIONAL,
   msgCnt [1] MsgCount OPTIONAL,
   id [2] TemporaryID OPTIONAL, -- targeted remote device              
   requests [3] RequestedItemList,
   -- Note: Above no longer uses the same request as probe management
   regional [4] SEQUENCE (SIZE (1..4)) OF SEQUENCE {
      regionId [0] REG-EXT-ID-AND-TYPE.&id ({Reg-CommonSafetyRequest}),
      regExtValue [1] EXPLICIT REG-EXT-ID-AND-TYPE.&Type ({Reg-CommonSafetyRequest}{@regionId})
   } OPTIONAL,
   ...
}
*/
struct EXTERN ASN1T_CommonSafetyRequest {
   struct {
      unsigned timeStampPresent : 1;
      unsigned msgCntPresent : 1;
      unsigned idPresent : 1;
      unsigned regionalPresent : 1;
   } m;
   OSUINT32 timeStamp;
   OSUINT8 msgCnt;
   struct ASN1T_TemporaryID *id;
   ASN1T_RequestedItemList requests;
   ASN1T_CommonSafetyRequest_regional regional;
   ASN1TSeqExt extElem1;
   ASN1T_CommonSafetyRequest ();
} ;

EXTERN int asn1PE_CommonSafetyRequest (OSCTXT* pctxt, ASN1T_CommonSafetyRequest* pvalue);

EXTERN int asn1PD_CommonSafetyRequest (OSCTXT* pctxt, ASN1T_CommonSafetyRequest* pvalue);

EXTERN int XmlEnc_CommonSafetyRequest (OSCTXT* pctxt, 
   ASN1T_CommonSafetyRequest* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_CommonSafetyRequest (OSCTXT* pctxt, 
   ASN1T_CommonSafetyRequest* pvalue);

EXTERN int asn1JsonEnc_CommonSafetyRequest (OSCTXT *pctxt, ASN1T_CommonSafetyRequest *pvalue);

EXTERN int asn1JsonDec_CommonSafetyRequest (OSCTXT *pctxt, ASN1T_CommonSafetyRequest *pvalue);

EXTERN int asn1PrtToStrm_CommonSafetyRequest (OSCTXT *pctxt, 
   const char* name, const ASN1T_CommonSafetyRequest* pvalue);

EXTERN ASN1T_CommonSafetyRequest* 
   new_ASN1T_CommonSafetyRequest (ASN1CType& ccobj);

EXTERN int asn1Init_CommonSafetyRequest (ASN1T_CommonSafetyRequest* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_CommonSafetyRequest (OSCTXT *pctxt, 
   ASN1T_CommonSafetyRequest* pvalue);

#endif

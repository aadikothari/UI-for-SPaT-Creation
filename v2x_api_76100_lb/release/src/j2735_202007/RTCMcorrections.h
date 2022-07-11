/**
 * This file was generated by the Objective Systems ASN1C Compiler
 * (http://www.obj-sys.com).
 */
#ifndef RTCMCORRECTIONS_H
#define RTCMCORRECTIONS_H

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
 * Header file for ASN.1 module RTCMcorrections
 */
/**************************************************************/
/*                                                            */
/*  RTCM_Revision                                             */
/*                                                            */
/**************************************************************/
/*
RTCM-Revision ::= ENUMERATED { unknown(0), rtcmRev2(1), rtcmRev3(2), reserved(3), ... }
*/
struct EXTERN RTCM_Revision {
   enum Root {
      unknown = 0,
      rtcmRev2 = 1,
      rtcmRev3 = 2,
      reserved = 3
   } ;
} ;

typedef OSUINT32 ASN1T_RTCM_Revision;

EXTERN int asn1PE_RTCM_Revision (OSCTXT* pctxt, ASN1T_RTCM_Revision value);

EXTERN int asn1PD_RTCM_Revision (OSCTXT* pctxt, ASN1T_RTCM_Revision* pvalue);

EXTERN int XmlEnc_RTCM_Revision (OSCTXT* pctxt, ASN1T_RTCM_Revision value, 
   const OSUTF8CHAR* elemName, const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_RTCM_Revision (OSCTXT* pctxt, ASN1T_RTCM_Revision* pvalue);

EXTERN int asn1JsonEnc_RTCM_Revision (OSCTXT *pctxt, ASN1T_RTCM_Revision *pvalue);

EXTERN int asn1JsonDec_RTCM_Revision (OSCTXT *pctxt, ASN1T_RTCM_Revision *pvalue);

EXTERN int asn1PrtToStrm_RTCM_Revision (OSCTXT *pctxt, 
   const char* name, const ASN1T_RTCM_Revision* pvalue);

EXTERN ASN1T_RTCM_Revision* new_ASN1T_RTCM_Revision (ASN1CType& ccobj);

EXTERN extern const OSEnumItem ASN1T_RTCM_Revision_ENUMTAB[];
#define ASN1T_RTCM_Revision_ENUMTABSIZE 4

EXTERN const OSUTF8CHAR* ASN1T_RTCM_Revision_ToString (OSINT32 value);

EXTERN int ASN1T_RTCM_Revision_ToEnum (OSCTXT* pctxt,
   const OSUTF8CHAR* value, ASN1T_RTCM_Revision* pvalue);

EXTERN int ASN1T_RTCM_Revision_ToEnum2 (OSCTXT* pctxt,
   const OSUTF8CHAR* value, OSSIZE valueLen, ASN1T_RTCM_Revision* pvalue);

/**************************************************************/
/*                                                            */
/*  RTCMcorrections_regional_element                          */
/*                                                            */
/**************************************************************/
/*
Type was extracted from 'RTCMcorrections'
*/
struct EXTERN ASN1T_RTCMcorrections_regional_element {
   OSUINT8 regionId;
   ASN1TOpenType regExtValue;
} ;

EXTERN int asn1PE_RTCMcorrections_regional_element (OSCTXT* pctxt, ASN1T_RTCMcorrections_regional_element* pvalue);

EXTERN int asn1PD_RTCMcorrections_regional_element (OSCTXT* pctxt, ASN1T_RTCMcorrections_regional_element* pvalue);

EXTERN int XmlEnc_RTCMcorrections_regional_element (OSCTXT* pctxt, 
   ASN1T_RTCMcorrections_regional_element* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_RTCMcorrections_regional_element (OSCTXT* pctxt, 
   ASN1T_RTCMcorrections_regional_element* pvalue);

EXTERN int asn1JsonEnc_RTCMcorrections_regional_element (OSCTXT *pctxt, ASN1T_RTCMcorrections_regional_element *pvalue);

EXTERN int asn1JsonDec_RTCMcorrections_regional_element (OSCTXT *pctxt, ASN1T_RTCMcorrections_regional_element *pvalue);

EXTERN int asn1PrtToStrm_RTCMcorrections_regional_element (OSCTXT *pctxt, 
   const char* name, const ASN1T_RTCMcorrections_regional_element* pvalue);

EXTERN ASN1T_RTCMcorrections_regional_element* 
   new_ASN1T_RTCMcorrections_regional_element (ASN1CType& ccobj);

EXTERN int asn1Init_RTCMcorrections_regional_element (
   ASN1T_RTCMcorrections_regional_element* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_RTCMcorrections_regional_element (OSCTXT *pctxt, 
   ASN1T_RTCMcorrections_regional_element* pvalue);

/**************************************************************/
/*                                                            */
/*  RTCMcorrections_regional                                  */
/*                                                            */
/**************************************************************/
/*
Type was extracted from 'RTCMcorrections'
*/
/* List of ASN1T_RTCMcorrections_regional_element */
typedef ASN1TSeqOfList ASN1T_RTCMcorrections_regional;

class EXTERN ASN1C_RTCMcorrections_regional :
public ASN1CSeqOfList
{
protected:
   ASN1T_RTCMcorrections_regional& msgData;
public:
   /**
    * Control class: ASN1C_RTCMcorrections_regional
    * Data class:    ASN1T_RTCMcorrections_regional
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
   ASN1C_RTCMcorrections_regional (ASN1T_RTCMcorrections_regional& data);

   /**
    * Control class: ASN1C_RTCMcorrections_regional<br/>
    * Data class: ASN1T_RTCMcorrections_regional<br/>
    *
    * Constructs an instance of the control class given an instance
    * of an encode or decode buffer and an instance of
    * the data class.
    *
    * @param msgBuf Reference to an instance of an encode or
    *                  decode buffer.
    * @param data   Reference to an instance of the data class.
    */
   ASN1C_RTCMcorrections_regional (OSRTMessageBufferIF& msgBuf
      , ASN1T_RTCMcorrections_regional& data);

   /**
    * Control class: ASN1C_RTCMcorrections_regional<br/>
    * Data class: ASN1T_RTCMcorrections_regional<br/>
    *
    * Constructs an instance of the control class given an instance of
    * an \c ASN1CType control class and an instance of the
    * given data class.
    *
    * @param ccobj  Reference to a control class instance.
    * @param data   Reference to an instance of the data class. */
   ASN1C_RTCMcorrections_regional (ASN1CType& ccobj
      , ASN1T_RTCMcorrections_regional& data);

   virtual ~ASN1C_RTCMcorrections_regional () {}

   /**
    * Data class: ASN1T_RTCMcorrections_regional_element<br/>
    *
    * Appends an instance of the data class to the end of the list.
    *
    * @param  elem     Pointer to an instance of the data class.
    */
   void Append (ASN1T_RTCMcorrections_regional_element* elem);

   void freeMemory();
   /**
    * Data class: ASN1T_RTCMcorrections_regional_element.<br/>
    *
    * Creates a new instance of the data class.
    *
    * @return    Pointer to the new instance of the data class.
    */
   ASN1T_RTCMcorrections_regional_element* NewElement ();

   /**
    * Data class: ASN1T_RTCMcorrections_regional_element.<br/>
    *
    * Creates a new instance of the data class and appends it
    * to the end of the list.
    *
    * @return    Pointer to a new instance of the data class.
    */
   ASN1T_RTCMcorrections_regional_element* AppendNewElement ();

   /* Get IE using regionId key value */
   /* index element type is forward referenced */
   ASN1T_RTCMcorrections_regional_element* GetIE (OSUINT8 regionId);

   /* Get all matching IEs using regionId key value */
   int GetAllIEs (OSUINT8 regionId, ASN1T_RTCMcorrections_regional* pmatches);

private:
   ASN1C_RTCMcorrections_regional& operator= (const ASN1C_RTCMcorrections_regional&) {return *this;}
} ;

EXTERN int asn1PE_RTCMcorrections_regional (OSCTXT* pctxt, ASN1T_RTCMcorrections_regional* pvalue);

EXTERN int asn1PD_RTCMcorrections_regional (OSCTXT* pctxt, ASN1T_RTCMcorrections_regional* pvalue);

EXTERN int XmlEnc_RTCMcorrections_regional (OSCTXT* pctxt, 
   ASN1T_RTCMcorrections_regional* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_RTCMcorrections_regional (OSCTXT* pctxt, 
   ASN1T_RTCMcorrections_regional* pvalue);

EXTERN int asn1JsonEnc_RTCMcorrections_regional (OSCTXT *pctxt, ASN1T_RTCMcorrections_regional *pvalue);

EXTERN int asn1JsonDec_RTCMcorrections_regional (OSCTXT *pctxt, ASN1T_RTCMcorrections_regional *pvalue);

EXTERN int asn1PrtToStrm_RTCMcorrections_regional (OSCTXT *pctxt, 
   const char* name, const ASN1T_RTCMcorrections_regional* pvalue);

EXTERN int asn1Init_RTCMcorrections_regional (ASN1T_RTCMcorrections_regional* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_RTCMcorrections_regional (OSCTXT *pctxt, 
   ASN1T_RTCMcorrections_regional* pvalue);

/**************************************************************/
/*                                                            */
/*  RTCMcorrections                                           */
/*                                                            */
/**************************************************************/
/*
RTCMcorrections ::= SEQUENCE {
   msgCnt [0] MsgCount,
   rev [1] RTCM-Revision,
               -- the specific edition of the standard
               -- that is being sent
   timeStamp [2] MinuteOfTheYear OPTIONAL,
   -- Observer position, if needed
   anchorPoint [3] FullPositionVector OPTIONAL,
   -- Precise ant position and noise data for a rover
   rtcmHeader [4] RTCMheader OPTIONAL,
   -- one or more RTCM messages
   msgs [5] RTCMmessageList,
   regional [6] SEQUENCE (SIZE (1..4)) OF SEQUENCE {
      regionId [0] REG-EXT-ID-AND-TYPE.&id ({Reg-RTCMcorrections}),
      regExtValue [1] EXPLICIT REG-EXT-ID-AND-TYPE.&Type ({Reg-RTCMcorrections}{@regionId})
   } OPTIONAL,
   ...
}
*/
struct EXTERN ASN1T_RTCMcorrections {
   struct {
      unsigned timeStampPresent : 1;
      unsigned anchorPointPresent : 1;
      unsigned rtcmHeaderPresent : 1;
      unsigned regionalPresent : 1;
   } m;
   OSUINT8 msgCnt;
   ASN1T_RTCM_Revision rev;
   OSUINT32 timeStamp;
   struct ASN1T_FullPositionVector *anchorPoint;
   struct ASN1T_RTCMheader *rtcmHeader;
   struct ASN1T_RTCMmessageList *msgs;
   ASN1T_RTCMcorrections_regional regional;
   ASN1TSeqExt extElem1;
   ASN1T_RTCMcorrections ();
} ;

EXTERN int asn1PE_RTCMcorrections (OSCTXT* pctxt, ASN1T_RTCMcorrections* pvalue);

EXTERN int asn1PD_RTCMcorrections (OSCTXT* pctxt, ASN1T_RTCMcorrections* pvalue);

EXTERN int XmlEnc_RTCMcorrections (OSCTXT* pctxt, 
   ASN1T_RTCMcorrections* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_RTCMcorrections (OSCTXT* pctxt, ASN1T_RTCMcorrections* pvalue
   );

EXTERN int asn1JsonEnc_RTCMcorrections (OSCTXT *pctxt, ASN1T_RTCMcorrections *pvalue);

EXTERN int asn1JsonDec_RTCMcorrections (OSCTXT *pctxt, ASN1T_RTCMcorrections *pvalue);

EXTERN int asn1PrtToStrm_RTCMcorrections (OSCTXT *pctxt, 
   const char* name, const ASN1T_RTCMcorrections* pvalue);

EXTERN ASN1T_RTCMcorrections* new_ASN1T_RTCMcorrections (ASN1CType& ccobj);

EXTERN int asn1Init_RTCMcorrections (ASN1T_RTCMcorrections* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_RTCMcorrections (OSCTXT *pctxt, ASN1T_RTCMcorrections* pvalue);

#endif

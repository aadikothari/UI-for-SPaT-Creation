/**
 * This file was generated by the Objective Systems ASN1C Compiler
 * (http://www.obj-sys.com).
 */
#ifndef NMEACORRECTIONS_H
#define NMEACORRECTIONS_H

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
 * Header file for ASN.1 module NMEAcorrections
 */
/**************************************************************/
/*                                                            */
/*  NMEA_Revision                                             */
/*                                                            */
/**************************************************************/
/*
NMEA-Revision ::= ENUMERATED { unknown(0), reserved(1), rev1(2), rev2(3), rev3(4), rev4(5), rev5(6), ... }
*/
struct EXTERN NMEA_Revision {
   enum Root {
      unknown = 0,
      reserved = 1,
      rev1 = 2,
      rev2 = 3,
      rev3 = 4,
      rev4 = 5,
      rev5 = 6
   } ;
} ;

typedef OSUINT32 ASN1T_NMEA_Revision;

EXTERN int asn1PE_NMEA_Revision (OSCTXT* pctxt, ASN1T_NMEA_Revision value);

EXTERN int asn1PD_NMEA_Revision (OSCTXT* pctxt, ASN1T_NMEA_Revision* pvalue);

EXTERN int XmlEnc_NMEA_Revision (OSCTXT* pctxt, ASN1T_NMEA_Revision value, 
   const OSUTF8CHAR* elemName, const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_NMEA_Revision (OSCTXT* pctxt, ASN1T_NMEA_Revision* pvalue);

EXTERN int asn1JsonEnc_NMEA_Revision (OSCTXT *pctxt, ASN1T_NMEA_Revision *pvalue);

EXTERN int asn1JsonDec_NMEA_Revision (OSCTXT *pctxt, ASN1T_NMEA_Revision *pvalue);

EXTERN int asn1PrtToStrm_NMEA_Revision (OSCTXT *pctxt, 
   const char* name, const ASN1T_NMEA_Revision* pvalue);

EXTERN ASN1T_NMEA_Revision* new_ASN1T_NMEA_Revision (ASN1CType& ccobj);

EXTERN extern const OSEnumItem ASN1T_NMEA_Revision_ENUMTAB[];
#define ASN1T_NMEA_Revision_ENUMTABSIZE 7

EXTERN const OSUTF8CHAR* ASN1T_NMEA_Revision_ToString (OSINT32 value);

EXTERN int ASN1T_NMEA_Revision_ToEnum (OSCTXT* pctxt,
   const OSUTF8CHAR* value, ASN1T_NMEA_Revision* pvalue);

EXTERN int ASN1T_NMEA_Revision_ToEnum2 (OSCTXT* pctxt,
   const OSUTF8CHAR* value, OSSIZE valueLen, ASN1T_NMEA_Revision* pvalue);

/**************************************************************/
/*                                                            */
/*  NMEA_MsgType                                              */
/*                                                            */
/**************************************************************/
/*
NMEA-MsgType ::= INTEGER (0..32767)
*/
typedef OSUINT16 ASN1T_NMEA_MsgType;

EXTERN int asn1PE_NMEA_MsgType (OSCTXT* pctxt, ASN1T_NMEA_MsgType value);

EXTERN int asn1PD_NMEA_MsgType (OSCTXT* pctxt, ASN1T_NMEA_MsgType* pvalue);

EXTERN int XmlEnc_NMEA_MsgType (OSCTXT* pctxt, ASN1T_NMEA_MsgType value, 
   const OSUTF8CHAR* elemName, const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_NMEA_MsgType (OSCTXT* pctxt, ASN1T_NMEA_MsgType* pvalue);

EXTERN int asn1JsonEnc_NMEA_MsgType (OSCTXT *pctxt, ASN1T_NMEA_MsgType *pvalue);

EXTERN int asn1JsonDec_NMEA_MsgType (OSCTXT *pctxt, ASN1T_NMEA_MsgType *pvalue);

EXTERN int asn1PrtToStrm_NMEA_MsgType (OSCTXT *pctxt, 
   const char* name, const ASN1T_NMEA_MsgType* pvalue);

EXTERN ASN1T_NMEA_MsgType* new_ASN1T_NMEA_MsgType (ASN1CType& ccobj);

/**************************************************************/
/*                                                            */
/*  ObjectCount                                               */
/*                                                            */
/**************************************************************/
/*
ObjectCount ::= INTEGER (0..1023)
                                   a count of objects

*/
typedef OSUINT16 ASN1T_ObjectCount;

EXTERN int asn1PE_ObjectCount (OSCTXT* pctxt, ASN1T_ObjectCount value);

EXTERN int asn1PD_ObjectCount (OSCTXT* pctxt, ASN1T_ObjectCount* pvalue);

EXTERN int XmlEnc_ObjectCount (OSCTXT* pctxt, ASN1T_ObjectCount value, 
   const OSUTF8CHAR* elemName, const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_ObjectCount (OSCTXT* pctxt, ASN1T_ObjectCount* pvalue);

EXTERN int asn1JsonEnc_ObjectCount (OSCTXT *pctxt, ASN1T_ObjectCount *pvalue);

EXTERN int asn1JsonDec_ObjectCount (OSCTXT *pctxt, ASN1T_ObjectCount *pvalue);

EXTERN int asn1PrtToStrm_ObjectCount (OSCTXT *pctxt, 
   const char* name, const ASN1T_ObjectCount* pvalue);

EXTERN ASN1T_ObjectCount* new_ASN1T_ObjectCount (ASN1CType& ccobj);

/**************************************************************/
/*                                                            */
/*  NMEA_Payload                                              */
/*                                                            */
/**************************************************************/
/*
NMEA-Payload ::= OCTET STRING (SIZE (1..1023))
*/
struct EXTERN ASN1T_NMEA_Payload {
   OSUINT16 numocts;
   OSOCTET data[1023];
   // ctors
   ASN1T_NMEA_Payload () : numocts(0) {}
   ASN1T_NMEA_Payload (OSUINT16 _numocts, const OSOCTET* _data) :
      numocts (_numocts) {
      OSCRTLSAFEMEMCPY (data, sizeof(data), _data, numocts);
   }
   ASN1T_NMEA_Payload (const char* cstring) {
      if (!OS_ISEMPTY (cstring)) {
         numocts = (OSUINT16)(OSRTMIN ((OSCRTLSTRLEN(cstring)+1), sizeof(data)));
         OSCRTLSAFEMEMCPY (data, numocts, cstring, numocts);
      }
      else numocts = 0;
   }
   // assignment operators
   ASN1T_NMEA_Payload& operator= (const char* cstring) {
      if (!OS_ISEMPTY (cstring)) {
         numocts = (OSUINT16)(OSRTMIN ((OSCRTLSTRLEN(cstring)+1), sizeof(data)));
         OSCRTLSAFEMEMCPY (data, numocts, cstring, numocts);
      }
      else numocts = 0;
      return *this;
   }
} ;

EXTERN int asn1PE_NMEA_Payload (OSCTXT* pctxt, ASN1T_NMEA_Payload* pvalue);

EXTERN int asn1PD_NMEA_Payload (OSCTXT* pctxt, ASN1T_NMEA_Payload* pvalue);

EXTERN int XmlEnc_NMEA_Payload (OSCTXT* pctxt, ASN1T_NMEA_Payload* pvalue, 
   const OSUTF8CHAR* elemName, const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_NMEA_Payload (OSCTXT* pctxt, ASN1T_NMEA_Payload* pvalue);

EXTERN int asn1JsonEnc_NMEA_Payload (OSCTXT *pctxt, ASN1T_NMEA_Payload *pvalue);

EXTERN int asn1JsonDec_NMEA_Payload (OSCTXT *pctxt, ASN1T_NMEA_Payload *pvalue);

EXTERN int asn1PrtToStrm_NMEA_Payload (OSCTXT *pctxt, 
   const char* name, const ASN1T_NMEA_Payload* pvalue);

EXTERN ASN1T_NMEA_Payload* new_ASN1T_NMEA_Payload (ASN1CType& ccobj);

EXTERN int asn1Init_NMEA_Payload (ASN1T_NMEA_Payload* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

/**************************************************************/
/*                                                            */
/*  NMEAcorrections_regional_element                          */
/*                                                            */
/**************************************************************/
/*
Type was extracted from 'NMEAcorrections'
*/
struct EXTERN ASN1T_NMEAcorrections_regional_element {
   OSUINT8 regionId;
   ASN1TOpenType regExtValue;
} ;

EXTERN int asn1PE_NMEAcorrections_regional_element (OSCTXT* pctxt, ASN1T_NMEAcorrections_regional_element* pvalue);

EXTERN int asn1PD_NMEAcorrections_regional_element (OSCTXT* pctxt, ASN1T_NMEAcorrections_regional_element* pvalue);

EXTERN int XmlEnc_NMEAcorrections_regional_element (OSCTXT* pctxt, 
   ASN1T_NMEAcorrections_regional_element* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_NMEAcorrections_regional_element (OSCTXT* pctxt, 
   ASN1T_NMEAcorrections_regional_element* pvalue);

EXTERN int asn1JsonEnc_NMEAcorrections_regional_element (OSCTXT *pctxt, ASN1T_NMEAcorrections_regional_element *pvalue);

EXTERN int asn1JsonDec_NMEAcorrections_regional_element (OSCTXT *pctxt, ASN1T_NMEAcorrections_regional_element *pvalue);

EXTERN int asn1PrtToStrm_NMEAcorrections_regional_element (OSCTXT *pctxt, 
   const char* name, const ASN1T_NMEAcorrections_regional_element* pvalue);

EXTERN ASN1T_NMEAcorrections_regional_element* 
   new_ASN1T_NMEAcorrections_regional_element (ASN1CType& ccobj);

EXTERN int asn1Init_NMEAcorrections_regional_element (
   ASN1T_NMEAcorrections_regional_element* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_NMEAcorrections_regional_element (OSCTXT *pctxt, 
   ASN1T_NMEAcorrections_regional_element* pvalue);

/**************************************************************/
/*                                                            */
/*  NMEAcorrections_regional                                  */
/*                                                            */
/**************************************************************/
/*
Type was extracted from 'NMEAcorrections'
*/
/* List of ASN1T_NMEAcorrections_regional_element */
typedef ASN1TSeqOfList ASN1T_NMEAcorrections_regional;

class EXTERN ASN1C_NMEAcorrections_regional :
public ASN1CSeqOfList
{
protected:
   ASN1T_NMEAcorrections_regional& msgData;
public:
   /**
    * Control class: ASN1C_NMEAcorrections_regional
    * Data class:    ASN1T_NMEAcorrections_regional
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
   ASN1C_NMEAcorrections_regional (ASN1T_NMEAcorrections_regional& data);

   /**
    * Control class: ASN1C_NMEAcorrections_regional<br/>
    * Data class: ASN1T_NMEAcorrections_regional<br/>
    *
    * Constructs an instance of the control class given an instance
    * of an encode or decode buffer and an instance of
    * the data class.
    *
    * @param msgBuf Reference to an instance of an encode or
    *                  decode buffer.
    * @param data   Reference to an instance of the data class.
    */
   ASN1C_NMEAcorrections_regional (OSRTMessageBufferIF& msgBuf
      , ASN1T_NMEAcorrections_regional& data);

   /**
    * Control class: ASN1C_NMEAcorrections_regional<br/>
    * Data class: ASN1T_NMEAcorrections_regional<br/>
    *
    * Constructs an instance of the control class given an instance of
    * an \c ASN1CType control class and an instance of the
    * given data class.
    *
    * @param ccobj  Reference to a control class instance.
    * @param data   Reference to an instance of the data class. */
   ASN1C_NMEAcorrections_regional (ASN1CType& ccobj
      , ASN1T_NMEAcorrections_regional& data);

   virtual ~ASN1C_NMEAcorrections_regional () {}

   /**
    * Data class: ASN1T_NMEAcorrections_regional_element<br/>
    *
    * Appends an instance of the data class to the end of the list.
    *
    * @param  elem     Pointer to an instance of the data class.
    */
   void Append (ASN1T_NMEAcorrections_regional_element* elem);

   void freeMemory();
   /**
    * Data class: ASN1T_NMEAcorrections_regional_element.<br/>
    *
    * Creates a new instance of the data class.
    *
    * @return    Pointer to the new instance of the data class.
    */
   ASN1T_NMEAcorrections_regional_element* NewElement ();

   /**
    * Data class: ASN1T_NMEAcorrections_regional_element.<br/>
    *
    * Creates a new instance of the data class and appends it
    * to the end of the list.
    *
    * @return    Pointer to a new instance of the data class.
    */
   ASN1T_NMEAcorrections_regional_element* AppendNewElement ();

   /* Get IE using regionId key value */
   /* index element type is forward referenced */
   ASN1T_NMEAcorrections_regional_element* GetIE (OSUINT8 regionId);

   /* Get all matching IEs using regionId key value */
   int GetAllIEs (OSUINT8 regionId, ASN1T_NMEAcorrections_regional* pmatches);

private:
   ASN1C_NMEAcorrections_regional& operator= (const ASN1C_NMEAcorrections_regional&) {return *this;}
} ;

EXTERN int asn1PE_NMEAcorrections_regional (OSCTXT* pctxt, ASN1T_NMEAcorrections_regional* pvalue);

EXTERN int asn1PD_NMEAcorrections_regional (OSCTXT* pctxt, ASN1T_NMEAcorrections_regional* pvalue);

EXTERN int XmlEnc_NMEAcorrections_regional (OSCTXT* pctxt, 
   ASN1T_NMEAcorrections_regional* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_NMEAcorrections_regional (OSCTXT* pctxt, 
   ASN1T_NMEAcorrections_regional* pvalue);

EXTERN int asn1JsonEnc_NMEAcorrections_regional (OSCTXT *pctxt, ASN1T_NMEAcorrections_regional *pvalue);

EXTERN int asn1JsonDec_NMEAcorrections_regional (OSCTXT *pctxt, ASN1T_NMEAcorrections_regional *pvalue);

EXTERN int asn1PrtToStrm_NMEAcorrections_regional (OSCTXT *pctxt, 
   const char* name, const ASN1T_NMEAcorrections_regional* pvalue);

EXTERN int asn1Init_NMEAcorrections_regional (ASN1T_NMEAcorrections_regional* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_NMEAcorrections_regional (OSCTXT *pctxt, 
   ASN1T_NMEAcorrections_regional* pvalue);

/**************************************************************/
/*                                                            */
/*  NMEAcorrections                                           */
/*                                                            */
/**************************************************************/
/*
NMEAcorrections ::= SEQUENCE {
   timeStamp [0] MinuteOfTheYear OPTIONAL,
   rev [1] NMEA-Revision OPTIONAL,
             -- the specific edition of the standard
             -- that is being sent, 4.x at the time of publication
   msg [2] NMEA-MsgType OPTIONAL,
             -- the message and sub-message type, as
             -- defined in the revision being used
   -- NOTE The message type is also in the payload expressed as a string, 
   wdCount [3] ObjectCount OPTIONAL,
             -- a count of octets to follow
             -- observe that not all NMEA sentences are limited to 82 characters 
   payload [4] NMEA-Payload,
   regional [5] SEQUENCE (SIZE (1..4)) OF SEQUENCE {
      regionId [0] REG-EXT-ID-AND-TYPE.&id ({Reg-NMEAcorrections}),
      regExtValue [1] EXPLICIT REG-EXT-ID-AND-TYPE.&Type ({Reg-NMEAcorrections}{@regionId})
   } OPTIONAL,
   ...
}
*/
struct EXTERN ASN1T_NMEAcorrections {
   struct {
      unsigned timeStampPresent : 1;
      unsigned revPresent : 1;
      unsigned msgPresent : 1;
      unsigned wdCountPresent : 1;
      unsigned regionalPresent : 1;
   } m;
   OSUINT32 timeStamp;
   ASN1T_NMEA_Revision rev;
   ASN1T_NMEA_MsgType msg;
   ASN1T_ObjectCount wdCount;
   ASN1T_NMEA_Payload payload;
   ASN1T_NMEAcorrections_regional regional;
   ASN1TSeqExt extElem1;
   ASN1T_NMEAcorrections ();
} ;

EXTERN int asn1PE_NMEAcorrections (OSCTXT* pctxt, ASN1T_NMEAcorrections* pvalue);

EXTERN int asn1PD_NMEAcorrections (OSCTXT* pctxt, ASN1T_NMEAcorrections* pvalue);

EXTERN int XmlEnc_NMEAcorrections (OSCTXT* pctxt, 
   ASN1T_NMEAcorrections* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_NMEAcorrections (OSCTXT* pctxt, ASN1T_NMEAcorrections* pvalue
   );

EXTERN int asn1JsonEnc_NMEAcorrections (OSCTXT *pctxt, ASN1T_NMEAcorrections *pvalue);

EXTERN int asn1JsonDec_NMEAcorrections (OSCTXT *pctxt, ASN1T_NMEAcorrections *pvalue);

EXTERN int asn1PrtToStrm_NMEAcorrections (OSCTXT *pctxt, 
   const char* name, const ASN1T_NMEAcorrections* pvalue);

EXTERN ASN1T_NMEAcorrections* new_ASN1T_NMEAcorrections (ASN1CType& ccobj);

EXTERN int asn1Init_NMEAcorrections (ASN1T_NMEAcorrections* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_NMEAcorrections (OSCTXT *pctxt, ASN1T_NMEAcorrections* pvalue);

#endif

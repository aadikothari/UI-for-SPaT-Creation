/**
 * This file was generated by the Objective Systems ASN1C Compiler
 * (http://www.obj-sys.com).
 */
#ifndef MESSAGEFRAME_H
#define MESSAGEFRAME_H

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
 * Header file for ASN.1 module MessageFrame
 */
class MessageTypes {
public:
   enum TVALUE {
      T_UNDEF_,
      T_basicSafetyMessage,
      T_mapData,
      T_signalPhaseAndTimingMessage,
      T_commonSafetyRequest,
      T_emergencyVehicleAlert,
      T_intersectionCollision,
      T_nmeaCorrections,
      T_probeDataManagement,
      T_probeVehicleData,
      T_roadSideAlert,
      T_rtcmCorrections,
      T_signalRequestMessage,
      T_signalStatusMessage,
      T_travelerInformation,
      T_personalSafetyMessage,
      T_testMessage00,
      T_testMessage01,
      T_testMessage02,
      T_testMessage03,
      T_testMessage04,
      T_testMessage05,
      T_testMessage06,
      T_testMessage07,
      T_testMessage08,
      T_testMessage09,
      T_testMessage10,
      T_testMessage11,
      T_testMessage12,
      T_testMessage13,
      T_testMessage14,
      T_testMessage15
   } ;
} ;

/**************************************************************/
/*                                                            */
/*  DSRCmsgID                                                 */
/*                                                            */
/**************************************************************/
/*
DSRCmsgID ::= INTEGER (0..32767)
*/
typedef OSUINT16 ASN1T_DSRCmsgID;

EXTERN int asn1PE_DSRCmsgID (OSCTXT* pctxt, ASN1T_DSRCmsgID value);

EXTERN int asn1PD_DSRCmsgID (OSCTXT* pctxt, ASN1T_DSRCmsgID* pvalue);

EXTERN int XmlEnc_DSRCmsgID (OSCTXT* pctxt, ASN1T_DSRCmsgID value, 
   const OSUTF8CHAR* elemName, const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_DSRCmsgID (OSCTXT* pctxt, ASN1T_DSRCmsgID* pvalue);

EXTERN int asn1JsonEnc_DSRCmsgID (OSCTXT *pctxt, ASN1T_DSRCmsgID *pvalue);

EXTERN int asn1JsonDec_DSRCmsgID (OSCTXT *pctxt, ASN1T_DSRCmsgID *pvalue);

EXTERN int asn1PrtToStrm_DSRCmsgID (OSCTXT *pctxt, 
   const char* name, const ASN1T_DSRCmsgID* pvalue);

EXTERN ASN1T_DSRCmsgID* new_ASN1T_DSRCmsgID (ASN1CType& ccobj);

/**************************************************************/
/*                                                            */
/*  MessageFrame                                              */
/*                                                            */
/**************************************************************/
/*
 -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
 
 Start of entries from table Messages...
 This table typically contains message entries.
 -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
 
MessageFrame ::= SEQUENCE {
   messageId [0] MESSAGE-ID-AND-TYPE.&id ({MessageTypes}),
   value [1] EXPLICIT MESSAGE-ID-AND-TYPE.&Type ({MessageTypes}{@.messageId}),
   ...
}
*/
struct EXTERN ASN1T_MessageFrame : public ASN1TPDU {
   ASN1T_DSRCmsgID messageId;
   struct  {
      /**
       * information object selector
       */
      MessageTypes::TVALUE t;

      /**
       * MessageTypes information objects
       */
      union {
         /**
          * id: basicSafetyMessage
          */
         struct ASN1T_BasicSafetyMessage *_MessageTypes_basicSafetyMessage;
         /**
          * id: mapData
          */
         struct ASN1T_MapData *_MessageTypes_mapData;
         /**
          * id: signalPhaseAndTimingMessage
          */
         struct ASN1T_SPAT *_MessageTypes_signalPhaseAndTimingMessage;
         /**
          * id: commonSafetyRequest
          */
         struct ASN1T_CommonSafetyRequest *_MessageTypes_commonSafetyRequest;
         /**
          * id: emergencyVehicleAlert
          */
         struct ASN1T_EmergencyVehicleAlert *_MessageTypes_emergencyVehicleAlert;
         /**
          * id: intersectionCollision
          */
         struct ASN1T_IntersectionCollision *_MessageTypes_intersectionCollision;
         /**
          * id: nmeaCorrections
          */
         struct ASN1T_NMEAcorrections *_MessageTypes_nmeaCorrections;
         /**
          * id: probeDataManagement
          */
         struct ASN1T_ProbeDataManagement *_MessageTypes_probeDataManagement;
         /**
          * id: probeVehicleData
          */
         struct ASN1T_ProbeVehicleData *_MessageTypes_probeVehicleData;
         /**
          * id: roadSideAlert
          */
         struct ASN1T_RoadSideAlert *_MessageTypes_roadSideAlert;
         /**
          * id: rtcmCorrections
          */
         struct ASN1T_RTCMcorrections *_MessageTypes_rtcmCorrections;
         /**
          * id: signalRequestMessage
          */
         struct ASN1T_SignalRequestMessage *_MessageTypes_signalRequestMessage;
         /**
          * id: signalStatusMessage
          */
         struct ASN1T_SignalStatusMessage *_MessageTypes_signalStatusMessage;
         /**
          * id: travelerInformation
          */
         struct ASN1T_TravelerInformation *_MessageTypes_travelerInformation;
         /**
          * id: personalSafetyMessage
          */
         struct ASN1T_PersonalSafetyMessage *_MessageTypes_personalSafetyMessage;
         /**
          * id: testMessage00
          */
         struct ASN1T_TestMessage00 *_MessageTypes_testMessage00;
         /**
          * id: testMessage01
          */
         struct ASN1T_TestMessage01 *_MessageTypes_testMessage01;
         /**
          * id: testMessage02
          */
         struct ASN1T_TestMessage02 *_MessageTypes_testMessage02;
         /**
          * id: testMessage03
          */
         struct ASN1T_TestMessage03 *_MessageTypes_testMessage03;
         /**
          * id: testMessage04
          */
         struct ASN1T_TestMessage04 *_MessageTypes_testMessage04;
         /**
          * id: testMessage05
          */
         struct ASN1T_TestMessage05 *_MessageTypes_testMessage05;
         /**
          * id: testMessage06
          */
         struct ASN1T_TestMessage06 *_MessageTypes_testMessage06;
         /**
          * id: testMessage07
          */
         struct ASN1T_TestMessage07 *_MessageTypes_testMessage07;
         /**
          * id: testMessage08
          */
         struct ASN1T_TestMessage08 *_MessageTypes_testMessage08;
         /**
          * id: testMessage09
          */
         struct ASN1T_TestMessage09 *_MessageTypes_testMessage09;
         /**
          * id: testMessage10
          */
         struct ASN1T_TestMessage10 *_MessageTypes_testMessage10;
         /**
          * id: testMessage11
          */
         struct ASN1T_TestMessage11 *_MessageTypes_testMessage11;
         /**
          * id: testMessage12
          */
         struct ASN1T_TestMessage12 *_MessageTypes_testMessage12;
         /**
          * id: testMessage13
          */
         struct ASN1T_TestMessage13 *_MessageTypes_testMessage13;
         /**
          * id: testMessage14
          */
         struct ASN1T_TestMessage14 *_MessageTypes_testMessage14;
         /**
          * id: testMessage15
          */
         struct ASN1T_TestMessage15 *_MessageTypes_testMessage15;

         ASN1TOpenType* extElem1;
      } u;
   } value;
   ASN1TSeqExt extElem1;
   ASN1T_MessageFrame ();
   ~ASN1T_MessageFrame ();
} ;

class EXTERN ASN1C_MessageFrame :
public ASN1CType
{
protected:
   ASN1T_MessageFrame& msgData;
public:
   /**
    * Control class: ASN1C_MessageFrame
    * Data class:    ASN1T_MessageFrame
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
   ASN1C_MessageFrame (ASN1T_MessageFrame& data);

   /**
    * Control class: ASN1C_MessageFrame<br/>
    * Data class: ASN1T_MessageFrame<br/>
    *
    * Constructs an instance of the control class given an instance
    * of an encode or decode buffer and an instance of
    * the data class.
    *
    * @param msgBuf Reference to an instance of an encode or
    *                  decode buffer.
    * @param data   Reference to an instance of the data class.
    */
   ASN1C_MessageFrame (OSRTMessageBufferIF& msgBuf, ASN1T_MessageFrame& data);

   virtual ~ASN1C_MessageFrame () {}

   /**
    * Data class: ASN1T_MessageFrame<br/>
    *
    * Gets a mutable instance of the data class.
    *
    * @return Reference to a mutable instance of data class ASN1T_MessageFrame.
    */
   inline ASN1T_MessageFrame& getData () { return msgData; }

   /**
    * Data class: ASN1T_MessageFrame<br/>
    * Gets a non-mutable instance of the data class.
    *
    * @return Reference to a non-mutable instance of data class ASN1T_MessageFrame.
    */
   inline const ASN1T_MessageFrame& getData () const { return msgData; }

   // standard encode/decode methods (defined in ASN1CType base class):
   // int Encode ();
   // int Decode ();

   // stream encode/decode methods:
   /**
    * Encodes into a specified encode buffer.
    *
    * @param msgBuf Reference to an encode buffer.
    * @return A status value (0 indicates success).
    */
   int EncodeTo (OSRTMessageBufferIF& msgBuf);

   /**
    * Decodes from a specified decode buffer.
    *
    * @param msgBuf Reference to a decode buffer.
    * @return A status value (0 indicates success).
    */
   int DecodeFrom (OSRTMessageBufferIF& msgBuf, OSBOOL free = FALSE);

   /**
    * Frees the memory associated with the instance.
    */
   virtual void MemFree ();

   /**
    * Writes the contents of the object to a user-defined stream using
    * a user-defined print callback function.  See the documentation for
    * the setPrintStream() method.
    *
    * @param name A name for the object's contents.  If not specified,
    *             MessageFrame will be used for the name.
    * @return Always returns 0.
    */
   int toStream (const char* name = "MessageFrame");
   /**
    * Declares a print stream handler function.
    *
    * @param strmCallback Pointer to a function defined according to the
    *                     rtxPrintCallback signature.
    * @return A status value (0 indicates success).
    */
   int setPrintStream (rtxPrintCallback strmCallback, void* pStrmInfo);
   void setTC_MessageTypes_basicSafetyMessage(struct ASN1T_BasicSafetyMessage 
      *pvalue);
   void setTC_MessageTypes_mapData(struct ASN1T_MapData *pvalue);
   void setTC_MessageTypes_signalPhaseAndTimingMessage(struct ASN1T_SPAT 
      *pvalue);
   void setTC_MessageTypes_commonSafetyRequest(struct 
      ASN1T_CommonSafetyRequest *pvalue);
   void setTC_MessageTypes_emergencyVehicleAlert(struct 
      ASN1T_EmergencyVehicleAlert *pvalue);
   void setTC_MessageTypes_intersectionCollision(struct 
      ASN1T_IntersectionCollision *pvalue);
   void setTC_MessageTypes_nmeaCorrections(struct ASN1T_NMEAcorrections *pvalue
      );
   void setTC_MessageTypes_probeDataManagement(struct 
      ASN1T_ProbeDataManagement *pvalue);
   void setTC_MessageTypes_probeVehicleData(struct ASN1T_ProbeVehicleData 
      *pvalue);
   void setTC_MessageTypes_roadSideAlert(struct ASN1T_RoadSideAlert *pvalue);
   void setTC_MessageTypes_rtcmCorrections(struct ASN1T_RTCMcorrections *pvalue
      );
   void setTC_MessageTypes_signalRequestMessage(struct 
      ASN1T_SignalRequestMessage *pvalue);
   void setTC_MessageTypes_signalStatusMessage(struct 
      ASN1T_SignalStatusMessage *pvalue);
   void setTC_MessageTypes_travelerInformation(struct 
      ASN1T_TravelerInformation *pvalue);
   void setTC_MessageTypes_personalSafetyMessage(struct 
      ASN1T_PersonalSafetyMessage *pvalue);
   void setTC_MessageTypes_testMessage00(struct ASN1T_TestMessage00 *pvalue);
   void setTC_MessageTypes_testMessage01(struct ASN1T_TestMessage01 *pvalue);
   void setTC_MessageTypes_testMessage02(struct ASN1T_TestMessage02 *pvalue);
   void setTC_MessageTypes_testMessage03(struct ASN1T_TestMessage03 *pvalue);
   void setTC_MessageTypes_testMessage04(struct ASN1T_TestMessage04 *pvalue);
   void setTC_MessageTypes_testMessage05(struct ASN1T_TestMessage05 *pvalue);
   void setTC_MessageTypes_testMessage06(struct ASN1T_TestMessage06 *pvalue);
   void setTC_MessageTypes_testMessage07(struct ASN1T_TestMessage07 *pvalue);
   void setTC_MessageTypes_testMessage08(struct ASN1T_TestMessage08 *pvalue);
   void setTC_MessageTypes_testMessage09(struct ASN1T_TestMessage09 *pvalue);
   void setTC_MessageTypes_testMessage10(struct ASN1T_TestMessage10 *pvalue);
   void setTC_MessageTypes_testMessage11(struct ASN1T_TestMessage11 *pvalue);
   void setTC_MessageTypes_testMessage12(struct ASN1T_TestMessage12 *pvalue);
   void setTC_MessageTypes_testMessage13(struct ASN1T_TestMessage13 *pvalue);
   void setTC_MessageTypes_testMessage14(struct ASN1T_TestMessage14 *pvalue);
   void setTC_MessageTypes_testMessage15(struct ASN1T_TestMessage15 *pvalue);
private:
   ASN1C_MessageFrame& operator= (const ASN1C_MessageFrame&) {return *this;}
} ;

EXTERN int asn1PE_MessageFrame (OSCTXT* pctxt, ASN1T_MessageFrame* pvalue);

EXTERN int asn1PD_MessageFrame (OSCTXT* pctxt, ASN1T_MessageFrame* pvalue);

EXTERN int XmlEnc_MessageFrame (OSCTXT* pctxt, ASN1T_MessageFrame* pvalue, 
   const OSUTF8CHAR* elemName, const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_MessageFrame (OSCTXT* pctxt, ASN1T_MessageFrame* pvalue);

EXTERN int asn1JsonEnc_MessageFrame (OSCTXT *pctxt, ASN1T_MessageFrame *pvalue);

EXTERN int asn1JsonDec_MessageFrame (OSCTXT *pctxt, ASN1T_MessageFrame *pvalue);

EXTERN int asn1PrtToStrm_MessageFrame (OSCTXT *pctxt, 
   const char* name, const ASN1T_MessageFrame* pvalue);

struct ASN1T_BasicSafetyMessage ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_basicSafetyMessage
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct ASN1T_BasicSafetyMessage 
   *pvalue);

struct ASN1T_MapData ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_mapData
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct ASN1T_MapData *pvalue);

struct ASN1T_SPAT ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_signalPhaseAndTimingMessage
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct ASN1T_SPAT *pvalue);

struct ASN1T_CommonSafetyRequest ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_commonSafetyRequest
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct ASN1T_CommonSafetyRequest 
   *pvalue);

struct ASN1T_EmergencyVehicleAlert ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_emergencyVehicleAlert
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct 
   ASN1T_EmergencyVehicleAlert *pvalue);

struct ASN1T_IntersectionCollision ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_intersectionCollision
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct 
   ASN1T_IntersectionCollision *pvalue);

struct ASN1T_NMEAcorrections ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_nmeaCorrections
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct ASN1T_NMEAcorrections 
   *pvalue);

struct ASN1T_ProbeDataManagement ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_probeDataManagement
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct ASN1T_ProbeDataManagement 
   *pvalue);

struct ASN1T_ProbeVehicleData ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_probeVehicleData
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct ASN1T_ProbeVehicleData 
   *pvalue);

struct ASN1T_RoadSideAlert ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_roadSideAlert
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct ASN1T_RoadSideAlert 
   *pvalue);

struct ASN1T_RTCMcorrections ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_rtcmCorrections
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct ASN1T_RTCMcorrections 
   *pvalue);

struct ASN1T_SignalRequestMessage ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_signalRequestMessage
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct 
   ASN1T_SignalRequestMessage *pvalue);

struct ASN1T_SignalStatusMessage ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_signalStatusMessage
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct ASN1T_SignalStatusMessage 
   *pvalue);

struct ASN1T_TravelerInformation ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_travelerInformation
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct ASN1T_TravelerInformation 
   *pvalue);

struct ASN1T_PersonalSafetyMessage ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_personalSafetyMessage
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct 
   ASN1T_PersonalSafetyMessage *pvalue);

struct ASN1T_TestMessage00 ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_testMessage00
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct ASN1T_TestMessage00 
   *pvalue);

struct ASN1T_TestMessage01 ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_testMessage01
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct ASN1T_TestMessage01 
   *pvalue);

struct ASN1T_TestMessage02 ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_testMessage02
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct ASN1T_TestMessage02 
   *pvalue);

struct ASN1T_TestMessage03 ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_testMessage03
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct ASN1T_TestMessage03 
   *pvalue);

struct ASN1T_TestMessage04 ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_testMessage04
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct ASN1T_TestMessage04 
   *pvalue);

struct ASN1T_TestMessage05 ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_testMessage05
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct ASN1T_TestMessage05 
   *pvalue);

struct ASN1T_TestMessage06 ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_testMessage06
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct ASN1T_TestMessage06 
   *pvalue);

struct ASN1T_TestMessage07 ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_testMessage07
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct ASN1T_TestMessage07 
   *pvalue);

struct ASN1T_TestMessage08 ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_testMessage08
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct ASN1T_TestMessage08 
   *pvalue);

struct ASN1T_TestMessage09 ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_testMessage09
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct ASN1T_TestMessage09 
   *pvalue);

struct ASN1T_TestMessage10 ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_testMessage10
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct ASN1T_TestMessage10 
   *pvalue);

struct ASN1T_TestMessage11 ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_testMessage11
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct ASN1T_TestMessage11 
   *pvalue);

struct ASN1T_TestMessage12 ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_testMessage12
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct ASN1T_TestMessage12 
   *pvalue);

struct ASN1T_TestMessage13 ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_testMessage13
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct ASN1T_TestMessage13 
   *pvalue);

struct ASN1T_TestMessage14 ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_testMessage14
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct ASN1T_TestMessage14 
   *pvalue);

struct ASN1T_TestMessage15 ;
EXTERN void asn1SetTC_MessageFrame_MessageTypes_testMessage15
   (OSCTXT* pctxt, ASN1T_MessageFrame* pElem, struct ASN1T_TestMessage15 
   *pvalue);

EXTERN ASN1T_MessageFrame* new_ASN1T_MessageFrame (ASN1CType& ccobj);

EXTERN int asn1Init_MessageFrame (ASN1T_MessageFrame* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_MessageFrame (OSCTXT *pctxt, ASN1T_MessageFrame* pvalue);

/**
 * Global element functions.  These functions encode or decode complete
 * XML documents.  They are generated for XSD global elements and/or
 * ASN.1 type definitions that are either:
 *
 * 1) not referenced by any other types, or
 * 2) explicitly declared to be a PDU using the -pdu command line
 *    option, or
 * 3) explicitly declared to be a PDU using the <isPDU/> 
 *    configuration file element.
 */
/* Value definitions */

#define ASN1V_mapData 18
#define ASN1V_signalPhaseAndTimingMessage 19
#define ASN1V_basicSafetyMessage 20
#define ASN1V_commonSafetyRequest 21
#define ASN1V_emergencyVehicleAlert 22
#define ASN1V_intersectionCollision 23
#define ASN1V_nmeaCorrections 24
#define ASN1V_probeDataManagement 25
#define ASN1V_probeVehicleData 26
#define ASN1V_roadSideAlert 27
#define ASN1V_rtcmCorrections 28
#define ASN1V_signalRequestMessage 29
#define ASN1V_signalStatusMessage 30
#define ASN1V_travelerInformation 31
#define ASN1V_personalSafetyMessage 32
#define ASN1V_testMessage00 240
#define ASN1V_testMessage01 241
#define ASN1V_testMessage02 242
#define ASN1V_testMessage03 243
#define ASN1V_testMessage04 244
#define ASN1V_testMessage05 245
#define ASN1V_testMessage06 246
#define ASN1V_testMessage07 247
#define ASN1V_testMessage08 248
#define ASN1V_testMessage09 249
#define ASN1V_testMessage10 250
#define ASN1V_testMessage11 251
#define ASN1V_testMessage12 252
#define ASN1V_testMessage13 253
#define ASN1V_testMessage14 254
#define ASN1V_testMessage15 255

#endif
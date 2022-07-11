/**
 * This file was generated by the Objective Systems ASN1C Compiler
 * (http://www.obj-sys.com).
 */
#ifndef SIGNALSTATUSMESSAGE_H
#define SIGNALSTATUSMESSAGE_H

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
 * Header file for ASN.1 module SignalStatusMessage
 */
/**************************************************************/
/*                                                            */
/*  SignalRequesterInfo                                       */
/*                                                            */
/**************************************************************/
/*
SignalRequesterInfo ::= SEQUENCE {
   -- These three items serve to uniquely identify the requester
   -- and the specific request to all parties
   id [0] EXPLICIT VehicleID,
   request [1] RequestID,
   sequenceNumber [2] MsgCount,
   role [3] BasicVehicleRole OPTIONAL,
   typeData [4] RequestorType OPTIONAL,
   ...
}
*/
struct EXTERN ASN1T_SignalRequesterInfo {
   struct {
      unsigned rolePresent : 1;
      unsigned typeDataPresent : 1;
   } m;
   struct ASN1T_VehicleID *id;
   OSUINT8 request;
   OSUINT8 sequenceNumber;
   OSUINT32 role;
   struct ASN1T_RequestorType *typeData;
   ASN1TSeqExt extElem1;
   ASN1T_SignalRequesterInfo ();
} ;

EXTERN int asn1PE_SignalRequesterInfo (OSCTXT* pctxt, ASN1T_SignalRequesterInfo* pvalue);

EXTERN int asn1PD_SignalRequesterInfo (OSCTXT* pctxt, ASN1T_SignalRequesterInfo* pvalue);

EXTERN int XmlEnc_SignalRequesterInfo (OSCTXT* pctxt, 
   ASN1T_SignalRequesterInfo* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_SignalRequesterInfo (OSCTXT* pctxt, 
   ASN1T_SignalRequesterInfo* pvalue);

EXTERN int asn1JsonEnc_SignalRequesterInfo (OSCTXT *pctxt, ASN1T_SignalRequesterInfo *pvalue);

EXTERN int asn1JsonDec_SignalRequesterInfo (OSCTXT *pctxt, ASN1T_SignalRequesterInfo *pvalue);

EXTERN int asn1PrtToStrm_SignalRequesterInfo (OSCTXT *pctxt, 
   const char* name, const ASN1T_SignalRequesterInfo* pvalue);

EXTERN ASN1T_SignalRequesterInfo* 
   new_ASN1T_SignalRequesterInfo (ASN1CType& ccobj);

EXTERN int asn1Init_SignalRequesterInfo (ASN1T_SignalRequesterInfo* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_SignalRequesterInfo (OSCTXT *pctxt, 
   ASN1T_SignalRequesterInfo* pvalue);

/**************************************************************/
/*                                                            */
/*  SignalStatusPackage_regional_element                      */
/*                                                            */
/**************************************************************/
/*
Type was extracted from 'SignalStatusPackage'
*/
struct EXTERN ASN1T_SignalStatusPackage_regional_element {
   OSUINT8 regionId;
   ASN1TOpenType regExtValue;
} ;

EXTERN int asn1PE_SignalStatusPackage_regional_element (OSCTXT* pctxt, ASN1T_SignalStatusPackage_regional_element* pvalue);

EXTERN int asn1PD_SignalStatusPackage_regional_element (OSCTXT* pctxt, ASN1T_SignalStatusPackage_regional_element* pvalue);

EXTERN int XmlEnc_SignalStatusPackage_regional_element (OSCTXT* pctxt, 
   ASN1T_SignalStatusPackage_regional_element* pvalue, 
   const OSUTF8CHAR* elemName, const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_SignalStatusPackage_regional_element (OSCTXT* pctxt, 
   ASN1T_SignalStatusPackage_regional_element* pvalue);

EXTERN int asn1JsonEnc_SignalStatusPackage_regional_element (OSCTXT *pctxt, ASN1T_SignalStatusPackage_regional_element *pvalue);

EXTERN int asn1JsonDec_SignalStatusPackage_regional_element (OSCTXT *pctxt, ASN1T_SignalStatusPackage_regional_element *pvalue);

EXTERN int asn1PrtToStrm_SignalStatusPackage_regional_element (OSCTXT *pctxt, 
   const char* name, const ASN1T_SignalStatusPackage_regional_element* pvalue);

EXTERN ASN1T_SignalStatusPackage_regional_element* 
   new_ASN1T_SignalStatusPackage_regional_element (ASN1CType& ccobj);

EXTERN int asn1Init_SignalStatusPackage_regional_element (
   ASN1T_SignalStatusPackage_regional_element* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_SignalStatusPackage_regional_element (OSCTXT *pctxt, 
   ASN1T_SignalStatusPackage_regional_element* pvalue);

/**************************************************************/
/*                                                            */
/*  SignalStatusPackage_regional                              */
/*                                                            */
/**************************************************************/
/*
Type was extracted from 'SignalStatusPackage'
*/
/* List of ASN1T_SignalStatusPackage_regional_element */
typedef ASN1TSeqOfList ASN1T_SignalStatusPackage_regional;

class EXTERN ASN1C_SignalStatusPackage_regional :
public ASN1CSeqOfList
{
protected:
   ASN1T_SignalStatusPackage_regional& msgData;
public:
   /**
    * Control class: ASN1C_SignalStatusPackage_regional
    * Data class:    ASN1T_SignalStatusPackage_regional
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
   ASN1C_SignalStatusPackage_regional
       (ASN1T_SignalStatusPackage_regional& data);

   /**
    * Control class: ASN1C_SignalStatusPackage_regional<br/>
    * Data class: ASN1T_SignalStatusPackage_regional<br/>
    *
    * Constructs an instance of the control class given an instance
    * of an encode or decode buffer and an instance of
    * the data class.
    *
    * @param msgBuf Reference to an instance of an encode or
    *                  decode buffer.
    * @param data   Reference to an instance of the data class.
    */
   ASN1C_SignalStatusPackage_regional (OSRTMessageBufferIF& msgBuf
      , ASN1T_SignalStatusPackage_regional& data);

   /**
    * Control class: ASN1C_SignalStatusPackage_regional<br/>
    * Data class: ASN1T_SignalStatusPackage_regional<br/>
    *
    * Constructs an instance of the control class given an instance of
    * an \c ASN1CType control class and an instance of the
    * given data class.
    *
    * @param ccobj  Reference to a control class instance.
    * @param data   Reference to an instance of the data class. */
   ASN1C_SignalStatusPackage_regional (ASN1CType& ccobj
      , ASN1T_SignalStatusPackage_regional& data);

   virtual ~ASN1C_SignalStatusPackage_regional () {}

   /**
    * Data class: ASN1T_SignalStatusPackage_regional_element<br/>
    *
    * Appends an instance of the data class to the end of the list.
    *
    * @param  elem     Pointer to an instance of the data class.
    */
   void Append (ASN1T_SignalStatusPackage_regional_element* elem);

   void freeMemory();
   /**
    * Data class: ASN1T_SignalStatusPackage_regional_element.<br/>
    *
    * Creates a new instance of the data class.
    *
    * @return    Pointer to the new instance of the data class.
    */
   ASN1T_SignalStatusPackage_regional_element* NewElement ();

   /**
    * Data class: ASN1T_SignalStatusPackage_regional_element.<br/>
    *
    * Creates a new instance of the data class and appends it
    * to the end of the list.
    *
    * @return    Pointer to a new instance of the data class.
    */
   ASN1T_SignalStatusPackage_regional_element* AppendNewElement ();

   /* Get IE using regionId key value */
   /* index element type is forward referenced */
   ASN1T_SignalStatusPackage_regional_element* GetIE (OSUINT8 regionId);

   /* Get all matching IEs using regionId key value */
   int GetAllIEs (OSUINT8 regionId, 
      ASN1T_SignalStatusPackage_regional* pmatches);

private:
   ASN1C_SignalStatusPackage_regional& operator= (const ASN1C_SignalStatusPackage_regional&) {return *this;}
} ;

EXTERN int asn1PE_SignalStatusPackage_regional (OSCTXT* pctxt, ASN1T_SignalStatusPackage_regional* pvalue);

EXTERN int asn1PD_SignalStatusPackage_regional (OSCTXT* pctxt, ASN1T_SignalStatusPackage_regional* pvalue);

EXTERN int XmlEnc_SignalStatusPackage_regional (OSCTXT* pctxt, 
   ASN1T_SignalStatusPackage_regional* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_SignalStatusPackage_regional (OSCTXT* pctxt, 
   ASN1T_SignalStatusPackage_regional* pvalue);

EXTERN int asn1JsonEnc_SignalStatusPackage_regional (OSCTXT *pctxt, ASN1T_SignalStatusPackage_regional *pvalue);

EXTERN int asn1JsonDec_SignalStatusPackage_regional (OSCTXT *pctxt, ASN1T_SignalStatusPackage_regional *pvalue);

EXTERN int asn1PrtToStrm_SignalStatusPackage_regional (OSCTXT *pctxt, 
   const char* name, const ASN1T_SignalStatusPackage_regional* pvalue);

EXTERN int asn1Init_SignalStatusPackage_regional (
   ASN1T_SignalStatusPackage_regional* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_SignalStatusPackage_regional (OSCTXT *pctxt, 
   ASN1T_SignalStatusPackage_regional* pvalue);

/**************************************************************/
/*                                                            */
/*  SignalStatusPackage                                       */
/*                                                            */
/**************************************************************/
/*
SignalStatusPackage ::= SEQUENCE {
   -- The party that made the initial SRM request
   requester [0] SignalRequesterInfo OPTIONAL,
   -- The lanes or approaches used in the request
   inboundOn [1] EXPLICIT IntersectionAccessPoint, -- estimated lane / approach of vehicle
   outboundOn [2] EXPLICIT IntersectionAccessPoint OPTIONAL,
   -- The Estimated Time of Arrival (ETA) when the service is requested
   -- This data echos the data of the request 
   minute [3] MinuteOfTheYear OPTIONAL,
   second [4] DSecond OPTIONAL,
   duration [5] DSecond OPTIONAL,
   -- the SRM status for this request
   status [6] PrioritizationResponseStatus,
                -- Status of request, this may include rejection
   regional [7] SEQUENCE (SIZE (1..4)) OF SEQUENCE {
      regionId [0] REG-EXT-ID-AND-TYPE.&id ({Reg-SignalStatusPackage}),
      regExtValue [1] EXPLICIT REG-EXT-ID-AND-TYPE.&Type ({Reg-SignalStatusPackage}{@regionId})
   } OPTIONAL,
   ...
}
*/
struct EXTERN ASN1T_SignalStatusPackage {
   struct {
      unsigned requesterPresent : 1;
      unsigned outboundOnPresent : 1;
      unsigned minutePresent : 1;
      unsigned secondPresent : 1;
      unsigned durationPresent : 1;
      unsigned regionalPresent : 1;
   } m;
   ASN1T_SignalRequesterInfo requester;
   struct ASN1T_IntersectionAccessPoint *inboundOn;
   struct ASN1T_IntersectionAccessPoint *outboundOn;
   OSUINT32 minute;
   OSUINT16 second;
   OSUINT16 duration;
   OSUINT32 status;
   ASN1T_SignalStatusPackage_regional regional;
   ASN1TSeqExt extElem1;
   ASN1T_SignalStatusPackage ();
} ;

EXTERN int asn1PE_SignalStatusPackage (OSCTXT* pctxt, ASN1T_SignalStatusPackage* pvalue);

EXTERN int asn1PD_SignalStatusPackage (OSCTXT* pctxt, ASN1T_SignalStatusPackage* pvalue);

EXTERN int XmlEnc_SignalStatusPackage (OSCTXT* pctxt, 
   ASN1T_SignalStatusPackage* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_SignalStatusPackage (OSCTXT* pctxt, 
   ASN1T_SignalStatusPackage* pvalue);

EXTERN int asn1JsonEnc_SignalStatusPackage (OSCTXT *pctxt, ASN1T_SignalStatusPackage *pvalue);

EXTERN int asn1JsonDec_SignalStatusPackage (OSCTXT *pctxt, ASN1T_SignalStatusPackage *pvalue);

EXTERN int asn1PrtToStrm_SignalStatusPackage (OSCTXT *pctxt, 
   const char* name, const ASN1T_SignalStatusPackage* pvalue);

EXTERN ASN1T_SignalStatusPackage* 
   new_ASN1T_SignalStatusPackage (ASN1CType& ccobj);

EXTERN int asn1Init_SignalStatusPackage (ASN1T_SignalStatusPackage* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_SignalStatusPackage (OSCTXT *pctxt, 
   ASN1T_SignalStatusPackage* pvalue);

/**************************************************************/
/*                                                            */
/*  SignalStatusPackageList                                   */
/*                                                            */
/**************************************************************/
/*
SignalStatusPackageList ::= SEQUENCE (SIZE (1..32)) OF SignalStatusPackage
*/
/* List of ASN1T_SignalStatusPackage */
typedef ASN1TSeqOfList ASN1T_SignalStatusPackageList;

class EXTERN ASN1C_SignalStatusPackageList :
public ASN1CSeqOfList
{
protected:
   ASN1T_SignalStatusPackageList& msgData;
public:
   /**
    * Control class: ASN1C_SignalStatusPackageList
    * Data class:    ASN1T_SignalStatusPackageList
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
   ASN1C_SignalStatusPackageList (ASN1T_SignalStatusPackageList& data);

   /**
    * Control class: ASN1C_SignalStatusPackageList<br/>
    * Data class: ASN1T_SignalStatusPackageList<br/>
    *
    * Constructs an instance of the control class given an instance
    * of an encode or decode buffer and an instance of
    * the data class.
    *
    * @param msgBuf Reference to an instance of an encode or
    *                  decode buffer.
    * @param data   Reference to an instance of the data class.
    */
   ASN1C_SignalStatusPackageList (OSRTMessageBufferIF& msgBuf
      , ASN1T_SignalStatusPackageList& data);

   /**
    * Control class: ASN1C_SignalStatusPackageList<br/>
    * Data class: ASN1T_SignalStatusPackageList<br/>
    *
    * Constructs an instance of the control class given an instance of
    * an \c ASN1CType control class and an instance of the
    * given data class.
    *
    * @param ccobj  Reference to a control class instance.
    * @param data   Reference to an instance of the data class. */
   ASN1C_SignalStatusPackageList (ASN1CType& ccobj
      , ASN1T_SignalStatusPackageList& data);

   virtual ~ASN1C_SignalStatusPackageList () {}

   /**
    * Data class: ASN1T_SignalStatusPackage<br/>
    *
    * Appends an instance of the data class to the end of the list.
    *
    * @param  elem     Pointer to an instance of the data class.
    */
   void Append (ASN1T_SignalStatusPackage* elem);

   void freeMemory();
   /**
    * Data class: ASN1T_SignalStatusPackage.<br/>
    *
    * Creates a new instance of the data class.
    *
    * @return    Pointer to the new instance of the data class.
    */
   ASN1T_SignalStatusPackage* NewElement ();

   /**
    * Data class: ASN1T_SignalStatusPackage.<br/>
    *
    * Creates a new instance of the data class and appends it
    * to the end of the list.
    *
    * @return    Pointer to a new instance of the data class.
    */
   ASN1T_SignalStatusPackage* AppendNewElement ();

private:
   ASN1C_SignalStatusPackageList& operator= (const ASN1C_SignalStatusPackageList&) {return *this;}
} ;

EXTERN int asn1PE_SignalStatusPackageList (OSCTXT* pctxt, ASN1T_SignalStatusPackageList* pvalue);

EXTERN int asn1PD_SignalStatusPackageList (OSCTXT* pctxt, ASN1T_SignalStatusPackageList* pvalue);

EXTERN int XmlEnc_SignalStatusPackageList (OSCTXT* pctxt, 
   ASN1T_SignalStatusPackageList* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_SignalStatusPackageList (OSCTXT* pctxt, 
   ASN1T_SignalStatusPackageList* pvalue);

EXTERN int asn1JsonEnc_SignalStatusPackageList (OSCTXT *pctxt, ASN1T_SignalStatusPackageList *pvalue);

EXTERN int asn1JsonDec_SignalStatusPackageList (OSCTXT *pctxt, ASN1T_SignalStatusPackageList *pvalue);

EXTERN int asn1PrtToStrm_SignalStatusPackageList (OSCTXT *pctxt, 
   const char* name, const ASN1T_SignalStatusPackageList* pvalue);

EXTERN int asn1Init_SignalStatusPackageList (ASN1T_SignalStatusPackageList* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_SignalStatusPackageList (OSCTXT *pctxt, 
   ASN1T_SignalStatusPackageList* pvalue);

/**************************************************************/
/*                                                            */
/*  SignalStatus_regional_element                             */
/*                                                            */
/**************************************************************/
/*
Type was extracted from 'SignalStatus'
*/
struct EXTERN ASN1T_SignalStatus_regional_element {
   OSUINT8 regionId;
   ASN1TOpenType regExtValue;
} ;

EXTERN int asn1PE_SignalStatus_regional_element (OSCTXT* pctxt, ASN1T_SignalStatus_regional_element* pvalue);

EXTERN int asn1PD_SignalStatus_regional_element (OSCTXT* pctxt, ASN1T_SignalStatus_regional_element* pvalue);

EXTERN int XmlEnc_SignalStatus_regional_element (OSCTXT* pctxt, 
   ASN1T_SignalStatus_regional_element* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_SignalStatus_regional_element (OSCTXT* pctxt, 
   ASN1T_SignalStatus_regional_element* pvalue);

EXTERN int asn1JsonEnc_SignalStatus_regional_element (OSCTXT *pctxt, ASN1T_SignalStatus_regional_element *pvalue);

EXTERN int asn1JsonDec_SignalStatus_regional_element (OSCTXT *pctxt, ASN1T_SignalStatus_regional_element *pvalue);

EXTERN int asn1PrtToStrm_SignalStatus_regional_element (OSCTXT *pctxt, 
   const char* name, const ASN1T_SignalStatus_regional_element* pvalue);

EXTERN ASN1T_SignalStatus_regional_element* 
   new_ASN1T_SignalStatus_regional_element (ASN1CType& ccobj);

EXTERN int asn1Init_SignalStatus_regional_element (
   ASN1T_SignalStatus_regional_element* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_SignalStatus_regional_element (OSCTXT *pctxt, 
   ASN1T_SignalStatus_regional_element* pvalue);

/**************************************************************/
/*                                                            */
/*  SignalStatus_regional                                     */
/*                                                            */
/**************************************************************/
/*
Type was extracted from 'SignalStatus'
*/
/* List of ASN1T_SignalStatus_regional_element */
typedef ASN1TSeqOfList ASN1T_SignalStatus_regional;

class EXTERN ASN1C_SignalStatus_regional :
public ASN1CSeqOfList
{
protected:
   ASN1T_SignalStatus_regional& msgData;
public:
   /**
    * Control class: ASN1C_SignalStatus_regional
    * Data class:    ASN1T_SignalStatus_regional
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
   ASN1C_SignalStatus_regional (ASN1T_SignalStatus_regional& data);

   /**
    * Control class: ASN1C_SignalStatus_regional<br/>
    * Data class: ASN1T_SignalStatus_regional<br/>
    *
    * Constructs an instance of the control class given an instance
    * of an encode or decode buffer and an instance of
    * the data class.
    *
    * @param msgBuf Reference to an instance of an encode or
    *                  decode buffer.
    * @param data   Reference to an instance of the data class.
    */
   ASN1C_SignalStatus_regional (OSRTMessageBufferIF& msgBuf
      , ASN1T_SignalStatus_regional& data);

   /**
    * Control class: ASN1C_SignalStatus_regional<br/>
    * Data class: ASN1T_SignalStatus_regional<br/>
    *
    * Constructs an instance of the control class given an instance of
    * an \c ASN1CType control class and an instance of the
    * given data class.
    *
    * @param ccobj  Reference to a control class instance.
    * @param data   Reference to an instance of the data class. */
   ASN1C_SignalStatus_regional (ASN1CType& ccobj
      , ASN1T_SignalStatus_regional& data);

   virtual ~ASN1C_SignalStatus_regional () {}

   /**
    * Data class: ASN1T_SignalStatus_regional_element<br/>
    *
    * Appends an instance of the data class to the end of the list.
    *
    * @param  elem     Pointer to an instance of the data class.
    */
   void Append (ASN1T_SignalStatus_regional_element* elem);

   void freeMemory();
   /**
    * Data class: ASN1T_SignalStatus_regional_element.<br/>
    *
    * Creates a new instance of the data class.
    *
    * @return    Pointer to the new instance of the data class.
    */
   ASN1T_SignalStatus_regional_element* NewElement ();

   /**
    * Data class: ASN1T_SignalStatus_regional_element.<br/>
    *
    * Creates a new instance of the data class and appends it
    * to the end of the list.
    *
    * @return    Pointer to a new instance of the data class.
    */
   ASN1T_SignalStatus_regional_element* AppendNewElement ();

   /* Get IE using regionId key value */
   /* index element type is forward referenced */
   ASN1T_SignalStatus_regional_element* GetIE (OSUINT8 regionId);

   /* Get all matching IEs using regionId key value */
   int GetAllIEs (OSUINT8 regionId, ASN1T_SignalStatus_regional* pmatches);

private:
   ASN1C_SignalStatus_regional& operator= (const ASN1C_SignalStatus_regional&) {return *this;}
} ;

EXTERN int asn1PE_SignalStatus_regional (OSCTXT* pctxt, ASN1T_SignalStatus_regional* pvalue);

EXTERN int asn1PD_SignalStatus_regional (OSCTXT* pctxt, ASN1T_SignalStatus_regional* pvalue);

EXTERN int XmlEnc_SignalStatus_regional (OSCTXT* pctxt, 
   ASN1T_SignalStatus_regional* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_SignalStatus_regional (OSCTXT* pctxt, 
   ASN1T_SignalStatus_regional* pvalue);

EXTERN int asn1JsonEnc_SignalStatus_regional (OSCTXT *pctxt, ASN1T_SignalStatus_regional *pvalue);

EXTERN int asn1JsonDec_SignalStatus_regional (OSCTXT *pctxt, ASN1T_SignalStatus_regional *pvalue);

EXTERN int asn1PrtToStrm_SignalStatus_regional (OSCTXT *pctxt, 
   const char* name, const ASN1T_SignalStatus_regional* pvalue);

EXTERN int asn1Init_SignalStatus_regional (ASN1T_SignalStatus_regional* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_SignalStatus_regional (OSCTXT *pctxt, 
   ASN1T_SignalStatus_regional* pvalue);

/**************************************************************/
/*                                                            */
/*  SignalStatus                                              */
/*                                                            */
/**************************************************************/
/*
SignalStatus ::= SEQUENCE {
   sequenceNumber [0] MsgCount,
                  -- changed whenever the below contents have change
   id [1] IntersectionReferenceID,
                  -- this provides a unique mapping to the 
                  -- intersection map in question
                  -- which provides complete location 
                  -- and approach/movement/lane data
                  -- as well as zones for priority/preemption
   sigStatus [2] SignalStatusPackageList,
                  -- a list of detailed status containing all
                  -- priority or preemption state data, both
                  -- active and pending, and who requested it
                  -- requests which are denied are also listed
                  -- here for a short period of time
   regional [3] SEQUENCE (SIZE (1..4)) OF SEQUENCE {
      regionId [0] REG-EXT-ID-AND-TYPE.&id ({Reg-SignalStatus}),
      regExtValue [1] EXPLICIT REG-EXT-ID-AND-TYPE.&Type ({Reg-SignalStatus}{@regionId})
   } OPTIONAL,
   ...
}
*/
struct EXTERN ASN1T_SignalStatus {
   struct {
      unsigned regionalPresent : 1;
   } m;
   OSUINT8 sequenceNumber;
   struct ASN1T_IntersectionReferenceID *id;
   ASN1T_SignalStatusPackageList sigStatus;
   ASN1T_SignalStatus_regional regional;
   ASN1TSeqExt extElem1;
   ASN1T_SignalStatus ();
} ;

EXTERN int asn1PE_SignalStatus (OSCTXT* pctxt, ASN1T_SignalStatus* pvalue);

EXTERN int asn1PD_SignalStatus (OSCTXT* pctxt, ASN1T_SignalStatus* pvalue);

EXTERN int XmlEnc_SignalStatus (OSCTXT* pctxt, ASN1T_SignalStatus* pvalue, 
   const OSUTF8CHAR* elemName, const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_SignalStatus (OSCTXT* pctxt, ASN1T_SignalStatus* pvalue);

EXTERN int asn1JsonEnc_SignalStatus (OSCTXT *pctxt, ASN1T_SignalStatus *pvalue);

EXTERN int asn1JsonDec_SignalStatus (OSCTXT *pctxt, ASN1T_SignalStatus *pvalue);

EXTERN int asn1PrtToStrm_SignalStatus (OSCTXT *pctxt, 
   const char* name, const ASN1T_SignalStatus* pvalue);

EXTERN ASN1T_SignalStatus* new_ASN1T_SignalStatus (ASN1CType& ccobj);

EXTERN int asn1Init_SignalStatus (ASN1T_SignalStatus* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_SignalStatus (OSCTXT *pctxt, ASN1T_SignalStatus* pvalue);

/**************************************************************/
/*                                                            */
/*  SignalStatusList                                          */
/*                                                            */
/**************************************************************/
/*
SignalStatusList ::= SEQUENCE (SIZE (1..32)) OF SignalStatus
*/
/* List of ASN1T_SignalStatus */
typedef ASN1TSeqOfList ASN1T_SignalStatusList;

class EXTERN ASN1C_SignalStatusList :
public ASN1CSeqOfList
{
protected:
   ASN1T_SignalStatusList& msgData;
public:
   /**
    * Control class: ASN1C_SignalStatusList
    * Data class:    ASN1T_SignalStatusList
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
   ASN1C_SignalStatusList (ASN1T_SignalStatusList& data);

   /**
    * Control class: ASN1C_SignalStatusList<br/>
    * Data class: ASN1T_SignalStatusList<br/>
    *
    * Constructs an instance of the control class given an instance
    * of an encode or decode buffer and an instance of
    * the data class.
    *
    * @param msgBuf Reference to an instance of an encode or
    *                  decode buffer.
    * @param data   Reference to an instance of the data class.
    */
   ASN1C_SignalStatusList (OSRTMessageBufferIF& msgBuf
      , ASN1T_SignalStatusList& data);

   /**
    * Control class: ASN1C_SignalStatusList<br/>
    * Data class: ASN1T_SignalStatusList<br/>
    *
    * Constructs an instance of the control class given an instance of
    * an \c ASN1CType control class and an instance of the
    * given data class.
    *
    * @param ccobj  Reference to a control class instance.
    * @param data   Reference to an instance of the data class. */
   ASN1C_SignalStatusList (ASN1CType& ccobj, ASN1T_SignalStatusList& data);

   virtual ~ASN1C_SignalStatusList () {}

   /**
    * Data class: ASN1T_SignalStatus<br/>
    *
    * Appends an instance of the data class to the end of the list.
    *
    * @param  elem     Pointer to an instance of the data class.
    */
   void Append (ASN1T_SignalStatus* elem);

   void freeMemory();
   /**
    * Data class: ASN1T_SignalStatus.<br/>
    *
    * Creates a new instance of the data class.
    *
    * @return    Pointer to the new instance of the data class.
    */
   ASN1T_SignalStatus* NewElement ();

   /**
    * Data class: ASN1T_SignalStatus.<br/>
    *
    * Creates a new instance of the data class and appends it
    * to the end of the list.
    *
    * @return    Pointer to a new instance of the data class.
    */
   ASN1T_SignalStatus* AppendNewElement ();

private:
   ASN1C_SignalStatusList& operator= (const ASN1C_SignalStatusList&) {return *this;}
} ;

EXTERN int asn1PE_SignalStatusList (OSCTXT* pctxt, ASN1T_SignalStatusList* pvalue);

EXTERN int asn1PD_SignalStatusList (OSCTXT* pctxt, ASN1T_SignalStatusList* pvalue);

EXTERN int XmlEnc_SignalStatusList (OSCTXT* pctxt, 
   ASN1T_SignalStatusList* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_SignalStatusList (OSCTXT* pctxt, 
   ASN1T_SignalStatusList* pvalue);

EXTERN int asn1JsonEnc_SignalStatusList (OSCTXT *pctxt, ASN1T_SignalStatusList *pvalue);

EXTERN int asn1JsonDec_SignalStatusList (OSCTXT *pctxt, ASN1T_SignalStatusList *pvalue);

EXTERN int asn1PrtToStrm_SignalStatusList (OSCTXT *pctxt, 
   const char* name, const ASN1T_SignalStatusList* pvalue);

EXTERN int asn1Init_SignalStatusList (ASN1T_SignalStatusList* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_SignalStatusList (OSCTXT *pctxt, ASN1T_SignalStatusList* pvalue);

/**************************************************************/
/*                                                            */
/*  SignalStatusMessage_regional_element                      */
/*                                                            */
/**************************************************************/
/*
Type was extracted from 'SignalStatusMessage'
*/
struct EXTERN ASN1T_SignalStatusMessage_regional_element {
   OSUINT8 regionId;
   ASN1TOpenType regExtValue;
} ;

EXTERN int asn1PE_SignalStatusMessage_regional_element (OSCTXT* pctxt, ASN1T_SignalStatusMessage_regional_element* pvalue);

EXTERN int asn1PD_SignalStatusMessage_regional_element (OSCTXT* pctxt, ASN1T_SignalStatusMessage_regional_element* pvalue);

EXTERN int XmlEnc_SignalStatusMessage_regional_element (OSCTXT* pctxt, 
   ASN1T_SignalStatusMessage_regional_element* pvalue, 
   const OSUTF8CHAR* elemName, const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_SignalStatusMessage_regional_element (OSCTXT* pctxt, 
   ASN1T_SignalStatusMessage_regional_element* pvalue);

EXTERN int asn1JsonEnc_SignalStatusMessage_regional_element (OSCTXT *pctxt, ASN1T_SignalStatusMessage_regional_element *pvalue);

EXTERN int asn1JsonDec_SignalStatusMessage_regional_element (OSCTXT *pctxt, ASN1T_SignalStatusMessage_regional_element *pvalue);

EXTERN int asn1PrtToStrm_SignalStatusMessage_regional_element (OSCTXT *pctxt, 
   const char* name, const ASN1T_SignalStatusMessage_regional_element* pvalue);

EXTERN ASN1T_SignalStatusMessage_regional_element* 
   new_ASN1T_SignalStatusMessage_regional_element (ASN1CType& ccobj);

EXTERN int asn1Init_SignalStatusMessage_regional_element (
   ASN1T_SignalStatusMessage_regional_element* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_SignalStatusMessage_regional_element (OSCTXT *pctxt, 
   ASN1T_SignalStatusMessage_regional_element* pvalue);

/**************************************************************/
/*                                                            */
/*  SignalStatusMessage_regional                              */
/*                                                            */
/**************************************************************/
/*
Type was extracted from 'SignalStatusMessage'
*/
/* List of ASN1T_SignalStatusMessage_regional_element */
typedef ASN1TSeqOfList ASN1T_SignalStatusMessage_regional;

class EXTERN ASN1C_SignalStatusMessage_regional :
public ASN1CSeqOfList
{
protected:
   ASN1T_SignalStatusMessage_regional& msgData;
public:
   /**
    * Control class: ASN1C_SignalStatusMessage_regional
    * Data class:    ASN1T_SignalStatusMessage_regional
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
   ASN1C_SignalStatusMessage_regional
       (ASN1T_SignalStatusMessage_regional& data);

   /**
    * Control class: ASN1C_SignalStatusMessage_regional<br/>
    * Data class: ASN1T_SignalStatusMessage_regional<br/>
    *
    * Constructs an instance of the control class given an instance
    * of an encode or decode buffer and an instance of
    * the data class.
    *
    * @param msgBuf Reference to an instance of an encode or
    *                  decode buffer.
    * @param data   Reference to an instance of the data class.
    */
   ASN1C_SignalStatusMessage_regional (OSRTMessageBufferIF& msgBuf
      , ASN1T_SignalStatusMessage_regional& data);

   /**
    * Control class: ASN1C_SignalStatusMessage_regional<br/>
    * Data class: ASN1T_SignalStatusMessage_regional<br/>
    *
    * Constructs an instance of the control class given an instance of
    * an \c ASN1CType control class and an instance of the
    * given data class.
    *
    * @param ccobj  Reference to a control class instance.
    * @param data   Reference to an instance of the data class. */
   ASN1C_SignalStatusMessage_regional (ASN1CType& ccobj
      , ASN1T_SignalStatusMessage_regional& data);

   virtual ~ASN1C_SignalStatusMessage_regional () {}

   /**
    * Data class: ASN1T_SignalStatusMessage_regional_element<br/>
    *
    * Appends an instance of the data class to the end of the list.
    *
    * @param  elem     Pointer to an instance of the data class.
    */
   void Append (ASN1T_SignalStatusMessage_regional_element* elem);

   void freeMemory();
   /**
    * Data class: ASN1T_SignalStatusMessage_regional_element.<br/>
    *
    * Creates a new instance of the data class.
    *
    * @return    Pointer to the new instance of the data class.
    */
   ASN1T_SignalStatusMessage_regional_element* NewElement ();

   /**
    * Data class: ASN1T_SignalStatusMessage_regional_element.<br/>
    *
    * Creates a new instance of the data class and appends it
    * to the end of the list.
    *
    * @return    Pointer to a new instance of the data class.
    */
   ASN1T_SignalStatusMessage_regional_element* AppendNewElement ();

   /* Get IE using regionId key value */
   /* index element type is forward referenced */
   ASN1T_SignalStatusMessage_regional_element* GetIE (OSUINT8 regionId);

   /* Get all matching IEs using regionId key value */
   int GetAllIEs (OSUINT8 regionId, 
      ASN1T_SignalStatusMessage_regional* pmatches);

private:
   ASN1C_SignalStatusMessage_regional& operator= (const ASN1C_SignalStatusMessage_regional&) {return *this;}
} ;

EXTERN int asn1PE_SignalStatusMessage_regional (OSCTXT* pctxt, ASN1T_SignalStatusMessage_regional* pvalue);

EXTERN int asn1PD_SignalStatusMessage_regional (OSCTXT* pctxt, ASN1T_SignalStatusMessage_regional* pvalue);

EXTERN int XmlEnc_SignalStatusMessage_regional (OSCTXT* pctxt, 
   ASN1T_SignalStatusMessage_regional* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_SignalStatusMessage_regional (OSCTXT* pctxt, 
   ASN1T_SignalStatusMessage_regional* pvalue);

EXTERN int asn1JsonEnc_SignalStatusMessage_regional (OSCTXT *pctxt, ASN1T_SignalStatusMessage_regional *pvalue);

EXTERN int asn1JsonDec_SignalStatusMessage_regional (OSCTXT *pctxt, ASN1T_SignalStatusMessage_regional *pvalue);

EXTERN int asn1PrtToStrm_SignalStatusMessage_regional (OSCTXT *pctxt, 
   const char* name, const ASN1T_SignalStatusMessage_regional* pvalue);

EXTERN int asn1Init_SignalStatusMessage_regional (
   ASN1T_SignalStatusMessage_regional* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_SignalStatusMessage_regional (OSCTXT *pctxt, 
   ASN1T_SignalStatusMessage_regional* pvalue);

/**************************************************************/
/*                                                            */
/*  SignalStatusMessage                                       */
/*                                                            */
/**************************************************************/
/*
SignalStatusMessage ::= SEQUENCE {
   timeStamp [0] MinuteOfTheYear OPTIONAL,
   second [1] DSecond,
   sequenceNumber [2] MsgCount OPTIONAL,
   -- Status Data for one of more signalized intersections
   status [3] SignalStatusList,
   regional [4] SEQUENCE (SIZE (1..4)) OF SEQUENCE {
      regionId [0] REG-EXT-ID-AND-TYPE.&id ({Reg-SignalStatusMessage}),
      regExtValue [1] EXPLICIT REG-EXT-ID-AND-TYPE.&Type ({Reg-SignalStatusMessage}{@regionId})
   } OPTIONAL,
   ...
}
*/
struct EXTERN ASN1T_SignalStatusMessage {
   struct {
      unsigned timeStampPresent : 1;
      unsigned sequenceNumberPresent : 1;
      unsigned regionalPresent : 1;
   } m;
   OSUINT32 timeStamp;
   OSUINT16 second;
   OSUINT8 sequenceNumber;
   ASN1T_SignalStatusList status;
   ASN1T_SignalStatusMessage_regional regional;
   ASN1TSeqExt extElem1;
   ASN1T_SignalStatusMessage ();
} ;

EXTERN int asn1PE_SignalStatusMessage (OSCTXT* pctxt, ASN1T_SignalStatusMessage* pvalue);

EXTERN int asn1PD_SignalStatusMessage (OSCTXT* pctxt, ASN1T_SignalStatusMessage* pvalue);

EXTERN int XmlEnc_SignalStatusMessage (OSCTXT* pctxt, 
   ASN1T_SignalStatusMessage* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_SignalStatusMessage (OSCTXT* pctxt, 
   ASN1T_SignalStatusMessage* pvalue);

EXTERN int asn1JsonEnc_SignalStatusMessage (OSCTXT *pctxt, ASN1T_SignalStatusMessage *pvalue);

EXTERN int asn1JsonDec_SignalStatusMessage (OSCTXT *pctxt, ASN1T_SignalStatusMessage *pvalue);

EXTERN int asn1PrtToStrm_SignalStatusMessage (OSCTXT *pctxt, 
   const char* name, const ASN1T_SignalStatusMessage* pvalue);

EXTERN ASN1T_SignalStatusMessage* 
   new_ASN1T_SignalStatusMessage (ASN1CType& ccobj);

EXTERN int asn1Init_SignalStatusMessage (ASN1T_SignalStatusMessage* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_SignalStatusMessage (OSCTXT *pctxt, 
   ASN1T_SignalStatusMessage* pvalue);

#endif

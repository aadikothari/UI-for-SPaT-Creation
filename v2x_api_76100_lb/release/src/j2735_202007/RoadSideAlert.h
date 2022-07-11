/**
 * This file was generated by the Objective Systems ASN1C Compiler
 * (http://www.obj-sys.com).
 */
#ifndef ROADSIDEALERT_H
#define ROADSIDEALERT_H

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
#include "ITIS.h"

/**
 * Header file for ASN.1 module RoadSideAlert
 */
/**************************************************************/
/*                                                            */
/*  RoadSideAlert_description                                 */
/*                                                            */
/**************************************************************/
/*
Type was extracted from 'RoadSideAlert'
*/
typedef struct EXTERN ASN1T_RoadSideAlert_description {
   OSUINT8 n;
   ASN1T_ITIScodes elem[8];
   ASN1T_RoadSideAlert_description () : n(0) {}
} ASN1T_RoadSideAlert_description;

class EXTERN ASN1C_RoadSideAlert_description :
public ASN1CType
{
protected:
   ASN1T_RoadSideAlert_description& msgData;
public:
   /**
    * Control class: ASN1C_RoadSideAlert_description
    * Data class:    ASN1T_RoadSideAlert_description
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
   ASN1C_RoadSideAlert_description (ASN1T_RoadSideAlert_description& data);

   /**
    * Control class: ASN1C_RoadSideAlert_description<br/>
    * Data class: ASN1T_RoadSideAlert_description<br/>
    *
    * Constructs an instance of the control class given an instance
    * of an encode or decode buffer and an instance of
    * the data class.
    *
    * @param msgBuf Reference to an instance of an encode or
    *                  decode buffer.
    * @param data   Reference to an instance of the data class.
    */
   ASN1C_RoadSideAlert_description (OSRTMessageBufferIF& msgBuf
      , ASN1T_RoadSideAlert_description& data);

   /**
    * Control class: ASN1C_RoadSideAlert_description<br/>
    * Data class: ASN1T_RoadSideAlert_description<br/>
    *
    * Constructs an instance of the control class given an instance of
    * an \c ASN1CType control class and an instance of the
    * given data class.
    *
    * @param ccobj  Reference to a control class instance.
    * @param data   Reference to an instance of the data class. */
   ASN1C_RoadSideAlert_description (ASN1CType& ccobj
      , ASN1T_RoadSideAlert_description& data);

   virtual ~ASN1C_RoadSideAlert_description () {}

private:
   ASN1C_RoadSideAlert_description& operator= (const ASN1C_RoadSideAlert_description&) {return *this;}
} ;

EXTERN int asn1PE_RoadSideAlert_description (OSCTXT* pctxt, ASN1T_RoadSideAlert_description* pvalue);

EXTERN int asn1PD_RoadSideAlert_description (OSCTXT* pctxt, ASN1T_RoadSideAlert_description* pvalue);

EXTERN int XmlEnc_RoadSideAlert_description (OSCTXT* pctxt, 
   ASN1T_RoadSideAlert_description* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_RoadSideAlert_description (OSCTXT* pctxt, 
   ASN1T_RoadSideAlert_description* pvalue);

EXTERN int asn1JsonEnc_RoadSideAlert_description (OSCTXT *pctxt, ASN1T_RoadSideAlert_description *pvalue);

EXTERN int asn1JsonDec_RoadSideAlert_description (OSCTXT *pctxt, ASN1T_RoadSideAlert_description *pvalue);

EXTERN int asn1PrtToStrm_RoadSideAlert_description (OSCTXT *pctxt, 
   const char* name, const ASN1T_RoadSideAlert_description* pvalue);

EXTERN int asn1Init_RoadSideAlert_description (
   ASN1T_RoadSideAlert_description* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

/**************************************************************/
/*                                                            */
/*  RoadSideAlert_regional_element                            */
/*                                                            */
/**************************************************************/
/*
Type was extracted from 'RoadSideAlert'
*/
struct EXTERN ASN1T_RoadSideAlert_regional_element {
   OSUINT8 regionId;
   ASN1TOpenType regExtValue;
} ;

EXTERN int asn1PE_RoadSideAlert_regional_element (OSCTXT* pctxt, ASN1T_RoadSideAlert_regional_element* pvalue);

EXTERN int asn1PD_RoadSideAlert_regional_element (OSCTXT* pctxt, ASN1T_RoadSideAlert_regional_element* pvalue);

EXTERN int XmlEnc_RoadSideAlert_regional_element (OSCTXT* pctxt, 
   ASN1T_RoadSideAlert_regional_element* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_RoadSideAlert_regional_element (OSCTXT* pctxt, 
   ASN1T_RoadSideAlert_regional_element* pvalue);

EXTERN int asn1JsonEnc_RoadSideAlert_regional_element (OSCTXT *pctxt, ASN1T_RoadSideAlert_regional_element *pvalue);

EXTERN int asn1JsonDec_RoadSideAlert_regional_element (OSCTXT *pctxt, ASN1T_RoadSideAlert_regional_element *pvalue);

EXTERN int asn1PrtToStrm_RoadSideAlert_regional_element (OSCTXT *pctxt, 
   const char* name, const ASN1T_RoadSideAlert_regional_element* pvalue);

EXTERN ASN1T_RoadSideAlert_regional_element* 
   new_ASN1T_RoadSideAlert_regional_element (ASN1CType& ccobj);

EXTERN int asn1Init_RoadSideAlert_regional_element (
   ASN1T_RoadSideAlert_regional_element* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_RoadSideAlert_regional_element (OSCTXT *pctxt, 
   ASN1T_RoadSideAlert_regional_element* pvalue);

/**************************************************************/
/*                                                            */
/*  RoadSideAlert_regional                                    */
/*                                                            */
/**************************************************************/
/*
Type was extracted from 'RoadSideAlert'
*/
/* List of ASN1T_RoadSideAlert_regional_element */
typedef ASN1TSeqOfList ASN1T_RoadSideAlert_regional;

class EXTERN ASN1C_RoadSideAlert_regional :
public ASN1CSeqOfList
{
protected:
   ASN1T_RoadSideAlert_regional& msgData;
public:
   /**
    * Control class: ASN1C_RoadSideAlert_regional
    * Data class:    ASN1T_RoadSideAlert_regional
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
   ASN1C_RoadSideAlert_regional (ASN1T_RoadSideAlert_regional& data);

   /**
    * Control class: ASN1C_RoadSideAlert_regional<br/>
    * Data class: ASN1T_RoadSideAlert_regional<br/>
    *
    * Constructs an instance of the control class given an instance
    * of an encode or decode buffer and an instance of
    * the data class.
    *
    * @param msgBuf Reference to an instance of an encode or
    *                  decode buffer.
    * @param data   Reference to an instance of the data class.
    */
   ASN1C_RoadSideAlert_regional (OSRTMessageBufferIF& msgBuf
      , ASN1T_RoadSideAlert_regional& data);

   /**
    * Control class: ASN1C_RoadSideAlert_regional<br/>
    * Data class: ASN1T_RoadSideAlert_regional<br/>
    *
    * Constructs an instance of the control class given an instance of
    * an \c ASN1CType control class and an instance of the
    * given data class.
    *
    * @param ccobj  Reference to a control class instance.
    * @param data   Reference to an instance of the data class. */
   ASN1C_RoadSideAlert_regional (ASN1CType& ccobj
      , ASN1T_RoadSideAlert_regional& data);

   virtual ~ASN1C_RoadSideAlert_regional () {}

   /**
    * Data class: ASN1T_RoadSideAlert_regional_element<br/>
    *
    * Appends an instance of the data class to the end of the list.
    *
    * @param  elem     Pointer to an instance of the data class.
    */
   void Append (ASN1T_RoadSideAlert_regional_element* elem);

   void freeMemory();
   /**
    * Data class: ASN1T_RoadSideAlert_regional_element.<br/>
    *
    * Creates a new instance of the data class.
    *
    * @return    Pointer to the new instance of the data class.
    */
   ASN1T_RoadSideAlert_regional_element* NewElement ();

   /**
    * Data class: ASN1T_RoadSideAlert_regional_element.<br/>
    *
    * Creates a new instance of the data class and appends it
    * to the end of the list.
    *
    * @return    Pointer to a new instance of the data class.
    */
   ASN1T_RoadSideAlert_regional_element* AppendNewElement ();

   /* Get IE using regionId key value */
   /* index element type is forward referenced */
   ASN1T_RoadSideAlert_regional_element* GetIE (OSUINT8 regionId);

   /* Get all matching IEs using regionId key value */
   int GetAllIEs (OSUINT8 regionId, ASN1T_RoadSideAlert_regional* pmatches);

private:
   ASN1C_RoadSideAlert_regional& operator= (const ASN1C_RoadSideAlert_regional&) {return *this;}
} ;

EXTERN int asn1PE_RoadSideAlert_regional (OSCTXT* pctxt, ASN1T_RoadSideAlert_regional* pvalue);

EXTERN int asn1PD_RoadSideAlert_regional (OSCTXT* pctxt, ASN1T_RoadSideAlert_regional* pvalue);

EXTERN int XmlEnc_RoadSideAlert_regional (OSCTXT* pctxt, 
   ASN1T_RoadSideAlert_regional* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_RoadSideAlert_regional (OSCTXT* pctxt, 
   ASN1T_RoadSideAlert_regional* pvalue);

EXTERN int asn1JsonEnc_RoadSideAlert_regional (OSCTXT *pctxt, ASN1T_RoadSideAlert_regional *pvalue);

EXTERN int asn1JsonDec_RoadSideAlert_regional (OSCTXT *pctxt, ASN1T_RoadSideAlert_regional *pvalue);

EXTERN int asn1PrtToStrm_RoadSideAlert_regional (OSCTXT *pctxt, 
   const char* name, const ASN1T_RoadSideAlert_regional* pvalue);

EXTERN int asn1Init_RoadSideAlert_regional (ASN1T_RoadSideAlert_regional* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_RoadSideAlert_regional (OSCTXT *pctxt, 
   ASN1T_RoadSideAlert_regional* pvalue);

/**************************************************************/
/*                                                            */
/*  RoadSideAlert                                             */
/*                                                            */
/**************************************************************/
/*
RoadSideAlert ::= SEQUENCE {
   msgCnt [0] MsgCount,
   timeStamp [1] MinuteOfTheYear OPTIONAL,
   typeEvent [2] ITIScodes,
                 -- a category and an item from that category 
                 -- all ITS stds use the same types here
                 -- to explain the type of  the 
                 -- alert / danger / hazard involved
   description [3] SEQUENCE (SIZE (1..8)) OF ITIScodes OPTIONAL,
                 -- up to eight ITIS code set entries to further
                 -- describe the event, give advice, or any 
                 -- other ITIS codes
   priority [4] Priority OPTIONAL,
                 -- the urgency of this message, a relative
                 -- degree of merit compared with other 
                 -- similar messages for this type (not other
                 -- messages being sent by the device), nor a 
                 -- priority of display urgency
   heading [5] HeadingSlice OPTIONAL,
                 -- Applicable headings/direction
   extent [6] Extent OPTIONAL,
                 -- the spatial distance over which this
                 -- message applies and should be presented 
                 -- to the driver
   position [7] FullPositionVector OPTIONAL,
                 -- a compact summary of the position,
                 -- heading, speed, etc. of the 
                 -- event in question. Including stationary
                 -- and wide area events. 
   furtherInfoID [8] FurtherInfoID OPTIONAL,
                 -- an index link to any other incident 
                 -- information data that may be available 
                 -- in the normal ATIS incident description 
                 -- or other messages
                 -- 1~2 octets in length
   regional [9] SEQUENCE (SIZE (1..4)) OF SEQUENCE {
      regionId [0] REG-EXT-ID-AND-TYPE.&id ({Reg-RoadSideAlert}),
      regExtValue [1] EXPLICIT REG-EXT-ID-AND-TYPE.&Type ({Reg-RoadSideAlert}{@regionId})
   } OPTIONAL,
   ...
}
*/
struct EXTERN ASN1T_RoadSideAlert {
   struct {
      unsigned timeStampPresent : 1;
      unsigned descriptionPresent : 1;
      unsigned priorityPresent : 1;
      unsigned headingPresent : 1;
      unsigned extentPresent : 1;
      unsigned positionPresent : 1;
      unsigned furtherInfoIDPresent : 1;
      unsigned regionalPresent : 1;
   } m;
   OSUINT8 msgCnt;
   OSUINT32 timeStamp;
   ASN1T_ITIScodes typeEvent;
   ASN1T_RoadSideAlert_description description;
   struct ASN1T_Priority *priority;
   struct ASN1T_HeadingSlice *heading;
   OSUINT32 extent;
   struct ASN1T_FullPositionVector *position;
   struct ASN1T_FurtherInfoID *furtherInfoID;
   ASN1T_RoadSideAlert_regional regional;
   ASN1TSeqExt extElem1;
   ASN1T_RoadSideAlert ();
} ;

EXTERN int asn1PE_RoadSideAlert (OSCTXT* pctxt, ASN1T_RoadSideAlert* pvalue);

EXTERN int asn1PD_RoadSideAlert (OSCTXT* pctxt, ASN1T_RoadSideAlert* pvalue);

EXTERN int XmlEnc_RoadSideAlert (OSCTXT* pctxt, ASN1T_RoadSideAlert* pvalue, 
   const OSUTF8CHAR* elemName, const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_RoadSideAlert (OSCTXT* pctxt, ASN1T_RoadSideAlert* pvalue);

EXTERN int asn1JsonEnc_RoadSideAlert (OSCTXT *pctxt, ASN1T_RoadSideAlert *pvalue);

EXTERN int asn1JsonDec_RoadSideAlert (OSCTXT *pctxt, ASN1T_RoadSideAlert *pvalue);

EXTERN int asn1PrtToStrm_RoadSideAlert (OSCTXT *pctxt, 
   const char* name, const ASN1T_RoadSideAlert* pvalue);

EXTERN ASN1T_RoadSideAlert* new_ASN1T_RoadSideAlert (ASN1CType& ccobj);

EXTERN int asn1Init_RoadSideAlert (ASN1T_RoadSideAlert* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_RoadSideAlert (OSCTXT *pctxt, ASN1T_RoadSideAlert* pvalue);

#endif

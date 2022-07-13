/**
 * This file was generated by the Objective Systems ASN1C Compiler
 * (http://www.obj-sys.com).
 */
#ifndef ELECTRONICREGISTRATIONIDENTIFICATIONVEHICLEDATAMODULE_H
#define ELECTRONICREGISTRATIONIDENTIFICATIONVEHICLEDATAMODULE_H

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
 * Header file for ASN.1 module ElectronicRegistrationIdentificationVehicleDataModule
 */
/**************************************************************/
/*                                                            */
/*  EuVehicleCategoryL                                        */
/*                                                            */
/**************************************************************/
/*
EuVehicleCategoryL ::= ENUMERATED { l1(0), l2(1), l3(2), l4(3), l5(4), l6(5), l7(6) }
*/
struct EXTERN EuVehicleCategoryL {
   enum Root {
      l1 = 0,
      l2 = 1,
      l3 = 2,
      l4 = 3,
      l5 = 4,
      l6 = 5,
      l7 = 6
   } ;
} ;

typedef OSUINT32 ASN1T_EuVehicleCategoryL;

EXTERN int asn1PE_EuVehicleCategoryL (OSCTXT* pctxt, ASN1T_EuVehicleCategoryL value);

EXTERN int asn1PD_EuVehicleCategoryL (OSCTXT* pctxt, ASN1T_EuVehicleCategoryL* pvalue);

EXTERN int XmlEnc_EuVehicleCategoryL (OSCTXT* pctxt, 
   ASN1T_EuVehicleCategoryL value, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_EuVehicleCategoryL (OSCTXT* pctxt, 
   ASN1T_EuVehicleCategoryL* pvalue);

EXTERN int asn1JsonEnc_EuVehicleCategoryL (OSCTXT *pctxt, ASN1T_EuVehicleCategoryL *pvalue);

EXTERN int asn1JsonDec_EuVehicleCategoryL (OSCTXT *pctxt, ASN1T_EuVehicleCategoryL *pvalue);

EXTERN int asn1PrtToStrm_EuVehicleCategoryL (OSCTXT *pctxt, 
   const char* name, const ASN1T_EuVehicleCategoryL* pvalue);

EXTERN ASN1T_EuVehicleCategoryL* 
   new_ASN1T_EuVehicleCategoryL (ASN1CType& ccobj);

EXTERN extern const OSEnumItem ASN1T_EuVehicleCategoryL_ENUMTAB[];
#define ASN1T_EuVehicleCategoryL_ENUMTABSIZE 7

EXTERN const OSUTF8CHAR* ASN1T_EuVehicleCategoryL_ToString (OSINT32 value);

EXTERN int ASN1T_EuVehicleCategoryL_ToEnum (OSCTXT* pctxt,
   const OSUTF8CHAR* value, ASN1T_EuVehicleCategoryL* pvalue);

EXTERN int ASN1T_EuVehicleCategoryL_ToEnum2 (OSCTXT* pctxt,
   const OSUTF8CHAR* value, OSSIZE valueLen, ASN1T_EuVehicleCategoryL* pvalue)
      ;

/**************************************************************/
/*                                                            */
/*  EuVehicleCategoryM                                        */
/*                                                            */
/**************************************************************/
/*
EuVehicleCategoryM ::= ENUMERATED { m1(0), m2(1), m3(2) }
*/
struct EXTERN EuVehicleCategoryM {
   enum Root {
      m1 = 0,
      m2 = 1,
      m3 = 2
   } ;
} ;

typedef OSUINT32 ASN1T_EuVehicleCategoryM;

EXTERN int asn1PE_EuVehicleCategoryM (OSCTXT* pctxt, ASN1T_EuVehicleCategoryM value);

EXTERN int asn1PD_EuVehicleCategoryM (OSCTXT* pctxt, ASN1T_EuVehicleCategoryM* pvalue);

EXTERN int XmlEnc_EuVehicleCategoryM (OSCTXT* pctxt, 
   ASN1T_EuVehicleCategoryM value, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_EuVehicleCategoryM (OSCTXT* pctxt, 
   ASN1T_EuVehicleCategoryM* pvalue);

EXTERN int asn1JsonEnc_EuVehicleCategoryM (OSCTXT *pctxt, ASN1T_EuVehicleCategoryM *pvalue);

EXTERN int asn1JsonDec_EuVehicleCategoryM (OSCTXT *pctxt, ASN1T_EuVehicleCategoryM *pvalue);

EXTERN int asn1PrtToStrm_EuVehicleCategoryM (OSCTXT *pctxt, 
   const char* name, const ASN1T_EuVehicleCategoryM* pvalue);

EXTERN ASN1T_EuVehicleCategoryM* 
   new_ASN1T_EuVehicleCategoryM (ASN1CType& ccobj);

EXTERN extern const OSEnumItem ASN1T_EuVehicleCategoryM_ENUMTAB[];
#define ASN1T_EuVehicleCategoryM_ENUMTABSIZE 3

EXTERN const OSUTF8CHAR* ASN1T_EuVehicleCategoryM_ToString (OSINT32 value);

EXTERN int ASN1T_EuVehicleCategoryM_ToEnum (OSCTXT* pctxt,
   const OSUTF8CHAR* value, ASN1T_EuVehicleCategoryM* pvalue);

EXTERN int ASN1T_EuVehicleCategoryM_ToEnum2 (OSCTXT* pctxt,
   const OSUTF8CHAR* value, OSSIZE valueLen, ASN1T_EuVehicleCategoryM* pvalue)
      ;

/**************************************************************/
/*                                                            */
/*  EuVehicleCategoryN                                        */
/*                                                            */
/**************************************************************/
/*
EuVehicleCategoryN ::= ENUMERATED { n1(0), n2(1), n3(2) }
*/
struct EXTERN EuVehicleCategoryN {
   enum Root {
      n1 = 0,
      n2 = 1,
      n3 = 2
   } ;
} ;

typedef OSUINT32 ASN1T_EuVehicleCategoryN;

EXTERN int asn1PE_EuVehicleCategoryN (OSCTXT* pctxt, ASN1T_EuVehicleCategoryN value);

EXTERN int asn1PD_EuVehicleCategoryN (OSCTXT* pctxt, ASN1T_EuVehicleCategoryN* pvalue);

EXTERN int XmlEnc_EuVehicleCategoryN (OSCTXT* pctxt, 
   ASN1T_EuVehicleCategoryN value, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_EuVehicleCategoryN (OSCTXT* pctxt, 
   ASN1T_EuVehicleCategoryN* pvalue);

EXTERN int asn1JsonEnc_EuVehicleCategoryN (OSCTXT *pctxt, ASN1T_EuVehicleCategoryN *pvalue);

EXTERN int asn1JsonDec_EuVehicleCategoryN (OSCTXT *pctxt, ASN1T_EuVehicleCategoryN *pvalue);

EXTERN int asn1PrtToStrm_EuVehicleCategoryN (OSCTXT *pctxt, 
   const char* name, const ASN1T_EuVehicleCategoryN* pvalue);

EXTERN ASN1T_EuVehicleCategoryN* 
   new_ASN1T_EuVehicleCategoryN (ASN1CType& ccobj);

EXTERN extern const OSEnumItem ASN1T_EuVehicleCategoryN_ENUMTAB[];
#define ASN1T_EuVehicleCategoryN_ENUMTABSIZE 3

EXTERN const OSUTF8CHAR* ASN1T_EuVehicleCategoryN_ToString (OSINT32 value);

EXTERN int ASN1T_EuVehicleCategoryN_ToEnum (OSCTXT* pctxt,
   const OSUTF8CHAR* value, ASN1T_EuVehicleCategoryN* pvalue);

EXTERN int ASN1T_EuVehicleCategoryN_ToEnum2 (OSCTXT* pctxt,
   const OSUTF8CHAR* value, OSSIZE valueLen, ASN1T_EuVehicleCategoryN* pvalue)
      ;

/**************************************************************/
/*                                                            */
/*  EuVehicleCategoryO                                        */
/*                                                            */
/**************************************************************/
/*
EuVehicleCategoryO ::= ENUMERATED { o1(0), o2(1), o3(2), o4(3) }
*/
struct EXTERN EuVehicleCategoryO {
   enum Root {
      o1 = 0,
      o2 = 1,
      o3 = 2,
      o4 = 3
   } ;
} ;

typedef OSUINT32 ASN1T_EuVehicleCategoryO;

EXTERN int asn1PE_EuVehicleCategoryO (OSCTXT* pctxt, ASN1T_EuVehicleCategoryO value);

EXTERN int asn1PD_EuVehicleCategoryO (OSCTXT* pctxt, ASN1T_EuVehicleCategoryO* pvalue);

EXTERN int XmlEnc_EuVehicleCategoryO (OSCTXT* pctxt, 
   ASN1T_EuVehicleCategoryO value, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_EuVehicleCategoryO (OSCTXT* pctxt, 
   ASN1T_EuVehicleCategoryO* pvalue);

EXTERN int asn1JsonEnc_EuVehicleCategoryO (OSCTXT *pctxt, ASN1T_EuVehicleCategoryO *pvalue);

EXTERN int asn1JsonDec_EuVehicleCategoryO (OSCTXT *pctxt, ASN1T_EuVehicleCategoryO *pvalue);

EXTERN int asn1PrtToStrm_EuVehicleCategoryO (OSCTXT *pctxt, 
   const char* name, const ASN1T_EuVehicleCategoryO* pvalue);

EXTERN ASN1T_EuVehicleCategoryO* 
   new_ASN1T_EuVehicleCategoryO (ASN1CType& ccobj);

EXTERN extern const OSEnumItem ASN1T_EuVehicleCategoryO_ENUMTAB[];
#define ASN1T_EuVehicleCategoryO_ENUMTABSIZE 4

EXTERN const OSUTF8CHAR* ASN1T_EuVehicleCategoryO_ToString (OSINT32 value);

EXTERN int ASN1T_EuVehicleCategoryO_ToEnum (OSCTXT* pctxt,
   const OSUTF8CHAR* value, ASN1T_EuVehicleCategoryO* pvalue);

EXTERN int ASN1T_EuVehicleCategoryO_ToEnum2 (OSCTXT* pctxt,
   const OSUTF8CHAR* value, OSSIZE valueLen, ASN1T_EuVehicleCategoryO* pvalue)
      ;

/**************************************************************/
/*                                                            */
/*  EuVehicleCategoryCode                                     */
/*                                                            */
/**************************************************************/
/*
 Electronic Registration Identification (ERI)- Vehicle Data
EuVehicleCategoryCode ::= CHOICE {
   euVehicleCategoryL [0] EuVehicleCategoryL, -- conforms to EU 2002/24 and UNECE 1999
   euVehicleCategoryM [1] EuVehicleCategoryM, -- conforms to EU 2001/116 and UNECE 1999
   euVehicleCategoryN [2] EuVehicleCategoryN, -- conforms to EU 2001/116 and UNECE 1999
   euVehicleCategoryO [3] EuVehicleCategoryO, -- conforms to EU 2001/116 and UNECE 1999
   euVehilcleCategoryT [4] NULL, -- conforms to UNECE 1999
   euVehilcleCategoryG [5] NULL
}
*/
/* Choice tag constants */

#define T_EuVehicleCategoryCode_euVehicleCategoryL 1
#define T_EuVehicleCategoryCode_euVehicleCategoryM 2
#define T_EuVehicleCategoryCode_euVehicleCategoryN 3
#define T_EuVehicleCategoryCode_euVehicleCategoryO 4
#define T_EuVehicleCategoryCode_euVehilcleCategoryT 5
#define T_EuVehicleCategoryCode_euVehilcleCategoryG 6

struct EXTERN ASN1T_EuVehicleCategoryCode {
   OSINT32 t;
   union {
      /* t = 1 */
      ASN1T_EuVehicleCategoryL euVehicleCategoryL;
      /* t = 2 */
      ASN1T_EuVehicleCategoryM euVehicleCategoryM;
      /* t = 3 */
      ASN1T_EuVehicleCategoryN euVehicleCategoryN;
      /* t = 4 */
      ASN1T_EuVehicleCategoryO euVehicleCategoryO;
      /* t = 5 */
      /* t = 6 */
   } u;
   ASN1T_EuVehicleCategoryCode () { t = 0; OSCRTLMEMSET (&u, 0, sizeof(u)); }
} ;

EXTERN int asn1PE_EuVehicleCategoryCode (OSCTXT* pctxt, ASN1T_EuVehicleCategoryCode* pvalue);

EXTERN int asn1PD_EuVehicleCategoryCode (OSCTXT* pctxt, ASN1T_EuVehicleCategoryCode* pvalue);

EXTERN int XmlEnc_EuVehicleCategoryCode (OSCTXT* pctxt, 
   ASN1T_EuVehicleCategoryCode* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_EuVehicleCategoryCode (OSCTXT* pctxt, 
   ASN1T_EuVehicleCategoryCode* pvalue);

EXTERN int asn1JsonEnc_EuVehicleCategoryCode (OSCTXT *pctxt, ASN1T_EuVehicleCategoryCode *pvalue);

EXTERN int asn1JsonDec_EuVehicleCategoryCode (OSCTXT *pctxt, ASN1T_EuVehicleCategoryCode *pvalue);

EXTERN int asn1PrtToStrm_EuVehicleCategoryCode (OSCTXT *pctxt, 
   const char* name, const ASN1T_EuVehicleCategoryCode* pvalue);

EXTERN ASN1T_EuVehicleCategoryCode* 
   new_ASN1T_EuVehicleCategoryCode (ASN1CType& ccobj);

EXTERN int asn1Init_EuVehicleCategoryCode (ASN1T_EuVehicleCategoryCode* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

/**************************************************************/
/*                                                            */
/*  Iso3833VehicleType                                        */
/*                                                            */
/**************************************************************/
/*
Iso3833VehicleType ::= INTEGER { passengerCar(0), saloon(1), convertibleSaloon(2), pullmanSaloon(3), stationWagon(4), truckStationWagon(5), coupe(6), convertible(7), multipurposePassengerCar(8), forwardControlPassengerCar(9), specialPassengerCar(10), bus(11), minibus(12), urbanBus(13), interurbanCoach(14), longDistanceCoach(15), articulatedBus(16), trolleyBus(17), specialBus(18), commercialVehicle(19), specialCommercialVehicle(20), specialVehicle(21), trailingTowingVehicle(22), semiTrailerTowingVehicle(23), trailer(24), busTrailer(25), generalPurposeTrailer(26), caravan(27), specialTrailer(28), semiTrailer(29), busSemiTrailer(30), generalPurposeSemiTrailer(31), specialSemiTrailer(32), roadTrain(33), passengerRoadTrain(34), articulatedRoadTrain(35), doubleRoadTrain(36), compositeRoadTrain(37), specialRoadTrain(38), moped(39), motorCycle(40) } (0..255)
*/
struct EXTERN Iso3833VehicleType {
   enum Root {
      passengerCar = 0,
      saloon = 1,
      convertibleSaloon = 2,
      pullmanSaloon = 3,
      stationWagon = 4,
      truckStationWagon = 5,
      coupe = 6,
      convertible = 7,
      multipurposePassengerCar = 8,
      forwardControlPassengerCar = 9,
      specialPassengerCar = 10,
      bus = 11,
      minibus = 12,
      urbanBus = 13,
      interurbanCoach = 14,
      longDistanceCoach = 15,
      articulatedBus = 16,
      trolleyBus = 17,
      specialBus = 18,
      commercialVehicle = 19,
      specialCommercialVehicle = 20,
      specialVehicle = 21,
      trailingTowingVehicle = 22,
      semiTrailerTowingVehicle = 23,
      trailer = 24,
      busTrailer = 25,
      generalPurposeTrailer = 26,
      caravan = 27,
      specialTrailer = 28,
      semiTrailer = 29,
      busSemiTrailer = 30,
      generalPurposeSemiTrailer = 31,
      specialSemiTrailer = 32,
      roadTrain = 33,
      passengerRoadTrain = 34,
      articulatedRoadTrain = 35,
      doubleRoadTrain = 36,
      compositeRoadTrain = 37,
      specialRoadTrain = 38,
      moped = 39,
      motorCycle = 40
   } ;
} ;

typedef OSUINT8 ASN1T_Iso3833VehicleType;

EXTERN int asn1PE_Iso3833VehicleType (OSCTXT* pctxt, ASN1T_Iso3833VehicleType value);

EXTERN int asn1PD_Iso3833VehicleType (OSCTXT* pctxt, ASN1T_Iso3833VehicleType* pvalue);

EXTERN int XmlEnc_Iso3833VehicleType (OSCTXT* pctxt, 
   ASN1T_Iso3833VehicleType value, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_Iso3833VehicleType (OSCTXT* pctxt, 
   ASN1T_Iso3833VehicleType* pvalue);

EXTERN int asn1JsonEnc_Iso3833VehicleType (OSCTXT *pctxt, ASN1T_Iso3833VehicleType *pvalue);

EXTERN int asn1JsonDec_Iso3833VehicleType (OSCTXT *pctxt, ASN1T_Iso3833VehicleType *pvalue);

EXTERN int asn1PrtToStrm_Iso3833VehicleType (OSCTXT *pctxt, 
   const char* name, const ASN1T_Iso3833VehicleType* pvalue);

EXTERN ASN1T_Iso3833VehicleType* 
   new_ASN1T_Iso3833VehicleType (ASN1CType& ccobj);

#endif
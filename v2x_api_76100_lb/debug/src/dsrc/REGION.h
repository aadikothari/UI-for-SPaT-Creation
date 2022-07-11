/**
 * This file was generated by the Objective Systems ASN1C Compiler
 * (http://www.obj-sys.com).
 */
#ifndef REGION_H
#define REGION_H

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
 * Header file for ASN.1 module REGION
 */
class Reg_AdvisorySpeed {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_ComputedLane {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_EventDescription {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_GenericLane {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_GeographicalPath {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_GeometricProjection {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_IntersectionGeometry {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_LaneAttributes {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_MovementState {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_NodeAttributeSetLL {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_NodeAttributeSetXY {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_NodeOffsetPointLL {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_RequestorDescription {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_RequestorType {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_RoadSegment {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_SignalControlZone {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_SignalRequest {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_SignalRequestPackage {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_SignalStatus {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_SignalStatusPackage {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_SupplementalVehicleExtensions {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_VehicleClassification {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_VerticalOffset {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_ConnectionManeuverAssist {
public:
   enum TVALUE {
      T_UNDEF_,
      T_addGrpC
   } ;
} ;

class Reg_IntersectionState {
public:
   enum TVALUE {
      T_UNDEF_,
      T_addGrpC
   } ;
} ;

class Reg_LaneDataAttribute {
public:
   enum TVALUE {
      T_UNDEF_,
      T_addGrpB
   } ;
} ;

class Reg_MovementEvent {
public:
   enum TVALUE {
      T_UNDEF_,
      T_addGrpB
   } ;
} ;

class Reg_NodeOffsetPointXY {
public:
   enum TVALUE {
      T_UNDEF_,
      T_addGrpB
   } ;
} ;

class Reg_Position3D {
public:
   enum TVALUE {
      T_UNDEF_,
      T_addGrpB,
      T_addGrpC
   } ;
} ;

class Reg_RestrictionUserType {
public:
   enum TVALUE {
      T_UNDEF_,
      T_addGrpC
   } ;
} ;

class Reg_BasicSafetyMessage {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_CommonSafetyRequest {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_EmergencyVehicleAlert {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_IntersectionCollision {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_NMEAcorrections {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_ProbeDataManagement {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_ProbeVehicleData {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_RoadSideAlert {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_RTCMcorrections {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_SignalRequestMessage {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_SignalStatusMessage {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_SPAT {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_TravelerInformation {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_PersonalSafetyMessage {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_MapData {
public:
   enum TVALUE {
      T_UNDEF_,
      T_addGrpC
   } ;
} ;

class Reg_TestMessage00 {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_TestMessage01 {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_TestMessage02 {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_TestMessage03 {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_TestMessage04 {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_TestMessage05 {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_TestMessage06 {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_TestMessage07 {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_TestMessage08 {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_TestMessage09 {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_TestMessage10 {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_TestMessage11 {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_TestMessage12 {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_TestMessage13 {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_TestMessage14 {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

class Reg_TestMessage15 {
public:
   enum TVALUE {
      T_UNDEF_
   } ;
} ;

#endif

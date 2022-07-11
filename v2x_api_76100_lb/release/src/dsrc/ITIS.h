/**
 * This file was generated by the Objective Systems ASN1C Compiler
 * (http://www.obj-sys.com).
 */
#ifndef ITIS_H
#define ITIS_H

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
 * Header file for ASN.1 module ITIS
 */
/**************************************************************/
/*                                                            */
/*  ITIScodes                                                 */
/*                                                            */
/**************************************************************/
/*
ITIScodes ::= INTEGER (0..65535)
*/
typedef OSUINT16 ASN1T_ITIScodes;

EXTERN int asn1PE_ITIScodes (OSCTXT* pctxt, ASN1T_ITIScodes value);

EXTERN int asn1PD_ITIScodes (OSCTXT* pctxt, ASN1T_ITIScodes* pvalue);

EXTERN int XmlEnc_ITIScodes (OSCTXT* pctxt, ASN1T_ITIScodes value, 
   const OSUTF8CHAR* elemName, const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_ITIScodes (OSCTXT* pctxt, ASN1T_ITIScodes* pvalue);

EXTERN int asn1JsonEnc_ITIScodes (OSCTXT *pctxt, ASN1T_ITIScodes *pvalue);

EXTERN int asn1JsonDec_ITIScodes (OSCTXT *pctxt, ASN1T_ITIScodes *pvalue);

EXTERN int asn1PrtToStrm_ITIScodes (OSCTXT *pctxt, 
   const char* name, const ASN1T_ITIScodes* pvalue);

EXTERN ASN1T_ITIScodes* new_ASN1T_ITIScodes (ASN1CType& ccobj);

/**************************************************************/
/*                                                            */
/*  VehicleGroupAffected                                      */
/*                                                            */
/**************************************************************/
/*
VehicleGroupAffected ::= ENUMERATED { all-vehicles(9217), bicycles(9218), motorcycles(9219), cars(9220), light-vehicles(9221), cars-and-light-vehicles(9222), cars-with-trailers(9223), cars-with-recreational-trailers(9224), vehicles-with-trailers(9225), heavy-vehicles(9226), trucks(9227), buses(9228), articulated-buses(9229), school-buses(9230), vehicles-with-semi-trailers(9231), vehicles-with-double-trailers(9232), high-profile-vehicles(9233), wide-vehicles(9234), long-vehicles(9235), hazardous-loads(9236), exceptional-loads(9237), abnormal-loads(9238), convoys(9239), maintenance-vehicles(9240), delivery-vehicles(9241), vehicles-with-even-numbered-license-plates(9242), vehicles-with-odd-numbered-license-plates(9243), vehicles-with-parking-permits(9244), vehicles-with-catalytic-converters(9245), vehicles-without-catalytic-converters(9246), gas-powered-vehicles(9247), diesel-powered-vehicles(9248), lPG-vehicles(9249), military-convoys(9250), military-vehicles(9251), ... }
    Classification of vehicles and types of transport

*/
struct EXTERN VehicleGroupAffected {
   enum Root {
      all_vehicles = 9217,
      bicycles = 9218,
      motorcycles = 9219,
      cars = 9220,
      light_vehicles = 9221,
      cars_and_light_vehicles = 9222,
      cars_with_trailers = 9223,
      cars_with_recreational_trailers = 9224,
      vehicles_with_trailers = 9225,
      heavy_vehicles = 9226,
      trucks = 9227,
      buses = 9228,
      articulated_buses = 9229,
      school_buses = 9230,
      vehicles_with_semi_trailers = 9231,
      vehicles_with_double_trailers = 9232,
      high_profile_vehicles = 9233,
      wide_vehicles = 9234,
      long_vehicles = 9235,
      hazardous_loads = 9236,
      exceptional_loads = 9237,
      abnormal_loads = 9238,
      convoys = 9239,
      maintenance_vehicles = 9240,
      delivery_vehicles = 9241,
      vehicles_with_even_numbered_license_plates = 9242,
      vehicles_with_odd_numbered_license_plates = 9243,
      vehicles_with_parking_permits = 9244,
      vehicles_with_catalytic_converters = 9245,
      vehicles_without_catalytic_converters = 9246,
      gas_powered_vehicles = 9247,
      diesel_powered_vehicles = 9248,
      lPG_vehicles = 9249,
      military_convoys = 9250,
      military_vehicles = 9251
   } ;
} ;

typedef OSUINT32 ASN1T_VehicleGroupAffected;

EXTERN int asn1PE_VehicleGroupAffected (OSCTXT* pctxt, ASN1T_VehicleGroupAffected value);

EXTERN int asn1PD_VehicleGroupAffected (OSCTXT* pctxt, ASN1T_VehicleGroupAffected* pvalue);

EXTERN int XmlEnc_VehicleGroupAffected (OSCTXT* pctxt, 
   ASN1T_VehicleGroupAffected value, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_VehicleGroupAffected (OSCTXT* pctxt, 
   ASN1T_VehicleGroupAffected* pvalue);

EXTERN int asn1JsonEnc_VehicleGroupAffected (OSCTXT *pctxt, ASN1T_VehicleGroupAffected *pvalue);

EXTERN int asn1JsonDec_VehicleGroupAffected (OSCTXT *pctxt, ASN1T_VehicleGroupAffected *pvalue);

EXTERN int asn1PrtToStrm_VehicleGroupAffected (OSCTXT *pctxt, 
   const char* name, const ASN1T_VehicleGroupAffected* pvalue);

EXTERN ASN1T_VehicleGroupAffected* 
   new_ASN1T_VehicleGroupAffected (ASN1CType& ccobj);

EXTERN extern const OSEnumItem ASN1T_VehicleGroupAffected_ENUMTAB[];
#define ASN1T_VehicleGroupAffected_ENUMTABSIZE 35

EXTERN const OSUTF8CHAR* ASN1T_VehicleGroupAffected_ToString (OSINT32 value);

EXTERN int ASN1T_VehicleGroupAffected_ToEnum (OSCTXT* pctxt,
   const OSUTF8CHAR* value, ASN1T_VehicleGroupAffected* pvalue);

EXTERN int ASN1T_VehicleGroupAffected_ToEnum2 (OSCTXT* pctxt,
   const OSUTF8CHAR* value, OSSIZE valueLen, 
      ASN1T_VehicleGroupAffected* pvalue);

/**************************************************************/
/*                                                            */
/*  IncidentResponseEquipment                                 */
/*                                                            */
/**************************************************************/
/*
IncidentResponseEquipment ::= ENUMERATED { ground-fire-suppression(9985), heavy-ground-equipment(9986), aircraft(9988), marine-equipment(9989), support-equipment(9990), medical-rescue-unit(9991), other(9993), ground-fire-suppression-other(9994), engine(9995), truck-or-aerial(9996), quint(9997), tanker-pumper-combination(9998), brush-truck(10000), aircraft-rescue-firefighting(10001), heavy-ground-equipment-other(10004), dozer-or-plow(10005), tractor(10006), tanker-or-tender(10008), aircraft-other(10024), aircraft-fixed-wing-tanker(10025), helitanker(10026), helicopter(10027), marine-equipment-other(10034), fire-boat-with-pump(10035), boat-no-pump(10036), support-apparatus-other(10044), breathing-apparatus-support(10045), light-and-air-unit(10046), medical-rescue-unit-other(10054), rescue-unit(10055), urban-search-rescue-unit(10056), high-angle-rescue(10057), crash-fire-rescue(10058), bLS-unit(10059), aLS-unit(10060), mobile-command-post(10075), chief-officer-car(10076), hAZMAT-unit(10077), type-i-hand-crew(10078), type-ii-hand-crew(10079), privately-owned-vehicle(10083), other-apparatus-resource(10084), ambulance(10085), bomb-squad-van(10086), combine-harvester(10087), construction-vehicle(10088), farm-tractor(10089), grass-cutting-machines(10090), hAZMAT-containment-tow(10091), heavy-tow(10092), hedge-cutting-machines(10093), light-tow(10094), mobile-crane(10095), refuse-collection-vehicle(10096), resurfacing-vehicle(10097), road-sweeper(10098), roadside-litter-collection-crews(10099), salvage-vehicle(10100), sand-truck(10101), snowplow(10102), steam-roller(10103), swat-team-van(10104), track-laying-vehicle(10105), unknown-vehicle(10106), white-lining-vehicle(10107), dump-truck(10108), supervisor-vehicle(10109), snow-blower(10110), rotary-snow-blower(10111), road-grader(10112), steam-truck(10113), flatbed-tow(10114), ... }
*/
struct EXTERN IncidentResponseEquipment {
   enum Root {
      ground_fire_suppression = 9985,
      heavy_ground_equipment = 9986,
      aircraft = 9988,
      marine_equipment = 9989,
      support_equipment = 9990,
      medical_rescue_unit = 9991,
      other = 9993,
      ground_fire_suppression_other = 9994,
      engine = 9995,
      truck_or_aerial = 9996,
      quint = 9997,
      tanker_pumper_combination = 9998,
      brush_truck = 10000,
      aircraft_rescue_firefighting = 10001,
      heavy_ground_equipment_other = 10004,
      dozer_or_plow = 10005,
      tractor = 10006,
      tanker_or_tender = 10008,
      aircraft_other = 10024,
      aircraft_fixed_wing_tanker = 10025,
      helitanker = 10026,
      helicopter = 10027,
      marine_equipment_other = 10034,
      fire_boat_with_pump = 10035,
      boat_no_pump = 10036,
      support_apparatus_other = 10044,
      breathing_apparatus_support = 10045,
      light_and_air_unit = 10046,
      medical_rescue_unit_other = 10054,
      rescue_unit = 10055,
      urban_search_rescue_unit = 10056,
      high_angle_rescue = 10057,
      crash_fire_rescue = 10058,
      bLS_unit = 10059,
      aLS_unit = 10060,
      mobile_command_post = 10075,
      chief_officer_car = 10076,
      hAZMAT_unit = 10077,
      type_i_hand_crew = 10078,
      type_ii_hand_crew = 10079,
      privately_owned_vehicle = 10083,
      other_apparatus_resource = 10084,
      ambulance = 10085,
      bomb_squad_van = 10086,
      combine_harvester = 10087,
      construction_vehicle = 10088,
      farm_tractor = 10089,
      grass_cutting_machines = 10090,
      hAZMAT_containment_tow = 10091,
      heavy_tow = 10092,
      hedge_cutting_machines = 10093,
      light_tow = 10094,
      mobile_crane = 10095,
      refuse_collection_vehicle = 10096,
      resurfacing_vehicle = 10097,
      road_sweeper = 10098,
      roadside_litter_collection_crews = 10099,
      salvage_vehicle = 10100,
      sand_truck = 10101,
      snowplow = 10102,
      steam_roller = 10103,
      swat_team_van = 10104,
      track_laying_vehicle = 10105,
      unknown_vehicle = 10106,
      white_lining_vehicle = 10107,
      dump_truck = 10108,
      supervisor_vehicle = 10109,
      snow_blower = 10110,
      rotary_snow_blower = 10111,
      road_grader = 10112,
      steam_truck = 10113,
      flatbed_tow = 10114
   } ;
} ;

typedef OSUINT32 ASN1T_IncidentResponseEquipment;

EXTERN int asn1PE_IncidentResponseEquipment (OSCTXT* pctxt, ASN1T_IncidentResponseEquipment value);

EXTERN int asn1PD_IncidentResponseEquipment (OSCTXT* pctxt, ASN1T_IncidentResponseEquipment* pvalue);

EXTERN int XmlEnc_IncidentResponseEquipment (OSCTXT* pctxt, 
   ASN1T_IncidentResponseEquipment value, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_IncidentResponseEquipment (OSCTXT* pctxt, 
   ASN1T_IncidentResponseEquipment* pvalue);

EXTERN int asn1JsonEnc_IncidentResponseEquipment (OSCTXT *pctxt, ASN1T_IncidentResponseEquipment *pvalue);

EXTERN int asn1JsonDec_IncidentResponseEquipment (OSCTXT *pctxt, ASN1T_IncidentResponseEquipment *pvalue);

EXTERN int asn1PrtToStrm_IncidentResponseEquipment (OSCTXT *pctxt, 
   const char* name, const ASN1T_IncidentResponseEquipment* pvalue);

EXTERN ASN1T_IncidentResponseEquipment* 
   new_ASN1T_IncidentResponseEquipment (ASN1CType& ccobj);

EXTERN extern const OSEnumItem ASN1T_IncidentResponseEquipment_ENUMTAB[];
#define ASN1T_IncidentResponseEquipment_ENUMTABSIZE 72

EXTERN const OSUTF8CHAR* ASN1T_IncidentResponseEquipment_ToString (OSINT32 value);

EXTERN int ASN1T_IncidentResponseEquipment_ToEnum (OSCTXT* pctxt,
   const OSUTF8CHAR* value, ASN1T_IncidentResponseEquipment* pvalue);

EXTERN int ASN1T_IncidentResponseEquipment_ToEnum2 (OSCTXT* pctxt,
   const OSUTF8CHAR* value, OSSIZE valueLen, 
      ASN1T_IncidentResponseEquipment* pvalue);

/**************************************************************/
/*                                                            */
/*  ResponderGroupAffected                                    */
/*                                                            */
/**************************************************************/
/*
ResponderGroupAffected ::= ENUMERATED { emergency-vehicle-units(9729), federal-law-enforcement-units(9730), state-police-units(9731), county-police-units(9732), local-police-units(9733), ambulance-units(9734), rescue-units(9735), fire-units(9736), hAZMAT-units(9737), light-tow-unit(9738), heavy-tow-unit(9739), freeway-service-patrols(9740), transportation-response-units(9741), private-contractor-response-units(9742), ... }
    These groups are used in coordinated response and staging area information
    (rather than typically consumer related)

*/
struct EXTERN ResponderGroupAffected {
   enum Root {
      emergency_vehicle_units = 9729,
      federal_law_enforcement_units = 9730,
      state_police_units = 9731,
      county_police_units = 9732,
      local_police_units = 9733,
      ambulance_units = 9734,
      rescue_units = 9735,
      fire_units = 9736,
      hAZMAT_units = 9737,
      light_tow_unit = 9738,
      heavy_tow_unit = 9739,
      freeway_service_patrols = 9740,
      transportation_response_units = 9741,
      private_contractor_response_units = 9742
   } ;
} ;

typedef OSUINT32 ASN1T_ResponderGroupAffected;

EXTERN int asn1PE_ResponderGroupAffected (OSCTXT* pctxt, ASN1T_ResponderGroupAffected value);

EXTERN int asn1PD_ResponderGroupAffected (OSCTXT* pctxt, ASN1T_ResponderGroupAffected* pvalue);

EXTERN int XmlEnc_ResponderGroupAffected (OSCTXT* pctxt, 
   ASN1T_ResponderGroupAffected value, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_ResponderGroupAffected (OSCTXT* pctxt, 
   ASN1T_ResponderGroupAffected* pvalue);

EXTERN int asn1JsonEnc_ResponderGroupAffected (OSCTXT *pctxt, ASN1T_ResponderGroupAffected *pvalue);

EXTERN int asn1JsonDec_ResponderGroupAffected (OSCTXT *pctxt, ASN1T_ResponderGroupAffected *pvalue);

EXTERN int asn1PrtToStrm_ResponderGroupAffected (OSCTXT *pctxt, 
   const char* name, const ASN1T_ResponderGroupAffected* pvalue);

EXTERN ASN1T_ResponderGroupAffected* 
   new_ASN1T_ResponderGroupAffected (ASN1CType& ccobj);

EXTERN extern const OSEnumItem ASN1T_ResponderGroupAffected_ENUMTAB[];
#define ASN1T_ResponderGroupAffected_ENUMTABSIZE 14

EXTERN const OSUTF8CHAR* ASN1T_ResponderGroupAffected_ToString (OSINT32 value);

EXTERN int ASN1T_ResponderGroupAffected_ToEnum (OSCTXT* pctxt,
   const OSUTF8CHAR* value, ASN1T_ResponderGroupAffected* pvalue);

EXTERN int ASN1T_ResponderGroupAffected_ToEnum2 (OSCTXT* pctxt,
   const OSUTF8CHAR* value, OSSIZE valueLen, 
      ASN1T_ResponderGroupAffected* pvalue);

/**************************************************************/
/*                                                            */
/*  GenericLocations                                          */
/*                                                            */
/**************************************************************/
/*
GenericLocations ::= ENUMERATED { on-bridges(7937), in-tunnels(7938), entering-or-leaving-tunnels(7939), on-ramps(7940), in-road-construction-area(7941), around-a-curve(7942), on-minor-roads(7943), in-the-opposing-lanes(7944), adjacent-to-roadway(7945), on-bend(7946), entire-intersection(7947), in-the-median(7948), moved-to-side-of-road(7949), moved-to-shoulder(7950), on-the-roadway(7951), in-shaded-areas(7952), in-low-lying-areas(7953), in-the-downtown-area(7954), in-the-inner-city-area(7955), in-parts(7956), in-some-places(7957), in-the-ditch(7958), in-the-valley(7959), on-hill-top(7960), near-the-foothills(7961), at-high-altitudes(7962), near-the-lake(7963), near-the-shore(7964), over-the-crest-of-a-hill(7965), other-than-on-the-roadway(7966), near-the-beach(7967), near-beach-access-point(7968), lower-level(7969), upper-level(7970), airport(7971), concourse(7972), gate(7973), baggage-claim(7974), customs-point(7975), station(7976), platform(7977), dock(7978), depot(7979), ev-charging-point(7980), information-welcome-point(7981), at-rest-area(7982), at-service-area(7983), at-weigh-station(7984), picnic-areas(7985), rest-area(7986), service-stations(7987), toilets(7988), on-the-right(7989), on-the-left(7990), in-the-center(7991), in-the-opposite-direction(7992), cross-traffic(7993), northbound-traffic(7994), eastbound-traffic(7995), southbound-traffic(7996), westbound-traffic(7997), north(7998), south(7999), east(8000), west(8001), northeast(8002), northwest(8003), southeast(8004), southwest(8005), mountain-pass(8006), reservation-center(8007), nearby-basin(8008), on-tracks(8009), dip(8010), traffic-circle(8011), park-and-ride-lot(8012), to(8014), by(8015), through(8016), area-of(8017), under(8018), over(8019), from(8020), approaching(8021), entering-at(8022), exiting-at(8023), across-tracks(8024), in-street(8025), on-curve(8026), shoulder(8027), crossover(8028), cross-road(8029), side-road(8030), bus-stop(8031), intersection(8032), roadside-park(8033), ... }
*/
struct EXTERN GenericLocations {
   enum Root {
      on_bridges = 7937,
      in_tunnels = 7938,
      entering_or_leaving_tunnels = 7939,
      on_ramps = 7940,
      in_road_construction_area = 7941,
      around_a_curve = 7942,
      on_minor_roads = 7943,
      in_the_opposing_lanes = 7944,
      adjacent_to_roadway = 7945,
      on_bend = 7946,
      entire_intersection = 7947,
      in_the_median = 7948,
      moved_to_side_of_road = 7949,
      moved_to_shoulder = 7950,
      on_the_roadway = 7951,
      in_shaded_areas = 7952,
      in_low_lying_areas = 7953,
      in_the_downtown_area = 7954,
      in_the_inner_city_area = 7955,
      in_parts = 7956,
      in_some_places = 7957,
      in_the_ditch = 7958,
      in_the_valley = 7959,
      on_hill_top = 7960,
      near_the_foothills = 7961,
      at_high_altitudes = 7962,
      near_the_lake = 7963,
      near_the_shore = 7964,
      over_the_crest_of_a_hill = 7965,
      other_than_on_the_roadway = 7966,
      near_the_beach = 7967,
      near_beach_access_point = 7968,
      lower_level = 7969,
      upper_level = 7970,
      airport = 7971,
      concourse = 7972,
      gate = 7973,
      baggage_claim = 7974,
      customs_point = 7975,
      station = 7976,
      platform = 7977,
      dock = 7978,
      depot = 7979,
      ev_charging_point = 7980,
      information_welcome_point = 7981,
      at_rest_area = 7982,
      at_service_area = 7983,
      at_weigh_station = 7984,
      picnic_areas = 7985,
      rest_area = 7986,
      service_stations = 7987,
      toilets = 7988,
      on_the_right = 7989,
      on_the_left = 7990,
      in_the_center = 7991,
      in_the_opposite_direction = 7992,
      cross_traffic = 7993,
      northbound_traffic = 7994,
      eastbound_traffic = 7995,
      southbound_traffic = 7996,
      westbound_traffic = 7997,
      north = 7998,
      south = 7999,
      east = 8000,
      west = 8001,
      northeast = 8002,
      northwest = 8003,
      southeast = 8004,
      southwest = 8005,
      mountain_pass = 8006,
      reservation_center = 8007,
      nearby_basin = 8008,
      on_tracks = 8009,
      dip = 8010,
      traffic_circle = 8011,
      park_and_ride_lot = 8012,
      to = 8014,
      by = 8015,
      through = 8016,
      area_of = 8017,
      under = 8018,
      over = 8019,
      from = 8020,
      approaching = 8021,
      entering_at = 8022,
      exiting_at = 8023,
      across_tracks = 8024,
      in_street = 8025,
      on_curve = 8026,
      shoulder = 8027,
      crossover = 8028,
      cross_road = 8029,
      side_road = 8030,
      bus_stop = 8031,
      intersection = 8032,
      roadside_park = 8033
   } ;
} ;

typedef OSUINT32 ASN1T_GenericLocations;

EXTERN int asn1PE_GenericLocations (OSCTXT* pctxt, ASN1T_GenericLocations value);

EXTERN int asn1PD_GenericLocations (OSCTXT* pctxt, ASN1T_GenericLocations* pvalue);

EXTERN int XmlEnc_GenericLocations (OSCTXT* pctxt, 
   ASN1T_GenericLocations value, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_GenericLocations (OSCTXT* pctxt, 
   ASN1T_GenericLocations* pvalue);

EXTERN int asn1JsonEnc_GenericLocations (OSCTXT *pctxt, ASN1T_GenericLocations *pvalue);

EXTERN int asn1JsonDec_GenericLocations (OSCTXT *pctxt, ASN1T_GenericLocations *pvalue);

EXTERN int asn1PrtToStrm_GenericLocations (OSCTXT *pctxt, 
   const char* name, const ASN1T_GenericLocations* pvalue);

EXTERN ASN1T_GenericLocations* new_ASN1T_GenericLocations (ASN1CType& ccobj);

EXTERN extern const OSEnumItem ASN1T_GenericLocations_ENUMTAB[];
#define ASN1T_GenericLocations_ENUMTABSIZE 96

EXTERN const OSUTF8CHAR* ASN1T_GenericLocations_ToString (OSINT32 value);

EXTERN int ASN1T_GenericLocations_ToEnum (OSCTXT* pctxt,
   const OSUTF8CHAR* value, ASN1T_GenericLocations* pvalue);

EXTERN int ASN1T_GenericLocations_ToEnum2 (OSCTXT* pctxt,
   const OSUTF8CHAR* value, OSSIZE valueLen, ASN1T_GenericLocations* pvalue);

/**************************************************************/
/*                                                            */
/*  ITIStext                                                  */
/*                                                            */
/**************************************************************/
/*
ITIStext ::= IA5String (SIZE (1..500))
*/
typedef const char* ASN1T_ITIStext;

EXTERN int asn1PE_ITIStext (OSCTXT* pctxt, ASN1T_ITIStext value);

EXTERN int asn1PD_ITIStext (OSCTXT* pctxt, ASN1T_ITIStext* pvalue);

EXTERN int XmlEnc_ITIStext (OSCTXT* pctxt, ASN1T_ITIStext value, 
   const OSUTF8CHAR* elemName, const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_ITIStext (OSCTXT* pctxt, ASN1T_ITIStext* pvalue);

EXTERN int asn1JsonEnc_ITIStext (OSCTXT *pctxt, ASN1T_ITIStext value);

EXTERN int asn1JsonDec_ITIStext (OSCTXT *pctxt, ASN1T_ITIStext *pvalue);

EXTERN int asn1PrtToStrm_ITIStext (OSCTXT *pctxt, 
   const char* name, const ASN1T_ITIStext pvalue);

EXTERN void asn1Free_ITIStext (OSCTXT *pctxt, ASN1T_ITIStext pvalue);

/**************************************************************/
/*                                                            */
/*  ITIScodesAndText_element_item                             */
/*                                                            */
/**************************************************************/
/*
Type was extracted from 'ITIScodesAndText'
*/
/* Choice tag constants */

#define T_ITIScodesAndText_element_item_itis 1
#define T_ITIScodesAndText_element_item_text 2

struct EXTERN ASN1T_ITIScodesAndText_element_item {
   OSINT32 t;
   union {
      /* t = 1 */
      ASN1T_ITIScodes itis;
      /* t = 2 */
      ASN1T_ITIStext text;
   } u;
   ASN1T_ITIScodesAndText_element_item () { t = 0; OSCRTLMEMSET (&u, 0, sizeof(u)); }
} ;

EXTERN int asn1PE_ITIScodesAndText_element_item (OSCTXT* pctxt, ASN1T_ITIScodesAndText_element_item* pvalue);

EXTERN int asn1PD_ITIScodesAndText_element_item (OSCTXT* pctxt, ASN1T_ITIScodesAndText_element_item* pvalue);

EXTERN int XmlEnc_ITIScodesAndText_element_item (OSCTXT* pctxt, 
   ASN1T_ITIScodesAndText_element_item* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_ITIScodesAndText_element_item (OSCTXT* pctxt, 
   ASN1T_ITIScodesAndText_element_item* pvalue);

EXTERN int asn1JsonEnc_ITIScodesAndText_element_item (OSCTXT *pctxt, ASN1T_ITIScodesAndText_element_item *pvalue);

EXTERN int asn1JsonDec_ITIScodesAndText_element_item (OSCTXT *pctxt, ASN1T_ITIScodesAndText_element_item *pvalue);

EXTERN int asn1PrtToStrm_ITIScodesAndText_element_item (OSCTXT *pctxt, 
   const char* name, const ASN1T_ITIScodesAndText_element_item* pvalue);

EXTERN ASN1T_ITIScodesAndText_element_item* 
   new_ASN1T_ITIScodesAndText_element_item (ASN1CType& ccobj);

EXTERN int asn1Init_ITIScodesAndText_element_item (
   ASN1T_ITIScodesAndText_element_item* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_ITIScodesAndText_element_item (OSCTXT *pctxt, 
   ASN1T_ITIScodesAndText_element_item* pvalue);

/**************************************************************/
/*                                                            */
/*  ITIScodesAndText_element                                  */
/*                                                            */
/**************************************************************/
/*
Type was extracted from 'ITIScodesAndText'
*/
struct EXTERN ASN1T_ITIScodesAndText_element {
   ASN1T_ITIScodesAndText_element_item item;
} ;

EXTERN int asn1PE_ITIScodesAndText_element (OSCTXT* pctxt, ASN1T_ITIScodesAndText_element* pvalue);

EXTERN int asn1PD_ITIScodesAndText_element (OSCTXT* pctxt, ASN1T_ITIScodesAndText_element* pvalue);

EXTERN int XmlEnc_ITIScodesAndText_element (OSCTXT* pctxt, 
   ASN1T_ITIScodesAndText_element* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_ITIScodesAndText_element (OSCTXT* pctxt, 
   ASN1T_ITIScodesAndText_element* pvalue);

EXTERN int asn1JsonEnc_ITIScodesAndText_element (OSCTXT *pctxt, ASN1T_ITIScodesAndText_element *pvalue);

EXTERN int asn1JsonDec_ITIScodesAndText_element (OSCTXT *pctxt, ASN1T_ITIScodesAndText_element *pvalue);

EXTERN int asn1PrtToStrm_ITIScodesAndText_element (OSCTXT *pctxt, 
   const char* name, const ASN1T_ITIScodesAndText_element* pvalue);

EXTERN ASN1T_ITIScodesAndText_element* 
   new_ASN1T_ITIScodesAndText_element (ASN1CType& ccobj);

EXTERN int asn1Init_ITIScodesAndText_element (ASN1T_ITIScodesAndText_element* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_ITIScodesAndText_element (OSCTXT *pctxt, 
   ASN1T_ITIScodesAndText_element* pvalue);

/**************************************************************/
/*                                                            */
/*  ITIScodesAndText                                          */
/*                                                            */
/**************************************************************/
/*
ITIScodesAndText ::= SEQUENCE (SIZE (1..100)) OF SEQUENCE {
   item [0] EXPLICIT CHOICE {
      itis [0] ITIScodes,
      text [1] ITIStext
   } -- # UNTAGGED
}
*/
/* List of ASN1T_ITIScodesAndText_element */
typedef ASN1TSeqOfList ASN1T_ITIScodesAndText;

class EXTERN ASN1C_ITIScodesAndText :
public ASN1CSeqOfList
{
protected:
   ASN1T_ITIScodesAndText& msgData;
public:
   /**
    * Control class: ASN1C_ITIScodesAndText
    * Data class:    ASN1T_ITIScodesAndText
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
   ASN1C_ITIScodesAndText (ASN1T_ITIScodesAndText& data);

   /**
    * Control class: ASN1C_ITIScodesAndText<br/>
    * Data class: ASN1T_ITIScodesAndText<br/>
    *
    * Constructs an instance of the control class given an instance
    * of an encode or decode buffer and an instance of
    * the data class.
    *
    * @param msgBuf Reference to an instance of an encode or
    *                  decode buffer.
    * @param data   Reference to an instance of the data class.
    */
   ASN1C_ITIScodesAndText (OSRTMessageBufferIF& msgBuf
      , ASN1T_ITIScodesAndText& data);

   /**
    * Control class: ASN1C_ITIScodesAndText<br/>
    * Data class: ASN1T_ITIScodesAndText<br/>
    *
    * Constructs an instance of the control class given an instance of
    * an \c ASN1CType control class and an instance of the
    * given data class.
    *
    * @param ccobj  Reference to a control class instance.
    * @param data   Reference to an instance of the data class. */
   ASN1C_ITIScodesAndText (ASN1CType& ccobj, ASN1T_ITIScodesAndText& data);

   virtual ~ASN1C_ITIScodesAndText () {}

   /**
    * Data class: ASN1T_ITIScodesAndText_element<br/>
    *
    * Appends an instance of the data class to the end of the list.
    *
    * @param  elem     Pointer to an instance of the data class.
    */
   void Append (ASN1T_ITIScodesAndText_element* elem);

   void freeMemory();
   /**
    * Data class: ASN1T_ITIScodesAndText_element.<br/>
    *
    * Creates a new instance of the data class.
    *
    * @return    Pointer to the new instance of the data class.
    */
   ASN1T_ITIScodesAndText_element* NewElement ();

   /**
    * Data class: ASN1T_ITIScodesAndText_element.<br/>
    *
    * Creates a new instance of the data class and appends it
    * to the end of the list.
    *
    * @return    Pointer to a new instance of the data class.
    */
   ASN1T_ITIScodesAndText_element* AppendNewElement ();

private:
   ASN1C_ITIScodesAndText& operator= (const ASN1C_ITIScodesAndText&) {return *this;}
} ;

EXTERN int asn1PE_ITIScodesAndText (OSCTXT* pctxt, ASN1T_ITIScodesAndText* pvalue);

EXTERN int asn1PD_ITIScodesAndText (OSCTXT* pctxt, ASN1T_ITIScodesAndText* pvalue);

EXTERN int XmlEnc_ITIScodesAndText (OSCTXT* pctxt, 
   ASN1T_ITIScodesAndText* pvalue, const OSUTF8CHAR* elemName, 
   const OSUTF8CHAR* nsPrefix);

EXTERN int XmlDec_ITIScodesAndText (OSCTXT* pctxt, 
   ASN1T_ITIScodesAndText* pvalue);

EXTERN int asn1JsonEnc_ITIScodesAndText (OSCTXT *pctxt, ASN1T_ITIScodesAndText *pvalue);

EXTERN int asn1JsonDec_ITIScodesAndText (OSCTXT *pctxt, ASN1T_ITIScodesAndText *pvalue);

EXTERN int asn1PrtToStrm_ITIScodesAndText (OSCTXT *pctxt, 
   const char* name, const ASN1T_ITIScodesAndText* pvalue);

EXTERN int asn1Init_ITIScodesAndText (ASN1T_ITIScodesAndText* pvalue, 
   OSBOOL free = FALSE, OSCTXT *pctxt = 0);

EXTERN void asn1Free_ITIScodesAndText (OSCTXT *pctxt, ASN1T_ITIScodesAndText* pvalue);

#endif

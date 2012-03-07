/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSMutableArray, NSData, NSString;

@interface GEORoute : PBCodable {
	int _type;	// 4 = 0x4
	NSData *_latLngVertices;	// 8 = 0x8
	XXStruct_19EQxD _streetSegmentIDs;	// 12 = 0xc
	NSMutableArray *_steps;	// 24 = 0x18
	NSString *_name;	// 28 = 0x1c
	NSString *_phoneticName;	// 32 = 0x20
	NSString *_transitCost;	// 36 = 0x24
	BOOL _hasDepartureTimestamp;	// 40 = 0x28
	double _departureTimestamp;	// 44 = 0x2c
	BOOL _hasDepartureTimezoneOffset;	// 52 = 0x34
	int _departureTimezoneOffset;	// 56 = 0x38
	BOOL _hasArrivalTimestamp;	// 60 = 0x3c
	double _arrivalTimestamp;	// 64 = 0x40
	BOOL _hasArrivalTimezoneOffset;	// 72 = 0x48
	int _arrivalTimezoneOffset;	// 76 = 0x4c
	BOOL _hasDistance;	// 80 = 0x50
	int _distance;	// 84 = 0x54
	BOOL _hasExpectedTime;	// 88 = 0x58
	int _expectedTime;	// 92 = 0x5c
	BOOL _hasDelayTime;	// 96 = 0x60
	int _delayTime;	// 100 = 0x64
	NSData *_unpackedLatLngVertices;	// 104 = 0x68
}
@property(assign, nonatomic) double arrivalTimestamp;	// G=0x31cf2095; S=0x31cf1149; @synthesize=_arrivalTimestamp
@property(assign, nonatomic) int arrivalTimezoneOffset;	// G=0x31cf20cd; S=0x31cf1175; @synthesize=_arrivalTimezoneOffset
@property(readonly, assign, getter=isComplete) BOOL complete;	// G=0x31cf8925; 
@property(assign, nonatomic) int delayTime;	// G=0x31cf215d; S=0x31cf11e1; @synthesize=_delayTime
@property(assign, nonatomic) double departureTimestamp;	// G=0x31cf202d; S=0x31cf10f9; @synthesize=_departureTimestamp
@property(assign, nonatomic) int departureTimezoneOffset;	// G=0x31cf2065; S=0x31cf1125; @synthesize=_departureTimezoneOffset
@property(assign, nonatomic) int distance;	// G=0x31cf20fd; S=0x31cf1199; @synthesize=_distance
@property(assign, nonatomic) int expectedTime;	// G=0x31cf212d; S=0x31cf11bd; @synthesize=_expectedTime
@property(assign, nonatomic) BOOL hasArrivalTimestamp;	// G=0x31cf2075; S=0x31cf2085; @synthesize=_hasArrivalTimestamp
@property(assign, nonatomic) BOOL hasArrivalTimezoneOffset;	// G=0x31cf20ad; S=0x31cf20bd; @synthesize=_hasArrivalTimezoneOffset
@property(assign, nonatomic) BOOL hasDelayTime;	// G=0x31cf213d; S=0x31cf214d; @synthesize=_hasDelayTime
@property(assign, nonatomic) BOOL hasDepartureTimestamp;	// G=0x31cf200d; S=0x31cf201d; @synthesize=_hasDepartureTimestamp
@property(assign, nonatomic) BOOL hasDepartureTimezoneOffset;	// G=0x31cf2045; S=0x31cf2055; @synthesize=_hasDepartureTimezoneOffset
@property(assign, nonatomic) BOOL hasDistance;	// G=0x31cf20dd; S=0x31cf20ed; @synthesize=_hasDistance
@property(assign, nonatomic) BOOL hasExpectedTime;	// G=0x31cf210d; S=0x31cf211d; @synthesize=_hasExpectedTime
@property(readonly, assign, nonatomic) BOOL hasLatLngVertices;	// G=0x31cf0ee5; 
@property(readonly, assign, nonatomic) BOOL hasName;	// G=0x31cf10b1; 
@property(readonly, assign, nonatomic) BOOL hasPhoneticName;	// G=0x31cf10c9; 
@property(readonly, assign, nonatomic) BOOL hasTransitCost;	// G=0x31cf10e1; 
@property(readonly, assign, nonatomic) BOOL hasUnpackedLatLngVertices;	// G=0x31cf1205; 
@property(retain, nonatomic) NSData *latLngVertices;	// G=0x31cf1f09; S=0x31cf1f19; @synthesize=_latLngVertices
@property(retain, nonatomic) NSString *name;	// G=0x31cf1f71; S=0x31cf1f81; @synthesize=_name
@property(retain, nonatomic) NSString *phoneticName;	// G=0x31cf1fa5; S=0x31cf1fb5; @synthesize=_phoneticName
@property(readonly, assign) unsigned pointCount;	// G=0x31cf88fd; 
@property(readonly, assign) XXStruct_zYrK5D *points;	// G=0x31cf88dd; 
@property(retain, nonatomic) NSMutableArray *steps;	// G=0x31cf1f3d; S=0x31cf1f4d; @synthesize=_steps
@property(readonly, assign, nonatomic) long long *streetSegmentIDs;	// G=0x31cf0f11; 
@property(readonly, assign, nonatomic) unsigned streetSegmentIDsCount;	// G=0x31cf0efd; 
@property(retain, nonatomic) NSString *transitCost;	// G=0x31cf1fd9; S=0x31cf1fe9; @synthesize=_transitCost
@property(assign, nonatomic) int type;	// G=0x31cf1ee9; S=0x31cf1ef9; @synthesize=_type
@property(retain, nonatomic) NSData *unpackedLatLngVertices;	// G=0x31cf216d; S=0x31cf217d; @synthesize=_unpackedLatLngVertices
- (void)addStep:(id)step;	// 0x31cf100d
- (void)addStreetSegmentID:(long long)anId;	// 0x31cf0f35
// declared property getter: - (double)arrivalTimestamp;	// 0x31cf2095
// declared property getter: - (int)arrivalTimezoneOffset;	// 0x31cf20cd
- (void)clearStreetSegmentIDs;	// 0x31cf0f21
- (void)dealloc;	// 0x31cf0e2d
- (id)debugDescription;	// 0x31cf8ce1
// declared property getter: - (int)delayTime;	// 0x31cf215d
// declared property getter: - (double)departureTimestamp;	// 0x31cf202d
// declared property getter: - (int)departureTimezoneOffset;	// 0x31cf2065
- (id)description;	// 0x31cf121d
- (id)description;	// 0x31cf8c71
- (id)dictionaryRepresentation;	// 0x31cf128d
// declared property getter: - (int)distance;	// 0x31cf20fd
- (void)ensureDataAlignment;	// 0x31cf8b9d
// declared property getter: - (int)expectedTime;	// 0x31cf212d
// declared property getter: - (BOOL)hasArrivalTimestamp;	// 0x31cf2075
// declared property getter: - (BOOL)hasArrivalTimezoneOffset;	// 0x31cf20ad
// declared property getter: - (BOOL)hasDelayTime;	// 0x31cf213d
// declared property getter: - (BOOL)hasDepartureTimestamp;	// 0x31cf200d
// declared property getter: - (BOOL)hasDepartureTimezoneOffset;	// 0x31cf2045
// declared property getter: - (BOOL)hasDistance;	// 0x31cf20dd
// declared property getter: - (BOOL)hasExpectedTime;	// 0x31cf210d
// declared property getter: - (BOOL)hasLatLngVertices;	// 0x31cf0ee5
// declared property getter: - (BOOL)hasName;	// 0x31cf10b1
// declared property getter: - (BOOL)hasPhoneticName;	// 0x31cf10c9
// declared property getter: - (BOOL)hasTransitCost;	// 0x31cf10e1
// declared property getter: - (BOOL)hasUnpackedLatLngVertices;	// 0x31cf1205
// declared property getter: - (BOOL)isComplete;	// 0x31cf8925
// declared property getter: - (id)latLngVertices;	// 0x31cf1f09
// declared property getter: - (id)name;	// 0x31cf1f71
// declared property getter: - (id)phoneticName;	// 0x31cf1fa5
// declared property getter: - (unsigned)pointCount;	// 0x31cf88fd
// declared property getter: - (XXStruct_zYrK5D *)points;	// 0x31cf88dd
- (BOOL)readFrom:(id)from;	// 0x31cf172d
// declared property setter: - (void)setArrivalTimestamp:(double)timestamp;	// 0x31cf1149
// declared property setter: - (void)setArrivalTimezoneOffset:(int)offset;	// 0x31cf1175
// declared property setter: - (void)setDelayTime:(int)time;	// 0x31cf11e1
// declared property setter: - (void)setDepartureTimestamp:(double)timestamp;	// 0x31cf10f9
// declared property setter: - (void)setDepartureTimezoneOffset:(int)offset;	// 0x31cf1125
// declared property setter: - (void)setDistance:(int)distance;	// 0x31cf1199
// declared property setter: - (void)setExpectedTime:(int)time;	// 0x31cf11bd
// declared property setter: - (void)setHasArrivalTimestamp:(BOOL)timestamp;	// 0x31cf2085
// declared property setter: - (void)setHasArrivalTimezoneOffset:(BOOL)offset;	// 0x31cf20bd
// declared property setter: - (void)setHasDelayTime:(BOOL)time;	// 0x31cf214d
// declared property setter: - (void)setHasDepartureTimestamp:(BOOL)timestamp;	// 0x31cf201d
// declared property setter: - (void)setHasDepartureTimezoneOffset:(BOOL)offset;	// 0x31cf2055
// declared property setter: - (void)setHasDistance:(BOOL)distance;	// 0x31cf20ed
// declared property setter: - (void)setHasExpectedTime:(BOOL)time;	// 0x31cf211d
// declared property setter: - (void)setLatLngVertices:(id)vertices;	// 0x31cf1f19
// declared property setter: - (void)setName:(id)name;	// 0x31cf1f81
// declared property setter: - (void)setPhoneticName:(id)name;	// 0x31cf1fb5
// declared property setter: - (void)setSteps:(id)steps;	// 0x31cf1f4d
- (void)setStreetSegmentIDs:(long long *)ids count:(unsigned)count;	// 0x31cf0ff5
// declared property setter: - (void)setTransitCost:(id)cost;	// 0x31cf1fe9
// declared property setter: - (void)setType:(int)type;	// 0x31cf1ef9
// declared property setter: - (void)setUnpackedLatLngVertices:(id)vertices;	// 0x31cf217d
- (id)stepAtIndex:(unsigned)index;	// 0x31cf1091
// declared property getter: - (id)steps;	// 0x31cf1f3d
- (unsigned)stepsCount;	// 0x31cf1071
- (long long)streetSegmentIDAtIndex:(unsigned)index;	// 0x31cf0f4d
// declared property getter: - (long long *)streetSegmentIDs;	// 0x31cf0f11
// declared property getter: - (unsigned)streetSegmentIDsCount;	// 0x31cf0efd
// declared property getter: - (id)transitCost;	// 0x31cf1fd9
// declared property getter: - (int)type;	// 0x31cf1ee9
- (void)unpackLatLngVertices;	// 0x31cf8955
// declared property getter: - (id)unpackedLatLngVertices;	// 0x31cf216d
- (void)writeTo:(id)to;	// 0x31cf1b3d
@end


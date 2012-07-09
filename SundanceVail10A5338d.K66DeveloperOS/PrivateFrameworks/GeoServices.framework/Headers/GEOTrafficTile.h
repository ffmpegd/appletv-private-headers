/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSMutableArray, NSData;

__attribute__((visibility("hidden")))
@interface GEOTrafficTile : PBCodable {
	NSMutableArray *_trafficIncidents;	// 4 = 0x4
	NSMutableArray *_trafficSegments;	// 8 = 0x8
	NSData *_vertices;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasVertices;	// G=0x3247f115; 
@property(retain, nonatomic) NSMutableArray *trafficIncidents;	// G=0x3247fccd; S=0x3247fcdd; @synthesize=_trafficIncidents
@property(retain, nonatomic) NSMutableArray *trafficSegments;	// G=0x3247fcad; S=0x3247fcbd; @synthesize=_trafficSegments
@property(retain, nonatomic) NSData *vertices;	// G=0x3247fc8d; S=0x3247fc9d; @synthesize=_vertices
- (void)addTrafficIncident:(id)incident;	// 0x3247f219
- (void)addTrafficSegment:(id)segment;	// 0x3247f14d
- (void)clearTrafficIncidents;	// 0x3247f1f9
- (void)clearTrafficSegments;	// 0x3247f12d
- (void)copyTo:(id)to;	// 0x3247fa39
- (XXStruct_K5nmsA *)createUnpackedVerticesWithGutterSize:(int)gutterSize;	// 0x3247fe09
- (void)dealloc;	// 0x3247f0a9
- (id)description;	// 0x3247f2c5
- (id)dictionaryRepresentation;	// 0x3247f335
// declared property getter: - (BOOL)hasVertices;	// 0x3247f115
- (unsigned)hash;	// 0x3247fc31
- (BOOL)isEqual:(id)equal;	// 0x3247fb61
- (BOOL)readFrom:(id)from;	// 0x3247f84d
// declared property setter: - (void)setTrafficIncidents:(id)incidents;	// 0x3247fcdd
// declared property setter: - (void)setTrafficSegments:(id)segments;	// 0x3247fcbd
// declared property setter: - (void)setVertices:(id)vertices;	// 0x3247fc9d
- (id)trafficIncidentAtIndex:(unsigned)index;	// 0x3247f2a5
// declared property getter: - (id)trafficIncidents;	// 0x3247fccd
- (unsigned)trafficIncidentsCount;	// 0x3247f285
- (id)trafficSegmentAtIndex:(unsigned)index;	// 0x3247f1d9
// declared property getter: - (id)trafficSegments;	// 0x3247fcad
- (unsigned)trafficSegmentsCount;	// 0x3247f1b9
// declared property getter: - (id)vertices;	// 0x3247fc8d
- (void)writeTo:(id)to;	// 0x3247f859
@end

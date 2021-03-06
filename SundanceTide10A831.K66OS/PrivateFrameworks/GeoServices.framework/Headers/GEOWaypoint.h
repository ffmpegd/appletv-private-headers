/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class GEOLocation, NSMutableArray, GEOPlaceSearchRequest;

@interface GEOWaypoint : PBCodable {
	NSMutableArray *_entryPoints;	// 4 = 0x4
	GEOLocation *_location;	// 8 = 0x8
	GEOPlaceSearchRequest *_placeSearchRequest;	// 12 = 0xc
}
@property(retain, nonatomic) NSMutableArray *entryPoints;	// G=0x302b3f09; S=0x302b3f19; @synthesize=_entryPoints
@property(readonly, assign, nonatomic) BOOL hasLocation;	// G=0x302b342d; 
@property(readonly, assign, nonatomic) BOOL hasPlaceSearchRequest;	// G=0x302b3415; 
@property(retain, nonatomic) GEOLocation *location;	// G=0x302b3ee9; S=0x302b3ef9; @synthesize=_location
@property(retain, nonatomic) GEOPlaceSearchRequest *placeSearchRequest;	// G=0x302b3ec9; S=0x302b3ed9; @synthesize=_placeSearchRequest
- (id)initWithLocation:(id)location;	// 0x3024d739
- (void)addEntryPoint:(id)point;	// 0x302b3465
- (void)clearEntryPoints;	// 0x302b3445
- (void)copyTo:(id)to;	// 0x302b3ca1
- (void)dealloc;	// 0x302b33a9
- (id)description;	// 0x302b3511
- (id)dictionaryRepresentation;	// 0x302b3581
- (id)entryPointAtIndex:(unsigned)index;	// 0x302b34f1
// declared property getter: - (id)entryPoints;	// 0x302b3f09
- (unsigned)entryPointsCount;	// 0x302b34d1
// declared property getter: - (BOOL)hasLocation;	// 0x302b342d
// declared property getter: - (BOOL)hasPlaceSearchRequest;	// 0x302b3415
- (unsigned)hash;	// 0x302b3e6d
- (BOOL)isEqual:(id)equal;	// 0x302b3d9d
// declared property getter: - (id)location;	// 0x302b3ee9
- (id)locationForWaypoint;	// 0x3024d785
// declared property getter: - (id)placeSearchRequest;	// 0x302b3ec9
- (BOOL)readFrom:(id)from;	// 0x302b3a2d
// declared property setter: - (void)setEntryPoints:(id)points;	// 0x302b3f19
// declared property setter: - (void)setLocation:(id)location;	// 0x302b3ef9
// declared property setter: - (void)setPlaceSearchRequest:(id)request;	// 0x302b3ed9
- (void)writeTo:(id)to;	// 0x302b3a39
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"


@interface GEOMapRegion : PBCodable {
	BOOL _hasSouthLat;	// 4 = 0x4
	double _southLat;	// 8 = 0x8
	BOOL _hasWestLng;	// 16 = 0x10
	double _westLng;	// 20 = 0x14
	BOOL _hasNorthLat;	// 28 = 0x1c
	double _northLat;	// 32 = 0x20
	BOOL _hasEastLng;	// 40 = 0x28
	double _eastLng;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) double centerLat;	// G=0x366f9d3d; 
@property(readonly, assign, nonatomic) double centerLng;	// G=0x366f9d8d; 
@property(assign, nonatomic) double eastLng;	// G=0x3670493d; S=0x36704401; @synthesize=_eastLng
@property(assign, nonatomic) BOOL hasEastLng;	// G=0x3670491d; S=0x3670492d; @synthesize=_hasEastLng
@property(assign, nonatomic) BOOL hasNorthLat;	// G=0x367048e5; S=0x367048f5; @synthesize=_hasNorthLat
@property(assign, nonatomic) BOOL hasSouthLat;	// G=0x36704875; S=0x36704885; @synthesize=_hasSouthLat
@property(assign, nonatomic) BOOL hasWestLng;	// G=0x367048ad; S=0x367048bd; @synthesize=_hasWestLng
@property(assign, nonatomic) double northLat;	// G=0x36704905; S=0x367043d5; @synthesize=_northLat
@property(assign, nonatomic) double southLat;	// G=0x36704895; S=0x3670437d; @synthesize=_southLat
@property(readonly, assign, nonatomic) double spanLat;	// G=0x366f9ddd; 
@property(readonly, assign, nonatomic) double spanLng;	// G=0x366f9e29; 
@property(assign, nonatomic) double westLng;	// G=0x367048cd; S=0x367043a9; @synthesize=_westLng
- (id)initWithLatitude:(double)latitude longitude:(double)longitude;	// 0x366f9b79
- (id)initWithSpannedRegion:(XXStruct_SnKRpD)spannedRegion;	// 0x366f9c29
// declared property getter: - (double)centerLat;	// 0x366f9d3d
// declared property getter: - (double)centerLng;	// 0x366f9d8d
- (BOOL)containsCoordinate:(XXStruct_zYrK5D)coordinate;	// 0x366f9e75
- (void)dealloc;	// 0x36704351
- (id)description;	// 0x3670442d
- (id)dictionaryRepresentation;	// 0x3670449d
// declared property getter: - (double)eastLng;	// 0x3670493d
// declared property getter: - (BOOL)hasEastLng;	// 0x3670491d
// declared property getter: - (BOOL)hasNorthLat;	// 0x367048e5
// declared property getter: - (BOOL)hasSouthLat;	// 0x36704875
// declared property getter: - (BOOL)hasWestLng;	// 0x367048ad
// declared property getter: - (double)northLat;	// 0x36704905
- (BOOL)readFrom:(id)from;	// 0x36704645
// declared property setter: - (void)setEastLng:(double)lng;	// 0x36704401
// declared property setter: - (void)setHasEastLng:(BOOL)lng;	// 0x3670492d
// declared property setter: - (void)setHasNorthLat:(BOOL)lat;	// 0x367048f5
// declared property setter: - (void)setHasSouthLat:(BOOL)lat;	// 0x36704885
// declared property setter: - (void)setHasWestLng:(BOOL)lng;	// 0x367048bd
// declared property setter: - (void)setNorthLat:(double)lat;	// 0x367043d5
// declared property setter: - (void)setSouthLat:(double)lat;	// 0x3670437d
- (void)setSpannedRegion:(XXStruct_SnKRpD)region;	// 0x366f9c99
// declared property setter: - (void)setWestLng:(double)lng;	// 0x367043a9
// declared property getter: - (double)southLat;	// 0x36704895
// declared property getter: - (double)spanLat;	// 0x366f9ddd
// declared property getter: - (double)spanLng;	// 0x366f9e29
// declared property getter: - (double)westLng;	// 0x367048cd
- (void)writeTo:(id)to;	// 0x36704775
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class GMMMapPoint;

__attribute__((visibility("hidden")))
@interface GMMMapInfo : PBCodable {
	GMMMapPoint *_center;	// 4 = 0x4
	int _latitudeSpan;	// 8 = 0x8
	int _longitudeSpan;	// 12 = 0xc
	BOOL _hasZoomLevel;	// 16 = 0x10
	int _zoomLevel;	// 20 = 0x14
}
@property(retain, nonatomic) GMMMapPoint *center;	// G=0x30b5faa1; S=0x30b5fab1; @synthesize=_center
@property(assign, nonatomic) BOOL hasZoomLevel;	// G=0x30b5fb15; S=0x30b5fb25; @synthesize=_hasZoomLevel
@property(assign, nonatomic) int latitudeSpan;	// G=0x30b5fad5; S=0x30b5fae5; @synthesize=_latitudeSpan
@property(assign, nonatomic) int longitudeSpan;	// G=0x30b5faf5; S=0x30b5fb05; @synthesize=_longitudeSpan
@property(assign, nonatomic) int zoomLevel;	// G=0x30b5fb35; S=0x30b5f619; @synthesize=_zoomLevel
- (id)initWithGEOMapRegion:(id)geomapRegion withZoom:(int)zoom;	// 0x30b8878d
- (id)initWithSearchRequest:(id)searchRequest;	// 0x30b871ed
// declared property getter: - (id)center;	// 0x30b5faa1
- (void)dealloc;	// 0x30b5f5d5
- (id)description;	// 0x30b5f63d
- (id)dictionaryRepresentation;	// 0x30b5f6ad
// declared property getter: - (BOOL)hasZoomLevel;	// 0x30b5fb15
// declared property getter: - (int)latitudeSpan;	// 0x30b5fad5
// declared property getter: - (int)longitudeSpan;	// 0x30b5faf5
- (BOOL)readFrom:(id)from;	// 0x30b5f7c1
// declared property setter: - (void)setCenter:(id)center;	// 0x30b5fab1
// declared property setter: - (void)setHasZoomLevel:(BOOL)level;	// 0x30b5fb25
// declared property setter: - (void)setLatitudeSpan:(int)span;	// 0x30b5fae5
// declared property setter: - (void)setLongitudeSpan:(int)span;	// 0x30b5fb05
// declared property setter: - (void)setZoomLevel:(int)level;	// 0x30b5f619
- (void)writeTo:(id)to;	// 0x30b5f9a9
// declared property getter: - (int)zoomLevel;	// 0x30b5fb35
@end


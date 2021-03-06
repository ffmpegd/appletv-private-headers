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
@property(retain, nonatomic) GMMMapPoint *center;	// G=0x31ceda91; S=0x31cedaa1; @synthesize=_center
@property(assign, nonatomic) BOOL hasZoomLevel;	// G=0x31cedb05; S=0x31cedb15; @synthesize=_hasZoomLevel
@property(assign, nonatomic) int latitudeSpan;	// G=0x31cedac5; S=0x31cedad5; @synthesize=_latitudeSpan
@property(assign, nonatomic) int longitudeSpan;	// G=0x31cedae5; S=0x31cedaf5; @synthesize=_longitudeSpan
@property(assign, nonatomic) int zoomLevel;	// G=0x31cedb25; S=0x31ced609; @synthesize=_zoomLevel
- (id)initWithGEOMapRegion:(id)geomapRegion withZoom:(int)zoom;	// 0x31d1677d
- (id)initWithSearchRequest:(id)searchRequest;	// 0x31d151dd
// declared property getter: - (id)center;	// 0x31ceda91
- (void)dealloc;	// 0x31ced5c5
- (id)description;	// 0x31ced62d
- (id)dictionaryRepresentation;	// 0x31ced69d
// declared property getter: - (BOOL)hasZoomLevel;	// 0x31cedb05
// declared property getter: - (int)latitudeSpan;	// 0x31cedac5
// declared property getter: - (int)longitudeSpan;	// 0x31cedae5
- (BOOL)readFrom:(id)from;	// 0x31ced7b1
// declared property setter: - (void)setCenter:(id)center;	// 0x31cedaa1
// declared property setter: - (void)setHasZoomLevel:(BOOL)level;	// 0x31cedb15
// declared property setter: - (void)setLatitudeSpan:(int)span;	// 0x31cedad5
// declared property setter: - (void)setLongitudeSpan:(int)span;	// 0x31cedaf5
// declared property setter: - (void)setZoomLevel:(int)level;	// 0x31ced609
- (void)writeTo:(id)to;	// 0x31ced999
// declared property getter: - (int)zoomLevel;	// 0x31cedb25
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GMMPixelPoint : PBCodable {
	int _pixelX;	// 4 = 0x4
	int _pixelY;	// 8 = 0x8
	int _zoomLevel;	// 12 = 0xc
}
@property(assign, nonatomic) int pixelX;	// G=0x33846595; S=0x338465a5; @synthesize=_pixelX
@property(assign, nonatomic) int pixelY;	// G=0x338465b5; S=0x338465c5; @synthesize=_pixelY
@property(assign, nonatomic) int zoomLevel;	// G=0x338465d5; S=0x338465e5; @synthesize=_zoomLevel
- (void)dealloc;	// 0x338462b1
- (id)description;	// 0x338462dd
- (id)dictionaryRepresentation;	// 0x3384634d
// declared property getter: - (int)pixelX;	// 0x33846595
// declared property getter: - (int)pixelY;	// 0x338465b5
- (BOOL)readFrom:(id)from;	// 0x33846425
// declared property setter: - (void)setPixelX:(int)x;	// 0x338465a5
// declared property setter: - (void)setPixelY:(int)y;	// 0x338465c5
// declared property setter: - (void)setZoomLevel:(int)level;	// 0x338465e5
- (void)writeTo:(id)to;	// 0x33846535
// declared property getter: - (int)zoomLevel;	// 0x338465d5
@end


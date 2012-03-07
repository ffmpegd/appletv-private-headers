/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GMMMapTile : PBCodable {
	int _tileType;	// 4 = 0x4
	int _tileIndexX;	// 8 = 0x8
	int _tileIndexY;	// 12 = 0xc
	int _zoomLevel;	// 16 = 0x10
	BOOL _hasTextSize;	// 20 = 0x14
	int _textSize;	// 24 = 0x18
}
@property(assign, nonatomic) BOOL hasTextSize;	// G=0x35b85291; S=0x35b852a1; @synthesize=_hasTextSize
@property(assign, nonatomic) int textSize;	// G=0x35b84e35; S=0x35b84e59; @synthesize=_textSize
@property(assign, nonatomic) int tileIndexX;	// G=0x35b85231; S=0x35b85241; @synthesize=_tileIndexX
@property(assign, nonatomic) int tileIndexY;	// G=0x35b85251; S=0x35b85261; @synthesize=_tileIndexY
@property(assign, nonatomic) int tileType;	// G=0x35b85211; S=0x35b85221; @synthesize=_tileType
@property(assign, nonatomic) int zoomLevel;	// G=0x35b85271; S=0x35b85281; @synthesize=_zoomLevel
- (void)dealloc;	// 0x35b84e09
- (id)description;	// 0x35b84e7d
- (id)dictionaryRepresentation;	// 0x35b84eed
// declared property getter: - (BOOL)hasTextSize;	// 0x35b85291
- (BOOL)readFrom:(id)from;	// 0x35b85031
// declared property setter: - (void)setHasTextSize:(BOOL)size;	// 0x35b852a1
// declared property setter: - (void)setTextSize:(int)size;	// 0x35b84e59
// declared property setter: - (void)setTileIndexX:(int)x;	// 0x35b85241
// declared property setter: - (void)setTileIndexY:(int)y;	// 0x35b85261
// declared property setter: - (void)setTileType:(int)type;	// 0x35b85221
// declared property setter: - (void)setZoomLevel:(int)level;	// 0x35b85281
// declared property getter: - (int)textSize;	// 0x35b84e35
// declared property getter: - (int)tileIndexX;	// 0x35b85231
// declared property getter: - (int)tileIndexY;	// 0x35b85251
// declared property getter: - (int)tileType;	// 0x35b85211
- (void)writeTo:(id)to;	// 0x35b85171
// declared property getter: - (int)zoomLevel;	// 0x35b85271
@end


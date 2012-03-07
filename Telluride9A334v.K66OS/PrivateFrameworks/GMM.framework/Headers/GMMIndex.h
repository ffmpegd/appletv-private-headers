/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


@interface GMMIndex : PBCodable {
	int _tileXIndex;	// 4 = 0x4
	int _tileYIndex;	// 8 = 0x8
	BOOL _hasFace;	// 12 = 0xc
	int _face;	// 16 = 0x10
}
@property(assign, nonatomic) int face;	// G=0x35b7d4c1; S=0x35b7d165; @synthesize=_face
@property(assign, nonatomic) BOOL hasFace;	// G=0x35b7d4a1; S=0x35b7d4b1; @synthesize=_hasFace
@property(assign, nonatomic) int tileXIndex;	// G=0x35b7d461; S=0x35b7d471; @synthesize=_tileXIndex
@property(assign, nonatomic) int tileYIndex;	// G=0x35b7d481; S=0x35b7d491; @synthesize=_tileYIndex
- (void)dealloc;	// 0x35b7d139
- (id)description;	// 0x35b7d189
- (id)dictionaryRepresentation;	// 0x35b7d1f9
// declared property getter: - (int)face;	// 0x35b7d4c1
// declared property getter: - (BOOL)hasFace;	// 0x35b7d4a1
- (BOOL)readFrom:(id)from;	// 0x35b7d2e1
// declared property setter: - (void)setFace:(int)face;	// 0x35b7d165
// declared property setter: - (void)setHasFace:(BOOL)face;	// 0x35b7d4b1
// declared property setter: - (void)setTileXIndex:(int)index;	// 0x35b7d471
// declared property setter: - (void)setTileYIndex:(int)index;	// 0x35b7d491
// declared property getter: - (int)tileXIndex;	// 0x35b7d461
// declared property getter: - (int)tileYIndex;	// 0x35b7d481
- (void)writeTo:(id)to;	// 0x35b7d3f1
@end


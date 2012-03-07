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
@property(assign, nonatomic) int face;	// G=0x3157b4c1; S=0x3157b165; @synthesize=_face
@property(assign, nonatomic) BOOL hasFace;	// G=0x3157b4a1; S=0x3157b4b1; @synthesize=_hasFace
@property(assign, nonatomic) int tileXIndex;	// G=0x3157b461; S=0x3157b471; @synthesize=_tileXIndex
@property(assign, nonatomic) int tileYIndex;	// G=0x3157b481; S=0x3157b491; @synthesize=_tileYIndex
- (void)dealloc;	// 0x3157b139
- (id)description;	// 0x3157b189
- (id)dictionaryRepresentation;	// 0x3157b1f9
// declared property getter: - (int)face;	// 0x3157b4c1
// declared property getter: - (BOOL)hasFace;	// 0x3157b4a1
- (BOOL)readFrom:(id)from;	// 0x3157b2e1
// declared property setter: - (void)setFace:(int)face;	// 0x3157b165
// declared property setter: - (void)setHasFace:(BOOL)face;	// 0x3157b4b1
// declared property setter: - (void)setTileXIndex:(int)index;	// 0x3157b471
// declared property setter: - (void)setTileYIndex:(int)index;	// 0x3157b491
// declared property getter: - (int)tileXIndex;	// 0x3157b461
// declared property getter: - (int)tileYIndex;	// 0x3157b481
- (void)writeTo:(id)to;	// 0x3157b3f1
@end


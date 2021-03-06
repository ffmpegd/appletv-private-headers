/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPGraphicUser.h"
#import "CPRegion.h"

@class CPZoneProfile, CPCharSequence, NSArray, NSMutableArray;

@interface CPZone : CPRegion <CPGraphicUser> {
	NSMutableArray *zoneBorders;	// 68 = 0x44
	CGPoint *outerVertices;	// 72 = 0x48
	CGPoint *swollenOuterVertices;	// 76 = 0x4c
	double area;	// 80 = 0x50
	BOOL isStraddleZone;	// 88 = 0x58
	CPZoneProfile *zoneProfile;	// 92 = 0x5c
	NSArray *leftGuides;	// 96 = 0x60
	NSArray *rightGuides;	// 100 = 0x64
	NSArray *gutters;	// 104 = 0x68
	NSArray *spacers;	// 108 = 0x6c
	CPCharSequence *charactersInZone;	// 112 = 0x70
	NSMutableArray *textLinesInZone;	// 116 = 0x74
	NSArray *graphicsInZone;	// 120 = 0x78
	NSMutableArray *backgroundGraphics;	// 124 = 0x7c
	unsigned usedGraphicCount;	// 128 = 0x80
}
@property(readonly, assign) double area;	// G=0x33850e19; converted property
@property(readonly, retain) NSMutableArray *backgroundGraphics;	// G=0x33850655; converted property
@property(retain) CPCharSequence *charactersInZone;	// G=0x338514f5; S=0x338514b1; converted property
@property(readonly, retain) NSArray *graphicsInZone;	// G=0x3384fed1; converted property
@property(retain) NSArray *gutters;	// G=0x338518c1; S=0x3385187d; converted property
@property(assign) BOOL isStraddleZone;	// G=0x33851761; S=0x33851771; converted property
@property(retain) NSArray *leftGuides;	// G=0x33851819; S=0x338517d5; converted property
@property(readonly, assign) CGPoint *outerVertices;	// G=0x33850cfd; converted property
@property(retain) NSArray *rightGuides;	// G=0x3385186d; S=0x33851829; converted property
@property(retain) NSArray *spacers;	// G=0x33851915; S=0x338518d1; converted property
@property(readonly, assign) CGPoint *swollenOuterVertices;	// G=0x33850d99; converted property
@property(readonly, retain) NSMutableArray *textLinesInZone;	// G=0x3384fec1; converted property
@property(readonly, assign) unsigned usedGraphicCount;	// G=0x33851939; converted property
@property(retain) NSMutableArray *zoneBorders;	// G=0x3385033d; S=0x3385034d; converted property
@property(retain) CPZoneProfile *zoneProfile;	// G=0x33851781; S=0x33851791; converted property
- (id)init;	// 0x3384fa89
- (void)accept:(id)accept;	// 0x33850d81
- (void)addContentFrom:(id)from;	// 0x33851505
- (void)addPDFChar:(void *)aChar;	// 0x33851441
// converted property getter: - (double)area;	// 0x33850e19
// converted property getter: - (id)backgroundGraphics;	// 0x33850655
- (long)borderZOrder;	// 0x33850a0d
- (BOOL)bordersWindClockwise;	// 0x33850431
- (BOOL)canContain:(CGRect)contain;	// 0x338513ed
// converted property getter: - (id)charactersInZone;	// 0x338514f5
- (int)compareArea:(id)area;	// 0x33851609
- (BOOL)contains:(id)contains;	// 0x33851269
- (id)copyWithZone:(NSZone *)zone;	// 0x3384fcc1
- (void)dealloc;	// 0x3384fb89
// converted property getter: - (id)graphicsInZone;	// 0x3384fed1
// converted property getter: - (id)gutters;	// 0x338518c1
- (BOOL)hasBorders;	// 0x33850321
- (BOOL)hasNeighborShape:(id)shape;	// 0x33850435
- (void)incrementUsedGraphicCount;	// 0x33851925
- (BOOL)isRectangular;	// 0x338510b1
// converted property getter: - (BOOL)isStraddleZone;	// 0x33851761
- (BOOL)isZone;	// 0x3385031d
// converted property getter: - (id)leftGuides;	// 0x33851819
- (BOOL)mapToWordPairs:(/*function-pointer*/ void *)wordPairs passing:(void *)passing;	// 0x33850109
- (BOOL)mapToWordPairsWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x33850205
- (BOOL)mapToWords:(/*function-pointer*/ void *)words passing:(void *)passing;	// 0x3384ffb1
- (BOOL)mapToWordsWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x33850031
- (long)neighborZOrder;	// 0x33850b59
- (CGColorRef)newBackgroundColor;	// 0x338504b1
// converted property getter: - (CGPoint *)outerVertices;	// 0x33850cfd
- (BOOL)rectangleBordersAtLeft:(id *)left top:(id *)top right:(id *)right bottom:(id *)bottom;	// 0x338510d1
- (void)removeUnfilledNeighborShapes;	// 0x33850901
// converted property getter: - (id)rightGuides;	// 0x3385186d
// converted property setter: - (void)setCharactersInZone:(id)zone;	// 0x338514b1
// converted property setter: - (void)setGutters:(id)gutters;	// 0x3385187d
// converted property setter: - (void)setIsStraddleZone:(BOOL)zone;	// 0x33851771
// converted property setter: - (void)setLeftGuides:(id)guides;	// 0x338517d5
// converted property setter: - (void)setRightGuides:(id)guides;	// 0x33851829
// converted property setter: - (void)setSpacers:(id)spacers;	// 0x338518d1
// converted property setter: - (void)setZoneBorders:(id)borders;	// 0x3385034d
// converted property setter: - (void)setZoneProfile:(id)profile;	// 0x33851791
// converted property getter: - (id)spacers;	// 0x33851915
// converted property getter: - (CGPoint *)swollenOuterVertices;	// 0x33850d99
- (CGRect)swollenZoneBounds;	// 0x33850f85
// converted property getter: - (id)textLinesInZone;	// 0x3384fec1
// converted property getter: - (unsigned)usedGraphicCount;	// 0x33851939
- (unsigned)vertexCount;	// 0x338509e5
- (unsigned)wordCount;	// 0x3384ff35
// converted property getter: - (id)zoneBorders;	// 0x3385033d
- (CGRect)zoneBounds;	// 0x33850e91
// converted property getter: - (id)zoneProfile;	// 0x33851781
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSMutableArray, CPPage;

@interface CPZoneBorder : NSObject <NSCopying> {
	CGRect bounds;	// 4 = 0x4
	CPPage *page;	// 20 = 0x14
	NSMutableArray *ownerArray;	// 24 = 0x18
	NSMutableArray *graphicObjects;	// 28 = 0x1c
	NSMutableArray *neighbors;	// 32 = 0x20
	NSMutableArray *intersections;	// 36 = 0x24
	BOOL isHorizontal;	// 40 = 0x28
	BOOL hasForwardVector;	// 41 = 0x29
	BOOL hasBackwardVector;	// 42 = 0x2a
	float overhangMin;	// 44 = 0x2c
	float overhangMax;	// 48 = 0x30
}
@property(assign) CGRect bounds;	// G=0x34a1a01d; S=0x34a1a041; converted property
@property(readonly, retain) NSMutableArray *graphicObjects;	// G=0x34a1a065; converted property
@property(assign) BOOL hasBackwardVector;	// G=0x34a1a0a5; S=0x34a1a095; converted property
@property(assign) BOOL hasForwardVector;	// G=0x34a1a085; S=0x34a1a075; converted property
@property(readonly, assign) BOOL isHorizontal;	// G=0x34a1a0b5; converted property
@property(readonly, retain) NSMutableArray *ownerArray;	// G=0x34a1a00d; converted property
@property(readonly, retain) CPPage *page;	// G=0x34a19ffd; converted property
+ (void)addIntersectionBetweenBorder:(id)border andBorder:(id)border2 atRect:(CGRect)rect;	// 0x34a1a74d
+ (int)clockwiseWindingNumberOfShapeWithBorders:(id)borders;	// 0x34a1a401
+ (CGRect)extendRect:(CGRect)rect;	// 0x34a1a37d
+ (void)outerVertices:(CGPoint *)vertices fromBorders:(id)borders swollenBy:(float)by;	// 0x34a1a495
+ (void)removeIntersectionBetweenBorder:(id)border andBorder:(id)border2;	// 0x34a1a669
- (id)init;	// 0x34a1a2cd
- (id)initWithGraphicObject:(id)graphicObject;	// 0x34a1c20d
- (void)addGraphicObject:(id)object;	// 0x34a1bdb9
- (void)addNeighbor:(id)neighbor;	// 0x34a1bcb9
- (void)addToArray:(id)array;	// 0x34a1bfa5
- (void)addToArray:(id)array atIndex:(unsigned)index;	// 0x34a1bf79
// converted property getter: - (CGRect)bounds;	// 0x34a1a01d
- (void)combine:(id)combine;	// 0x34a1ac71
- (int)compareXBounds:(id)bounds;	// 0x34a1a975
- (int)compareYBounds:(id)bounds;	// 0x34a1a919
- (BOOL)continues:(id)continues;	// 0x34a1adc5
- (id)copyWithZone:(NSZone *)zone;	// 0x34a1c099
- (id)copyWithoutIntersections;	// 0x34a1bfd1
- (BOOL)crosses:(id)crosses;	// 0x34a1ae69
- (void)dealloc;	// 0x34a1c199
- (BOOL)extractCycleTo:(id)to goingForward:(BOOL)forward startingAtIndex:(unsigned)index;	// 0x34a1b4d5
- (BOOL)extractCycleTo:(id)to goingForward:(BOOL)forward throughIntersectionIndex:(unsigned)index returningTo:(id)to4 atRect:(CGRect *)rect;	// 0x34a1b035
- (id)graphicObjectAtIndex:(unsigned)index;	// 0x34a1bd71
- (unsigned)graphicObjectCount;	// 0x34a1be7d
// converted property getter: - (id)graphicObjects;	// 0x34a1a065
// converted property getter: - (BOOL)hasBackwardVector;	// 0x34a1a0a5
- (BOOL)hasClockwiseVectorAtIndex:(unsigned)index startingForward:(BOOL)forward;	// 0x34a1b781
- (BOOL)hasCounterclockwiseVectorAtIndex:(unsigned)index startingForward:(BOOL)forward;	// 0x34a1b6e1
// converted property getter: - (BOOL)hasForwardVector;	// 0x34a1a085
- (BOOL)hasNeighborShape:(id)shape;	// 0x34a1bc01
- (BOOL)hasNeighborShape:(id)shape atSide:(int)side;	// 0x34a1bb79
- (BOOL)hasVectorGoingForward:(BOOL)forward startingAtIndex:(unsigned *)index;	// 0x34a1b591
- (unsigned)indexOfIntersectionWith:(id)with;	// 0x34a1b891
- (void)instantiateVectors;	// 0x34a1b635
- (unsigned)intersectionCount;	// 0x34a1b9d1
- (BOOL)intersectsWith:(id)with atRect:(CGRect *)rect;	// 0x34a1b8fd
// converted property getter: - (BOOL)isHorizontal;	// 0x34a1a0b5
- (BOOL)isVertical;	// 0x34a1a0c5
- (id)neighborAtIndex:(unsigned)index;	// 0x34a1bc71
- (unsigned)neighborCount;	// 0x34a1bd45
// converted property getter: - (id)ownerArray;	// 0x34a1a00d
// converted property getter: - (id)page;	// 0x34a19ffd
- (void)removeFromArray;	// 0x34a1bf51
- (void)removeFromArrayAtIndex:(unsigned)index;	// 0x34a1bf0d
- (void)removeGraphicObjectAtIndex:(unsigned)index;	// 0x34a1bd95
- (void)removeLooseThreadsStartingFrom:(id)from;	// 0x34a1a9d1
- (void)removeNeighborAtIndex:(unsigned)index;	// 0x34a1bc95
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x34a1a041
// converted property setter: - (void)setHasBackwardVector:(BOOL)vector;	// 0x34a1a095
// converted property setter: - (void)setHasForwardVector:(BOOL)vector;	// 0x34a1a075
- (void)setSide:(int)side ofPage:(id)page;	// 0x34a1b9fd
- (void)trimToLastIntersections;	// 0x34a1aadd
- (BOOL)windsClockwiseOnto:(id)onto;	// 0x34a1b821
- (long)zOrder;	// 0x34a1bea9
@end


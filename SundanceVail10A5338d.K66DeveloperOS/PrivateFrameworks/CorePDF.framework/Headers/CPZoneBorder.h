/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "CPCopying.h"

@class CPPage, NSMutableArray;

@interface CPZoneBorder : NSObject <NSCopying, CPCopying> {
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
@property(assign) CGRect bounds;	// G=0x3330bf09; S=0x3330bf2d; converted property
@property(readonly, retain) NSMutableArray *graphicObjects;	// G=0x3330c681; converted property
@property(assign) BOOL hasBackwardVector;	// G=0x3330c8d9; S=0x3330c8c9; converted property
@property(assign) BOOL hasForwardVector;	// G=0x3330c8b9; S=0x3330c8a9; converted property
@property(readonly, assign) BOOL isHorizontal;	// G=0x3330ca1d; converted property
@property(readonly, retain) NSMutableArray *ownerArray;	// G=0x3330bef9; converted property
@property(readonly, retain) CPPage *page;	// G=0x3330be25; converted property
+ (void)addIntersectionBetweenBorder:(id)border andBorder:(id)border2 atRect:(CGRect)rect;	// 0x3330bfb1
+ (int)clockwiseWindingNumberOfShapeWithBorders:(id)borders;	// 0x3330c3f9
+ (CGRect)extendRect:(CGRect)rect;	// 0x3330c499
+ (void)outerVertices:(CGPoint *)vertices fromBorders:(id)borders swollenBy:(float)by;	// 0x3330c229
+ (void)removeIntersectionBetweenBorder:(id)border andBorder:(id)border2;	// 0x3330c151
- (id)init;	// 0x3330bab9
- (id)initSuper;	// 0x3330bbe1
- (id)initWithGraphicObject:(id)graphicObject;	// 0x3330bb69
- (void)addGraphicObject:(id)object;	// 0x3330c561
- (void)addNeighbor:(id)neighbor;	// 0x3330c6b9
- (void)addToArray:(id)array;	// 0x3330be35
- (void)addToArray:(id)array atIndex:(unsigned)index;	// 0x3330be61
// converted property getter: - (CGRect)bounds;	// 0x3330bf09
- (void)combine:(id)combine;	// 0x3330d66d
- (int)compareXBounds:(id)bounds;	// 0x3330da91
- (int)compareYBounds:(id)bounds;	// 0x3330daf9
- (BOOL)continues:(id)continues;	// 0x3330d5c5
- (id)copyWithZone:(NSZone *)zone;	// 0x3330bc85
- (id)copyWithoutIntersections;	// 0x3330bd69
- (BOOL)crosses:(id)crosses;	// 0x3330d40d
- (void)dealloc;	// 0x3330bc0d
- (BOOL)extractCycleTo:(id)to goingForward:(BOOL)forward startingAtIndex:(unsigned)index;	// 0x3330ceed
- (BOOL)extractCycleTo:(id)to goingForward:(BOOL)forward throughIntersectionIndex:(unsigned)index returningTo:(id)to4 atRect:(CGRect *)rect;	// 0x3330cfa1
- (id)graphicObjectAtIndex:(unsigned)index;	// 0x3330c661
- (unsigned)graphicObjectCount;	// 0x3330c539
// converted property getter: - (id)graphicObjects;	// 0x3330c681
// converted property getter: - (BOOL)hasBackwardVector;	// 0x3330c8d9
- (BOOL)hasClockwiseVectorAtIndex:(unsigned)index startingForward:(BOOL)forward;	// 0x3330cc15
- (BOOL)hasCounterclockwiseVectorAtIndex:(unsigned)index startingForward:(BOOL)forward;	// 0x3330ccb9
// converted property getter: - (BOOL)hasForwardVector;	// 0x3330c8b9
- (BOOL)hasNeighborShape:(id)shape;	// 0x3330c789
- (BOOL)hasNeighborShape:(id)shape atSide:(int)side;	// 0x3330c809
- (BOOL)hasVectorGoingForward:(BOOL)forward startingAtIndex:(unsigned *)index;	// 0x3330ce21
- (unsigned)indexOfIntersectionWith:(id)with;	// 0x3330cb29
- (void)instantiateVectors;	// 0x3330cd5d
- (unsigned)intersectionCount;	// 0x3330ca45
- (BOOL)intersectsWith:(id)with atRect:(CGRect *)rect;	// 0x3330ca6d
// converted property getter: - (BOOL)isHorizontal;	// 0x3330ca1d
- (BOOL)isVertical;	// 0x3330ca2d
- (id)neighborAtIndex:(unsigned)index;	// 0x3330c769
- (unsigned)neighborCount;	// 0x3330c691
// converted property getter: - (id)ownerArray;	// 0x3330bef9
// converted property getter: - (id)page;	// 0x3330be25
- (void)removeFromArray;	// 0x3330be8d
- (void)removeFromArrayAtIndex:(unsigned)index;	// 0x3330beb5
- (void)removeGraphicObjectAtIndex:(unsigned)index;	// 0x3330c641
- (void)removeLooseThreadsStartingFrom:(id)from;	// 0x3330d961
- (void)removeNeighborAtIndex:(unsigned)index;	// 0x3330c749
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x3330bf2d
// converted property setter: - (void)setHasBackwardVector:(BOOL)vector;	// 0x3330c8c9
// converted property setter: - (void)setHasForwardVector:(BOOL)vector;	// 0x3330c8a9
- (void)setSide:(int)side ofPage:(id)page;	// 0x3330c8e9
- (void)trimToLastIntersections;	// 0x3330d7c1
- (BOOL)windsClockwiseOnto:(id)onto;	// 0x3330cba1
- (long)zOrder;	// 0x3330bf49
@end


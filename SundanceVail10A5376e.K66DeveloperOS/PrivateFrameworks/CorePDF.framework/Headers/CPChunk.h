/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPObject.h"


@interface CPChunk : CPObject {
	CGRect bounds;	// 24 = 0x18
	BOOL shrinksWithChildren;	// 40 = 0x28
	BOOL dirtyBounds;	// 41 = 0x29
	unsigned position;	// 44 = 0x2c
	long insertionOrder;	// 48 = 0x30
}
@property(assign) CGPoint anchor;	// G=0x35745c4d; S=0x35745bd1; converted property
@property(assign) CGRect bounds;	// G=0x357459ad; S=0x35745975; converted property
@property(assign) unsigned chunkPosition;	// G=0x35746d75; S=0x35746d85; converted property
@property(assign) long insertionOrder;	// G=0x357460c9; S=0x357460a1; converted property
@property(assign) BOOL shrinksWithChildren;	// G=0x35746ba1; S=0x35746bb1; converted property
+ (float)chooseReferenceFontSizeFrom:(float)from and:(float)anAnd;	// 0x35745591
- (id)init;	// 0x35745439
- (float)absoluteGapTo:(id)to;	// 0x35745ce1
- (void)accept:(id)accept;	// 0x35745579
- (void)add:(id)add;	// 0x35745601
- (void)add:(id)add atIndex:(unsigned)index;	// 0x3574566d
- (void)addChildrenOf:(id)of;	// 0x357456d9
- (CGRect)adjustToPointBoundary:(CGRect)pointBoundary;	// 0x357459f9
- (CGSize)advance;	// 0x357468f5
- (float)advanceDeltaAfterSpace;	// 0x35745cdd
// converted property getter: - (CGPoint)anchor;	// 0x35745c4d
- (float)bottom;	// 0x357468bd
// converted property getter: - (CGRect)bounds;	// 0x357459ad
- (BOOL)boundsEqualsRect:(CGRect)rect accuracy:(float)accuracy;	// 0x35746b39
- (float)center;	// 0x3574683d
// converted property getter: - (unsigned)chunkPosition;	// 0x35746d75
- (float)clusterGapTo:(id)to;	// 0x35745c65
- (int)clusterLevelHint;	// 0x3574690d
- (int)compareAnchorX:(id)x;	// 0x35746171
- (int)compareAnchorY:(id)y;	// 0x357460f9
- (int)compareAnchorYDescending:(id)descending;	// 0x357461e9
- (int)compareChunkPosition:(id)position;	// 0x3574679d
- (int)compareInsertionOrder:(id)order;	// 0x357462d9
- (int)compareLinearBounds:(id)bounds;	// 0x357463e9
- (int)compareTopDescending:(id)descending;	// 0x35746601
- (int)compareX:(id)x;	// 0x35746261
- (int)compareXBounds:(id)bounds;	// 0x35746381
- (int)compareY:(id)y;	// 0x357464c9
- (int)compareYBounds:(id)bounds;	// 0x35746561
- (int)compareYDescending:(id)descending;	// 0x35746645
- (int)compareYDescendingX:(id)x;	// 0x357466bd
- (int)compareZ:(id)z;	// 0x35746311
- (int)compareZDescending:(id)descending;	// 0x35746349
- (id)copyAndSplitChildrenAtIndex:(unsigned)index;	// 0x357454d9
- (id)copyWithZone:(NSZone *)zone;	// 0x357454ad
- (id)describeBounds;	// 0x35745bb5
- (void)fitBoundsToChildren;	// 0x35745de1
- (float)fontSize;	// 0x357468f1
- (BOOL)geometricallyContains:(id)contains;	// 0x35746ac1
// converted property getter: - (long)insertionOrder;	// 0x357460c9
- (BOOL)intersectsChild:(CGRect)child;	// 0x35746bc1
- (float)left;	// 0x357467d5
- (id)newTakeChildren;	// 0x357457d9
- (id)newTakeChildrenAmong:(id)among;	// 0x35745849
- (float)opticalLeading;	// 0x357455fd
- (void)orderedInsert:(id)insert usingSelector:(SEL)selector;	// 0x35746911
- (BOOL)overlapsHorizontallyWith:(id)with;	// 0x35746991
- (BOOL)overlapsVerticallyWith:(id)with;	// 0x35746a15
- (float)referenceAdvanceWidth;	// 0x35745da9
- (void)remove:(id)remove;	// 0x35745719
- (void)removeAll;	// 0x35745769
- (CGRect)renderedBounds;	// 0x35745a85
- (void)resizeWith:(id)with;	// 0x35745f6d
- (float)right;	// 0x35746809
- (float)rotationAngle;	// 0x35746d95
// converted property setter: - (void)setAnchor:(CGPoint)anchor;	// 0x35745bd1
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x35745975
- (void)setChildren:(id)children;	// 0x357458b1
// converted property setter: - (void)setChunkPosition:(unsigned)position;	// 0x35746d85
// converted property setter: - (void)setInsertionOrder:(long)order;	// 0x357460a1
// converted property setter: - (void)setShrinksWithChildren:(BOOL)children;	// 0x35746bb1
// converted property getter: - (BOOL)shrinksWithChildren;	// 0x35746ba1
- (void)sortUsingSelector:(SEL)selector;	// 0x357460d9
- (float)top;	// 0x35746889
- (void)translateObjectYBy:(float)by;	// 0x35746d51
@end


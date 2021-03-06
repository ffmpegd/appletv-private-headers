/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPChunk.h"


@interface CPRegion : CPChunk {
	BOOL isTextRegion;	// 52 = 0x34
	BOOL isImageRegion;	// 53 = 0x35
	BOOL isCompoundShape;	// 54 = 0x36
	CPRegion *nextRegion;	// 56 = 0x38
	int order;	// 60 = 0x3c
	id link;	// 64 = 0x40
}
@property(assign) BOOL isCompoundShape;	// G=0x34837701; S=0x34837711; converted property
@property(assign) BOOL isImageRegion;	// G=0x348376d9; S=0x3483778d; converted property
@property(assign) BOOL isTextRegion;	// G=0x348376c5; S=0x348376f1; converted property
@property(retain) id link;	// G=0x34837765; S=0x34837755; converted property
@property(retain) CPRegion *nextRegion;	// G=0x34837725; S=0x348378d9; converted property
@property(assign) int order;	// G=0x34837735; S=0x34837745; converted property
- (void)accept:(id)accept;	// 0x34837775
- (id)copyWithZone:(NSZone *)zone;	// 0x34837a29
- (void)dealloc;	// 0x34837a7d
- (BOOL)isBodyZone;	// 0x348376ed
- (BOOL)isBoxRegion;	// 0x348376d5
// converted property getter: - (BOOL)isCompoundShape;	// 0x34837701
- (BOOL)isGraphicalRegion;	// 0x34837805
// converted property getter: - (BOOL)isImageRegion;	// 0x348376d9
- (BOOL)isIndivisible;	// 0x34837921
- (BOOL)isListItemRegion;	// 0x348376e5
- (BOOL)isParagraphRegion;	// 0x348376e1
- (BOOL)isRotated;	// 0x348379c9
- (BOOL)isRowRegion;	// 0x348377c9
- (BOOL)isShapeRegion;	// 0x348376dd
- (BOOL)isTableCellRegion;	// 0x348376e9
// converted property getter: - (BOOL)isTextRegion;	// 0x348376c5
- (BOOL)isZone;	// 0x34837721
// converted property getter: - (id)link;	// 0x34837765
// converted property getter: - (id)nextRegion;	// 0x34837725
// converted property getter: - (int)order;	// 0x34837735
// converted property setter: - (void)setIsCompoundShape:(BOOL)shape;	// 0x34837711
// converted property setter: - (void)setIsImageRegion:(BOOL)region;	// 0x3483778d
// converted property setter: - (void)setIsTextRegion:(BOOL)region;	// 0x348376f1
// converted property setter: - (void)setLink:(id)link;	// 0x34837755
// converted property setter: - (void)setNextRegion:(id)region;	// 0x348378d9
// converted property setter: - (void)setOrder:(int)order;	// 0x34837745
@end


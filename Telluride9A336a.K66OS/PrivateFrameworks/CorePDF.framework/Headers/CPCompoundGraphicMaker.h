/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CPDisposable.h"
#import "CorePDF-Structs.h"

@class CPCluster, CPChunk;

@interface CPCompoundGraphicMaker : NSObject <CPDisposable> {
	CPChunk *parentChunk;	// 4 = 0x4
	BOOL shapesAreVectorGraphics;	// 8 = 0x8
	unsigned shapeCount;	// 12 = 0xc
	CPGraphicObject **shapes;	// 16 = 0x10
	double pageSpread;	// 20 = 0x14
	CPCluster *cluster;	// 28 = 0x1c
	unsigned groupInfoCount;	// 32 = 0x20
	XXStruct_0P0XxC *groupInfoArray;	// 36 = 0x24
	BOOL disposed;	// 40 = 0x28
}
+ (BOOL)makeCompoundGraphicsInZonesOf:(id)of;	// 0x34a0c4e1
- (id)initWithGraphicsIn:(id)anIn ofClass:(Class)aClass;	// 0x34a0d44d
- (void)addGroupInfoWithIndex:(unsigned)index bounds:(CGRect)bounds;	// 0x34a0c40d
- (void)coalesceShapeGroups;	// 0x34a0cf89
- (void)dealloc;	// 0x34a0d38d
- (void)dispose;	// 0x34a0d3e9
- (void)finalize;	// 0x34a0c4a1
- (BOOL)findClusterLevel;	// 0x34a0d221
- (BOOL)groupOverlappingGraphics;	// 0x34a0cb45
- (void)makeCompoundGraphicFromShapesAtIndex:(unsigned)index count:(unsigned)count;	// 0x34a0d0dd
- (BOOL)makeCompoundGraphics;	// 0x34a0c6b1
- (BOOL)makeCompoundGraphicsFromShapeGroups;	// 0x34a0ce81
@end


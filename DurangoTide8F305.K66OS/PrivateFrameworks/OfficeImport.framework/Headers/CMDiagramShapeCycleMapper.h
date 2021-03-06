/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramShapeMapper.h"


__attribute__((visibility("hidden")))
@interface CMDiagramShapeCycleMapper : CMDiagramShapeMapper {
@private
	float mScale;	// 112 = 0x70
	BOOL mCircularArrows;	// 116 = 0x74
	int mDiagramType;	// 120 = 0x78
	int mArrowShapeType;	// 124 = 0x7c
}
- (id)initWithOddDiagram:(id)oddDiagram drawingContext:(id)context orientedBounds:(id)bounds identifier:(id)identifier parent:(id)parent;	// 0x3455e7a1
- (CGRect)circumscribedBounds;	// 0x3455e8f1
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x3455ebb5
- (void)mapTransitionArrowsAt:(id)at index:(unsigned)index withState:(id)state;	// 0x3456a4ad
- (void)mapTransitionPointAt:(id)at index:(unsigned)index withState:(id)state;	// 0x3455f419
- (CGRect)nodeBoundsWithIndex:(unsigned)index;	// 0x3455efad
- (CGSize)nodeSize;	// 0x3455ea99
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x3455eedd
@end


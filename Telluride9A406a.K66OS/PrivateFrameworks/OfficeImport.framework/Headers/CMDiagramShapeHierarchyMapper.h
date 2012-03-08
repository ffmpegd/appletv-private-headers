/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMDiagramShapeMapper.h"
#import "OfficeImport-Structs.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CMDiagramShapeHierarchyMapper : CMDiagramShapeMapper {
@private
	NSMutableDictionary *mNodeInfoMap;	// 112 = 0x70
	BOOL mIsLayered;	// 116 = 0x74
}
- (id)initWithOddDiagram:(id)oddDiagram drawingContext:(id)context orientedBounds:(id)bounds identifier:(id)identifier parent:(id)parent;	// 0x32a217c9
- (CGRect)boundsForNode:(id)node;	// 0x32a22a69
- (void)createInfoForNode:(id)node depth:(int)depth;	// 0x32a21c71
- (void)dealloc;	// 0x32a235a5
- (id)infoForNode:(id)node;	// 0x32a22461
- (void)mapAt:(id)at withState:(id)state;	// 0x32a218f5
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x32a235a1
- (void)mapLayerNodes:(id)nodes at:(id)at scale:(float)scale offsetX:(float)x offsetY:(float)y withState:(id)state;	// 0x32a25af9
- (CGRect)mapLogicalBoundsWithXRanges:(const ODIHRangeVector *)xranges;	// 0x32a22749
- (void)mapNode:(id)node at:(id)at scale:(float)scale offsetX:(float)x offsetY:(float)y withState:(id)state;	// 0x32a22af5
- (ODIHRangeVector *)mapRangesForNode:(id)node;	// 0x32a21e41
- (void)setAbsolutePositionOfNode:(id)node parentRow:(int)row parentXOffset:(float)offset index:(int)index;	// 0x32a22871
- (void)setUpLayers;	// 0x32a21891
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x32a229e5
@end

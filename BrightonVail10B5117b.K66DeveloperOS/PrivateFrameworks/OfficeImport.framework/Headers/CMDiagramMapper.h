/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMDrawableMapper.h"

@class ODDDiagram, CMDrawingContext;

@interface CMDiagramMapper : CMDrawableMapper {
	ODDDiagram *mDiagram;	// 80 = 0x50
	CMDrawingContext *mDrawingContext;	// 84 = 0x54
}
+ (int)diagramTypeFromString:(id)string;	// 0x34b3ccd5
- (id)initWithOddDiagram:(id)oddDiagram drawingContext:(id)context orientedBounds:(id)bounds parent:(id)parent;	// 0x34b3c8f5
- (id)copyDiagramMapperForId:(id)anId;	// 0x34bb46ad
- (id)diagram;	// 0x34b405dd
- (id)identifierFromLayoutTypeId:(id)layoutTypeId;	// 0x34b3cc31
- (void)mapAt:(id)at withState:(id)state;	// 0x34b3ca65
- (id)styleMatrix;	// 0x34b40b79
@end


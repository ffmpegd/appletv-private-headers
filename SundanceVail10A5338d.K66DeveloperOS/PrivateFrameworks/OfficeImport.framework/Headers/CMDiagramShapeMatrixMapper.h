/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramShapeMapper.h"


@interface CMDiagramShapeMatrixMapper : CMDiagramShapeMapper {
	int mColumnCount;	// 112 = 0x70
	int mRowCount;	// 116 = 0x74
	float mRectWidth;	// 120 = 0x78
	float mRectHeight;	// 124 = 0x7c
	BOOL mHasArrows;	// 128 = 0x80
	BOOL mIsSnake;	// 129 = 0x81
	BOOL mIsHorizontal;	// 130 = 0x82
	BOOL mIsLinear;	// 131 = 0x83
}
- (id)initWithOddDiagram:(id)oddDiagram drawingContext:(id)context orientedBounds:(id)bounds identifier:(id)identifier parent:(id)parent;	// 0x33ab6b19
- (CGRect)circumscribedBounds;	// 0x33ab6f75
- (int)columnCount;	// 0x33ab6dc9
- (double)gapRatio;	// 0x33ab7c69
- (CGSize)gapSize;	// 0x33ab7ba1
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x33ab75f1
- (void)setColumnsAndRowsCount;	// 0x33ab6d61
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x33ab802d
@end

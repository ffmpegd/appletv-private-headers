/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMDiagramShapeMapper.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface CMDiagramShapeMatrixMapper : CMDiagramShapeMapper {
@private
	int mColumnCount;	// 112 = 0x70
	int mRowCount;	// 116 = 0x74
	float mRectWidth;	// 120 = 0x78
	float mRectHeight;	// 124 = 0x7c
	BOOL mHasArrows;	// 128 = 0x80
	BOOL mIsSnake;	// 129 = 0x81
	BOOL mIsHorizontal;	// 130 = 0x82
	BOOL mIsLinear;	// 131 = 0x83
}
- (id)initWithOddDiagram:(id)oddDiagram drawingContext:(id)context orientedBounds:(id)bounds identifier:(id)identifier parent:(id)parent;	// 0x312b06f5
- (CGRect)circumscribedBounds;	// 0x312b0b45
- (int)columnCount;	// 0x312b09bd
- (double)gapRatio;	// 0x312b1795
- (CGSize)gapSize;	// 0x312b1701
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x312b111d
- (void)setColumnsAndRowsCount;	// 0x312b0959
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x312b1b55
@end


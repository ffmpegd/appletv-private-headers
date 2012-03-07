/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMDiagramMapper.h"
#import "OfficeImport-Structs.h"

@class OADOrientedBounds, NSString;

__attribute__((visibility("hidden")))
@interface CMDiagramShapeMapper : CMDiagramMapper {
@private
	int mChildCount;	// 88 = 0x58
	OADOrientedBounds *mDiagramShapeBounds;	// 92 = 0x5c
	NSString *mIdentifier;	// 96 = 0x60
	float mDefaultFontSize;	// 100 = 0x64
	int mMaxMappableTreeDepth;	// 104 = 0x68
	float mDefaultScale;	// 108 = 0x6c
}
- (id)initWithOddDiagram:(id)oddDiagram drawingContext:(id)context orientedBounds:(id)bounds identifier:(id)identifier parent:(id)parent;	// 0x356ad86d
- (CGRect)circumscribedBounds;	// 0x357d2d51
- (float)defaultFontSize;	// 0x356b0909
- (void)mapAt:(id)at withState:(id)state;	// 0x356adb5d
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x357d2d69
- (void)setDefaultFonSize;	// 0x356ae7c9
- (void)setFonSizeForChildNode:(id)childNode atIndex:(unsigned)index;	// 0x356ae85d
- (float)setFonSizeForChildNode:(id)childNode atIndex:(unsigned)index level:(int)level;	// 0x356ae881
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x356d2bf9
- (CGSize)textSizeForShapeSize:(CGSize)shapeSize;	// 0x356aef3d
@end


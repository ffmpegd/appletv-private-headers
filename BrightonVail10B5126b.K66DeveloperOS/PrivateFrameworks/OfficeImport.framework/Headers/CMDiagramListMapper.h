/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramShapeMapper.h"


@interface CMDiagramListMapper : CMDiagramShapeMapper {
	float mMaxLineCount;	// 112 = 0x70
}
- (void)mapAt:(id)at withState:(id)state;	// 0x34994d89
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x34995539
- (void)mapListItemAt:(id)at index:(int)index withState:(id)state;	// 0x34995595
- (void)setDefaultFonSize;	// 0x34995101
- (float)setFonSizeForChildNode:(id)childNode atIndex:(unsigned)index level:(int)level;	// 0x349952b1
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x349d9ac1
- (id)suggestedBoundsForHListItemWithIndex:(int)index;	// 0x34995679
- (CGSize)textSize;	// 0x34995479
@end

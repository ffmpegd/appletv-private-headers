/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramShapeMapper.h"


@interface CMDiagramPyramidMapper : CMDiagramShapeMapper {
	BOOL mIsFlipped;	// 112 = 0x70
}
- (id)_suggestedBoundsForNodeAtIndex:(unsigned)index;	// 0x35020d9d
- (void)mapAt:(id)at withState:(id)state;	// 0x35020c11
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x35020ea9
- (void)setIsFlipped:(BOOL)flipped;	// 0x35033b11
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x35020d21
@end

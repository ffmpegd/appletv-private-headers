/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDrawableMapper.h"

@class WDAContent;

__attribute__((visibility("hidden")))
@interface WMOfficeArtMapper : CMDrawableMapper {
@private
	BOOL mFloating;	// 80 = 0x50
	BOOL mIsMapped;	// 81 = 0x51
	BOOL mIsInsideGroup;	// 82 = 0x52
	WDAContent *mContent;	// 84 = 0x54
	unsigned mCurrentPage;	// 88 = 0x58
}
@property(assign) BOOL isInsideGroup;	// G=0x357d1791; S=0x356a0e11; converted property
- (id)initWithOadDrawable:(id)oadDrawable asFloating:(BOOL)floating origin:(CGPoint)origin parent:(id)parent;	// 0x35624ea9
- (id)initWithWdOfficeArt:(id)wdOfficeArt parent:(id)parent;	// 0x35624dc1
- (id)blipAtIndex:(unsigned)index;	// 0x3563b48d
- (CGSize)expandedSizeForTextBox:(id)textBox withState:(id)state;	// 0x356a3f15
// converted property getter: - (BOOL)isInsideGroup;	// 0x357d1791
- (void)mapAt:(id)at withState:(id)state;	// 0x35625081
- (void)mapDiagramAt:(id)at withState:(id)state;	// 0x357d17b1
- (void)mapOfficeArtGroupAt:(id)at withState:(id)state;	// 0x356a0c5d
- (void)mapOfficeArtImageAt:(id)at withState:(id)state;	// 0x3563b4f5
- (void)mapOfficeArtShapeAt:(id)at withState:(id)state;	// 0x35625bd1
- (void)mapOfficeArtTextboxAt:(id)at withState:(id)state;	// 0x35626165
- (void)mapTextBoxAt:(id)at withState:(id)state;	// 0x35680f5d
- (void)setBoundingBox;	// 0x35624fe9
- (void)setCurrentPage:(unsigned)page;	// 0x357d17a1
// converted property setter: - (void)setIsInsideGroup:(BOOL)group;	// 0x356a0e11
- (void)setWithClientData:(id)clientData state:(id)state;	// 0x3562535d
@end

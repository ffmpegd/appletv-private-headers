/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDrawableMapper.h"

@class WDAContent;

@interface WMOfficeArtMapper : CMDrawableMapper {
	BOOL mFloating;	// 80 = 0x50
	BOOL mIsMapped;	// 81 = 0x51
	BOOL mIsInsideGroup;	// 82 = 0x52
	WDAContent *mContent;	// 84 = 0x54
	unsigned mCurrentPage;	// 88 = 0x58
}
@property(assign) BOOL isInsideGroup;	// G=0x349d8cf5; S=0x3499168d; converted property
- (id)initWithOadDrawable:(id)oadDrawable asFloating:(BOOL)floating origin:(CGPoint)origin parent:(id)parent;	// 0x348ff345
- (id)initWithWdOfficeArt:(id)wdOfficeArt parent:(id)parent;	// 0x348ff279
- (id)blipAtIndex:(unsigned)index;	// 0x348ff555
- (CGSize)expandedSizeForTextBox:(id)textBox withState:(id)state;	// 0x349916a1
// converted property getter: - (BOOL)isInsideGroup;	// 0x349d8cf5
- (void)mapAt:(id)at withState:(id)state;	// 0x348ff6c9
- (void)mapDiagramAt:(id)at withState:(id)state;	// 0x349d8d19
- (void)mapOfficeArtGroupAt:(id)at withState:(id)state;	// 0x34991491
- (void)mapOfficeArtImageAt:(id)at withState:(id)state;	// 0x34900161
- (void)mapOfficeArtShapeAt:(id)at withState:(id)state;	// 0x34907485
- (void)mapOfficeArtTextboxAt:(id)at withState:(id)state;	// 0x349079b1
- (void)mapTextBoxAt:(id)at withState:(id)state;	// 0x349ace99
- (void)setBoundingBox;	// 0x348ff479
- (void)setCurrentPage:(unsigned)page;	// 0x349d8d09
// converted property setter: - (void)setIsInsideGroup:(BOOL)group;	// 0x3499168d
- (void)setWithClientData:(id)clientData state:(id)state;	// 0x348ff95d
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMDrawableMapper.h"
#import "OfficeImport-Structs.h"

@class WDAContent;

@interface WMOfficeArtMapper : CMDrawableMapper {
	BOOL mFloating;	// 80 = 0x50
	BOOL mIsMapped;	// 81 = 0x51
	BOOL mIsInsideGroup;	// 82 = 0x52
	WDAContent *mContent;	// 84 = 0x54
	unsigned mCurrentPage;	// 88 = 0x58
}
@property(assign) BOOL isInsideGroup;	// G=0x318a3021; S=0x3184a839; converted property
- (id)initWithOadDrawable:(id)oadDrawable asFloating:(BOOL)floating origin:(CGPoint)origin parent:(id)parent;	// 0x317d8a91
- (id)initWithWdOfficeArt:(id)wdOfficeArt parent:(id)parent;	// 0x317d89a9
- (id)blipAtIndex:(unsigned)index;	// 0x317e36b5
- (CGSize)expandedSizeForTextBox:(id)textBox withState:(id)state;	// 0x3184b3a5
// converted property getter: - (BOOL)isInsideGroup;	// 0x318a3021
- (void)mapAt:(id)at withState:(id)state;	// 0x317d8c9d
- (void)mapDiagramAt:(id)at withState:(id)state;	// 0x318a3049
- (void)mapOfficeArtGroupAt:(id)at withState:(id)state;	// 0x3184a649
- (void)mapOfficeArtImageAt:(id)at withState:(id)state;	// 0x317e3721
- (void)mapOfficeArtShapeAt:(id)at withState:(id)state;	// 0x317d971d
- (void)mapOfficeArtTextboxAt:(id)at withState:(id)state;	// 0x317d9c61
- (void)mapTextBoxAt:(id)at withState:(id)state;	// 0x3187f9e1
- (void)setBoundingBox;	// 0x317d8bc9
- (void)setCurrentPage:(unsigned)page;	// 0x318a3035
// converted property setter: - (void)setIsInsideGroup:(BOOL)group;	// 0x3184a839
- (void)setWithClientData:(id)clientData state:(id)state;	// 0x317d8f25
@end


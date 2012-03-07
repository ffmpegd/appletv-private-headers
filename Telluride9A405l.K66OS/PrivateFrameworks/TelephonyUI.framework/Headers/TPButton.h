/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIButton.h> // Unknown library

@class UIImageView;

@interface TPButton : UIButton {
	UIImageView *_plusSeparator;	// 140 = 0x8c
	int _color;	// 144 = 0x90
}
@property(assign) int buttonColor;	// G=0x350d239d; S=0x350d2429; converted property
+ (id)acceptVideoButtonImage;	// 0x350d2a65
+ (id)answerButtonImage;	// 0x350d2951
+ (id)declineButtonImage;	// 0x350d29ad
+ (id)declineVideoButtonImage;	// 0x350d2a09
+ (float)defaultHeight;	// 0x350d2475
+ (float)defaultHeightForColor:(int)color;	// 0x350d2cb5
+ (void)preloadImagesForColor:(int)color;	// 0x350d2945
- (id)initWithTitle:(id)title icon:(id)icon color:(int)color frame:(CGRect)frame;	// 0x350d2ac1
- (void)_adjustIconColor;	// 0x350d23ad
- (void)_setButtonColor:(int)color;	// 0x350d2635
- (void)_setDisabledButtonColor:(int)color;	// 0x350d2919
// converted property getter: - (int)buttonColor;	// 0x350d239d
- (void)dealloc;	// 0x350d31e5
- (CGRect)imageRectForContentRect:(CGRect)contentRect;	// 0x350d32b5
// converted property setter: - (void)setButtonColor:(int)color;	// 0x350d2429
- (void)setDisabledButtonColor:(int)color;	// 0x350d2439
- (void)setEnabled:(BOOL)enabled;	// 0x350d340d
- (void)setFrame:(CGRect)frame;	// 0x350d3319
- (void)setHighlighted:(BOOL)highlighted;	// 0x350d344d
- (void)setIconVerticalOffset:(float)offset;	// 0x350d2ce5
- (void)setMinimumTitleFontSize:(float)size;	// 0x350d2449
- (void)setPlusSeparatedTitle:(id)title;	// 0x350d2d95
- (void)setTitleImagePadding:(float)padding;	// 0x350d3351
- (void)setTitleVerticalOffset:(float)offset;	// 0x350d2d45
- (CGRect)titleRectForContentRect:(CGRect)contentRect;	// 0x350d3245
@end


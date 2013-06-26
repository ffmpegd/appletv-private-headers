/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import "SBDeviceLockTitle.h"

@class TPLegacyLCDView;

@interface SBDeviceLockTitlePhone : SBDeviceLockTitle {
	BOOL _highlighted;	// 104 = 0x68
	TPLegacyLCDView *_lcdView;	// 108 = 0x6c
}
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x32781edd; S=0x32781eed; converted property
@property(retain) id subtitle;	// G=0x32782079; S=0x32782099; converted property
@property(retain) id title;	// G=0x32782039; S=0x32782059; converted property
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation;	// 0x32781d91
- (void)blinkSubtitle;	// 0x327820f1
- (void)dealloc;	// 0x32781e91
// converted property getter: - (BOOL)isHighlighted;	// 0x32781edd
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x32781eed
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x32782099
// converted property setter: - (void)setTitle:(id)title;	// 0x32782059
// converted property getter: - (id)subtitle;	// 0x32782079
// converted property getter: - (id)title;	// 0x32782039
@end

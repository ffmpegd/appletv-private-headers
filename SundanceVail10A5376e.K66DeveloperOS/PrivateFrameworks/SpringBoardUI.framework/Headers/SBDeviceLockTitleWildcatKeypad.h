/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import "SBDeviceLockTitle.h"

@class UILabel;

@interface SBDeviceLockTitleWildcatKeypad : SBDeviceLockTitle {
	BOOL _highlighted;	// 92 = 0x5c
	UILabel *_titleLabel;	// 96 = 0x60
	UILabel *_subtitleLabel;	// 100 = 0x64
}
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x3570d9a1; S=0x3570d9b1; converted property
@property(retain) id subtitle;	// G=0x3570daa9; S=0x3570dac9; converted property
@property(retain) id title;	// G=0x3570da69; S=0x3570da89; converted property
- (id)_backgroundImage;	// 0x3570d959
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation;	// 0x3570d4d9
- (void)blinkSubtitle;	// 0x3570db05
- (void)dealloc;	// 0x3570d841
// converted property getter: - (BOOL)isHighlighted;	// 0x3570d9a1
- (void)layoutSubviews;	// 0x3570d8a5
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x3570d9b1
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x3570dac9
// converted property setter: - (void)setTitle:(id)title;	// 0x3570da89
// converted property getter: - (id)subtitle;	// 0x3570daa9
// converted property getter: - (id)title;	// 0x3570da69
@end


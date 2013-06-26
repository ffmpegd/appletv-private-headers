/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import "SBDeviceLockTitle.h"

@class UILabel;

@interface SBDeviceLockTitleWildcatKeyboard : SBDeviceLockTitle {
	BOOL _highlighted;	// 92 = 0x5c
	UILabel *_titleLabel;	// 96 = 0x60
	UILabel *_subtitleLabel;	// 100 = 0x64
}
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x377a2f1d; S=0x377a2f2d; converted property
@property(retain) id subtitle;	// G=0x377a3099; S=0x377a30b9; converted property
@property(retain) id title;	// G=0x377a300d; S=0x377a302d; converted property
- (id)_backgroundImage;	// 0x377a2ee1
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation;	// 0x377a2a7d
- (void)blinkSubtitle;	// 0x377a3125
- (void)dealloc;	// 0x377a2dbd
// converted property getter: - (BOOL)isHighlighted;	// 0x377a2f1d
- (void)layoutSubviews;	// 0x377a2e21
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x377a2f2d
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x377a30b9
// converted property setter: - (void)setTitle:(id)title;	// 0x377a302d
// converted property getter: - (id)subtitle;	// 0x377a3099
// converted property getter: - (id)title;	// 0x377a300d
@end

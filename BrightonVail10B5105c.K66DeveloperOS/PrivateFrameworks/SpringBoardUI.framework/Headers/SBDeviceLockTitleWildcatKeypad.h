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
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x303f78e1; S=0x303f78f1; converted property
@property(retain) id subtitle;	// G=0x303f79e9; S=0x303f7a09; converted property
@property(retain) id title;	// G=0x303f79a9; S=0x303f79c9; converted property
- (id)_backgroundImage;	// 0x303f7899
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation;	// 0x303f7419
- (void)blinkSubtitle;	// 0x303f7a45
- (void)dealloc;	// 0x303f7781
// converted property getter: - (BOOL)isHighlighted;	// 0x303f78e1
- (void)layoutSubviews;	// 0x303f77e5
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x303f78f1
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x303f7a09
// converted property setter: - (void)setTitle:(id)title;	// 0x303f79c9
// converted property getter: - (id)subtitle;	// 0x303f79e9
// converted property getter: - (id)title;	// 0x303f79a9
@end


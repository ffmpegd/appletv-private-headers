/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIScrollView.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UIPrinterSetupPINScrollView : UIScrollView {
	UIView *_contentView;	// 460 = 0x1cc
	float _visibleHeight;	// 464 = 0x1d0
}
@property(retain, nonatomic) UIView *contentView;	// G=0x2f950299; S=0x2f9502a9; @synthesize=_contentView
@property(assign, nonatomic) float visibleHeight;	// G=0x2f9502b9; S=0x2f9502c9; @synthesize=_visibleHeight
- (id)initWithContentView:(id)contentView;	// 0x2f94fdb1
- (BOOL)_scrollsToMakeFirstResponderVisible;	// 0x2f95019d
// declared property getter: - (id)contentView;	// 0x2f950299
- (void)dealloc;	// 0x2f94fec9
- (void)keyboardDidChangeFrame:(id)keyboard;	// 0x2f94ff39
- (void)layoutSubviews;	// 0x2f9500c5
- (void)scrollRectToVisible:(CGRect)visible animated:(BOOL)animated;	// 0x2f9501a1
// declared property setter: - (void)setContentView:(id)view;	// 0x2f9502a9
// declared property setter: - (void)setVisibleHeight:(float)height;	// 0x2f9502c9
// declared property getter: - (float)visibleHeight;	// 0x2f9502b9
@end


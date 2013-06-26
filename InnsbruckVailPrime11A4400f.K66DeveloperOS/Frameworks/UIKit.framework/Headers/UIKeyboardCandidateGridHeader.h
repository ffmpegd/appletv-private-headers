/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class UIKBBackdropView, UIButton, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateGridHeader : UIView {
	UILabel *_inlineTextLabel;	// 96 = 0x60
	float _inlineTextRightMargin;	// 100 = 0x64
	UIButton *_toggleButton;	// 104 = 0x68
	UIKBBackdropView *_backdropView;	// 108 = 0x6c
}
@property(retain, nonatomic) UIKBBackdropView *backdropView;	// G=0x2f83f4fd; S=0x2f83f50d; @synthesize=_backdropView
@property(copy, nonatomic) NSString *inlineText;	// G=0x2f83f431; S=0x2f83f459; 
@property(retain, nonatomic) UILabel *inlineTextLabel;	// G=0x2f83f49d; S=0x2f83f4ad; @synthesize=_inlineTextLabel
@property(assign, nonatomic) float inlineTextRightMargin;	// G=0x2f83f4bd; S=0x2f83f4cd; @synthesize=_inlineTextRightMargin
@property(retain, nonatomic) UIButton *toggleButton;	// G=0x2f83f4dd; S=0x2f83f4ed; @synthesize=_toggleButton
- (id)initWithFrame:(CGRect)frame;	// 0x2f83ed69
// declared property getter: - (id)backdropView;	// 0x2f83f4fd
- (void)dealloc;	// 0x2f83f10d
// declared property getter: - (id)inlineText;	// 0x2f83f431
// declared property getter: - (id)inlineTextLabel;	// 0x2f83f49d
// declared property getter: - (float)inlineTextRightMargin;	// 0x2f83f4bd
- (void)layoutSubviews;	// 0x2f83f185
// declared property setter: - (void)setBackdropView:(id)view;	// 0x2f83f50d
// declared property setter: - (void)setInlineText:(id)text;	// 0x2f83f459
// declared property setter: - (void)setInlineTextLabel:(id)label;	// 0x2f83f4ad
// declared property setter: - (void)setInlineTextRightMargin:(float)margin;	// 0x2f83f4cd
// declared property setter: - (void)setToggleButton:(id)button;	// 0x2f83f4ed
// declared property getter: - (id)toggleButton;	// 0x2f83f4dd
@end

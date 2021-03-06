/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface UIPickerContentView : UIView {
@private
	UILabel *_titleLabel;	// 48 = 0x30
	UIImageView *_checkView;	// 52 = 0x34
	struct {
		unsigned hideForSinglePage : 1;
		unsigned defersCurrentPageDisplay : 1;
	} _pickerContentViewFlags;	// 56 = 0x38
}
@property(assign, nonatomic, getter=isChecked) BOOL checked;	// G=0x3567b2a9; S=0x3567b2bd; 
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x3567b851; S=0x3567b865; converted property
@property(readonly, assign, nonatomic) UILabel *titleLabel;	// G=0x3567b4b9; 
+ (float)_checkmarkOffset;	// 0x3567b241
- (BOOL)_isSelectable;	// 0x3567b8b1
- (void)dealloc;	// 0x3567b249
// declared property getter: - (BOOL)isChecked;	// 0x3567b2a9
// converted property getter: - (BOOL)isHighlighted;	// 0x3567b851
- (float)labelWidthForBounds:(CGRect)bounds;	// 0x3567b885
- (void)layoutSubviews;	// 0x3567b6f9
// declared property setter: - (void)setChecked:(BOOL)checked;	// 0x3567b2bd
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x3567b865
// declared property getter: - (id)titleLabel;	// 0x3567b4b9
@end


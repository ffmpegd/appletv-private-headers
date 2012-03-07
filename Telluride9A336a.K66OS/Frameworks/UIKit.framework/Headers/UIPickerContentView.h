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
@property(assign, nonatomic, getter=isChecked) BOOL checked;	// G=0x35423b15; S=0x35423b29; 
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x354240bd; S=0x354240d1; converted property
@property(readonly, assign, nonatomic) UILabel *titleLabel;	// G=0x35423d25; 
+ (float)_checkmarkOffset;	// 0x35423aad
- (BOOL)_isSelectable;	// 0x3542411d
- (void)dealloc;	// 0x35423ab5
// declared property getter: - (BOOL)isChecked;	// 0x35423b15
// converted property getter: - (BOOL)isHighlighted;	// 0x354240bd
- (float)labelWidthForBounds:(CGRect)bounds;	// 0x354240f1
- (void)layoutSubviews;	// 0x35423f65
// declared property setter: - (void)setChecked:(BOOL)checked;	// 0x35423b29
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x354240d1
// declared property getter: - (id)titleLabel;	// 0x35423d25
@end


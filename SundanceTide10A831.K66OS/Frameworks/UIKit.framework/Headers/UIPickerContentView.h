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
	UILabel *_titleLabel;	// 84 = 0x54
	UIImageView *_checkView;	// 88 = 0x58
	struct {
		unsigned hideForSinglePage : 1;
		unsigned defersCurrentPageDisplay : 1;
	} _pickerContentViewFlags;	// 92 = 0x5c
}
@property(assign, nonatomic, getter=isChecked) BOOL checked;	// G=0x31f5a869; S=0x31f5a87d; 
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x31f5ade9; S=0x31f5adfd; converted property
@property(readonly, assign, nonatomic) UILabel *titleLabel;	// G=0x31f5aa71; 
+ (float)_checkmarkOffset;	// 0x31f5a7fd
- (BOOL)_isSelectable;	// 0x31f5ae49
- (void)dealloc;	// 0x31f5a805
// declared property getter: - (BOOL)isChecked;	// 0x31f5a869
// converted property getter: - (BOOL)isHighlighted;	// 0x31f5ade9
- (float)labelWidthForBounds:(CGRect)bounds;	// 0x31f5ae1d
- (void)layoutSubviews;	// 0x31f5aca5
// declared property setter: - (void)setChecked:(BOOL)checked;	// 0x31f5a87d
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x31f5adfd
// declared property getter: - (id)titleLabel;	// 0x31f5aa71
@end


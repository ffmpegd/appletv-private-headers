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
@property(assign, nonatomic, getter=isChecked) BOOL checked;	// G=0x30f72da1; S=0x30f72db5; 
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x30f73321; S=0x30f73335; converted property
@property(readonly, assign, nonatomic) UILabel *titleLabel;	// G=0x30f72fa9; 
+ (float)_checkmarkOffset;	// 0x30f72d35
- (BOOL)_isSelectable;	// 0x30f73381
- (void)dealloc;	// 0x30f72d3d
// declared property getter: - (BOOL)isChecked;	// 0x30f72da1
// converted property getter: - (BOOL)isHighlighted;	// 0x30f73321
- (float)labelWidthForBounds:(CGRect)bounds;	// 0x30f73355
- (void)layoutSubviews;	// 0x30f731dd
// declared property setter: - (void)setChecked:(BOOL)checked;	// 0x30f72db5
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x30f73335
// declared property getter: - (id)titleLabel;	// 0x30f72fa9
@end

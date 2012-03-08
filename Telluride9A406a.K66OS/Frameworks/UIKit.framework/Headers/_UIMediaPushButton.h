/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIThreePartButton.h"

@class UIImageView, UIImage, UILabel;

__attribute__((visibility("hidden")))
@interface _UIMediaPushButton : UIThreePartButton {
@private
	UIImageView *_icon;	// 172 = 0xac
	UIImageView *_selectionMark;	// 176 = 0xb0
	UILabel *_titleView;	// 180 = 0xb4
	UIImage *_tableIcon;	// 184 = 0xb8
	UIImage *_highlightedTableIcon;	// 188 = 0xbc
}
@property(retain, nonatomic) UIImage *highlightedTableIcon;	// G=0x359c01c9; S=0x359c01d9; @synthesize=_highlightedTableIcon
@property(retain, nonatomic) UIImageView *icon;	// G=0x359c0175; S=0x359bf9a1; @synthesize=_icon
@property(retain, nonatomic) UIImageView *selectionMark;	// G=0x359c0185; S=0x359bfa2d; @synthesize=_selectionMark
@property(retain, nonatomic) UIImage *tableIcon;	// G=0x359c0195; S=0x359c01a5; @synthesize=_tableIcon
- (void)_drawImageAndTextPartInRect:(CGRect)rect;	// 0x359bfbb9
- (void)dealloc;	// 0x359bfbbd
// declared property getter: - (id)highlightedTableIcon;	// 0x359c01c9
// declared property getter: - (id)icon;	// 0x359c0175
- (void)layoutSubviews;	// 0x359bfc59
// declared property getter: - (id)selectionMark;	// 0x359c0185
- (void)setHighlighted:(BOOL)highlighted;	// 0x359bfee1
// declared property setter: - (void)setHighlightedTableIcon:(id)icon;	// 0x359c01d9
// declared property setter: - (void)setIcon:(id)icon;	// 0x359bf9a1
// declared property setter: - (void)setSelectionMark:(id)mark;	// 0x359bfa2d
// declared property setter: - (void)setTableIcon:(id)icon;	// 0x359c01a5
- (void)setTitle:(id)title;	// 0x359bfab9
- (void)setupTextAttributes;	// 0x359c0019
// declared property getter: - (id)tableIcon;	// 0x359c0195
@end

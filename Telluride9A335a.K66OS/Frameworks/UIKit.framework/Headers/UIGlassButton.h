/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIButton.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface UIGlassButton : UIButton {
@private
	UIColor *_tintColor;	// 140 = 0x8c
}
@property(retain) UIColor *tintColor;	// G=0x33be6a11; S=0x33be68b1; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x33be6651
- (id)backgroundImageForState:(unsigned)state;	// 0x33be6a0d
- (void)dealloc;	// 0x33be6865
- (void)setBackgroundImage:(id)image forStates:(unsigned)states;	// 0x33be6a09
// converted property setter: - (void)setTintColor:(id)color;	// 0x33be68b1
- (void)setTitleColor:(id)color forStates:(unsigned)states;	// 0x33be69f9
- (void)setTitleShadowColor:(id)color forStates:(unsigned)states;	// 0x33be6a01
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33be693d
// converted property getter: - (id)tintColor;	// 0x33be6a11
- (id)titleColorForState:(unsigned)state;	// 0x33be69fd
- (CGRect)titleRectForContentRect:(CGRect)contentRect;	// 0x33be699d
- (id)titleShadowColorForState:(unsigned)state;	// 0x33be6a05
@end


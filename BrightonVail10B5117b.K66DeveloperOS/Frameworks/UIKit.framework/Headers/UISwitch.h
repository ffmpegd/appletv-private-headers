/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"
#import "NSCoding.h"

@class UIColor, UIImage;

@interface UISwitch : UIControl <NSCoding> {
	id _control;	// 108 = 0x6c
	float _enabledAlpha;	// 112 = 0x70
}
@property(assign, nonatomic) float enabledAlpha;	// G=0x32f0b48d; S=0x32d65f9d; @synthesize=_enabledAlpha
@property(retain, nonatomic) UIImage *offImage;	// G=0x32f0b3dd; S=0x32f0b3bd; 
@property(assign, nonatomic, getter=isOn) BOOL on;	// G=0x32d6ac91; S=0x32d65fbd; @dynamic
@property(retain, nonatomic, getter=_onColor, setter=_setOnColor:) UIColor *onColor;	// G=0x32f0b2ed; S=0x32f0b2dd; 
@property(retain, nonatomic) UIImage *onImage;	// G=0x32f0b41d; S=0x32f0b3fd; 
@property(retain, nonatomic) UIColor *onTintColor;	// G=0x32f0b31d; S=0x32d6618d; 
@property(retain, nonatomic) UIColor *thumbTintColor;	// G=0x32f0b39d; S=0x32f0b37d; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x32f0b35d; S=0x32f0b33d; 
- (id)init;	// 0x32f0aa65
- (id)initWithCoder:(id)coder;	// 0x32f0aab9
- (id)initWithFrame:(CGRect)frame;	// 0x32d645d1
- (void)_animateToOn:(BOOL)on withDuration:(float)duration sendAction:(BOOL)action;	// 0x32e52fb9
- (void)_commonInitNewLook;	// 0x32d64769
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;	// 0x32f0b2c5
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;	// 0x32f0b2c1
- (void)_encodeFrameWithCoder:(id)coder;	// 0x32f0ad6d
- (void)_handlePanNL:(id)nl;	// 0x32f0a7d1
- (void)_handleTapNL:(id)nl;	// 0x32f0aa01
- (CGSize)_intrinsicSizeWithinSize:(CGSize)size;	// 0x32d64721
- (void)_onAnimationDidStop:(id)_onAnimation finished:(id)finished context:(void *)context;	// 0x32f0b229
// declared property getter: - (id)_onColor;	// 0x32f0b2ed
- (id)_onTintColor;	// 0x32f0b30d
- (void)_populateArchivedSubviews:(id)subviews;	// 0x32f0b43d
- (id)_scriptingInfo;	// 0x32f0b4bd
// declared property setter: - (void)_setOnColor:(id)color;	// 0x32f0b2dd
- (void)_setOnTintColor:(id)color;	// 0x32f0b2fd
- (BOOL)_useOldSize;	// 0x32d64655
- (UIEdgeInsets)alignmentRectInsets;	// 0x32f0b2c9
- (void)dealloc;	// 0x32e329c5
- (unsigned long long)defaultAccessibilityTraits;	// 0x32f272cd
// declared property getter: - (float)enabledAlpha;	// 0x32f0b48d
- (void)encodeWithCoder:(id)coder;	// 0x32f0b005
- (BOOL)isAccessibilityElementByDefault;	// 0x32f272c9
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x32f272e1
// declared property getter: - (BOOL)isOn;	// 0x32d6ac91
// declared property getter: - (id)offImage;	// 0x32f0b3dd
// declared property getter: - (id)onImage;	// 0x32f0b41d
// declared property getter: - (id)onTintColor;	// 0x32f0b31d
- (void)setAlpha:(float)alpha;	// 0x32d66eb1
- (void)setAlternateColors:(BOOL)colors;	// 0x32f0b49d
- (void)setEnabled:(BOOL)enabled;	// 0x32d6acb5
// declared property setter: - (void)setEnabledAlpha:(float)alpha;	// 0x32d65f9d
- (void)setFrame:(CGRect)frame;	// 0x32d6468d
// declared property setter: - (void)setOffImage:(id)image;	// 0x32f0b3bd
// declared property setter: - (void)setOn:(BOOL)on;	// 0x32d65fbd
- (void)setOn:(BOOL)on animated:(BOOL)animated;	// 0x32d65fd1
// declared property setter: - (void)setOnImage:(id)image;	// 0x32f0b3fd
// declared property setter: - (void)setOnTintColor:(id)color;	// 0x32d6618d
// declared property setter: - (void)setThumbTintColor:(id)color;	// 0x32f0b37d
// declared property setter: - (void)setTintColor:(id)color;	// 0x32f0b33d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32d646f1
// declared property getter: - (id)thumbTintColor;	// 0x32f0b39d
// declared property getter: - (id)tintColor;	// 0x32f0b35d
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UIColor, _UIPressedIndicatorView, UILabel, UIToolbarButtonBadge;

__attribute__((visibility("hidden")))
@interface UIToolbarButton : UIControl {
@private
	CGRect _hitRect;	// 72 = 0x48
	UIView *_info;	// 88 = 0x58
	UILabel *_label;	// 92 = 0x5c
	UIToolbarButtonBadge *_badge;	// 96 = 0x60
	_UIPressedIndicatorView *_pressedIndicator;	// 100 = 0x64
	int _barStyle;	// 104 = 0x68
	int _style;	// 108 = 0x6c
	UIEdgeInsets _glowAdjust;	// 112 = 0x70
	BOOL _onState;	// 128 = 0x80
	BOOL _barHeight;	// 129 = 0x81
	BOOL _badgeAnimated;	// 130 = 0x82
	BOOL _bezel;	// 131 = 0x83
	float _minimumWidth;	// 132 = 0x84
	float _maximumWidth;	// 136 = 0x88
	float _labelHeight;	// 140 = 0x8c
	UIEdgeInsets _infoInsets;	// 144 = 0x90
	UIColor *_toolbarTintColor;	// 160 = 0xa0
	BOOL _isAnimatedTrashButton;	// 164 = 0xa4
	id _appearanceStorage;	// 168 = 0xa8
	BOOL _isInTopBar;	// 172 = 0xac
}
@property(retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;	// G=0x32f82f9d; S=0x330b71b1; 
@property(assign, nonatomic, getter=isAnimatedTrashButton) BOOL animatedTrashButton;	// G=0x32f65715; S=0x32f5f0d1; @synthesize=_isAnimatedTrashButton
+ (id)_defaultLabelColor;	// 0x330b6109
+ (id)_defaultLabelFont;	// 0x330b60e5
- (id)initWithImage:(id)image pressedImage:(id)image2 label:(id)label labelHeight:(float)height withBarStyle:(int)barStyle withStyle:(int)style withInsets:(UIEdgeInsets)insets possibleTitles:(id)titles withToolbarTintColor:(id)toolbarTintColor bezel:(BOOL)bezel imageInsets:(UIEdgeInsets)insets11 glowInsets:(UIEdgeInsets)insets12;	// 0x32f5d7b9
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x330b71e9
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x330b755d
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x330b7565
- (void)_UIAppearance_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x32f834e1
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x330b71f1
- (void)_UIAppearance_setTintColor:(id)color;	// 0x330b7109
- (void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x330b7371
- (void)_UIAppearance_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x330b71c1
- (void)_adjustPushButtonForMiniBar:(BOOL)miniBar isChangingBarHeight:(BOOL)height;	// 0x32f5ea25
- (void)_adjustToolbarButtonInfo;	// 0x32f83841
- (void)_adjustToolbarButtonInfoTintColorHasChanged:(BOOL)changed;	// 0x32f83855
- (void)_animateImage:(float)image withButtonBar:(id)buttonBar;	// 0x330b6ec5
- (void)_animateImage:(float)image withButtonBar:(id)buttonBar target:(id)target didFinishSelector:(SEL)selector;	// 0x330b6e29
- (void)_applyBarButtonAppearanceStorage:(id)storage withTaggedSelectors:(id)taggedSelectors;	// 0x32f5f155
- (id)_backgroundImageForState:(unsigned)state barMetrics:(int)metrics;	// 0x330b70a9
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x330b7319
- (void)_badgeAnimationDidStop:(id)_badgeAnimation finished:(id)finished;	// 0x330b6a95
- (CGRect)_buttonBarHitRect;	// 0x32f60a41
- (BOOL)_canGetPadding;	// 0x32f60791
- (BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)location;	// 0x330b6dcd
- (id)_defaultTitleColorForState:(unsigned)state;	// 0x32f82fd9
- (id)_defaultTitleShadowColorForState:(unsigned)state;	// 0x330b6f61
- (UIOffset)_defaultTitleShadowOffsetForState:(unsigned)state;	// 0x330b7015
- (id)_info;	// 0x330b7099
- (BOOL)_isBordered;	// 0x32f62dd9
- (BOOL)_isOn;	// 0x330b6e19
- (id)_newButton;	// 0x32f82d81
- (float)_paddingForLeft:(BOOL)left;	// 0x32f62c5d
- (void)_positionBadge;	// 0x32f5dee1
- (void)_setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x330b71ed
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x330b7561
- (void)_setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x330b7569
- (void)_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x32f834d1
- (void)_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x330b7309
- (void)_setBadgeAnimated:(BOOL)animated;	// 0x330b6b55
- (void)_setBadgeValue:(id)value;	// 0x330b6829
- (void)_setBarHeight:(float)height;	// 0x32f5f0e1
- (void)_setButtonBarHitRect:(CGRect)rect;	// 0x32f60a25
- (void)_setInTopBar:(BOOL)topBar;	// 0x32f60995
- (void)_setInfoExtremityWidth:(float)width isMin:(BOOL)min;	// 0x330b6bb1
- (void)_setInfoWidth:(float)width;	// 0x32f83189
- (void)_setOn:(BOOL)on;	// 0x330b6dd1
- (void)_setPressed:(BOOL)pressed;	// 0x330b6735
// declared property setter: - (void)_setTintColor:(id)color;	// 0x330b71b1
- (void)_setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x330b74e9
- (void)_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x330b71c5
- (void)_showPressedIndicator:(BOOL)indicator;	// 0x330b65e9
- (void)_sizeView:(id)view toPossibleTitles:(id)possibleTitles pressedTitle:(id)title;	// 0x330b6251
// declared property getter: - (id)_tintColor;	// 0x32f82f9d
- (UIOffset)_titlePositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x330b74f9
- (id)_titleTextAttributesForState:(unsigned)state;	// 0x330b71c9
- (void)_updateInfoTextColorsForState:(unsigned)state;	// 0x32f83c95
- (BOOL)_useBarHeight;	// 0x32f607e5
- (BOOL)_useSilverLook;	// 0x330b6ef9
- (void)dealloc;	// 0x32f66161
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x330b6d65
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3300c909
// declared property getter: - (BOOL)isAnimatedTrashButton;	// 0x32f65715
- (void)layoutSubviews;	// 0x32f65199
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x330b6d35
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x3300c971
- (BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;	// 0x3300cf11
// declared property setter: - (void)setAnimatedTrashButton:(BOOL)button;	// 0x32f5f0d1
- (void)setBarStyle:(int)style;	// 0x32f62d55
- (void)setEnabled:(BOOL)enabled;	// 0x32f5f461
- (void)setFrame:(CGRect)frame;	// 0x32f5de99
- (void)setHighlighted:(BOOL)highlighted;	// 0x3300c9a1
- (void)setImage:(id)image;	// 0x330b6569
- (void)setSizesToFitImage:(BOOL)fitImage;	// 0x330b615d
- (void)setTintColor:(id)color;	// 0x330b6ee9
- (void)setToolbarTintColor:(id)color;	// 0x32f62d81
- (void)setUseSelectedImage:(BOOL)image;	// 0x33035371
@end


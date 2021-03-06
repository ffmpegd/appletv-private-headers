/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UILabel, _UIPressedIndicatorView, UIColor, UIToolbarButtonBadge;

__attribute__((visibility("hidden")))
@interface UIToolbarButton : UIControl {
	CGRect _hitRect;	// 108 = 0x6c
	UIView *_info;	// 124 = 0x7c
	UILabel *_label;	// 128 = 0x80
	UIToolbarButtonBadge *_badge;	// 132 = 0x84
	_UIPressedIndicatorView *_pressedIndicator;	// 136 = 0x88
	int _barStyle;	// 140 = 0x8c
	int _style;	// 144 = 0x90
	UIEdgeInsets _glowAdjust;	// 148 = 0x94
	BOOL _onState;	// 164 = 0xa4
	BOOL _barHeight;	// 165 = 0xa5
	BOOL _badgeAnimated;	// 166 = 0xa6
	BOOL _bezel;	// 167 = 0xa7
	float _minimumWidth;	// 168 = 0xa8
	float _maximumWidth;	// 172 = 0xac
	float _labelHeight;	// 176 = 0xb0
	UIEdgeInsets _infoInsets;	// 180 = 0xb4
	UIColor *_toolbarTintColor;	// 196 = 0xc4
	BOOL _isAnimatedTrashButton;	// 200 = 0xc8
	id _appearanceStorage;	// 204 = 0xcc
	BOOL _isInTopBar;	// 208 = 0xd0
}
@property(retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;	// G=0x30cca54d; S=0x30e02b55; 
@property(assign, nonatomic, getter=isAnimatedTrashButton) BOOL animatedTrashButton;	// G=0x30caf369; S=0x30ca8f41; @synthesize=_isAnimatedTrashButton
+ (id)_defaultLabelColor;	// 0x30e00efd
+ (id)_defaultLabelFont;	// 0x30e00ed9
- (id)initWithImage:(id)image pressedImage:(id)image2 label:(id)label labelHeight:(float)height withBarStyle:(int)barStyle withStyle:(int)style withInsets:(UIEdgeInsets)insets possibleTitles:(id)titles possibleSystemItems:(id)items withToolbarTintColor:(id)toolbarTintColor bezel:(BOOL)bezel imageInsets:(UIEdgeInsets)insets12 glowInsets:(UIEdgeInsets)insets13 landscape:(BOOL)landscape;	// 0x30e00f51
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x30e02b91
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x30e02ef5
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x30e02efd
- (void)_UIAppearance_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x30ccaa05
- (void)_UIAppearance_setBackgroundImage:(id)image forState:(unsigned)state style:(int)style barMetrics:(int)metrics;	// 0x30e02889
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x30e02b99
- (void)_UIAppearance_setTintColor:(id)color;	// 0x30e02ab1
- (void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x30e02d15
- (void)_UIAppearance_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x30e02b69
- (void)_adjustPushButtonForMiniBar:(BOOL)miniBar isChangingBarHeight:(BOOL)height;	// 0x30ca88b1
- (void)_adjustToolbarButtonInfo;	// 0x30ccaa29
- (void)_adjustToolbarButtonInfoTintColorHasChanged:(BOOL)changed;	// 0x30ccaa3d
- (void)_animateImage:(float)image withButtonBar:(id)buttonBar;	// 0x30e02555
- (void)_animateImage:(float)image withButtonBar:(id)buttonBar target:(id)target didFinishSelector:(SEL)selector;	// 0x30e024b5
- (void)_applyBarButtonAppearanceStorage:(id)storage withTaggedSelectors:(id)taggedSelectors;	// 0x30ca8fcd
- (id)_backgroundImageForState:(unsigned)state barMetrics:(int)metrics;	// 0x30e02a39
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x30e02cc5
- (void)_badgeAnimationDidStop:(id)_badgeAnimation finished:(id)finished;	// 0x30e02051
- (CGRect)_buttonBarHitRect;	// 0x30caaa0d
- (BOOL)_canGetPadding;	// 0x30caa775
- (BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)location;	// 0x30e023e9
- (id)_defaultTitleColorForState:(unsigned)state;	// 0x30cca589
- (id)_defaultTitleShadowColorForState:(unsigned)state;	// 0x30e025fd
- (UIOffset)_defaultTitleShadowOffsetForState:(unsigned)state;	// 0x30e026c9
- (id)_info;	// 0x30e02879
- (BOOL)_isBordered;	// 0x30caca8d
- (BOOL)_isOn;	// 0x30e024a5
- (id)_newButton;	// 0x30cca319
- (float)_paddingForLeft:(BOOL)left;	// 0x30cac911
- (void)_positionBadge;	// 0x30ca7d79
- (void)_setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x30e02b95
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x30e02ef9
- (void)_setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x30e02f01
- (void)_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x30cca9f1
- (void)_setBackgroundImage:(id)image forState:(unsigned)state style:(int)style barMetrics:(int)metrics;	// 0x30e02a29
- (void)_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x30e02cb5
- (void)_setBadgeAnimated:(BOOL)animated;	// 0x30e02111
- (void)_setBadgeValue:(id)value;	// 0x30e01e01
- (void)_setBarHeight:(float)height;	// 0x30ca8f55
- (void)_setButtonBarHitRect:(CGRect)rect;	// 0x30caa9f1
- (void)_setInTopBar:(BOOL)topBar;	// 0x30caa971
- (void)_setInfoExtremityWidth:(float)width isMin:(BOOL)min;	// 0x30e02169
- (void)_setInfoFlexibleWidth:(BOOL)width;	// 0x30e02301
- (void)_setInfoWidth:(float)width;	// 0x30cca745
- (void)_setOn:(BOOL)on;	// 0x30e02465
- (void)_setPressed:(BOOL)pressed;	// 0x30e01d09
// declared property setter: - (void)_setTintColor:(id)color;	// 0x30e02b55
- (void)_setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x30e02e81
- (void)_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x30e02b6d
- (void)_showPressedIndicator:(BOOL)indicator;	// 0x30e01bd9
- (void)_sizeView:(id)view toPossibleTitles:(id)possibleTitles pressedTitle:(id)title;	// 0x30e0182d
// declared property getter: - (id)_tintColor;	// 0x30cca54d
- (UIOffset)_titlePositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x30e02e91
- (id)_titleTextAttributesForState:(unsigned)state;	// 0x30e02b71
- (void)_updateInfoTextColorsForState:(unsigned)state;	// 0x30ccae75
- (void)_updateShadowOffsetWithAttributes:(id)attributes forState:(unsigned)state;	// 0x30e02751
- (BOOL)_useBarHeight;	// 0x30caa7c9
- (BOOL)_useSilverLook;	// 0x30e02591
- (UIEdgeInsets)alignmentRectInsets;	// 0x30e02429
- (void)dealloc;	// 0x30cafd7d
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x30e02381
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x30d4d891
// declared property getter: - (BOOL)isAnimatedTrashButton;	// 0x30caf369
- (void)layoutSubviews;	// 0x30caedd1
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x30e02351
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x30d4d8f9
- (BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;	// 0x30d4de41
// declared property setter: - (void)setAnimatedTrashButton:(BOOL)button;	// 0x30ca8f41
- (void)setBarStyle:(int)style;	// 0x30caca09
- (void)setEnabled:(BOOL)enabled;	// 0x30ca9309
- (void)setFrame:(CGRect)frame;	// 0x30ca7d31
- (void)setHighlighted:(BOOL)highlighted;	// 0x30d4d92d
- (void)setImage:(id)image;	// 0x30e01b5d
- (void)setSizesToFitImage:(BOOL)fitImage;	// 0x30e0173d
- (void)setTintColor:(id)color;	// 0x30e02581
- (void)setToolbarTintColor:(id)color;	// 0x30caca31
- (void)setUseSelectedImage:(BOOL)image;	// 0x30d72f4d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x30e023ed
@end


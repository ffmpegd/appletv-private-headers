/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

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
@property(retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;	// G=0x33aace05; S=0x33be7045; 
@property(assign, nonatomic, getter=isAnimatedTrashButton) BOOL animatedTrashButton;	// G=0x33a91af9; S=0x33a8b6c1; @synthesize=_isAnimatedTrashButton
+ (id)_defaultLabelColor;	// 0x33be53ed
+ (id)_defaultLabelFont;	// 0x33be53c9
- (id)initWithImage:(id)image pressedImage:(id)image2 label:(id)label labelHeight:(float)height withBarStyle:(int)barStyle withStyle:(int)style withInsets:(UIEdgeInsets)insets possibleTitles:(id)titles possibleSystemItems:(id)items withToolbarTintColor:(id)toolbarTintColor bezel:(BOOL)bezel imageInsets:(UIEdgeInsets)insets12 glowInsets:(UIEdgeInsets)insets13 landscape:(BOOL)landscape;	// 0x33be5441
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x33be7081
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x33be73e5
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x33be73ed
- (void)_UIAppearance_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x33aad2bd
- (void)_UIAppearance_setBackgroundImage:(id)image forState:(unsigned)state style:(int)style barMetrics:(int)metrics;	// 0x33be6d79
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x33be7089
- (void)_UIAppearance_setTintColor:(id)color;	// 0x33be6fa1
- (void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x33be7205
- (void)_UIAppearance_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x33be7059
- (void)_adjustPushButtonForMiniBar:(BOOL)miniBar isChangingBarHeight:(BOOL)height;	// 0x33a8b031
- (void)_adjustToolbarButtonInfo;	// 0x33aad2e1
- (void)_adjustToolbarButtonInfoTintColorHasChanged:(BOOL)changed;	// 0x33aad2f5
- (void)_animateImage:(float)image withButtonBar:(id)buttonBar;	// 0x33be6a45
- (void)_animateImage:(float)image withButtonBar:(id)buttonBar target:(id)target didFinishSelector:(SEL)selector;	// 0x33be69a5
- (void)_applyBarButtonAppearanceStorage:(id)storage withTaggedSelectors:(id)taggedSelectors;	// 0x33a8b74d
- (id)_backgroundImageForState:(unsigned)state barMetrics:(int)metrics;	// 0x33be6f29
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x33be71b5
- (void)_badgeAnimationDidStop:(id)_badgeAnimation finished:(id)finished;	// 0x33be6541
- (CGRect)_buttonBarHitRect;	// 0x33a8d18d
- (BOOL)_canGetPadding;	// 0x33a8cef5
- (BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)location;	// 0x33be68d9
- (id)_defaultTitleColorForState:(unsigned)state;	// 0x33aace41
- (id)_defaultTitleShadowColorForState:(unsigned)state;	// 0x33be6aed
- (UIOffset)_defaultTitleShadowOffsetForState:(unsigned)state;	// 0x33be6bb9
- (id)_info;	// 0x33be6d69
- (BOOL)_isBordered;	// 0x33a8f205
- (BOOL)_isOn;	// 0x33be6995
- (id)_newButton;	// 0x33aacbd1
- (float)_paddingForLeft:(BOOL)left;	// 0x33a8f089
- (void)_positionBadge;	// 0x33a8a4f9
- (void)_setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x33be7085
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x33be73e9
- (void)_setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x33be73f1
- (void)_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x33aad2a9
- (void)_setBackgroundImage:(id)image forState:(unsigned)state style:(int)style barMetrics:(int)metrics;	// 0x33be6f19
- (void)_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x33be71a5
- (void)_setBadgeAnimated:(BOOL)animated;	// 0x33be6601
- (void)_setBadgeValue:(id)value;	// 0x33be62f1
- (void)_setBarHeight:(float)height;	// 0x33a8b6d5
- (void)_setButtonBarHitRect:(CGRect)rect;	// 0x33a8d171
- (void)_setInTopBar:(BOOL)topBar;	// 0x33a8d0f1
- (void)_setInfoExtremityWidth:(float)width isMin:(BOOL)min;	// 0x33be6659
- (void)_setInfoFlexibleWidth:(BOOL)width;	// 0x33be67f1
- (void)_setInfoWidth:(float)width;	// 0x33aacffd
- (void)_setOn:(BOOL)on;	// 0x33be6955
- (void)_setPressed:(BOOL)pressed;	// 0x33be61f9
// declared property setter: - (void)_setTintColor:(id)color;	// 0x33be7045
- (void)_setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x33be7371
- (void)_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x33be705d
- (void)_showPressedIndicator:(BOOL)indicator;	// 0x33be60c9
- (void)_sizeView:(id)view toPossibleTitles:(id)possibleTitles pressedTitle:(id)title;	// 0x33be5d1d
// declared property getter: - (id)_tintColor;	// 0x33aace05
- (UIOffset)_titlePositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x33be7381
- (id)_titleTextAttributesForState:(unsigned)state;	// 0x33be7061
- (void)_updateInfoTextColorsForState:(unsigned)state;	// 0x33aad72d
- (void)_updateShadowOffsetWithAttributes:(id)attributes forState:(unsigned)state;	// 0x33be6c41
- (BOOL)_useBarHeight;	// 0x33a8cf49
- (BOOL)_useSilverLook;	// 0x33be6a81
- (UIEdgeInsets)alignmentRectInsets;	// 0x33be6919
- (void)dealloc;	// 0x33a9250d
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x33be6871
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x33b2f201
// declared property getter: - (BOOL)isAnimatedTrashButton;	// 0x33a91af9
- (void)layoutSubviews;	// 0x33a91561
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x33be6841
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x33b2f269
- (BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;	// 0x33b2f7b1
// declared property setter: - (void)setAnimatedTrashButton:(BOOL)button;	// 0x33a8b6c1
- (void)setBarStyle:(int)style;	// 0x33a8f181
- (void)setEnabled:(BOOL)enabled;	// 0x33a8ba89
- (void)setFrame:(CGRect)frame;	// 0x33a8a4b1
- (void)setHighlighted:(BOOL)highlighted;	// 0x33b2f29d
- (void)setImage:(id)image;	// 0x33be604d
- (void)setSizesToFitImage:(BOOL)fitImage;	// 0x33be5c2d
- (void)setTintColor:(id)color;	// 0x33be6a71
- (void)setToolbarTintColor:(id)color;	// 0x33a8f1a9
- (void)setUseSelectedImage:(BOOL)image;	// 0x33b548f5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33be68dd
@end


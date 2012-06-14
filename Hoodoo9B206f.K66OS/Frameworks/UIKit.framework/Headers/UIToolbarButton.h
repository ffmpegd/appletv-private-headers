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
@property(retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;	// G=0x353cedf5; S=0x355030c5; 
@property(assign, nonatomic, getter=isAnimatedTrashButton) BOOL animatedTrashButton;	// G=0x353b156d; S=0x353aaf29; @synthesize=_isAnimatedTrashButton
+ (id)_defaultLabelColor;	// 0x3550201d
+ (id)_defaultLabelFont;	// 0x35501ff9
- (id)initWithImage:(id)image pressedImage:(id)image2 label:(id)label labelHeight:(float)height withBarStyle:(int)barStyle withStyle:(int)style withInsets:(UIEdgeInsets)insets possibleTitles:(id)titles withToolbarTintColor:(id)toolbarTintColor bezel:(BOOL)bezel imageInsets:(UIEdgeInsets)insets11 glowInsets:(UIEdgeInsets)insets12;	// 0x353a9611
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x355030fd
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x35503471
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x35503479
- (void)_UIAppearance_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x353cf339
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x35503105
- (void)_UIAppearance_setTintColor:(id)color;	// 0x3550301d
- (void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x35503285
- (void)_UIAppearance_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x355030d5
- (void)_adjustPushButtonForMiniBar:(BOOL)miniBar isChangingBarHeight:(BOOL)height;	// 0x353aa87d
- (void)_adjustToolbarButtonInfo;	// 0x353cf699
- (void)_adjustToolbarButtonInfoTintColorHasChanged:(BOOL)changed;	// 0x353cf6ad
- (void)_animateImage:(float)image withButtonBar:(id)buttonBar;	// 0x35502dd9
- (void)_animateImage:(float)image withButtonBar:(id)buttonBar target:(id)target didFinishSelector:(SEL)selector;	// 0x35502d3d
- (void)_applyBarButtonAppearanceStorage:(id)storage withTaggedSelectors:(id)taggedSelectors;	// 0x353aafad
- (id)_backgroundImageForState:(unsigned)state barMetrics:(int)metrics;	// 0x35502fbd
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x3550322d
- (void)_badgeAnimationDidStop:(id)_badgeAnimation finished:(id)finished;	// 0x355029a9
- (CGRect)_buttonBarHitRect;	// 0x353ac899
- (BOOL)_canGetPadding;	// 0x353ac5e9
- (BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)location;	// 0x35502ce1
- (id)_defaultTitleColorForState:(unsigned)state;	// 0x353cee31
- (id)_defaultTitleShadowColorForState:(unsigned)state;	// 0x35502e75
- (UIOffset)_defaultTitleShadowOffsetForState:(unsigned)state;	// 0x35502f29
- (id)_info;	// 0x35502fad
- (BOOL)_isBordered;	// 0x353aec31
- (BOOL)_isOn;	// 0x35502d2d
- (id)_newButton;	// 0x353cebd9
- (float)_paddingForLeft:(BOOL)left;	// 0x353aeab5
- (void)_positionBadge;	// 0x353a9d39
- (void)_setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x35503101
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x35503475
- (void)_setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x3550347d
- (void)_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x353cf329
- (void)_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x3550321d
- (void)_setBadgeAnimated:(BOOL)animated;	// 0x35502a69
- (void)_setBadgeValue:(id)value;	// 0x3550273d
- (void)_setBarHeight:(float)height;	// 0x353aaf39
- (void)_setButtonBarHitRect:(CGRect)rect;	// 0x353ac87d
- (void)_setInTopBar:(BOOL)topBar;	// 0x353ac7ed
- (void)_setInfoExtremityWidth:(float)width isMin:(BOOL)min;	// 0x35502ac5
- (void)_setInfoWidth:(float)width;	// 0x353cefe1
- (void)_setOn:(BOOL)on;	// 0x35502ce5
- (void)_setPressed:(BOOL)pressed;	// 0x35502649
// declared property setter: - (void)_setTintColor:(id)color;	// 0x355030c5
- (void)_setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x355033fd
- (void)_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x355030d9
- (void)_showPressedIndicator:(BOOL)indicator;	// 0x355024fd
- (void)_sizeView:(id)view toPossibleTitles:(id)possibleTitles pressedTitle:(id)title;	// 0x35502165
// declared property getter: - (id)_tintColor;	// 0x353cedf5
- (UIOffset)_titlePositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x3550340d
- (id)_titleTextAttributesForState:(unsigned)state;	// 0x355030dd
- (void)_updateInfoTextColorsForState:(unsigned)state;	// 0x353cfaed
- (BOOL)_useBarHeight;	// 0x353ac63d
- (BOOL)_useSilverLook;	// 0x35502e0d
- (void)dealloc;	// 0x353b1fb9
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x35502c79
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x35458785
// declared property getter: - (BOOL)isAnimatedTrashButton;	// 0x353b156d
- (void)layoutSubviews;	// 0x353b0ff1
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x35502c49
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x354587ed
- (BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;	// 0x35458d8d
// declared property setter: - (void)setAnimatedTrashButton:(BOOL)button;	// 0x353aaf29
- (void)setBarStyle:(int)style;	// 0x353aebad
- (void)setEnabled:(BOOL)enabled;	// 0x353ab2b9
- (void)setFrame:(CGRect)frame;	// 0x353a9cf1
- (void)setHighlighted:(BOOL)highlighted;	// 0x3545881d
- (void)setImage:(id)image;	// 0x3550247d
- (void)setSizesToFitImage:(BOOL)fitImage;	// 0x35502071
- (void)setTintColor:(id)color;	// 0x35502dfd
- (void)setToolbarTintColor:(id)color;	// 0x353aebd9
- (void)setUseSelectedImage:(BOOL)image;	// 0x354811ed
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"
#import "_UIShadowedView.h"
#import "UIStatusBarTinting.h"

@class NSMutableArray, NSDictionary, UINavigationItem, NSArray, UIColor, UIImage;

@interface UINavigationBar : UIView <_UIShadowedView, UIStatusBarTinting, NSCoding> {
	NSMutableArray *_itemStack;	// 84 = 0x54
	float _rightMargin;	// 88 = 0x58
	unsigned _state;	// 92 = 0x5c
	id _delegate;	// 96 = 0x60
	UIView *_backgroundView;	// 100 = 0x64
	UIView *_titleView;	// 104 = 0x68
	NSArray *_leftViews;	// 108 = 0x6c
	NSArray *_rightViews;	// 112 = 0x70
	UIView *_prompt;	// 116 = 0x74
	UIView *_accessoryView;	// 120 = 0x78
	UIColor *_tintColor;	// 124 = 0x7c
	id _appearanceStorage;	// 128 = 0x80
	id _currentAlert;	// 132 = 0x84
	struct {
		unsigned animate : 1;
		unsigned animationDisabledCount : 10;
		unsigned transitioningBarStyle : 1;
		unsigned newBarStyle : 3;
		unsigned transitioningToTranslucent : 1;
		unsigned barStyle : 3;
		unsigned isTranslucent : 1;
		unsigned disableLayout : 1;
		unsigned backPressed : 1;
		unsigned animatePromptChange : 1;
		unsigned pendingHideBackButton : 1;
		unsigned titleAutosizesToFit : 1;
		unsigned usingNewAPI : 1;
		unsigned minibar : 1;
		unsigned forceFullHeightInLandscape : 1;
		unsigned isLocked : 1;
		unsigned shouldUpdatePromptAfterTransition : 1;
		unsigned crossfadeItems : 1;
		unsigned autoAdjustTitle : 1;
		unsigned isContainedInPopover : 1;
		unsigned needsDrawRect : 1;
		unsigned animationCleanupCancelled : 1;
		unsigned forceLayout : 1;
		unsigned layoutInProgress : 1;
		unsigned dynamicDuration : 1;
		unsigned isInteractive : 1;
		unsigned cancelledTransition : 1;
		unsigned animationCount : 4;
	} _navbarFlags;	// 136 = 0x88
}
@property(retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;	// G=0x30dc7e5d; S=0x30dc7e6d; 
@property(readonly, assign, nonatomic) UINavigationItem *backItem;	// G=0x30c8c265; 
@property(assign, nonatomic) int barStyle;	// G=0x30c5e915; S=0x30ccba45; 
@property(assign, nonatomic) id delegate;	// G=0x30ccbd75; S=0x30c45b0d; 
@property(assign) BOOL forceFullHeightInLandscape;	// G=0x30c3936d; S=0x30c390e9; converted property
@property(copy, nonatomic) NSArray *items;	// G=0x30cb7521; S=0x30cb75d5; 
@property(assign, getter=isLocked) BOOL locked;	// G=0x30c45b75; S=0x30c45b89; converted property
@property(retain) id navigationItems;	// G=0x30cb7545; S=0x30dca49d; converted property
@property(retain) UIView *prompt;	// G=0x30c394c5; S=0x30c4c919; converted property
@property(retain, nonatomic) UIImage *shadowImage;	// G=0x30dc9121; S=0x30dc8f91; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x30c65129; S=0x30cb08c1; 
@property(assign) BOOL titleAutoresizesToFit;	// G=0x30c4afb9; S=0x30dcb121; converted property
@property(copy, nonatomic) NSDictionary *titleTextAttributes;	// G=0x30dc8dd5; S=0x30dc8d5d; 
@property(readonly, assign, nonatomic) UINavigationItem *topItem;	// G=0x30c46e65; 
@property(assign) float topItemAlpha;	// G=0x30dcd239; S=0x30dcd259; converted property
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;	// G=0x30c650dd; S=0x30ccbc8d; 
+ (id)_bottomColorForBackgroundImage:(id)backgroundImage viewSize:(CGSize)size;	// 0x30dc86a1
+ (void)_setUseCustomBackButtonAction:(BOOL)action;	// 0x30dceffd
+ (id)_statusBarBaseTintColorForStyle:(int)style translucent:(BOOL)translucent tintColor:(id)color;	// 0x30dc8a7d
+ (id)_statusBarBaseTintColorForStyle:(int)style translucent:(BOOL)translucent tintColor:(id)color backgroundImage:(id)image viewSize:(CGSize)size;	// 0x30dc8a09
+ (BOOL)_useCustomBackButtonAction;	// 0x30dcf00d
+ (id)defaultPromptFont;	// 0x30d76eb1
+ (CGSize)defaultSize;	// 0x30c459c9
+ (CGSize)defaultSizeForOrientation:(int)orientation;	// 0x30c459f1
+ (CGSize)defaultSizeWithPrompt;	// 0x30dc945d
+ (CGSize)defaultSizeWithPromptForOrientation:(int)orientation;	// 0x30d76be1
+ (void)setDefaultAnimationDuration:(double)duration;	// 0x30dc9485
- (id)initWithCoder:(id)coder;	// 0x30dc9499
- (id)initWithFrame:(CGRect)frame;	// 0x30c44819
- (void)_adjustVisibleItemsByDelta:(float)delta;	// 0x30d76cc5
- (void)_alertIsAppearing:(id)appearing;	// 0x30dca895
- (void)_alertIsDisappearing:(id)disappearing;	// 0x30dcaa1d
- (id)_allViews;	// 0x30d3d3e5
- (id)_appearanceStorage;	// 0x30c60f19
- (void)_applySPIAppearanceToButtons;	// 0x30cd1d35
- (float)_autolayoutSpacingAtEdge:(int)edge inContainer:(id)container;	// 0x3102fc39
- (float)_autolayoutSpacingAtEdge:(int)edge nextToNeighbor:(id)neighbor;	// 0x3102fc51
- (void)_backgroundFadeDidFinish:(id)_backgroundFade finished:(id)finished context:(void *)context;	// 0x30d64ec1
// declared property getter: - (id)_backgroundView;	// 0x30dc7e5d
- (int)_barStyle:(BOOL)style;	// 0x30c4aa21
- (CGRect)_boundsForPrompt:(id)prompt inRect:(CGRect)rect withFont:(id)font barStyle:(int)style;	// 0x30dcdd41
- (BOOL)_canDrawContent;	// 0x30c449b1
- (BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)location;	// 0x30d8ae31
- (void)_cancelInProgressPushOrPop;	// 0x30cc5c35
- (void)_cancelInteractiveTransition;	// 0x30dca625
- (void)_cancelInteractiveTransition:(float)transition;	// 0x30dca141
- (id)_commonHitTest:(CGPoint)test forView:(id)view;	// 0x30cdd111
- (void)_commonNavBarInit;	// 0x30c44ac9
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;	// 0x30dca4b1
- (void)_crossFadeToBarBackgroundImageForItem:(id)item;	// 0x30dcde25
- (int)_currentBarStyle;	// 0x30dca429
- (id)_currentLeftViews;	// 0x30c46ed1
- (id)_currentRightViews;	// 0x30c47059
- (void)_customViewChangedForButtonItem:(id)buttonItem;	// 0x30d7c5c9
- (void)_decrementAnimationCountIfNecessary;	// 0x30dcb2a9
- (id)_defaultTitleFont;	// 0x30c67b69
- (id)_defaultTitleFontFittingHeight:(float)height;	// 0x30dc99e9
- (BOOL)_deferShadowToSearchBar;	// 0x30dc9225
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x30c4dc0d
- (BOOL)_didVisibleItemsChangeWithNewItems:(id)newItems oldItems:(id)items;	// 0x30cb7b3d
- (void)_drawPrompt:(id)prompt inRect:(CGRect)rect withFont:(id)font barStyle:(int)style;	// 0x30d76ed9
- (id)_effectiveTintColor;	// 0x30c45325
- (void)_fadeAllViewsIn;	// 0x30d3d30d
- (void)_fadeAllViewsOut;	// 0x30dce64d
- (void)_fadeViewOut:(id)anOut;	// 0x30dce5dd
- (void)_fadeViewsIn:(id)anIn;	// 0x30cdfa7d
- (void)_fadeViewsOut:(id)anOut;	// 0x30cdfa21
- (void)_finishInteractiveTransition:(float)transition;	// 0x30dca001
- (void)_getTitleViewFrame:(CGRect *)frame leftViewFrame:(CGRect *)frame2 rightViewFrame:(CGRect *)frame3;	// 0x30c4706d
- (void)_getTitleViewFrame:(CGRect *)frame leftViewFrame:(CGRect *)frame2 rightViewFrame:(CGRect *)frame3 forViews:(id *)views;	// 0x30c47091
- (void)_getTitleViewFrame:(CGRect *)frame leftViewFrame:(CGRect *)frame2 rightViewFrame:(CGRect *)frame3 forViews:(id *)views forItemAtIndex:(unsigned)index;	// 0x30c47129
- (void)_getTitleViewFrame:(CGRect *)frame leftViewFrames:(id)frames rightViewFrames:(id)frames3;	// 0x30dcec71
- (void)_getTitleViewFrame:(CGRect *)frame leftViewFrames:(id)frames rightViewFrames:(id)frames3 forItemAtIndex:(unsigned)index;	// 0x30c472e9
- (void)_handleMouseDownAtPoint:(CGPoint)point;	// 0x30cddd35
- (void)_handleMouseUpAtPoint:(CGPoint)point;	// 0x30cde0a9
- (BOOL)_hasBackButton;	// 0x30c46fd1
- (BOOL)_hasCustomAutolayoutNeighborSpacing;	// 0x3102fc35
- (void)_hideButtonsAnimationDidStop:(id)_hideButtonsAnimation finished:(id)finished context:(void *)context;	// 0x30dccda5
- (BOOL)_hidesShadow;	// 0x30dc9141
- (void)_incrementAnimationCountIfNecessary;	// 0x30dcb275
- (BOOL)_isIncomingButtonSameAsOutgoingButtonOnLeft:(BOOL)left;	// 0x30dcc32d
- (id)_itemStack;	// 0x30dced01
- (void)_navBarButtonPressed:(id)pressed;	// 0x30dcef51
- (void)_navigationAnimationDidFinish:(id)_navigationAnimation finished:(id)finished context:(void *)context;	// 0x30cdff29
- (id)_popNavigationItemWithTransition:(int)transition;	// 0x30c950e1
- (void)_populateArchivedSubviews:(id)subviews;	// 0x30dc9719
- (void)_prepareForPopAnimationWithNewTopItem:(id)newTopItem;	// 0x30c95c69
- (void)_prepareForPushAnimationWithItems:(id)items;	// 0x30c4ab31
- (void)_propagateEffectiveTintColorWithPreviousColor:(id)previousColor;	// 0x30dcae41
- (void)_pushNavigationItem:(id)item transition:(int)transition;	// 0x30c4a111
- (void)_removeAccessoryView;	// 0x30dcdbd9
- (void)_removeItemsFromSuperview:(id)superview;	// 0x30cb7c29
- (void)_resetBackgroundImageAsNecessary;	// 0x30dca1f5
- (void)_setAutoAdjustTitle:(BOOL)title;	// 0x30cb10d9
- (void)_setBackButtonBackgroundImage:(id)image mini:(id)mini forStates:(unsigned)states;	// 0x30cd198d
- (void)_setBackgroundImage:(id)image mini:(id)mini;	// 0x30dc7f05
// declared property setter: - (void)_setBackgroundView:(id)view;	// 0x30dc7e6d
- (void)_setBarStyle:(int)style;	// 0x30c4b06d
- (void)_setButtonBackgroundImage:(id)image mini:(id)mini forStates:(unsigned)states;	// 0x30cd1efd
- (void)_setButtonItemTextColor:(id)color shadowColor:(id)color2;	// 0x30dc81b5
- (void)_setButtonItemTextColor:(id)color shadowColor:(id)color2 forState:(unsigned)state;	// 0x30dc7f39
- (void)_setButtonTextShadowOffset:(CGSize)offset;	// 0x30dc81fd
- (void)_setDeferShadowToSearchBar:(BOOL)searchBar;	// 0x30dc9249
- (void)_setHidesShadow:(BOOL)shadow;	// 0x30dc9165
- (void)_setIsContainedInPopover:(BOOL)popover;	// 0x30dcaed1
- (void)_setItems:(id)items transition:(int)transition;	// 0x30cb76c1
- (void)_setLeftView:(id)view rightView:(id)view2;	// 0x30dcc231
- (void)_setLeftViews:(id)views rightViews:(id)views2;	// 0x30c4b321
- (void)_setNeedsLayoutForce:(BOOL)force;	// 0x30dced11
- (void)_setPressedButtonItemTextColor:(id)color shadowColor:(id)color2;	// 0x30dc81d9
- (void)_setReversesButtonTextShadowOffsetWhenPressed:(BOOL)pressed;	// 0x30dc8461
- (void)_setupTopNavItem:(id)item oldTopNavItem:(id)item2;	// 0x30cb7d01
- (id)_shadowView;	// 0x30dcf01d
- (BOOL)_shouldShowBackButtonForNavigationItem:(id)navigationItem;	// 0x30c7d2cd
- (void)_showLeftRightButtonsAnimationDidStop:(id)_showLeftRightButtonsAnimation finished:(id)finished context:(void *)context;	// 0x30ce05ed
- (void)_startBarStyleAnimation:(int)animation withTintColor:(id)tintColor;	// 0x30d64431
- (void)_startPopAnimationFromItems:(id)items fromBarStyle:(int)barStyle toItems:(id)items3 toBarStyle:(int)barStyle4;	// 0x30cdec51
- (void)_startPushAnimationFromItems:(id)items fromBarStyle:(int)barStyle;	// 0x30d28c55
- (id)_statusBarTintColor;	// 0x30dcafa9
- (BOOL)_subclassImplementsDrawBackgroundInRect;	// 0x30c44c09
- (BOOL)_subclassImplementsDrawRect;	// 0x30c448b1
- (unsigned)_subviewIndexAboveBackground;	// 0x30cdf951
- (void)_tintViewAppearanceDidChange;	// 0x30dc8ab9
- (int)_transitionForOldItems:(id)oldItems newItems:(id)items;	// 0x30dca449
- (void)_updateBackgroundImage;	// 0x30c45655
- (void)_updateInteractiveTransition:(float)transition;	// 0x30dc9f49
- (void)_updateNavigationBarItem:(id)item forStyle:(int)style;	// 0x30c452e5
- (void)_updateNavigationBarItem:(id)item forStyle:(int)style previousTintColor:(id)color;	// 0x30c45355
- (void)_updateNavigationBarItemsForStyle:(int)style;	// 0x30ccba59
- (void)_updateNavigationBarItemsForStyle:(int)style previousTintColor:(id)color;	// 0x30ccba91
- (void)_updateOpacity;	// 0x30c44a01
- (void)_updateTitleView;	// 0x30d43781
- (void)_wrapView:(id)view inClippingViewWithLeftBoundary:(float)leftBoundary rightBoundary:(float)boundary tag:(int)tag;	// 0x30dce1ed
- (void)addConstraint:(id)constraint;	// 0x30dcab9d
- (unsigned)animationDisabledCount;	// 0x30dcb61d
- (CGRect)availableTitleArea;	// 0x30dccee9
- (id)backButtonViewAtPoint:(CGPoint)point;	// 0x30cde4e1
// declared property getter: - (id)backItem;	// 0x30c8c265
- (id)backgroundImageForBarMetrics:(int)barMetrics;	// 0x30dc8d09
// declared property getter: - (int)barStyle;	// 0x30c5e915
- (id)buttonItemShadowColor;	// 0x30c75e79
- (id)buttonItemTextColor;	// 0x30c75fed
- (id)createButtonWithContents:(id)contents width:(float)width barStyle:(int)style buttonStyle:(int)style4 isRight:(BOOL)right;	// 0x30dccabd
- (id)currentBackButton;	// 0x30c49659
- (id)currentLeftView;	// 0x30d4532d
- (id)currentRightView;	// 0x30d453b1
- (void)dealloc;	// 0x30cccb69
- (float)defaultBackButtonAlignmentHeight;	// 0x30dc9331
- (CGSize)defaultSizeForOrientation:(int)orientation;	// 0x30c39381
// declared property getter: - (id)delegate;	// 0x30ccbd75
- (void)didAddSubview:(id)subview;	// 0x30c45289
- (void)disableAnimation;	// 0x30c4a359
- (void)drawBackButtonBackgroundInRect:(CGRect)rect withStyle:(int)style pressed:(BOOL)pressed;	// 0x30c8d165
- (void)drawBackgroundInRect:(CGRect)rect withStyle:(int)style;	// 0x30dcb631
- (void)drawRect:(CGRect)rect;	// 0x30cd2a4d
- (void)enableAnimation;	// 0x30c4cd85
- (void)encodeWithCoder:(id)coder;	// 0x30dc98cd
// converted property getter: - (BOOL)forceFullHeightInLandscape;	// 0x30c3936d
- (void)hideButtons;	// 0x30dccae1
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x30dca83d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x30cdd0b9
- (CGSize)intrinsicContentSize;	// 0x30dca4b5
- (void)invalidateIntrinsicContentSize;	// 0x30dca53d
- (BOOL)isAnimationEnabled;	// 0x30c4c7e5
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x30e7dc45
// converted property getter: - (BOOL)isLocked;	// 0x30c45b75
- (BOOL)isMinibar;	// 0x30c5e359
// declared property getter: - (BOOL)isTranslucent;	// 0x30c650dd
// declared property getter: - (id)items;	// 0x30cb7521
- (void)layoutSubviews;	// 0x30c465b1
- (void)mouseDown:(GSEventRef)down;	// 0x30dcaa75
- (void)mouseUp:(GSEventRef)up;	// 0x30dcaac9
- (id)navigationItemAtPoint:(CGPoint)point;	// 0x30cdde1d
// converted property getter: - (id)navigationItems;	// 0x30cb7545
- (void)popNavigationItem;	// 0x30c95489
- (id)popNavigationItemAnimated:(BOOL)animated;	// 0x30cde539
// converted property getter: - (id)prompt;	// 0x30c394c5
- (CGRect)promptBounds;	// 0x30dcb5ad
- (id)promptView;	// 0x30dcb59d
- (void)pushNavigationItem:(id)item;	// 0x30c4a379
- (void)pushNavigationItem:(id)item animated:(BOOL)animated;	// 0x30d9b73d
- (void)removeConstraint:(id)constraint;	// 0x30dcac1d
- (void)setAccessoryView:(id)view animate:(BOOL)animate;	// 0x30dc9bc5
- (void)setAutoresizingMask:(unsigned)mask;	// 0x30dcce99
- (void)setBackgroundImage:(id)image forBarMetrics:(int)barMetrics;	// 0x30dc8b35
// declared property setter: - (void)setBarStyle:(int)style;	// 0x30ccba45
- (void)setBounds:(CGRect)bounds;	// 0x30c45e09
- (void)setButton:(int)button enabled:(BOOL)enabled;	// 0x30dcc9cd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30c45b0d
// converted property setter: - (void)setForceFullHeightInLandscape:(BOOL)landscape;	// 0x30c390e9
- (void)setFrame:(CGRect)frame;	// 0x30c394ed
// declared property setter: - (void)setItems:(id)items;	// 0x30cb75d5
- (void)setItems:(id)items animated:(BOOL)animated;	// 0x30cb75e9
// converted property setter: - (void)setLocked:(BOOL)locked;	// 0x30c45b89
// converted property setter: - (void)setNavigationItems:(id)items;	// 0x30dca49d
- (void)setNeedsLayout;	// 0x30c45ac5
// converted property setter: - (void)setPrompt:(id)prompt;	// 0x30c4c919
- (void)setRightMargin:(float)margin;	// 0x30dcb0e9
// declared property setter: - (void)setShadowImage:(id)image;	// 0x30dc8f91
// declared property setter: - (void)setTintColor:(id)color;	// 0x30cb08c1
// converted property setter: - (void)setTitleAutoresizesToFit:(BOOL)fit;	// 0x30dcb121
// declared property setter: - (void)setTitleTextAttributes:(id)attributes;	// 0x30dc8d5d
- (void)setTitleVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x30dc8df9
- (void)setTitleView:(id)view;	// 0x30c4aff1
// converted property setter: - (void)setTopItemAlpha:(float)alpha;	// 0x30dcd259
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)constraints;	// 0x30dcab1d
// declared property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x30ccbc8d
// declared property getter: - (id)shadowImage;	// 0x30dc9121
- (void)showBackButton:(BOOL)button animated:(BOOL)animated;	// 0x30ca233d
- (void)showButtonsWithLeft:(id)left right:(id)right leftBack:(BOOL)back;	// 0x30dcb8a5
- (void)showButtonsWithLeftTitle:(id)leftTitle rightTitle:(id)title;	// 0x30dcb85d
- (void)showButtonsWithLeftTitle:(id)leftTitle rightTitle:(id)title leftBack:(BOOL)back;	// 0x30dcb881
- (void)showHideBackButtomAnimationDidStop:(id)showHideBackButtomAnimation finished:(id)finished context:(void *)context;	// 0x30dcce19
- (void)showLeftButton:(id)button withStyle:(int)style rightButton:(id)button3 withStyle:(int)style4;	// 0x30dcb8d1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x30c392a1
- (int)state;	// 0x30dc9bb1
// declared property getter: - (id)tintColor;	// 0x30c65129
// converted property getter: - (BOOL)titleAutoresizesToFit;	// 0x30c4afb9
// declared property getter: - (id)titleTextAttributes;	// 0x30dc8dd5
- (float)titleVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x30dc8f41
// declared property getter: - (id)topItem;	// 0x30c46e65
// converted property getter: - (float)topItemAlpha;	// 0x30dcd239
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30cddce1
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30d9b659
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30cde059
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30d91411
- (void)updatePrompt;	// 0x30c4c835
- (void)willRemoveSubview:(id)subview;	// 0x30dcad15
@end


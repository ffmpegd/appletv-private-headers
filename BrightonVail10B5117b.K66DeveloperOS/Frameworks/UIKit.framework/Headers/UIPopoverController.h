/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIAppearanceContainer.h"
#import "UIDimmingViewDelegate.h"
#import "UIGestureRecognizerDelegatePrivate.h"
#import <NSObject.h> // Unknown library

@class _UIPopoverLayoutInfo, NSArray, UIView, UIBarButtonItem, UIDimmingView, UIPanGestureRecognizer, UIViewController, _UIPopoverView;
@protocol UIPopoverControllerDelegate;

@interface UIPopoverController : NSObject <UIDimmingViewDelegate, UIGestureRecognizerDelegatePrivate, UIAppearanceContainer> {
	id _delegate;	// 4 = 0x4
	UIViewController *_contentViewController;	// 8 = 0x8
	UIViewController *_splitParentController;	// 12 = 0xc
	_UIPopoverView *_popoverView;	// 16 = 0x10
	UIDimmingView *_dimmingView;	// 20 = 0x14
	UIView *_layoutConstraintView;	// 24 = 0x18
	CGRect _targetRectInEmbeddingView;	// 28 = 0x1c
	UIBarButtonItem *_targetBarButtonItem;	// 44 = 0x2c
	unsigned _requestedArrowDirections;	// 48 = 0x30
	unsigned _currentArrowDirection;	// 52 = 0x34
	int _popoverBackgroundStyle;	// 56 = 0x38
	_UIPopoverLayoutInfo *_preferredLayoutInfo;	// 60 = 0x3c
	Class _popoverBackgroundViewClass;	// 64 = 0x40
	CGSize _popoverContentSize;	// 68 = 0x44
	CGRect _targetRectInDimmingView;	// 76 = 0x4c
	CGRect _embeddedTargetRect;	// 92 = 0x5c
	int _popoverControllerStyle;	// 108 = 0x6c
	BOOL _ignoresKeyboardNotifications;	// 112 = 0x70
	unsigned draggingChildScrollViewCount;	// 116 = 0x74
	id _target;	// 120 = 0x78
	SEL _didEndSelector;	// 124 = 0x7c
	UIViewController *_modalPresentationFromViewController;	// 128 = 0x80
	UIViewController *_modalPresentationToViewController;	// 132 = 0x84
	unsigned _toViewAutoResizingMask;	// 136 = 0x88
	UIViewController *_slidingViewController;	// 140 = 0x8c
	UIView *_presentingView;	// 144 = 0x90
	int _presentationEdge;	// 148 = 0x94
	int _presentationDirection;	// 152 = 0x98
	int _presentationState;	// 156 = 0x9c
	BOOL _didPresentInActiveSequence;	// 160 = 0xa0
	unsigned _slideTransitionCount;	// 164 = 0xa4
	UIPanGestureRecognizer *_vendedGestureRecognizer;	// 168 = 0xa8
	UIPanGestureRecognizer *_dimmingViewGestureRecognizer;	// 172 = 0xac
	struct {
		unsigned delegateWantsTransitionWillBegin : 1;
		unsigned delegateWantsTransitionCompleted : 1;
		unsigned delegateCustomizesSpineLocationForInterfaceOrientation : 1;
		unsigned dataSourceSuppliesBeforeViewController : 1;
		unsigned dataSourceSuppliesAfterViewController : 1;
		unsigned dataSourceSuppliesPageCount : 1;
		unsigned dataSourceSuppliesPageNumber : 1;
	} _popoverControllerFlags;	// 176 = 0xb0
	BOOL _allowResizePastTargetRect;	// 177 = 0xb1
	BOOL _dismissesOnRotation;	// 178 = 0xb2
	UIEdgeInsets _popoverLayoutMargins;	// 180 = 0xb4
	BOOL _showsTargetRect;	// 196 = 0xc4
	BOOL _showsOrientationMarker;	// 197 = 0xc5
	BOOL _showsPresentationArea;	// 198 = 0xc6
	BOOL _retainsSelfWhilePresented;	// 199 = 0xc7
}
@property(assign, nonatomic, setter=_setIgnoresKeyboardNotifications:) BOOL _ignoresKeyboardNotifications;	// G=0x3307968d; S=0x3307969d; @dynamic
@property(assign, nonatomic) BOOL allowResizePastTargetRect;	// G=0x3307a271; S=0x3307a281; @synthesize=_allowResizePastTargetRect
@property(retain, nonatomic) UIViewController *contentViewController;	// G=0x33070f3d; S=0x33070f75; 
@property(assign, nonatomic) id<UIPopoverControllerDelegate> delegate;	// G=0x3307a221; S=0x3307a231; @synthesize=_delegate
@property(retain, nonatomic) UIDimmingView *dimmingView;	// G=0x3307a251; S=0x3307a261; @synthesize=_dimmingView
@property(assign, nonatomic) BOOL dismissesOnRotation;	// G=0x3307a291; S=0x3307a2a1; @synthesize=_dismissesOnRotation
@property(copy, nonatomic) NSArray *passthroughViews;	// G=0x33071889; S=0x330718a9; 
@property(assign, nonatomic) unsigned popoverArrowDirection;	// G=0x33071861; S=0x3307a241; @synthesize=_currentArrowDirection
@property(retain, nonatomic) Class popoverBackgroundViewClass;	// G=0x3307a2f1; S=0x3307a301; @synthesize=_popoverBackgroundViewClass
@property(assign, nonatomic) CGSize popoverContentSize;	// G=0x3307139d; S=0x330713b5; 
@property(assign, nonatomic) UIEdgeInsets popoverLayoutMargins;	// G=0x3307a2b1; S=0x3307a2d5; @synthesize=_popoverLayoutMargins
@property(readonly, retain) _UIPopoverView *popoverView;	// G=0x33075689; converted property
@property(readonly, assign, nonatomic, getter=isPopoverVisible) BOOL popoverVisible;	// G=0x330717f9; 
@property(retain, nonatomic) _UIPopoverLayoutInfo *preferredLayoutInfo;	// G=0x3307a391; S=0x3307a3a1; @synthesize=_preferredLayoutInfo
@property(assign, nonatomic, getter=_presentationEdge, setter=_setPresentationEdge:) int presentationEdge;	// G=0x3307a3d1; S=0x3307a3e1; @synthesize=_presentationEdge
@property(assign, nonatomic, getter=_presentingView, setter=_setPresentingView:) UIView *presentingView;	// G=0x3307a3b1; S=0x3307a3c1; @synthesize=_presentingView
@property(assign, nonatomic, getter=_retainsSelfWhilePresented, setter=_setRetainsSelfWhilePresented:) BOOL retainsSelfWhilePresented;	// G=0x3307a371; S=0x3307a381; @synthesize=_retainsSelfWhilePresented
@property(assign, nonatomic) BOOL showsOrientationMarker;	// G=0x3307a331; S=0x3307a341; @synthesize=_showsOrientationMarker
@property(assign, nonatomic) BOOL showsPresentationArea;	// G=0x3307a351; S=0x3307a361; @synthesize=_showsPresentationArea
@property(assign, nonatomic) BOOL showsTargetRect;	// G=0x3307a311; S=0x3307a321; @synthesize=_showsTargetRect
+ (UIEdgeInsets)_defaultPopoverLayoutMarginsForPopoverControllerStyle:(int)popoverControllerStyle andContentViewController:(id)controller;	// 0x330708d5
+ (BOOL)_forceAttemptsToAvoidKeyboard;	// 0x33078741
+ (Class)_popoverViewClass;	// 0x330708b9
+ (BOOL)_popoversDisabled;	// 0x33070741
+ (BOOL)_showTargetRectPref;	// 0x330707ed
- (id)init;	// 0x3307097d
- (id)initWithContentViewController:(id)contentViewController;	// 0x33070d05
- (void)_adjustPopoverForNewContentSizeFromViewController:(id)viewController allowShrink:(BOOL)shrink;	// 0x33078525
- (BOOL)_attemptsToAvoidKeyboard;	// 0x33078805
- (void)_beginMapsTransitionToNewViewController:(id)newViewController arrowDirections:(unsigned)directions slideDuration:(float)duration expandDuration:(float)duration4;	// 0x33076dd5
- (void)_beginMapsTransitionToNewViewController:(id)newViewController newTargetRect:(CGRect)rect inView:(id)view arrowDirections:(unsigned)directions slideDuration:(float)duration expandDuration:(float)duration6;	// 0x330763e1
- (BOOL)_canRepresentAutomatically;	// 0x33078fdd
- (CGPoint)_centerPointForScale:(float)scale frame:(CGRect)frame anchor:(CGPoint)anchor;	// 0x33073cf9
- (id)_completionBlockForDismissalWhenNotifyingDelegate:(BOOL)dismissalWhenNotifyingDelegate;	// 0x33076e61
- (void)_containedViewControllerModalStateChanged;	// 0x330797d9
- (CGSize)_currentPopoverContentSize;	// 0x33075751
- (Class)_defaultChromeViewClass;	// 0x330719bd
- (id)_dimmingView;	// 0x33079915
- (void)_dismissPopoverAnimated:(BOOL)animated stateOnly:(BOOL)only notifyDelegate:(BOOL)delegate;	// 0x33077505
- (float)_dismissalAnimationDuration;	// 0x330757e1
- (BOOL)_embedsInView;	// 0x33079901
- (BOOL)_gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)failByGestureRecognizer;	// 0x33077eed
- (BOOL)_gestureRecognizer:(id)recognizer shouldRequireFailureOfGestureRecognizer:(id)gestureRecognizer;	// 0x33077fd9
- (id)_gestureRecognizerForPresentationFromEdge:(int)edge;	// 0x33077b1d
- (BOOL)_gestureRecognizerShouldBegin:(id)_gestureRecognizer;	// 0x33077cc9
- (void)_hostingWindowDidRotate:(id)_hostingWindow;	// 0x330790c5
- (void)_hostingWindowWillRotate:(id)_hostingWindow;	// 0x33079041
// declared property getter: - (BOOL)_ignoresKeyboardNotifications;	// 0x3307968d
- (void)_incrementSlideTransitionCount:(BOOL)count;	// 0x33071ab5
- (id)_initWithContentViewController:(id)contentViewController popoverControllerStyle:(int)style;	// 0x330709b9
- (void)_invalidateLayoutInfo;	// 0x33071b85
- (BOOL)_isDismissing;	// 0x3307983d
- (BOOL)_isPresenting;	// 0x33079825
- (void)_keyboardStateChanged:(id)changed;	// 0x33078e71
- (void)_layoutDimmingViewForInterfaceOrientationOfHostingWindow:(id)hostingWindow;	// 0x33075939
- (id)_layoutInfoForCurrentKeyboardState;	// 0x33078ca1
- (id)_layoutInfoForCurrentKeyboardStateAndHostingWindow:(id)currentKeyboardStateAndHostingWindow;	// 0x33078c51
- (id)_layoutInfoFromLayoutInfo:(id)layoutInfo forCurrentKeyboardStateAndHostingWindow:(id)currentKeyboardStateAndHostingWindow;	// 0x33078871
- (id)_managingSplitViewController;	// 0x330798a5
- (BOOL)_manuallyHandlesContentViewControllerAppearanceCalls;	// 0x3307619d
- (void)_modalAnimation:(id)animation finished:(id)finished context:(void *)context;	// 0x3307a079
- (void)_modalTransition:(int)transition fromViewController:(id)viewController toViewController:(id)viewController3 target:(id)target didEndSelector:(SEL)selector;	// 0x3307994d
- (void)_moveAwayFromTheKeyboard:(id)theKeyboard;	// 0x33078ce1
- (void)_newViewControllerWasPushed:(id)pushed;	// 0x330785d1
- (void)_newViewControllerWillBePushed:(id)_newViewController;	// 0x330784b9
- (void)_performHierarchyCheckOnViewController:(id)controller;	// 0x330760e9
- (int)_popoverBackgroundStyle;	// 0x330761ed
- (BOOL)_popoverBackgroundViewWantsDefaultContentAppearance;	// 0x330718c9
- (int)_popoverControllerStyle;	// 0x3307618d
- (Class)_popoverLayoutInfoClass;	// 0x330718f5
- (void)_postludeForDismissal;	// 0x330773c9
- (void)_presentPopoverBySlidingIn:(BOOL)anIn fromEdge:(int)edge ofView:(id)view animated:(BOOL)animated stateOnly:(BOOL)only notifyDelegate:(BOOL)delegate;	// 0x33071bb1
- (void)_presentPopoverFromEdge:(int)edge ofView:(id)view animated:(BOOL)animated;	// 0x33072f2d
- (void)_presentPopoverFromRect:(CGRect)rect embeddedInView:(id)view usingViewForLayoutConstraints:(id)layoutConstraints permittedArrowDirections:(unsigned)directions;	// 0x33073051
- (float)_presentationAnimationDuration;	// 0x330757bd
// declared property getter: - (int)_presentationEdge;	// 0x3307a3d1
- (int)_presentationState;	// 0x33071a85
// declared property getter: - (id)_presentingView;	// 0x3307a3b1
- (void)_resetSlideTransitionCount;	// 0x33071b71
// declared property getter: - (BOOL)_retainsSelfWhilePresented;	// 0x3307a371
- (void)_scrollViewDidEndDragging:(id)_scrollView;	// 0x330794ed
- (void)_scrollViewWillBeginDragging:(id)_scrollView;	// 0x33079441
- (void)_setContentViewController:(id)controller backgroundStyle:(int)style animated:(BOOL)animated;	// 0x330761fd
- (void)_setGesturesEnabled:(BOOL)enabled;	// 0x33078475
// declared property setter: - (void)_setIgnoresKeyboardNotifications:(BOOL)notifications;	// 0x3307969d
- (void)_setManagingSplitViewController:(id)controller;	// 0x33079895
- (void)_setPopoverBackgroundStyle:(int)style;	// 0x330761b5
- (void)_setPopoverView:(id)view;	// 0x330756c1
- (void)_setPopoverViewAlpha:(float)alpha;	// 0x3307565d
// declared property setter: - (void)_setPresentationEdge:(int)edge;	// 0x3307a3e1
- (void)_setPresentationState:(int)state;	// 0x33071a95
// declared property setter: - (void)_setPresentingView:(id)view;	// 0x3307a3c1
// declared property setter: - (void)_setRetainsSelfWhilePresented:(BOOL)presented;	// 0x3307a381
- (void)_setSplitParentController:(id)controller;	// 0x33075731
- (BOOL)_shimPresentSlidingPopoverAnimated:(BOOL)animated;	// 0x33073db1
- (unsigned)_slideTransitionCount;	// 0x33071aa5
- (id)_splitParentController;	// 0x33075741
- (void)_startWatchingForKeyboardNotificationsIfNecessary;	// 0x33078eb9
- (void)_startWatchingForNavigationControllerNotifications:(id)navigationControllerNotifications;	// 0x3307863d
- (void)_startWatchingForScrollViewNotifications;	// 0x33079579
- (void)_startWatchingForWindowRotations;	// 0x33079301
- (void)_stopWatchingForKeyboardNotifications;	// 0x33078f61
- (void)_stopWatchingForNavigationControllerNotifications:(id)navigationControllerNotifications;	// 0x330786cd
- (void)_stopWatchingForNotifications;	// 0x33079799
- (void)_stopWatchingForScrollViewNotifications;	// 0x33079611
- (void)_stopWatchingForWindowRotations;	// 0x330793c5
- (void)_swipe:(id)swipe;	// 0x33078119
- (void)_transitionFromViewController:(id)viewController toViewController:(id)viewController2 animated:(BOOL)animated;	// 0x33075add
- (void)_updateDimmingViewTransformForInterfaceOrientationOfHostingWindow:(id)hostingWindow;	// 0x330757f1
// declared property getter: - (BOOL)allowResizePastTargetRect;	// 0x3307a271
// declared property getter: - (id)contentViewController;	// 0x33070f3d
- (void)dealloc;	// 0x33070d19
// declared property getter: - (id)delegate;	// 0x3307a221
// declared property getter: - (id)dimmingView;	// 0x3307a251
- (void)dimmingViewWasTapped:(id)tapped;	// 0x33077ab1
- (void)dismissPopoverAnimated:(BOOL)animated;	// 0x33075609
// declared property getter: - (BOOL)dismissesOnRotation;	// 0x3307a291
// declared property getter: - (BOOL)isPopoverVisible;	// 0x330717f9
- (BOOL)isPresentingOrDismissing;	// 0x33079855
// declared property getter: - (id)passthroughViews;	// 0x33071889
// declared property getter: - (unsigned)popoverArrowDirection;	// 0x33071861
// declared property getter: - (Class)popoverBackgroundViewClass;	// 0x3307a2f1
// declared property getter: - (CGSize)popoverContentSize;	// 0x3307139d
// declared property getter: - (UIEdgeInsets)popoverLayoutMargins;	// 0x3307a2b1
// converted property getter: - (id)popoverView;	// 0x33075689
// declared property getter: - (id)preferredLayoutInfo;	// 0x3307a391
- (void)presentPopoverFromBarButtonItem:(id)barButtonItem permittedArrowDirections:(unsigned)directions animated:(BOOL)animated;	// 0x330752ed
- (void)presentPopoverFromRect:(CGRect)rect inView:(id)view permittedArrowDirections:(unsigned)directions animated:(BOOL)animated;	// 0x33073e49
// declared property setter: - (void)setAllowResizePastTargetRect:(BOOL)rect;	// 0x3307a281
// declared property setter: - (void)setContentViewController:(id)controller;	// 0x33070f75
- (void)setContentViewController:(id)controller animated:(BOOL)animated;	// 0x33070f89
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3307a231
// declared property setter: - (void)setDimmingView:(id)view;	// 0x3307a261
// declared property setter: - (void)setDismissesOnRotation:(BOOL)rotation;	// 0x3307a2a1
// declared property setter: - (void)setPassthroughViews:(id)views;	// 0x330718a9
// declared property setter: - (void)setPopoverArrowDirection:(unsigned)direction;	// 0x3307a241
// declared property setter: - (void)setPopoverBackgroundViewClass:(Class)aClass;	// 0x3307a301
// declared property setter: - (void)setPopoverContentSize:(CGSize)size;	// 0x330713b5
- (void)setPopoverContentSize:(CGSize)size animated:(BOOL)animated;	// 0x330713d9
- (void)setPopoverFrame:(CGRect)frame animated:(BOOL)animated;	// 0x330710bd
// declared property setter: - (void)setPopoverLayoutMargins:(UIEdgeInsets)margins;	// 0x3307a2d5
// declared property setter: - (void)setPreferredLayoutInfo:(id)info;	// 0x3307a3a1
// declared property setter: - (void)setShowsOrientationMarker:(BOOL)marker;	// 0x3307a341
// declared property setter: - (void)setShowsPresentationArea:(BOOL)area;	// 0x3307a361
// declared property setter: - (void)setShowsTargetRect:(BOOL)rect;	// 0x3307a321
// declared property getter: - (BOOL)showsOrientationMarker;	// 0x3307a331
// declared property getter: - (BOOL)showsPresentationArea;	// 0x3307a351
// declared property getter: - (BOOL)showsTargetRect;	// 0x3307a311
@end

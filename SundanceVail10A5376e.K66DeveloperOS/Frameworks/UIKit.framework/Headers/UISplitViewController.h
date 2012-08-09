/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIViewController.h"

@class UIPopoverController, NSArray, UIGestureRecognizer, UIView, UIBarButtonItem, NSString;
@protocol UISplitViewControllerDelegate;

@interface UISplitViewController : UIViewController <UIGestureRecognizerDelegate> {
	id _delegate;	// 196 = 0xc4
	UIBarButtonItem *_barButtonItem;	// 200 = 0xc8
	NSString *_buttonTitle;	// 204 = 0xcc
	UIPopoverController *_hiddenPopoverController;	// 208 = 0xd0
	UIView *_rotationSnapshotView;	// 212 = 0xd4
	float _masterColumnWidth;	// 216 = 0xd8
	float _gutterWidth;	// 220 = 0xdc
	float _cornerRadius;	// 224 = 0xe0
	int _rotatingFromOrientation;	// 228 = 0xe4
	int _lastPresentedOrientation;	// 232 = 0xe8
	CGRect _rotatingFromMasterViewFrame;	// 236 = 0xec
	CGRect _rotatingToMasterViewFrame;	// 252 = 0xfc
	NSArray *_cornerImageViews;	// 268 = 0x10c
	unsigned _slideTransitionCount;	// 272 = 0x110
	UIView *_masterBackgroundView;	// 276 = 0x114
	BOOL _presentsInFadingPopover;	// 280 = 0x118
	BOOL _presentsWithGesture;	// 281 = 0x119
	UIGestureRecognizer *_popoverPresentationGestureRecognizer;	// 284 = 0x11c
	struct {
		unsigned validDelegateHiddenMasterOrientations : 5;
		unsigned delegateHiddenMasterOrientations : 5;
		unsigned delegateImplementsShouldHide : 1;
		unsigned hidden : 3;
		unsigned delegateHandlesTogglingMaster : 1;
		unsigned delegateProvidesBackgroundView : 1;
		unsigned delegateWantsUnSlideCallback : 1;
		unsigned masterOnSlide : 1;
		unsigned delegateWantsWillShowCallback : 1;
		unsigned delegateWantsWillHideCallback : 1;
		unsigned delegateWantsWillPresentCallback : 1;
		unsigned delegateWantsNavigationRequests : 1;
	} _splitViewControllerFlags;	// 288 = 0x120
}
@property(assign, nonatomic, setter=_setPresentsInFadingPopover:) BOOL _presentsInFadingPopover;	// G=0x30520965; S=0x30520975; 
@property(assign, nonatomic) id<UISplitViewControllerDelegate> delegate;	// G=0x30523919; S=0x3051ed3d; @synthesize=_delegate
@property(assign) float gutterWidth;	// G=0x3052091d; S=0x3052092d; converted property
@property(assign) BOOL hidesMasterViewInPortrait;	// G=0x3052063d; S=0x305206c5; converted property
@property(assign) float leftColumnWidth;	// G=0x3051f715; S=0x3051f725; converted property
@property(assign) float masterColumnWidth;	// G=0x305208d5; S=0x305208e5; converted property
@property(assign, nonatomic) BOOL presentsWithGesture;	// G=0x30523929; S=0x30523939; @synthesize=_presentsWithGesture
@property(copy, nonatomic) NSArray *viewControllers;	// G=0x3051ff91; S=0x3051ffa1; 
+ (BOOL)_forcePresentsInSlidingPopover;	// 0x3051df99
+ (BOOL)_forcePresentsWithGesture;	// 0x3051e065
+ (BOOL)_optsOutOfPopoverControllerHierarchyCheck;	// 0x30520eb9
- (id)initWithCoder:(id)coder;	// 0x3051e295
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x3051e251
- (void)__viewWillLayoutSubviews;	// 0x30523601
- (void)_addOrRemovePopoverPresentationGestureRecognizer;	// 0x3051ec21
- (void)_calculateDelegateHiddenMasterOrientations;	// 0x3051ea79
- (BOOL)_canDisplayHostedMaster;	// 0x3051f781
- (BOOL)_canSlideMaster;	// 0x3051f805
- (void)_commonInit;	// 0x3051e129
- (CGSize)_contentSizeForChildViewController:(id)childViewController inPopoverController:(id)popoverController;	// 0x305211d5
- (BOOL)_delegateUsesLegacySlideSPI;	// 0x3051f75d
- (CGRect)_detailViewFrame;	// 0x3051efc5
- (void)_dismissMasterViewController;	// 0x30521029
- (BOOL)_effectivePresentsWithGesture;	// 0x30520a29
- (void)_getRotationContentSettings:(XXStruct_tXAZTC *)settings;	// 0x30523911
- (void)_invalidateHidesMasterViewInOrientation:(int)orientation;	// 0x30521601
- (BOOL)_isHidesMasterInLandscapeValid;	// 0x3051ea65
- (BOOL)_isHidesMasterInPortraitValid;	// 0x3051ea51
- (BOOL)_isLandscape;	// 0x3051e82d
- (BOOL)_isMasterViewShown;	// 0x3051e9b5
- (BOOL)_isMasterViewShownByDefault;	// 0x3051e95d
- (BOOL)_isRotating;	// 0x30521481
- (void)_loadNewSubviews:(id)subviews;	// 0x3051e469
- (CGRect)_masterViewFrame;	// 0x3051ef1d
- (void)_presentGestureAttemptedWithPresentedPopoverController:(id)presentedPopoverController;	// 0x30521249
- (void)_presentMasterViewController:(BOOL)controller;	// 0x30520ebd
// declared property getter: - (BOOL)_presentsInFadingPopover;	// 0x30520965
- (void)_removeRoundedCorners;	// 0x3051f431
// declared property setter: - (void)_setPresentsInFadingPopover:(BOOL)fadingPopover;	// 0x30520975
- (void)_setupRoundedCorners;	// 0x3051f075
- (BOOL)_shouldPersistViewWhenCoding;	// 0x3051e731
- (BOOL)_shouldSynthesizeSupportedOrientations;	// 0x305213f5
- (void)_slideIn:(BOOL)anIn viewController:(id)controller animated:(BOOL)animated totalDuration:(double)duration completion:(id)completion;	// 0x3051f86d
- (void)_updateMasterViewControllerFrame;	// 0x30522df9
- (void)_viewControllerHiding:(id)hiding;	// 0x3051f515
- (void)dealloc;	// 0x3051e305
- (void)decodeRestorableStateWithCoder:(id)coder;	// 0x305239e9
// declared property getter: - (id)delegate;	// 0x30523919
- (id)detailViewController;	// 0x305205cd
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x3052251d
- (void)encodeRestorableStateWithCoder:(id)coder;	// 0x30523949
- (void)encodeWithCoder:(id)coder;	// 0x3051e2d9
// converted property getter: - (float)gutterWidth;	// 0x3052091d
- (BOOL)hidesMasterViewDuringRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2;	// 0x30521579
- (BOOL)hidesMasterViewInLandscape;	// 0x30520681
// converted property getter: - (BOOL)hidesMasterViewInPortrait;	// 0x3052063d
// converted property getter: - (float)leftColumnWidth;	// 0x3051f715
- (void)loadSubviews;	// 0x3051e465
- (void)loadView;	// 0x3051e735
// converted property getter: - (float)masterColumnWidth;	// 0x305208d5
- (id)masterViewController;	// 0x3052055d
- (void)popoverWillAppear:(id)popover;	// 0x30521299
// declared property getter: - (BOOL)presentsWithGesture;	// 0x30523929
- (void)purgeMemoryForReason:(int)reason;	// 0x30520db1
- (BOOL)revealsMasterViewDuringRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2;	// 0x30521499
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3051ed3d
// converted property setter: - (void)setGutterWidth:(float)width;	// 0x3052092d
// converted property setter: - (void)setHidesMasterViewInPortrait:(BOOL)portrait;	// 0x305206c5
// converted property setter: - (void)setLeftColumnWidth:(float)width;	// 0x3051f725
// converted property setter: - (void)setMasterColumnWidth:(float)width;	// 0x305208e5
// declared property setter: - (void)setPresentsWithGesture:(BOOL)gesture;	// 0x30523939
// declared property setter: - (void)setViewControllers:(id)controllers;	// 0x3051ffa1
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x3052131d
- (void)snapshotAllViews;	// 0x30521da5
- (void)snapshotForRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2;	// 0x30521f21
- (void)snapshotMasterView;	// 0x30521aed
- (void)toggleMasterVisible:(id)visible;	// 0x30521111
- (void)unloadViewForced:(BOOL)forced;	// 0x3051e871
// declared property getter: - (id)viewControllers;	// 0x3051ff91
- (void)viewDidAppear:(BOOL)view;	// 0x30520be1
- (void)viewDidDisappear:(BOOL)view;	// 0x30520d21
- (void)viewWillAppear:(BOOL)view;	// 0x30520aed
- (void)viewWillDisappear:(BOOL)view;	// 0x30520c91
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x30522375
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x30521635
@end

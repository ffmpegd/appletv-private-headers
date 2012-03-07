/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class UIPopoverController, NSString, UIBarButtonItem, UIView, NSArray;
@protocol UISplitViewControllerDelegate;

@interface UISplitViewController : UIViewController {
@private
	id _delegate;	// 156 = 0x9c
	UIBarButtonItem *_barButtonItem;	// 160 = 0xa0
	NSString *_buttonTitle;	// 164 = 0xa4
	UIPopoverController *_hiddenPopoverController;	// 168 = 0xa8
	UIView *_rotationSnapshotView;	// 172 = 0xac
	float _masterColumnWidth;	// 176 = 0xb0
	float _gutterWidth;	// 180 = 0xb4
	float _cornerRadius;	// 184 = 0xb8
	int _rotatingFromOrientation;	// 188 = 0xbc
	int _lastPresentedOrientation;	// 192 = 0xc0
	CGRect _rotatingFromMasterViewFrame;	// 196 = 0xc4
	CGRect _rotatingToMasterViewFrame;	// 212 = 0xd4
	NSArray *_cornerImageViews;	// 228 = 0xe4
	UIView *_masterBackgroundView;	// 232 = 0xe8
	struct {
		unsigned hidesMasterViewInPortrait : 1;
		unsigned delegateImplementsShouldHide : 1;
		unsigned hidden : 3;
		unsigned delegateHandlesTogglingMaster : 1;
		unsigned delegateProvidesBackgroundView : 1;
		unsigned delegateWantsUnSlideCallback : 1;
		unsigned masterOnSlide : 1;
		unsigned delegateWantsWillShowCallback : 1;
		unsigned delegateWantsWillHideCallback : 1;
	} _splitViewControllerFlags;	// 236 = 0xec
	unsigned _slideTransitionCount;	// 240 = 0xf0
}
@property(assign, nonatomic) id<UISplitViewControllerDelegate> delegate;	// G=0x33c7309d; S=0x33c6f5b1; @synthesize=_delegate
@property(assign) float gutterWidth;	// G=0x33c7110d; S=0x33c7111d; converted property
@property(assign) BOOL hidesMasterViewInPortrait;	// G=0x33c70d7d; S=0x33c70ebd; converted property
@property(assign) float leftColumnWidth;	// G=0x33c6ff21; S=0x33c6ff31; converted property
@property(assign) float masterColumnWidth;	// G=0x33c710c5; S=0x33c710d5; converted property
@property(copy, nonatomic) NSArray *viewControllers;	// G=0x33c70729; S=0x33c70739; 
+ (BOOL)_optsOutOfPopoverControllerHierarchyCheck;	// 0x33c6fdb1
- (id)initWithCoder:(id)coder;	// 0x33c6efa5
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x33c6ef61
- (void)__viewWillLayoutSubviews;	// 0x33c72d79
- (BOOL)_canSlideMaster;	// 0x33c6ff69
- (void)_commonInit;	// 0x33c6ee5d
- (CGRect)_detailViewFrame;	// 0x33c6f791
- (void)_getRotationContentSettings:(XXStruct_tXAZTC *)settings;	// 0x33c73095
- (BOOL)_isLandscape;	// 0x33c6f431
- (void)_loadNewSubviews:(id)subviews;	// 0x33c6f0a5
- (CGRect)_masterViewFrame;	// 0x33c6f6f5
- (BOOL)_masterViewShown;	// 0x33c6f535
- (void)_removeRoundedCorners;	// 0x33c6fce9
- (void)_setupRoundedCorners;	// 0x33c6f879
- (BOOL)_shouldPersistViewWhenCoding;	// 0x33c6f335
- (void)_slideIn:(BOOL)anIn viewController:(id)controller animated:(BOOL)animated totalDuration:(double)duration completion:(id)completion;	// 0x33c6ffd1
- (void)_toggleVisibilityOfViewController:(id)viewController;	// 0x33c71415
- (void)_updateMasterViewControllerFrame;	// 0x33c72995
- (void)_viewControllerHiding:(id)hiding;	// 0x33c6fdb5
- (void)dealloc;	// 0x33c6efe9
// declared property getter: - (id)delegate;	// 0x33c7309d
- (id)detailViewController;	// 0x33c70d0d
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x33c7233d
// converted property getter: - (float)gutterWidth;	// 0x33c7110d
- (BOOL)hidesMasterViewDuringRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2;	// 0x33c717a9
- (BOOL)hidesMasterViewInLandscape;	// 0x33c70e1d
// converted property getter: - (BOOL)hidesMasterViewInPortrait;	// 0x33c70d7d
- (BOOL)isRotating;	// 0x33c71719
// converted property getter: - (float)leftColumnWidth;	// 0x33c6ff21
- (void)loadSubviews;	// 0x33c6f0a1
- (void)loadView;	// 0x33c6f339
// converted property getter: - (float)masterColumnWidth;	// 0x33c710c5
- (id)masterViewController;	// 0x33c70c9d
- (void)purgeMemoryForReason:(int)reason;	// 0x33c7157d
- (BOOL)revealsMasterViewDuringRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2;	// 0x33c71731
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33c6f5b1
// converted property setter: - (void)setGutterWidth:(float)width;	// 0x33c7111d
// converted property setter: - (void)setHidesMasterViewInPortrait:(BOOL)portrait;	// 0x33c70ebd
// converted property setter: - (void)setLeftColumnWidth:(float)width;	// 0x33c6ff31
// converted property setter: - (void)setMasterColumnWidth:(float)width;	// 0x33c710d5
// declared property setter: - (void)setViewControllers:(id)controllers;	// 0x33c70739
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x33c7165d
- (void)snapshotAllViews;	// 0x33c71ed9
- (void)snapshotForRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2;	// 0x33c72075
- (void)snapshotMasterView;	// 0x33c71bf1
- (void)toggleMasterVisible:(id)visible;	// 0x33c71501
- (void)unloadViewForced:(BOOL)forced;	// 0x33c6f471
// declared property getter: - (id)viewControllers;	// 0x33c70729
- (void)viewDidAppear:(BOOL)view;	// 0x33c71239
- (void)viewDidDisappear:(BOOL)view;	// 0x33c71381
- (void)viewWillAppear:(BOOL)view;	// 0x33c71155
- (void)viewWillDisappear:(BOOL)view;	// 0x33c712ed
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x33c72195
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x33c717fd
@end


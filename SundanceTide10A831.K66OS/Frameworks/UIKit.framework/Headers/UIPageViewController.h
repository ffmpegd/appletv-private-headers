/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "_UIQueuingScrollViewDelegate.h"
#import "_UIQueuingScrollViewDataSource.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIViewController.h"

@class NSMutableDictionary, _UIQueuingScrollView, NSArray, NSDictionary, UITapGestureRecognizer, _UIPageCurl, NSMutableArray, UIPanGestureRecognizer, _UIPageViewControllerContentView;
@protocol UIPageViewControllerDelegate, UIPageViewControllerDataSource;

@interface UIPageViewController : UIViewController <UIGestureRecognizerDelegate, _UIQueuingScrollViewDelegate, _UIQueuingScrollViewDataSource> {
	id<UIPageViewControllerDelegate> _delegate;	// 196 = 0xc4
	id<UIPageViewControllerDataSource> _dataSource;	// 200 = 0xc8
	int _transitionStyle;	// 204 = 0xcc
	int _navigationOrientation;	// 208 = 0xd0
	int _spineLocation;	// 212 = 0xd4
	BOOL _doubleSided;	// 216 = 0xd8
	BOOL _pageControlRequiresValidation;	// 217 = 0xd9
	NSArray *_viewControllers;	// 220 = 0xdc
	_UIPageCurl *_pageCurl;	// 224 = 0xe0
	UIPanGestureRecognizer *_panGestureRecognizer;	// 228 = 0xe4
	UITapGestureRecognizer *_tapGestureRecognizer;	// 232 = 0xe8
	BOOL _stashingViewControllersForRotation;	// 236 = 0xec
	NSArray *_viewControllersStashedForRotation;	// 240 = 0xf0
	BOOL _interfaceRotating;	// 244 = 0xf4
	NSMutableArray *_rotationSnapshotViews;	// 248 = 0xf8
	int _spineLocationPriorToInterfaceRotation;	// 252 = 0xfc
	UIEdgeInsets _tapRegionInsets;	// 256 = 0x100
	CGSize _tapRegionBreadths;	// 272 = 0x110
	UIEdgeInsets _effectiveTapRegionInsets;	// 280 = 0x118
	CGSize _effectiveTapRegionBreadths;	// 296 = 0x128
	CGRect *_tapRegions;	// 304 = 0x130
	float _pageSpacing;	// 308 = 0x134
	NSMutableDictionary *_cachedViewControllersForCurl;	// 312 = 0x138
	NSMutableArray *_cachedViewControllersForScroll;	// 316 = 0x13c
	NSDictionary *_incomingAndOutgoingViewControllersForManualTransition;	// 320 = 0x140
	int _lastKnownNavigationDirection;	// 324 = 0x144
	int _disableAutorotationCount;	// 328 = 0x148
	struct {
		unsigned delegateWantsTransitionWillBegin : 1;
		unsigned delegateWantsTransitionCompleted : 1;
		unsigned delegateCustomizesSpineLocationForInterfaceOrientation : 1;
		unsigned dataSourceSuppliesBeforeViewController : 1;
		unsigned dataSourceSuppliesAfterViewController : 1;
		unsigned dataSourceSuppliesPageCount : 1;
		unsigned dataSourceSuppliesPageNumber : 1;
	} _delegateFlags;	// 332 = 0x14c
}
@property(readonly, assign, nonatomic) _UIPageViewControllerContentView *_contentView;	// G=0x31f7d261; 
@property(readonly, assign, nonatomic, getter=_isInterfaceRotating) BOOL _interfaceRotating;	// G=0x31f84349; @synthesize
@property(readonly, assign, nonatomic) int _navigationOrientation;	// G=0x31f7c911; 
@property(readonly, assign, nonatomic, getter=_isPageControlVisible) BOOL _pageControlVisible;	// G=0x31f7d2c1; 
@property(assign, nonatomic, setter=_setPageSpacing:) float _pageSpacing;	// G=0x31f7d37d; S=0x31f7d38d; 
@property(readonly, assign, nonatomic) _UIQueuingScrollView *_scrollView;	// G=0x31f7d299; 
@property(readonly, assign, nonatomic) int _transitionStyle;	// G=0x31f7c8f1; 
@property(retain, nonatomic, setter=_setViewControllers:) NSArray *_viewControllers;	// G=0x31f84309; S=0x31f84319; @synthesize
@property(retain, nonatomic, setter=_setViewControllersStashedForRotation:) NSArray *_viewControllersStashedForRotation;	// G=0x31f84329; S=0x31f84339; @synthesize
@property(assign, nonatomic) id<UIPageViewControllerDataSource> dataSource;	// G=0x31f7c749; S=0x31f7c759; 
@property(assign, nonatomic) id<UIPageViewControllerDelegate> delegate;	// G=0x31f7c661; S=0x31f7c671; 
@property(assign, nonatomic, getter=isDoubleSided) BOOL doubleSided;	// G=0x31f7c991; S=0x31f7c9a1; 
@property(readonly, assign, nonatomic) NSArray *gestureRecognizers;	// G=0x31f7ca2d; 
@property(readonly, assign, nonatomic) int navigationOrientation;	// G=0x31f7c921; 
@property(readonly, assign, nonatomic) int spineLocation;	// G=0x31f7c981; 
@property(readonly, assign, nonatomic) int transitionStyle;	// G=0x31f7c901; 
@property(readonly, assign, nonatomic) NSArray *viewControllers;	// G=0x31f7ca79; 
+ (id)_incomingViewControllerKeys;	// 0x31f804d9
+ (BOOL)_isNavigationOrientation:(int)orientation supportedForTransitionStyle:(int)transitionStyle;	// 0x31f7bcb5
+ (BOOL)_isSpineLocation:(int)location supportedForTransitionStyle:(int)transitionStyle;	// 0x31f7bcc9
+ (BOOL)_isSupportedTransitionStyle:(int)style;	// 0x31f7bca1
+ (id)_outgoingViewControllerKeys;	// 0x31f80479
+ (id)stringForSpineLocation:(int)spineLocation;	// 0x31f7df29
- (id)initWithCoder:(id)coder;	// 0x31f7c1e5
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x31f7bff5
- (id)initWithTransitionStyle:(int)transitionStyle navigationOrientation:(int)orientation options:(id)options;	// 0x31f7bced
- (void)_beginDisablingInterfaceAutorotation;	// 0x31f80539
- (void)_cacheViewControllerForScroll:(id)scroll;	// 0x31f81a01
- (BOOL)_canHandleGestures;	// 0x31f7ffc1
- (void)_child:(id)child beginAppearanceTransition:(BOOL)transition animated:(BOOL)animated;	// 0x31f7d6c1
- (void)_child:(id)child beginAppearanceTransitionIfPossible:(BOOL)possible animated:(BOOL)animated;	// 0x31f7d78d
- (BOOL)_child:(id)child canBeginAppearanceTransition:(BOOL)transition;	// 0x31f7d711
- (void)_child:(id)child didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x31f7d969
- (void)_child:(id)child endAppearanceTransitionIfPossible:(BOOL)possible;	// 0x31f7d85d
- (void)_child:(id)child willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x31f7d925
- (void)_child:(id)child willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x31f7d8e1
- (BOOL)_childCanEndAppearanceTransition:(id)transition;	// 0x31f7d805
- (void)_childEndAppearanceTransition:(id)transition;	// 0x31f7d7d1
- (CGSize)_contentSizeForSize:(CGSize)size;	// 0x31f7d32d
// declared property getter: - (id)_contentView;	// 0x31f7d261
- (void)_contentViewFrameOrBoundsDidChange;	// 0x31f7fbc5
- (CGRect)_disabledScrollingRegion;	// 0x31f7d1a1
- (CGSize)_effectiveTapRegionBreadths;	// 0x31f7cf11
- (UIEdgeInsets)_effectiveTapRegionInsets;	// 0x31f7cbc9
- (void)_endDisablingInterfaceAutorotation;	// 0x31f8059d
- (void)_flushViewController:(id)controller animated:(BOOL)animated;	// 0x31f83e21
- (BOOL)_gestureRecognizerShouldBegin:(id)_gestureRecognizer;	// 0x31f82655
- (void)_handlePanGesture:(id)gesture;	// 0x31f828e5
- (void)_handleTapGesture:(id)gesture;	// 0x31f82fc1
- (id)_incomingViewControllersForGestureDrivenCurlInDirection:(int)direction;	// 0x31f81dfd
- (void)_invalidateEffectiveTapRegions;	// 0x31f7cb55
- (void)_invalidatePageCurl;	// 0x31f7e141
- (void)_invalidateViewControllersStashedForCurlFromDataSource;	// 0x31f80459
- (BOOL)_isCurrentViewControllerStateValid;	// 0x31f7fd85
// declared property getter: - (BOOL)_isInterfaceRotating;	// 0x31f84349
// declared property getter: - (BOOL)_isPageControlVisible;	// 0x31f7d2c1
- (int)_navigationEndDirectionInResponseToPanGestureRecognizer:(id)panGestureRecognizer suggestedVelocity:(float *)velocity;	// 0x31f82759
// declared property getter: - (int)_navigationOrientation;	// 0x31f7c911
- (id)_pageControl;	// 0x31f7d305
- (void)_pageControlValueChanged:(id)changed;	// 0x31f840d5
// declared property getter: - (float)_pageSpacing;	// 0x31f7d37d
- (void)_populateIncomingViewControllersInMap:(id)map withViewControllers:(id)viewControllers forCurlInDirection:(int)direction;	// 0x31f8035d
- (void)_populateOutgoingViewControllersInMap:(id)map;	// 0x31f8028d
- (id)_queuingScrollView:(id)view viewBefore:(BOOL)before view:(id)view3;	// 0x31f83d19
- (int)_requestSpineLocationForInterfaceOrientationAndUpdateStashedViewControllers:(int)interfaceOrientationAndUpdateStashedViewControllers;	// 0x31f7e181
// declared property getter: - (id)_scrollView;	// 0x31f7d299
- (void)_sendChildViewWill:(BOOL)_sendChildView appear:(BOOL)appear animated:(BOOL)animated;	// 0x31f7d9a1
- (void)_setDisabledScrollingRegion:(CGRect)region;	// 0x31f7d209
// declared property setter: - (void)_setPageSpacing:(float)spacing;	// 0x31f7d38d
- (void)_setSpineLocation:(int)location;	// 0x31f7c931
- (void)_setTapRegionBreadths:(CGSize)breadths;	// 0x31f7d149
- (void)_setTapRegionInsets:(UIEdgeInsets)insets;	// 0x31f7ce81
// declared property setter: - (void)_setViewControllers:(id)controllers;	// 0x31f84319
- (void)_setViewControllers:(id)controllers withCurlOfType:(int)type fromLocation:(CGPoint)location direction:(int)direction animated:(BOOL)animated notifyDelegate:(BOOL)delegate completion:(id)completion;	// 0x31f80619
- (void)_setViewControllers:(id)controllers withScrollInDirection:(int)direction animated:(BOOL)animated completion:(id)completion;	// 0x31f81a6d
// declared property setter: - (void)_setViewControllersStashedForRotation:(id)rotation;	// 0x31f84339
- (BOOL)_shouldBeginNavigationInDirection:(int *)direction inResponseToPanGestureRecognizer:(id)panGestureRecognizer;	// 0x31f82535
- (BOOL)_shouldCompleteManualCurlWithSuggestedVelocity:(float *)suggestedVelocity;	// 0x31f82875
- (BOOL)_shouldNavigateInDirection:(int *)direction inResponseToTapGestureRecognizer:(id)tapGestureRecognizer;	// 0x31f8239d
- (BOOL)_shouldNavigateInDirection:(int *)direction inResponseToVelocity:(float *)velocity ofGestureRecognizedByPanGestureRecognizer:(id)gestureRecognizedByPanGestureRecognizer;	// 0x31f82461
- (BOOL)_shouldPersistViewWhenCoding;	// 0x31f7c019
- (BOOL)_shouldSynthesizeSupportedOrientations;	// 0x31f7de3d
- (CGSize)_tapRegionBreadths;	// 0x31f7d129
- (UIEdgeInsets)_tapRegionInsets;	// 0x31f7ce5d
- (CGRect *)_tapRegions;	// 0x31f82049
// declared property getter: - (int)_transitionStyle;	// 0x31f7c8f1
- (void)_updatePageControlViaDataSourceIfNecessary;	// 0x31f83069
- (NSRange)_validRangeForPresentationOfViewControllersWithSpineLocation:(int)spineLocation;	// 0x31f7df9d
- (id)_validatedViewControllersForPresentationOfViewControllers:(id)viewControllers validRange:(NSRange)range;	// 0x31f7dfb1
- (id)_validatedViewControllersForTransitionWithViewControllers:(id)viewControllers animated:(BOOL)animated;	// 0x31f7fde9
- (id)_viewControllerAfterViewController:(id)controller;	// 0x31f80069
- (id)_viewControllerBefore:(BOOL)before viewController:(id)controller;	// 0x31f7fff5
- (id)_viewControllerBeforeViewController:(id)controller;	// 0x31f80055
// declared property getter: - (id)_viewControllers;	// 0x31f84309
- (id)_viewControllersForCurlWithViewControllers:(id)viewControllers direction:(int)direction;	// 0x31f8007d
- (id)_viewControllersForPendingSpineLocation:(int)pendingSpineLocation;	// 0x31f7e015
// declared property getter: - (id)_viewControllersStashedForRotation;	// 0x31f84329
// declared property getter: - (id)dataSource;	// 0x31f7c749
- (void)dealloc;	// 0x31f7c4b1
// declared property getter: - (id)delegate;	// 0x31f7c661
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x31f7f935
- (void)encodeWithCoder:(id)coder;	// 0x31f7c01d
// declared property getter: - (id)gestureRecognizers;	// 0x31f7ca2d
// declared property getter: - (BOOL)isDoubleSided;	// 0x31f7c991
- (void)loadView;	// 0x31f7d43d
// declared property getter: - (int)navigationOrientation;	// 0x31f7c921
- (void)queuingScrollView:(id)view didBailoutOfScrollAndRevealedView:(id)scrollAndRevealedView;	// 0x31f83be1
- (void)queuingScrollView:(id)view didCommitManualScroll:(BOOL)scroll toRevealView:(id)revealView concealView:(id)view4 direction:(int)direction animated:(BOOL)animated canComplete:(BOOL)complete;	// 0x31f834ed
- (void)queuingScrollView:(id)view didEndManualScroll:(BOOL)scroll toRevealView:(id)revealView direction:(int)direction animated:(BOOL)animated didFinish:(BOOL)finish didComplete:(BOOL)complete;	// 0x31f838d1
- (void)queuingScrollView:(id)view didFlushView:(id)view2 animated:(BOOL)animated;	// 0x31f84079
- (id)queuingScrollView:(id)view viewAfterView:(id)view2;	// 0x31f83e01
- (id)queuingScrollView:(id)view viewBeforeView:(id)view2;	// 0x31f83de1
- (void)queuingScrollView:(id)view willManuallyScroll:(BOOL)scroll toRevealView:(id)revealView concealView:(id)view4 animated:(BOOL)animated;	// 0x31f8316d
- (BOOL)queuingScrollViewShouldLayoutSubviews:(id)queuingScrollView;	// 0x31f840bd
// declared property setter: - (void)setDataSource:(id)source;	// 0x31f7c759
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31f7c671
// declared property setter: - (void)setDoubleSided:(BOOL)sided;	// 0x31f7c9a1
- (void)setViewControllers:(id)controllers direction:(int)direction animated:(BOOL)animated completion:(id)completion;	// 0x31f81ccd
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;	// 0x31f7d6b9
- (BOOL)shouldAutomaticallyForwardRotationMethods;	// 0x31f7d6bd
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x31f7dccd
// declared property getter: - (int)spineLocation;	// 0x31f7c981
// declared property getter: - (int)transitionStyle;	// 0x31f7c901
// declared property getter: - (id)viewControllers;	// 0x31f7ca79
- (void)viewDidAppear:(BOOL)view;	// 0x31f7dbf5
- (void)viewDidDisappear:(BOOL)view;	// 0x31f7dc85
- (void)viewWillAppear:(BOOL)view;	// 0x31f7dae1
- (void)viewWillDisappear:(BOOL)view;	// 0x31f7dc3d
- (void)viewWillUnload;	// 0x31f7d691
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x31f7ece1
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x31f7e4e1
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIViewController.h"

@class UIPanGestureRecognizer, _UIPageCurl, NSMutableArray, UITapGestureRecognizer, NSArray;
@protocol UIPageViewControllerDataSource, UIPageViewControllerDelegate;

@interface UIPageViewController : UIViewController <UIGestureRecognizerDelegate> {
@private
	id<UIPageViewControllerDelegate> _delegate;	// 156 = 0x9c
	id<UIPageViewControllerDataSource> _dataSource;	// 160 = 0xa0
	int _transitionStyle;	// 164 = 0xa4
	int _navigationOrientation;	// 168 = 0xa8
	int _spineLocation;	// 172 = 0xac
	BOOL _doubleSided;	// 176 = 0xb0
	NSArray *_viewControllers;	// 180 = 0xb4
	_UIPageCurl *_pageCurl;	// 184 = 0xb8
	UIPanGestureRecognizer *_panGestureRecognizer;	// 188 = 0xbc
	UITapGestureRecognizer *_tapGestureRecognizer;	// 192 = 0xc0
	BOOL _stashingViewControllersForRotation;	// 196 = 0xc4
	NSArray *_viewControllersStashedForRotation;	// 200 = 0xc8
	BOOL _rotatingInterface;	// 204 = 0xcc
	NSMutableArray *_rotationSnapshotViews;	// 208 = 0xd0
	int _spineLocationPriorToInterfaceRotation;	// 212 = 0xd4
	UIEdgeInsets _tapRegionInsets;	// 216 = 0xd8
	CGSize _tapRegionBreadths;	// 232 = 0xe8
	UIEdgeInsets _effectiveTapRegionInsets;	// 240 = 0xf0
	CGSize _effectiveTapRegionBreadths;	// 256 = 0x100
	CGRect *_tapRegions;	// 264 = 0x108
	NSArray *_viewControllersStashedFromDataSource;	// 268 = 0x10c
	struct {
		unsigned isShowingMoreItem : 1;
		unsigned needsToRebuildItems : 1;
		unsigned isBarHidden : 1;
		unsigned editButtonOnLeft : 1;
	} _delegateFlags;	// 272 = 0x110
}
@property(retain, nonatomic, setter=_setViewControllers:) NSArray *_viewControllers;	// G=0x35444ef5; S=0x35444f05; @synthesize
@property(retain, nonatomic, setter=_setViewControllersStashedForRotation:) NSArray *_viewControllersStashedForRotation;	// G=0x35444f29; S=0x35444f39; @synthesize
@property(assign, nonatomic) id<UIPageViewControllerDataSource> dataSource;	// G=0x35440aa5; S=0x35440ab5; 
@property(assign, nonatomic) id<UIPageViewControllerDelegate> delegate;	// G=0x35440a09; S=0x35440a19; 
@property(assign, nonatomic, getter=isDoubleSided) BOOL doubleSided;	// G=0x35440bc5; S=0x35440bd5; 
@property(readonly, assign, nonatomic) NSArray *gestureRecognizers;	// G=0x35440c6d; 
@property(readonly, assign, nonatomic) int navigationOrientation;	// G=0x35440b51; 
@property(readonly, assign, nonatomic) int spineLocation;	// G=0x35440bb5; 
@property(readonly, assign, nonatomic) int transitionStyle;	// G=0x35440b41; 
@property(readonly, assign, nonatomic) NSArray *viewControllers;	// G=0x35440cb9; 
+ (BOOL)_isNavigationOrientation:(int)orientation supportedForTransitionStyle:(int)transitionStyle;	// 0x35440171
+ (BOOL)_isSpineLocation:(int)location supportedForTransitionStyle:(int)transitionStyle;	// 0x35440181
+ (BOOL)_isSupportedTransitionStyle:(int)style;	// 0x35440165
+ (id)stringForSpineLocation:(int)spineLocation;	// 0x354416c9
- (id)initWithCoder:(id)coder;	// 0x354405b1
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x354403e9
- (id)initWithTransitionStyle:(int)transitionStyle navigationOrientation:(int)orientation options:(id)options;	// 0x35440199
- (BOOL)_canHandleGestures;	// 0x35442a91
- (void)_contentViewFrameDidChange;	// 0x35442945
- (CGSize)_effectiveTapRegionBreadths;	// 0x35441105
- (UIEdgeInsets)_effectiveTapRegionInsets;	// 0x35440dad
- (BOOL)_gestureRecognizerShouldBegin:(id)_gestureRecognizer;	// 0x35444841
- (void)_handlePanGesture:(id)gesture;	// 0x35444ac1
- (void)_handleTapGesture:(id)gesture;	// 0x35444d61
- (id)_incomingViewControllersForGestureDrivenCurlInDirection:(int)direction;	// 0x35443ff5
- (void)_invalidateEffectiveTapRegions;	// 0x35440d35
- (void)_invalidateViewControllersStashedFromDataSource;	// 0x35442e91
- (BOOL)_isCurrentViewControllerStateValid;	// 0x354429e1
- (int)_navigationEndDirectionInResponseToPanGestureRecognizer:(id)panGestureRecognizer suggestedVelocity:(float *)velocity;	// 0x35444929
- (void)_populateLeftAndRightViewControllersInMap:(id)map withViewControllers:(id)viewControllers forCurlInDirection:(int)direction;	// 0x35442dc5
- (void)_setSpineLocation:(int)location;	// 0x35440b61
- (void)_setTapRegionBreadths:(CGSize)breadths;	// 0x3544133d
- (void)_setTapRegionInsets:(UIEdgeInsets)insets;	// 0x35441079
// declared property setter: - (void)_setViewControllers:(id)controllers;	// 0x35444f05
- (void)_setViewControllers:(id)controllers withCurlOfType:(int)type fromLocation:(CGPoint)location direction:(int)direction animated:(BOOL)animated completion:(id)completion;	// 0x35442ebd
// declared property setter: - (void)_setViewControllersStashedForRotation:(id)rotation;	// 0x35444f39
- (BOOL)_shouldBeginNavigationInDirection:(int *)direction inResponseToPanGestureRecognizer:(id)panGestureRecognizer;	// 0x35444719
- (BOOL)_shouldCompleteManualCurlWithSuggestedVelocity:(float *)suggestedVelocity;	// 0x35444a51
- (BOOL)_shouldNavigateInDirection:(int *)direction inResponseToTapGestureRecognizer:(id)tapGestureRecognizer;	// 0x35444571
- (BOOL)_shouldNavigateInDirection:(int *)direction inResponseToVelocity:(float *)velocity ofGestureRecognizedByPanGestureRecognizer:(id)gestureRecognizedByPanGestureRecognizer;	// 0x3544463d
- (BOOL)_shouldPersistViewWhenCoding;	// 0x3544040d
- (CGSize)_tapRegionBreadths;	// 0x3544131d
- (UIEdgeInsets)_tapRegionInsets;	// 0x35441055
- (CGRect *)_tapRegions;	// 0x354441ed
- (id)_validatedViewControllersForCurlWithViewControllers:(id)viewControllers;	// 0x35442a41
- (id)_viewControllerAfterViewController:(id)controller;	// 0x35442ba9
- (id)_viewControllerBefore:(BOOL)before viewController:(id)controller;	// 0x35442ac1
- (id)_viewControllerBeforeViewController:(id)controller;	// 0x35442b95
// declared property getter: - (id)_viewControllers;	// 0x35444ef5
- (id)_viewControllersForCurlWithViewControllers:(id)viewControllers direction:(int)direction;	// 0x35442bbd
- (id)_viewControllersForPendingSpineLocation:(int)pendingSpineLocation;	// 0x35441711
// declared property getter: - (id)_viewControllersStashedForRotation;	// 0x35444f29
// declared property getter: - (id)dataSource;	// 0x35440aa5
- (void)dealloc;	// 0x35440865
// declared property getter: - (id)delegate;	// 0x35440a09
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x35442905
- (void)encodeWithCoder:(id)coder;	// 0x35440411
// declared property getter: - (id)gestureRecognizers;	// 0x35440c6d
// declared property getter: - (BOOL)isDoubleSided;	// 0x35440bc5
- (void)loadView;	// 0x35441391
// declared property getter: - (int)navigationOrientation;	// 0x35440b51
// declared property setter: - (void)setDataSource:(id)source;	// 0x35440ab5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35440a19
// declared property setter: - (void)setDoubleSided:(BOOL)sided;	// 0x35440bd5
- (void)setViewControllers:(id)controllers direction:(int)direction animated:(BOOL)animated completion:(id)completion;	// 0x35443f91
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x3544154d
// declared property getter: - (int)spineLocation;	// 0x35440bb5
// declared property getter: - (int)transitionStyle;	// 0x35440b41
// declared property getter: - (id)viewControllers;	// 0x35440cb9
- (void)viewWillUnload;	// 0x35441521
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x35441db1
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x354417fd
@end


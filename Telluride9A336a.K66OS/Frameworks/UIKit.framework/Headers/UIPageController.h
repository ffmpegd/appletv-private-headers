/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class NSMutableArray, UIPageControl, UIScrollView, UIView;
@protocol UIPageControllerDelegate;

@interface UIPageController : UIViewController {
	NSMutableArray *_viewControllers;	// 156 = 0x9c
	UIView *_wrapperViews[3];	// 160 = 0xa0
	int _notificationState[3];	// 172 = 0xac
	UIScrollView *_scrollView;	// 184 = 0xb8
	UIPageControl *_pageControl;	// 188 = 0xbc
	id<UIPageControllerDelegate> _delegate;	// 192 = 0xc0
	int _pageSpacing;	// 196 = 0xc4
	int _visibleIndex;	// 200 = 0xc8
	int _pageCount;	// 204 = 0xcc
	struct {
		unsigned _firstTouchForView : 1;
		unsigned _isTap : 1;
		unsigned _isDelayed : 1;
		unsigned _sentTouchesEnded : 1;
		unsigned _abandonForwardingRecord : 1;
	} _pageControllerFlags;	// 208 = 0xd0
}
@property(assign, nonatomic) id<UIPageControllerDelegate> delegate;	// G=0x353be4c1; S=0x352395cd; @synthesize=_delegate
@property(assign, nonatomic) BOOL displaysPageControl;	// G=0x353be1a5; S=0x353be1ed; 
@property(assign, nonatomic) int pageCount;	// G=0x353be07d; S=0x3523aad1; 
@property(assign, nonatomic) float pageSpacing;	// G=0x353bdfa9; S=0x35239529; 
@property(assign, nonatomic) int visibleIndex;	// G=0x3523b5d9; S=0x3523ab95; 
@property(readonly, assign, nonatomic) UIViewController *visibleViewController;	// G=0x3523bf5d; 
@property(assign, nonatomic) BOOL wraps;	// G=0x353be08d; S=0x353be0a1; 
- (void)_adjustScrollViewContentInsets;	// 0x35239e15
- (BOOL)_allowsAutorotation;	// 0x353be281
- (void)_createPageControl;	// 0x3523a881
- (BOOL)_doesVisibleViewControllerSupportInterfaceOrientation:(int)orientation;	// 0x3523b845
- (void)_getRotationContentSettings:(XXStruct_tXAZTC *)settings;	// 0x353be35d
- (BOOL)_hasNextViewController;	// 0x3523a621
- (BOOL)_hasPreviousViewController;	// 0x35239f25
- (BOOL)_hasVisibleViewController;	// 0x353be03d
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x3523b7d9
- (BOOL)_isViewControllerBeingUnloaded:(id)unloaded atIndex:(int)index;	// 0x3523a575
- (id)_loadNextViewController;	// 0x3523a6f9
- (id)_loadPreviousViewController;	// 0x35239ff9
- (id)_loadVisibleViewControllerAndNotify:(BOOL)notify;	// 0x3523a1d1
- (BOOL)_needToLoadNext;	// 0x353be001
- (BOOL)_needToLoadPrevious;	// 0x353bdfc5
- (BOOL)_needToLoadVisible;	// 0x3523b355
- (id)_nextViewController;	// 0x3523a689
- (int)_nextViewControllerNotificationState;	// 0x3523d311
- (void)_notifyNextViewController:(int)controller animated:(BOOL)animated;	// 0x3523d335
- (void)_notifyPreviousViewController:(int)controller animated:(BOOL)animated;	// 0x3523df49
- (void)_notifyViewController:(id)controller ofState:(int)state previousState:(int)state3 animated:(BOOL)animated;	// 0x3523b70d
- (void)_notifyVisibleViewController:(int)controller animated:(BOOL)animated;	// 0x3523b685
- (void)_pageChanged:(id)changed;	// 0x353be1b9
- (id)_pageControllerScrollView;	// 0x35239681
- (id)_previousViewController;	// 0x35239f89
- (int)_previousViewControllerNotificationState;	// 0x3523d325
- (void)_replaceViewControllerAtIndex:(int)index withViewController:(id)viewController;	// 0x3523a32d
- (id)_scrollView;	// 0x352396d9
- (void)_scrollView:(id)view boundsDidChangeToSize:(CGSize)bounds;	// 0x35239c05
- (void)_scrollViewDidEndPaging;	// 0x3523de69
- (void)_scrollViewDidScroll:(id)_scrollView forceUpdate:(BOOL)update;	// 0x3523b969
- (CGRect)_scrollViewFrame;	// 0x35239a3d
- (void)_scrollViewWillBeginPaging;	// 0x3523d27d
- (void)_setNextViewController:(id)controller;	// 0x3523a86d
- (void)_setNextViewControllerNotificationState:(int)state;	// 0x3523b341
- (void)_setPreviousViewController:(id)controller;	// 0x3523a60d
- (void)_setPreviousViewControllerNotificationState:(int)state;	// 0x3523b31d
- (void)_setVisibleViewController:(id)controller;	// 0x3523a319
- (void)_setVisibleViewControllerNotificationState:(int)state;	// 0x3523b32d
- (BOOL)_shouldUseOnePartRotation;	// 0x353be335
- (id)_visibleViewController;	// 0x3523a15d
- (int)_visibleViewControllerNotificationState;	// 0x3523b6f9
- (void)dealloc;	// 0x3523d089
// declared property getter: - (id)delegate;	// 0x353be4c1
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation;	// 0x353be431
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x353be495
// declared property getter: - (BOOL)displaysPageControl;	// 0x353be1a5
- (int)indexOfViewController:(id)viewController;	// 0x3523b885
- (void)loadView;	// 0x352396e9
// declared property getter: - (int)pageCount;	// 0x353be07d
// declared property getter: - (float)pageSpacing;	// 0x353bdfa9
- (void)reloadViewControllerAtIndex:(int)index;	// 0x3523b24d
- (id)rotatingFooterView;	// 0x353be30d
- (id)rotatingHeaderView;	// 0x353be2e5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x352395cd
// declared property setter: - (void)setDisplaysPageControl:(BOOL)control;	// 0x353be1ed
// declared property setter: - (void)setPageCount:(int)count;	// 0x3523aad1
// declared property setter: - (void)setPageSpacing:(float)spacing;	// 0x35239529
// declared property setter: - (void)setVisibleIndex:(int)index;	// 0x3523ab95
- (void)setVisibleIndex:(int)index animated:(BOOL)animated;	// 0x353be05d
- (void)setVisibleIndex:(int)index preservingLoadedViewControllers:(BOOL)controllers animated:(BOOL)animated;	// 0x3523abb5
// declared property setter: - (void)setWraps:(BOOL)wraps;	// 0x353be0a1
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x3523b82d
- (void)viewDidAppear:(BOOL)view;	// 0x3523be95
- (void)viewDidDisappear:(BOOL)view;	// 0x3523c719
- (void)viewDidUnload;	// 0x353bde81
- (void)viewWillAppear:(BOOL)view;	// 0x3523b63d
- (void)viewWillDisappear:(BOOL)view;	// 0x3523c4ed
// declared property getter: - (int)visibleIndex;	// 0x3523b5d9
// declared property getter: - (id)visibleViewController;	// 0x3523bf5d
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x353be3f9
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x353be3c1
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x353be45d
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x353be389
// declared property getter: - (BOOL)wraps;	// 0x353be08d
@end


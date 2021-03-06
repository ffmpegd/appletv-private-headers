/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class UIPageControl, UIView, UIScrollView, NSMutableArray;
@protocol UIPageControllerDelegate;

@interface UIPageController : UIViewController {
	NSMutableArray *_viewControllers;	// 196 = 0xc4
	UIView *_wrapperViews[3];	// 200 = 0xc8
	int _notificationState[3];	// 212 = 0xd4
	UIScrollView *_scrollView;	// 224 = 0xe0
	UIPageControl *_pageControl;	// 228 = 0xe4
	id<UIPageControllerDelegate> _delegate;	// 232 = 0xe8
	int _pageSpacing;	// 236 = 0xec
	int _visibleIndex;	// 240 = 0xf0
	int _pageCount;	// 244 = 0xf4
	struct {
		unsigned _firstTouchForView : 1;
		unsigned _isTap : 1;
		unsigned _isDelayed : 1;
		unsigned _sentTouchesEnded : 1;
		unsigned _abandonForwardingRecord : 1;
	} _pageControllerFlags;	// 248 = 0xf8
}
@property(assign, nonatomic) id<UIPageControllerDelegate> delegate;	// G=0x348609d5; S=0x346c9505; @synthesize=_delegate
@property(assign, nonatomic) BOOL displaysPageControl;	// G=0x348606f5; S=0x34860741; 
@property(assign, nonatomic) int pageCount;	// G=0x348605c5; S=0x346caabd; 
@property(assign, nonatomic) float pageSpacing;	// G=0x348604ed; S=0x346c9465; 
@property(assign, nonatomic) int visibleIndex;	// G=0x346cc45d; S=0x346cab8d; 
@property(readonly, assign, nonatomic) UIViewController *visibleViewController;	// G=0x346ccd7d; 
@property(assign, nonatomic) BOOL wraps;	// G=0x348605d9; S=0x348605ed; 
- (void)_adjustScrollViewContentInsets;	// 0x346c9d7d
- (BOOL)_allowsAutorotation;	// 0x348607d5
- (void)_createPageControl;	// 0x346ca86d
- (BOOL)_doesVisibleViewControllerSupportInterfaceOrientation:(int)orientation;	// 0x346cc691
- (void)_getRotationContentSettings:(XXStruct_tXAZTC *)settings;	// 0x34860909
- (BOOL)_hasNextViewController;	// 0x346ca601
- (BOOL)_hasPreviousViewController;	// 0x346c9ebd
- (BOOL)_hasVisibleViewController;	// 0x34860585
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x3486083d
- (BOOL)_isViewControllerBeingUnloaded:(id)unloaded atIndex:(int)index;	// 0x346ca551
- (id)_loadNextViewController;	// 0x346ca6dd
- (id)_loadPreviousViewController;	// 0x346c9f9d
- (id)_loadVisibleViewControllerAndNotify:(BOOL)notify;	// 0x346ca181
- (BOOL)_needToLoadNext;	// 0x34860549
- (BOOL)_needToLoadPrevious;	// 0x34860509
- (BOOL)_needToLoadVisible;	// 0x346cb335
- (id)_nextViewController;	// 0x346ca66d
- (int)_nextViewControllerNotificationState;	// 0x346cd985
- (void)_notifyNextViewController:(int)controller animated:(BOOL)animated;	// 0x346cfba5
- (void)_notifyPreviousViewController:(int)controller animated:(BOOL)animated;	// 0x346cd999
- (void)_notifyViewController:(id)controller ofState:(int)state previousState:(int)state3 animated:(BOOL)animated;	// 0x346cc59d
- (void)_notifyVisibleViewController:(int)controller animated:(BOOL)animated;	// 0x346cc50d
- (void)_pageChanged:(id)changed;	// 0x34860709
- (id)_pageControllerScrollView;	// 0x346c95b1
- (id)_previousViewController;	// 0x346c9f29
- (int)_previousViewControllerNotificationState;	// 0x346cd971
- (void)_replaceViewControllerAtIndex:(int)index withViewController:(id)viewController;	// 0x346ca2e9
- (id)_scrollView;	// 0x346c9611
- (void)_scrollView:(id)view boundsDidChangeToSize:(CGSize)bounds;	// 0x346c9b5d
- (void)_scrollViewDidEndPaging;	// 0x346cea11
- (void)_scrollViewDidScroll:(id)_scrollView forceUpdate:(BOOL)update;	// 0x346cc7b9
- (CGRect)_scrollViewFrame;	// 0x346c997d
- (void)_scrollViewWillBeginPaging;	// 0x346cd0bd
- (void)_setNextViewController:(id)controller;	// 0x346ca855
- (void)_setNextViewControllerNotificationState:(int)state;	// 0x346cb31d
- (void)_setPreviousViewController:(id)controller;	// 0x346ca5ed
- (void)_setPreviousViewControllerNotificationState:(int)state;	// 0x346cb2f9
- (void)_setVisibleViewController:(id)controller;	// 0x346ca2d1
- (void)_setVisibleViewControllerNotificationState:(int)state;	// 0x346cb309
- (BOOL)_shouldUseOnePartRotation;	// 0x348608e1
- (id)_visibleViewController;	// 0x346ca109
- (int)_visibleViewControllerNotificationState;	// 0x346cc589
- (void)dealloc;	// 0x346e7601
// declared property getter: - (id)delegate;	// 0x348609d5
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation;	// 0x3486096d
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x346d06e9
// declared property getter: - (BOOL)displaysPageControl;	// 0x348606f5
- (int)indexOfViewController:(id)viewController;	// 0x346cc6d5
- (void)loadView;	// 0x346c9625
// declared property getter: - (int)pageCount;	// 0x348605c5
// declared property getter: - (float)pageSpacing;	// 0x348604ed
- (void)reloadViewControllerAtIndex:(int)index;	// 0x346cb221
- (id)rotatingFooterView;	// 0x348608b9
- (id)rotatingHeaderView;	// 0x34860891
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x346c9505
// declared property setter: - (void)setDisplaysPageControl:(BOOL)control;	// 0x34860741
// declared property setter: - (void)setPageCount:(int)count;	// 0x346caabd
// declared property setter: - (void)setPageSpacing:(float)spacing;	// 0x346c9465
// declared property setter: - (void)setVisibleIndex:(int)index;	// 0x346cab8d
- (void)setVisibleIndex:(int)index animated:(BOOL)animated;	// 0x348605a5
- (void)setVisibleIndex:(int)index preservingLoadedViewControllers:(BOOL)controllers animated:(BOOL)animated;	// 0x346cabad
// declared property setter: - (void)setWraps:(BOOL)wraps;	// 0x348605ed
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x346cc675
- (void)viewDidAppear:(BOOL)view;	// 0x346cccb5
- (void)viewDidDisappear:(BOOL)view;	// 0x346e6965
- (void)viewDidUnload;	// 0x348603a9
- (void)viewWillAppear:(BOOL)view;	// 0x346cc4c5
- (void)viewWillDisappear:(BOOL)view;	// 0x346e6725
// declared property getter: - (int)visibleIndex;	// 0x346cc45d
// declared property getter: - (id)visibleViewController;	// 0x346ccd7d
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x34860935
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x346d03ad
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x34860999
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x346cfef5
// declared property getter: - (BOOL)wraps;	// 0x348605d9
@end


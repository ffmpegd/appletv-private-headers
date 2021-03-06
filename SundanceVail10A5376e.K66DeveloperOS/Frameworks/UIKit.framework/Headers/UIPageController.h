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
@property(assign, nonatomic) id<UIPageControllerDelegate> delegate;	// G=0x305351d5; S=0x3039f41d; @synthesize=_delegate
@property(assign, nonatomic) BOOL displaysPageControl;	// G=0x30534ef5; S=0x30534f41; 
@property(assign, nonatomic) int pageCount;	// G=0x30534dc5; S=0x303a09d5; 
@property(assign, nonatomic) float pageSpacing;	// G=0x30534ced; S=0x3039f37d; 
@property(assign, nonatomic) int visibleIndex;	// G=0x303a2375; S=0x303a0aa5; 
@property(readonly, assign, nonatomic) UIViewController *visibleViewController;	// G=0x303a2c95; 
@property(assign, nonatomic) BOOL wraps;	// G=0x30534dd9; S=0x30534ded; 
- (void)_adjustScrollViewContentInsets;	// 0x3039fc95
- (BOOL)_allowsAutorotation;	// 0x30534fd5
- (void)_createPageControl;	// 0x303a0785
- (BOOL)_doesVisibleViewControllerSupportInterfaceOrientation:(int)orientation;	// 0x303a25a9
- (void)_getRotationContentSettings:(XXStruct_tXAZTC *)settings;	// 0x30535109
- (BOOL)_hasNextViewController;	// 0x303a0519
- (BOOL)_hasPreviousViewController;	// 0x3039fdd5
- (BOOL)_hasVisibleViewController;	// 0x30534d85
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x3053503d
- (BOOL)_isViewControllerBeingUnloaded:(id)unloaded atIndex:(int)index;	// 0x303a0469
- (id)_loadNextViewController;	// 0x303a05f5
- (id)_loadPreviousViewController;	// 0x3039feb5
- (id)_loadVisibleViewControllerAndNotify:(BOOL)notify;	// 0x303a0099
- (BOOL)_needToLoadNext;	// 0x30534d49
- (BOOL)_needToLoadPrevious;	// 0x30534d09
- (BOOL)_needToLoadVisible;	// 0x303a124d
- (id)_nextViewController;	// 0x303a0585
- (int)_nextViewControllerNotificationState;	// 0x303a389d
- (void)_notifyNextViewController:(int)controller animated:(BOOL)animated;	// 0x303a5ac5
- (void)_notifyPreviousViewController:(int)controller animated:(BOOL)animated;	// 0x303a38b1
- (void)_notifyViewController:(id)controller ofState:(int)state previousState:(int)state3 animated:(BOOL)animated;	// 0x303a24b5
- (void)_notifyVisibleViewController:(int)controller animated:(BOOL)animated;	// 0x303a2425
- (void)_pageChanged:(id)changed;	// 0x30534f09
- (id)_pageControllerScrollView;	// 0x3039f4c9
- (id)_previousViewController;	// 0x3039fe41
- (int)_previousViewControllerNotificationState;	// 0x303a3889
- (void)_replaceViewControllerAtIndex:(int)index withViewController:(id)viewController;	// 0x303a0201
- (id)_scrollView;	// 0x3039f529
- (void)_scrollView:(id)view boundsDidChangeToSize:(CGSize)bounds;	// 0x3039fa75
- (void)_scrollViewDidEndPaging;	// 0x303a4929
- (void)_scrollViewDidScroll:(id)_scrollView forceUpdate:(BOOL)update;	// 0x303a26d1
- (CGRect)_scrollViewFrame;	// 0x3039f895
- (void)_scrollViewWillBeginPaging;	// 0x303a2fd5
- (void)_setNextViewController:(id)controller;	// 0x303a076d
- (void)_setNextViewControllerNotificationState:(int)state;	// 0x303a1235
- (void)_setPreviousViewController:(id)controller;	// 0x303a0505
- (void)_setPreviousViewControllerNotificationState:(int)state;	// 0x303a1211
- (void)_setVisibleViewController:(id)controller;	// 0x303a01e9
- (void)_setVisibleViewControllerNotificationState:(int)state;	// 0x303a1221
- (BOOL)_shouldUseOnePartRotation;	// 0x305350e1
- (id)_visibleViewController;	// 0x303a0021
- (int)_visibleViewControllerNotificationState;	// 0x303a24a1
- (void)dealloc;	// 0x303bd419
// declared property getter: - (id)delegate;	// 0x305351d5
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation;	// 0x3053516d
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x303a6609
// declared property getter: - (BOOL)displaysPageControl;	// 0x30534ef5
- (int)indexOfViewController:(id)viewController;	// 0x303a25ed
- (void)loadView;	// 0x3039f53d
// declared property getter: - (int)pageCount;	// 0x30534dc5
// declared property getter: - (float)pageSpacing;	// 0x30534ced
- (void)reloadViewControllerAtIndex:(int)index;	// 0x303a1139
- (id)rotatingFooterView;	// 0x305350b9
- (id)rotatingHeaderView;	// 0x30535091
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3039f41d
// declared property setter: - (void)setDisplaysPageControl:(BOOL)control;	// 0x30534f41
// declared property setter: - (void)setPageCount:(int)count;	// 0x303a09d5
// declared property setter: - (void)setPageSpacing:(float)spacing;	// 0x3039f37d
// declared property setter: - (void)setVisibleIndex:(int)index;	// 0x303a0aa5
- (void)setVisibleIndex:(int)index animated:(BOOL)animated;	// 0x30534da5
- (void)setVisibleIndex:(int)index preservingLoadedViewControllers:(BOOL)controllers animated:(BOOL)animated;	// 0x303a0ac5
// declared property setter: - (void)setWraps:(BOOL)wraps;	// 0x30534ded
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x303a258d
- (void)viewDidAppear:(BOOL)view;	// 0x303a2bcd
- (void)viewDidDisappear:(BOOL)view;	// 0x303bc775
- (void)viewDidUnload;	// 0x30534ba9
- (void)viewWillAppear:(BOOL)view;	// 0x303a23dd
- (void)viewWillDisappear:(BOOL)view;	// 0x303bc535
// declared property getter: - (int)visibleIndex;	// 0x303a2375
// declared property getter: - (id)visibleViewController;	// 0x303a2c95
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x30535135
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x303a62cd
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x30535199
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x303a5e15
// declared property getter: - (BOOL)wraps;	// 0x30534dd9
@end


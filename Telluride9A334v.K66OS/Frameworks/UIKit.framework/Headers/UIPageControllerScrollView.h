/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIScrollView.h"

@class UIPageController;

@interface UIPageControllerScrollView : UIScrollView {
	UIPageController *_pageController;	// 404 = 0x194
}
@property(assign, nonatomic) UIPageController *pageController;	// G=0x30332e71; S=0x301aebcd; @synthesize=_pageController
- (int)_abuttedPagingEdges;	// 0x30332c71
- (void)_scrollViewAnimationEnded;	// 0x30332c0d
- (void)_scrollViewDidEndDecelerating;	// 0x301b2e05
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;	// 0x301b23a9
- (void)_scrollViewWillBeginDragging;	// 0x301b2231
- (void)layoutSubviews;	// 0x301b08f1
// declared property getter: - (id)pageController;	// 0x30332e71
- (void)setBounds:(CGRect)bounds;	// 0x301aed4d
- (void)setFrame:(CGRect)frame;	// 0x301aeadd
// declared property setter: - (void)setPageController:(id)controller;	// 0x301aebcd
@end


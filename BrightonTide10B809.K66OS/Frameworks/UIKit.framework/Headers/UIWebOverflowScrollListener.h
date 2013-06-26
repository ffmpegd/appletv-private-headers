/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIScrollViewDelegate.h"
#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIWebOverflowScrollView;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollListener : NSObject <UIScrollViewDelegate> {
	UIWebOverflowScrollView *_scrollView;	// 4 = 0x4
}
- (id)initWithScrollView:(id)scrollView;	// 0x32ebe499
- (void)_didCompleteScrolling;	// 0x32ebe545
- (void)scrollViewDidEndDecelerating:(id)scrollView;	// 0x32ebe5f5
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;	// 0x32ebe5dd
- (void)scrollViewDidScrollToTop:(id)scrollView;	// 0x32ebe605
- (void)scrollViewWillBeginDragging:(id)scrollView;	// 0x32ebe4f1
@end

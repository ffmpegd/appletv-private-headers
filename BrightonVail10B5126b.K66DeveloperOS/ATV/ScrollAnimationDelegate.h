/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRScrollControl;

__attribute__((visibility("hidden")))
@interface ScrollAnimationDelegate : XXUnknownSuperclass {
	BRScrollControl *_scroll;	// 4 = 0x4
	long _animationBalance;	// 8 = 0x8
}
- (id)initWithScroll:(id)scroll;	// 0x301d21
- (void)animationDidStart:(id)animation;	// 0x301d91
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x301e11
- (void)clearScroll;	// 0x301d7d
- (BOOL)scrolling;	// 0x301d65
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRMarqueeScrollingDelegate.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRMarqueeStack : XXUnknownSuperclass <BRMarqueeScrollingDelegate> {
	NSMutableArray *_controlStack;	// 4 = 0x4
	unsigned _currentScrollingControlIndex;	// 8 = 0x8
	BOOL _isFirstRun;	// 12 = 0xc
	BOOL _shouldStopAllScrolling;	// 13 = 0xd
	BOOL _shouldAnimateOnce;	// 14 = 0xe
	BOOL _allowsSimultaneousScrollingControls;	// 15 = 0xf
	unsigned _maxSimultaneousScrollingControls;	// 16 = 0x10
	int _transitionDirection;	// 20 = 0x14
}
@property(assign) BOOL allowsSimultaneousScrollingControls;	// G=0x2f5d75; S=0x2f5d65; converted property
@property(assign) unsigned maxSimultaneousScrollingControls;	// G=0x2f5d95; S=0x2f5d85; converted property
@property(assign) int transitionDirection;	// G=0x2f5d35; S=0x2f5d25; converted property
- (id)init;	// 0x2f5c2d
- (int)_indexOfFirstControlInNeedOfAnimation;	// 0x2f6165
- (int)_indexOfNextControlInNeedOfScrollingFromIndex:(unsigned)index;	// 0x2f6179
- (void)addControlToStack:(id)stack;	// 0x2f5da5
- (void)addControlToStack:(id)stack atIndex:(unsigned)index;	// 0x2f5db9
// converted property getter: - (BOOL)allowsSimultaneousScrollingControls;	// 0x2f5d75
- (void)controlDidFinishingScrolling:(id)control;	// 0x2f601d
- (void)dealloc;	// 0x2f5b7d
// converted property getter: - (unsigned)maxSimultaneousScrollingControls;	// 0x2f5d95
- (void)removeControlFromStack:(id)stack;	// 0x2f5e31
// converted property setter: - (void)setAllowsSimultaneousScrollingControls:(BOOL)controls;	// 0x2f5d65
// converted property setter: - (void)setMaxSimultaneousScrollingControls:(unsigned)controls;	// 0x2f5d85
- (void)setShouldAnimateOnce:(BOOL)animateOnce;	// 0x2f5d55
- (void)setShouldStopAllScrolling:(BOOL)stopAllScrolling;	// 0x2f5d45
// converted property setter: - (void)setTransitionDirection:(int)direction;	// 0x2f5d25
- (BOOL)shouldControlWaitToScroll:(id)scroll;	// 0x2f5e71
- (id)stack;	// 0x2f5cf9
// converted property getter: - (int)transitionDirection;	// 0x2f5d35
@end


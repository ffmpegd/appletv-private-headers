/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMarqueeScrollingDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

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
@property(assign) BOOL allowsSimultaneousScrollingControls;	// G=0x37c7d5; S=0x37c7c5; converted property
@property(assign) unsigned maxSimultaneousScrollingControls;	// G=0x37c7f5; S=0x37c7e5; converted property
@property(assign) int transitionDirection;	// G=0x37c795; S=0x37c785; converted property
- (id)init;	// 0x37c68d
- (int)_indexOfFirstControlInNeedOfAnimation;	// 0x37cbc5
- (int)_indexOfNextControlInNeedOfScrollingFromIndex:(unsigned)index;	// 0x37cbd9
- (void)addControlToStack:(id)stack;	// 0x37c805
- (void)addControlToStack:(id)stack atIndex:(unsigned)index;	// 0x37c819
// converted property getter: - (BOOL)allowsSimultaneousScrollingControls;	// 0x37c7d5
- (void)controlDidFinishingScrolling:(id)control;	// 0x37ca7d
- (void)dealloc;	// 0x37c5dd
// converted property getter: - (unsigned)maxSimultaneousScrollingControls;	// 0x37c7f5
- (void)removeControlFromStack:(id)stack;	// 0x37c891
// converted property setter: - (void)setAllowsSimultaneousScrollingControls:(BOOL)controls;	// 0x37c7c5
// converted property setter: - (void)setMaxSimultaneousScrollingControls:(unsigned)controls;	// 0x37c7e5
- (void)setShouldAnimateOnce:(BOOL)animateOnce;	// 0x37c7b5
- (void)setShouldStopAllScrolling:(BOOL)stopAllScrolling;	// 0x37c7a5
// converted property setter: - (void)setTransitionDirection:(int)direction;	// 0x37c785
- (BOOL)shouldControlWaitToScroll:(id)scroll;	// 0x37c8d1
- (id)stack;	// 0x37c759
// converted property getter: - (int)transitionDirection;	// 0x37c795
@end


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
@property(assign) BOOL allowsSimultaneousScrollingControls;	// G=0x2f3be5; S=0x2f3bd5; converted property
@property(assign) unsigned maxSimultaneousScrollingControls;	// G=0x2f3c05; S=0x2f3bf5; converted property
@property(assign) int transitionDirection;	// G=0x2f3ba5; S=0x2f3b95; converted property
- (id)init;	// 0x2f3a9d
- (int)_indexOfFirstControlInNeedOfAnimation;	// 0x2f3fd5
- (int)_indexOfNextControlInNeedOfScrollingFromIndex:(unsigned)index;	// 0x2f3fe9
- (void)addControlToStack:(id)stack;	// 0x2f3c15
- (void)addControlToStack:(id)stack atIndex:(unsigned)index;	// 0x2f3c29
// converted property getter: - (BOOL)allowsSimultaneousScrollingControls;	// 0x2f3be5
- (void)controlDidFinishingScrolling:(id)control;	// 0x2f3e8d
- (void)dealloc;	// 0x2f39ed
// converted property getter: - (unsigned)maxSimultaneousScrollingControls;	// 0x2f3c05
- (void)removeControlFromStack:(id)stack;	// 0x2f3ca1
// converted property setter: - (void)setAllowsSimultaneousScrollingControls:(BOOL)controls;	// 0x2f3bd5
// converted property setter: - (void)setMaxSimultaneousScrollingControls:(unsigned)controls;	// 0x2f3bf5
- (void)setShouldAnimateOnce:(BOOL)animateOnce;	// 0x2f3bc5
- (void)setShouldStopAllScrolling:(BOOL)stopAllScrolling;	// 0x2f3bb5
// converted property setter: - (void)setTransitionDirection:(int)direction;	// 0x2f3b95
- (BOOL)shouldControlWaitToScroll:(id)scroll;	// 0x2f3ce1
- (id)stack;	// 0x2f3b69
// converted property getter: - (int)transitionDirection;	// 0x2f3ba5
@end


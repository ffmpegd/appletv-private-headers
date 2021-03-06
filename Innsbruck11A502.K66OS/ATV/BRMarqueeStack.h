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
@property(assign) BOOL allowsSimultaneousScrollingControls;	// G=0x37820d; S=0x3781fd; converted property
@property(assign) unsigned maxSimultaneousScrollingControls;	// G=0x37822d; S=0x37821d; converted property
@property(assign) int transitionDirection;	// G=0x3781cd; S=0x3781bd; converted property
- (id)init;	// 0x3780c5
- (int)_indexOfFirstControlInNeedOfAnimation;	// 0x3785fd
- (int)_indexOfNextControlInNeedOfScrollingFromIndex:(unsigned)index;	// 0x378611
- (void)addControlToStack:(id)stack;	// 0x37823d
- (void)addControlToStack:(id)stack atIndex:(unsigned)index;	// 0x378251
// converted property getter: - (BOOL)allowsSimultaneousScrollingControls;	// 0x37820d
- (void)controlDidFinishingScrolling:(id)control;	// 0x3784b5
- (void)dealloc;	// 0x378015
// converted property getter: - (unsigned)maxSimultaneousScrollingControls;	// 0x37822d
- (void)removeControlFromStack:(id)stack;	// 0x3782c9
// converted property setter: - (void)setAllowsSimultaneousScrollingControls:(BOOL)controls;	// 0x3781fd
// converted property setter: - (void)setMaxSimultaneousScrollingControls:(unsigned)controls;	// 0x37821d
- (void)setShouldAnimateOnce:(BOOL)animateOnce;	// 0x3781ed
- (void)setShouldStopAllScrolling:(BOOL)stopAllScrolling;	// 0x3781dd
// converted property setter: - (void)setTransitionDirection:(int)direction;	// 0x3781bd
- (BOOL)shouldControlWaitToScroll:(id)scroll;	// 0x378309
- (id)stack;	// 0x378191
// converted property getter: - (int)transitionDirection;	// 0x3781cd
@end


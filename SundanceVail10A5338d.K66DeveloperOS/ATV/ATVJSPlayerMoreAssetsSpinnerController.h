/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTextWithSpinnerController.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface ATVJSPlayerMoreAssetsSpinnerController : BRTextWithSpinnerController {
	id _popBlock;	// 116 = 0x74
	double _popInterval;	// 120 = 0x78
	NSTimer *_popTimer;	// 128 = 0x80
	BOOL _isDiscarded;	// 132 = 0x84
}
- (id)initWithPopBlock:(id)popBlock popInterval:(double)interval;	// 0x157fd1
- (void)_timerFired:(id)fired;	// 0x1581e9
- (void)dealloc;	// 0x15807d
- (void)discard;	// 0x1580c9
- (void)wasPopped;	// 0x158175
- (void)wasPushed;	// 0x158109
@end

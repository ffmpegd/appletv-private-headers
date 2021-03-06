/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIImageView, NSArray, UIView;

@interface UIDragger : NSObject {
	/*function-pointer*/ void *_interpolator;	// 4 = 0x4
	UIView *_target;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
	SEL _action;	// 16 = 0x10
	CGPoint _startLocation;	// 20 = 0x14
	CGPoint _stopLocation;	// 28 = 0x1c
	double _duration;	// 36 = 0x24
	BOOL _showFinger;	// 44 = 0x2c
	unsigned _port;	// 48 = 0x30
	NSArray *_modes;	// 52 = 0x34
	unsigned long long _startTimestamp;	// 56 = 0x38
	unsigned long long _stopTimestamp;	// 64 = 0x40
	unsigned long long _lastTimestamp;	// 72 = 0x48
	BOOL _waitingForSmoothScrolling;	// 80 = 0x50
	UIImageView *_fingerView;	// 84 = 0x54
}
- (id)init;	// 0x30ad743d
- (void)_continueDrag:(id)drag;	// 0x30ad79d9
- (double)_delayUntilNextEvent;	// 0x30ad7899
- (void)_postMouseEvent:(int)event timestamp:(unsigned long long)timestamp location:(CGPoint)location;	// 0x30ad7769
- (void)_smoothScrollingDidEnd:(id)_smoothScrolling;	// 0x30ad79a5
- (void)_smoothScrollingWillStart:(id)_smoothScrolling;	// 0x30ad7991
- (void)_stopDrag:(id)drag;	// 0x30ad79b5
- (void)dealloc;	// 0x30ad7639
- (void)dragDidEnd;	// 0x30ad7931
- (void)run;	// 0x30ad7bc9
- (void)setAction:(SEL)action;	// 0x30ad7709
- (void)setDelegate:(id)delegate;	// 0x30ad76f9
- (void)setDuration:(double)duration;	// 0x30ad7741
- (void)setInterpolation:(/*function-pointer*/ void *)interpolation;	// 0x30ad76d9
- (void)setStartLocation:(CGPoint)location;	// 0x30ad7719
- (void)setStopLocation:(CGPoint)location;	// 0x30ad772d
- (void)setTarget:(id)target;	// 0x30ad76e9
- (void)showFinger;	// 0x30ad7755
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


@interface UIAnimation : NSObject {
	id _target;	// 4 = 0x4
	SEL _action;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
	struct {
		unsigned curve : 4;
		unsigned tvOutput : 1;
		unsigned reserved : 27;
	} _animationFlags;	// 16 = 0x10
@private
	double _startTime;	// 20 = 0x14
	double _duration;	// 28 = 0x1c
	int _state;	// 36 = 0x24
}
@property(assign) SEL action;	// G=0x3065f161; S=0x3065e6d1; converted property
@property(assign) id delegate;	// G=0x3065e9dd; S=0x3065e6c1; converted property
@property(readonly, assign) int state;	// G=0x3065e81d; converted property
@property(readonly, retain) id target;	// G=0x3065eba1; converted property
- (id)initWithTarget:(id)target;	// 0x3065e5bd
// converted property getter: - (SEL)action;	// 0x3065f161
- (void)dealloc;	// 0x3065f271
// converted property getter: - (id)delegate;	// 0x3065e9dd
- (float)fractionForTime:(double)time;	// 0x3065ed09
- (void)markStart:(double)start;	// 0x3065e9b9
- (void)markStop;	// 0x3065f151
- (float)progressForFraction:(float)fraction;	// 0x3065edb5
// converted property setter: - (void)setAction:(SEL)action;	// 0x3065e6d1
- (void)setAnimationCurve:(int)curve;	// 0x306da56d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3065e6c1
- (void)setDuration:(double)duration;	// 0x3065e82d
- (void)setProgress:(float)progress;	// 0x3070ef91
// converted property getter: - (int)state;	// 0x3065e81d
- (void)stopAnimation;	// 0x3070f2a1
// converted property getter: - (id)target;	// 0x3065eba1
- (BOOL)tvOutput;	// 0x3065e9a5
@end

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
	id _completion;	// 16 = 0x10
	struct {
		unsigned curve : 4;
		unsigned tvOutput : 1;
		unsigned useNSTimer : 1;
	} _animationFlags;	// 20 = 0x14
	double _startTime;	// 24 = 0x18
	double _duration;	// 32 = 0x20
	int _state;	// 40 = 0x28
}
@property(assign) SEL action;	// G=0x32c4fa21; S=0x32cea479; converted property
@property(retain) id completion;	// G=0x32c4fa11; S=0x32cea52d; converted property
@property(assign) id delegate;	// G=0x32c4f169; S=0x32c4ec31; converted property
@property(readonly, assign) int state;	// G=0x32c4ed9d; converted property
@property(readonly, retain) id target;	// G=0x32c4f7d1; converted property
@property(assign) BOOL usesNSTimer;	// G=0x32cea519; S=0x32cea489; converted property
- (id)initWithTarget:(id)target;	// 0x32c4eb21
// converted property getter: - (SEL)action;	// 0x32c4fa21
// converted property getter: - (id)completion;	// 0x32c4fa11
- (void)dealloc;	// 0x32c4fc19
// converted property getter: - (id)delegate;	// 0x32c4f169
- (float)fractionForTime:(double)time;	// 0x32c4f479
- (void)markStart:(double)start;	// 0x32c4f139
- (void)markStop;	// 0x32c4f9fd
- (float)progressForFraction:(float)fraction;	// 0x32c4f521
// converted property setter: - (void)setAction:(SEL)action;	// 0x32cea479
- (void)setAnimationCurve:(int)curve;	// 0x32c4ec11
// converted property setter: - (void)setCompletion:(id)completion;	// 0x32cea52d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x32c4ec31
- (void)setDuration:(double)duration;	// 0x32c4edb1
- (void)setProgress:(float)progress;	// 0x32cea56d
// converted property setter: - (void)setUsesNSTimer:(BOOL)timer;	// 0x32cea489
// converted property getter: - (int)state;	// 0x32c4ed9d
- (void)stopAnimation;	// 0x32cea441
// converted property getter: - (id)target;	// 0x32c4f7d1
- (int)type;	// 0x32cea575
// converted property getter: - (BOOL)usesNSTimer;	// 0x32cea519
@end


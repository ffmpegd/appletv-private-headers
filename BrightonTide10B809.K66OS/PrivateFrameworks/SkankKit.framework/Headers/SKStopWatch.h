/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import "DPTextLayer.h"

@class NSTimer;

@interface SKStopWatch : DPTextLayer {
	NSTimer *_runTimer;	// 92 = 0x5c
	double _duration;	// 96 = 0x60
}
- (void)dealloc;	// 0x35446229
- (void)reset;	// 0x354464a5
- (BOOL)running;	// 0x35446319
- (void)start;	// 0x3544633d
- (void)stop;	// 0x354463d5
- (void)updateTime:(id)time;	// 0x35446269
@end


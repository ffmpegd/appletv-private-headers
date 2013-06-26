/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSDate, ATVRCButtonPatternSet, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVRCCapture : XXUnknownSuperclass {
	int _captureState;	// 4 = 0x4
	NSMutableArray *_capturedEvents;	// 8 = 0x8
	ATVRCButtonPatternSet *_workingPatternSet;	// 12 = 0xc
	NSTimer *_discontinuityTrigger;	// 16 = 0x10
	NSDate *_captureStartTime;	// 20 = 0x14
}
@property(readonly, assign) int captureState;	// G=0x237ea9; converted property
@property(readonly, retain) ATVRCButtonPatternSet *workingPatternSet;	// G=0x237eb9; converted property
- (id)init;	// 0x237c79
- (void)_clearDiscontinuityTrigger;	// 0x238329
- (void)_discontinuityTrigger:(id)trigger;	// 0x23835d
- (void)_firstCommandEventReceived;	// 0x237ff1
- (BOOL)_identifyCommandPattern;	// 0x238489
- (void)_mainCaptureDoneTrigger:(id)trigger;	// 0x238131
- (double)_maxIntervalBetweenEvents;	// 0x238639
- (void)_resetDiscontinuityTrigger;	// 0x2382b1
- (void)_setCaptureState:(int)state;	// 0x237f61
- (void)addEvent:(id)event;	// 0x237db1
- (double)captureProgress;	// 0x237ec9
// converted property getter: - (int)captureState;	// 0x237ea9
- (void)dealloc;	// 0x237d09
- (void)reset;	// 0x237e3d
- (void)startCapture;	// 0x237d81
// converted property getter: - (id)workingPatternSet;	// 0x237eb9
@end

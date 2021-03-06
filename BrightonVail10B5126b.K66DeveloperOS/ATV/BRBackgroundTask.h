/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSTimer;

__attribute__((visibility("hidden")))
@interface BRBackgroundTask : XXUnknownSuperclass {
	double _interval;	// 4 = 0x4
	double _delay;	// 12 = 0xc
	NSTimer *_initialDelayTimer;	// 20 = 0x14
	NSTimer *_reenableTimer;	// 24 = 0x18
	NSTimer *_intervalTimer;	// 28 = 0x1c
	BOOL _enabled;	// 32 = 0x20
	BOOL _firedWhileDisabled;	// 33 = 0x21
	int _taskType;	// 36 = 0x24
	NSDictionary *_userInfo;	// 40 = 0x28
}
@property(readonly, assign) BOOL enabled;	// G=0x398b19; converted property
@property(readonly, assign) double interval;	// G=0x398879; converted property
+ (void)_resumeBackgroundProcessing:(id)processing;	// 0x3994d1
+ (void)_resumeHeavyBackgroundProcessing:(id)processing;	// 0x399551
+ (void)_suspendBackgroundProcessing:(id)processing;	// 0x39947d
+ (void)_suspendHeavyBackgroundProcessing:(id)processing;	// 0x3994fd
+ (void)_timeOrTimeZoneChangeNotification:(id)notification;	// 0x39957d
+ (void)disableBackgroundTasks:(id)tasks ofType:(int)type;	// 0x397f41
+ (void)enableBackgroundTasksOfType:(int)type;	// 0x397bd1
+ (void)initialize;	// 0x397a29
+ (void)performFinishedForTask:(id)task;	// 0x3985c9
+ (void)registerBackgroundTask:(id)task;	// 0x3981bd
+ (id)taskForContext:(id)context ofType:(int)type;	// 0x397d79
+ (void)unregisterBackgroundTask:(id)task;	// 0x3983c1
- (id)initWithInterval:(double)interval delay:(double)delay userInfo:(id)info taskType:(int)type;	// 0x398769
- (void)_cancelTimers;	// 0x398cf5
- (void)_delayedPerform:(id)perform;	// 0x399145
- (void)_intervalPerform:(id)perform;	// 0x39931d
- (void)_setEnabled:(BOOL)enabled;	// 0x399121
- (void)_setupTimers;	// 0x398b29
- (void)_updateTimersForTimeChange;	// 0x398e29
- (id)_userInfo;	// 0x39946d
- (void)dealloc;	// 0x398809
- (void)disable:(id)disable;	// 0x398ae1
- (void)enable;	// 0x398891
// converted property getter: - (BOOL)enabled;	// 0x398b19
// converted property getter: - (double)interval;	// 0x398879
- (BOOL)perform:(id)perform;	// 0x398b11
- (void)stop;	// 0x398b15
- (int)type;	// 0x398869
@end


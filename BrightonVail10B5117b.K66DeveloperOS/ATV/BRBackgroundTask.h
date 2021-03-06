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
@property(readonly, assign) BOOL enabled;	// G=0x395279; converted property
@property(readonly, assign) double interval;	// G=0x394fd9; converted property
+ (void)_resumeBackgroundProcessing:(id)processing;	// 0x395c31
+ (void)_resumeHeavyBackgroundProcessing:(id)processing;	// 0x395cb1
+ (void)_suspendBackgroundProcessing:(id)processing;	// 0x395bdd
+ (void)_suspendHeavyBackgroundProcessing:(id)processing;	// 0x395c5d
+ (void)_timeOrTimeZoneChangeNotification:(id)notification;	// 0x395cdd
+ (void)disableBackgroundTasks:(id)tasks ofType:(int)type;	// 0x3946a1
+ (void)enableBackgroundTasksOfType:(int)type;	// 0x394331
+ (void)initialize;	// 0x394189
+ (void)performFinishedForTask:(id)task;	// 0x394d29
+ (void)registerBackgroundTask:(id)task;	// 0x39491d
+ (id)taskForContext:(id)context ofType:(int)type;	// 0x3944d9
+ (void)unregisterBackgroundTask:(id)task;	// 0x394b21
- (id)initWithInterval:(double)interval delay:(double)delay userInfo:(id)info taskType:(int)type;	// 0x394ec9
- (void)_cancelTimers;	// 0x395455
- (void)_delayedPerform:(id)perform;	// 0x3958a5
- (void)_intervalPerform:(id)perform;	// 0x395a7d
- (void)_setEnabled:(BOOL)enabled;	// 0x395881
- (void)_setupTimers;	// 0x395289
- (void)_updateTimersForTimeChange;	// 0x395589
- (id)_userInfo;	// 0x395bcd
- (void)dealloc;	// 0x394f69
- (void)disable:(id)disable;	// 0x395241
- (void)enable;	// 0x394ff1
// converted property getter: - (BOOL)enabled;	// 0x395279
// converted property getter: - (double)interval;	// 0x394fd9
- (BOOL)perform:(id)perform;	// 0x395271
- (void)stop;	// 0x395275
- (int)type;	// 0x394fc9
@end


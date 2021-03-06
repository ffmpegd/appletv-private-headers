/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface BRBackgroundTaskManager : BRSingleton {
	int _numberOfCurrentBackgroundProcesses;	// 4 = 0x4
	double _lastUserActivity;	// 8 = 0x8
	NSTimer *_backgroundProcessSuppressionTimer;	// 16 = 0x10
	NSTimer *_heavyBackgroundProcessSuppresionTimer;	// 20 = 0x14
}
+ (BOOL)backgroundTasksRunning;	// 0x3313e9
+ (void)finishedBackgroundProcessing;	// 0x3313c1
+ (void)holdOffBackgroundTasks;	// 0x331349
+ (BOOL)okToDoBackgroundProcessing;	// 0x331371
+ (void)setSingleton:(id)singleton;	// 0x331449
+ (id)singleton;	// 0x331439
+ (void)startingBackgroundProcessing;	// 0x331399
+ (double)timeSinceLastUserAction;	// 0x331411
- (id)init;	// 0x331459
- (BOOL)_backgroundTasksRunning;	// 0x33192d
- (void)_finishedBackgroundProcessing;	// 0x331919
- (void)_holdOffBackgroundTasks;	// 0x331569
- (void)_holdOffHeavyBackgroundTasks;	// 0x331641
- (BOOL)_okToDoBackgroundProcessing;	// 0x3317cd
- (void)_sendResumeBackgroundProcessingNotification;	// 0x33182d
- (void)_sendResumeHeavyBackgroundProcessingNotification;	// 0x3318bd
- (void)_sendStopBackgroundProcessingNotification;	// 0x3317e5
- (void)_sendStopHeavyBackgroundProcessingNotification;	// 0x331875
- (void)_setOKToDoBackgroundProcessing:(id)doBackgroundProcessing;	// 0x331719
- (void)_setOKToDoHeavyBackgroundProcessing:(id)doHeavyBackgroundProcessing;	// 0x331755
- (void)_startingBackgroundProcessing;	// 0x331905
- (double)_timeSinceLastUserAction;	// 0x331945
- (void)_updateActivity:(id)activity;	// 0x331989
- (void)dealloc;	// 0x33150d
@end


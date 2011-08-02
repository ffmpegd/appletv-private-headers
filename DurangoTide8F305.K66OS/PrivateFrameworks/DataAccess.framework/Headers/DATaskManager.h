/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class DAAccount, NSMutableArray, NSArray, NSMutableSet;
@protocol DATask;

@interface DATaskManager : NSObject {
	DAAccount *_account;	// 4 = 0x4
@private
	NSMutableArray *_queuedExclusiveTasks;	// 8 = 0x8
	id<DATask> _activeExclusiveTask;	// 12 = 0xc
	NSMutableSet *_independentTasks;	// 16 = 0x10
	NSMutableSet *_heldIndependentTasks;	// 20 = 0x14
	NSMutableSet *_modalHeldIndependentTasks;	// 24 = 0x18
	NSMutableArray *_queuedTasks;	// 28 = 0x1c
	id<DATask> _activeQueuedTask;	// 32 = 0x20
	id<DATask> _modalHeldActiveQueuedTask;	// 36 = 0x24
	NSMutableArray *_queuedModalTasks;	// 40 = 0x28
	id<DATask> _activeModalTask;	// 44 = 0x2c
	int _state;	// 48 = 0x30
}
@property(assign) DAAccount *account;	// G=0x30236fd1; S=0x30237a11; @synthesize=_account
@property(readonly, assign) id<DATask> activeModalTask;	// G=0x30236f95; @synthesize=_activeModalTask
@property(readonly, assign) id<DATask> activeQueuedTask;	// G=0x30236fc1; @synthesize=_activeQueuedTask
@property(readonly, assign) NSArray *allTasks;	// G=0x30237a31; 
@property(readonly, assign) NSArray *queuedTasks;	// G=0x30236fb1; @synthesize=_queuedTasks
- (id)init;	// 0x302298f1
- (id)initWithAccount:(id)account;	// 0x302382e5
- (void)_cancelTasksWithReason:(int)reason;	// 0x30237439
- (id)_getHeldIndependentTasks;	// 0x302370c5
- (id)_getIndependentTasks;	// 0x30237111
- (id)_getModalHeldIndependentTasks;	// 0x30237079
- (id)_getQueuedExclusiveTasks;	// 0x3023715d
- (id)_getQueuedModalTasks;	// 0x30236fe1
- (id)_getQueuedTasks;	// 0x3023702d
- (void)_makeStateTransition;	// 0x3023a2a5
- (void)_performTask:(id)task;	// 0x3023858d
- (void)_populateVersionDescriptions;	// 0x302383a9
- (void)_reactivateHeldTasks;	// 0x302375f1
- (void)_releasePowerAssertionForTask:(id)task;	// 0x302371a9
- (void)_requestCancelTasksWithReason:(int)reason;	// 0x3023783d
- (void)_retainPowerAssertionForTask:(id)task;	// 0x3023720d
- (void)_schedulePerformTask:(id)task;	// 0x30237299
- (void)_scheduleSelector:(SEL)selector withArgument:(id)argument;	// 0x3023a0bd
- (void)_scheduleStartModal:(id)modal;	// 0x3023846d
- (void)_startModal:(id)modal;	// 0x302384c5
- (BOOL)_useFakeDescriptions;	// 0x30236fa5
- (id)_version;	// 0x3023740d
// declared property getter: - (id)account;	// 0x30236fd1
- (id)accountID;	// 0x30237309
- (id)accountPersistentUUID;	// 0x302372e9
// declared property getter: - (id)activeModalTask;	// 0x30236f95
// declared property getter: - (id)activeQueuedTask;	// 0x30236fc1
// declared property getter: - (id)allTasks;	// 0x30237a31
- (void)cancelAllTasks;	// 0x3023795d
- (void)cancelTask:(id)task;	// 0x302372b9
- (void)cancelTask:(id)task withUnderlyingError:(id)underlyingError;	// 0x30239969
- (void)dealloc;	// 0x30237dd5
- (id)deviceID;	// 0x30238461
- (id)deviceType;	// 0x302383fd
- (id)identityPersist;	// 0x30237349
- (id)password;	// 0x3023738d
- (int)port;	// 0x302373cd
// declared property getter: - (id)queuedTasks;	// 0x30236fb1
- (id)scheme;	// 0x30237329
- (id)server;	// 0x302373ad
// declared property setter: - (void)setAccount:(id)account;	// 0x30237a11
- (void)shutdown;	// 0x302398fd
- (id)stateString;	// 0x3023a129
- (void)submitExclusiveTask:(id)task;	// 0x302372d1
- (void)submitExclusiveTask:(id)task toFrontOfQueue:(BOOL)queue;	// 0x30239e05
- (void)submitIndependentTask:(id)task;	// 0x30239bf9
- (void)submitQueuedTask:(id)task;	// 0x302399c9
- (void)taskDidFinish:(id)task;	// 0x30238da5
- (void)taskEndModal:(id)modal;	// 0x30238655
- (void)taskManagerDidAddTask:(id)taskManager;	// 0x30236fa9
- (void)taskManagerWillRemoveTask:(id)taskManager;	// 0x30236fad
- (void)taskRequestModal:(id)modal;	// 0x30238901
- (BOOL)useSSL;	// 0x30237369
- (id)user;	// 0x302373ed
- (id)userAgent;	// 0x30238409
@end

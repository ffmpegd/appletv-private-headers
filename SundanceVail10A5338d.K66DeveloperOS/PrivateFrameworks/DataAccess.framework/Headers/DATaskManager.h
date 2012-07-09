/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSArray, NSTimer, NSMutableSet, DAAccount;
@protocol DATask;

@interface DATaskManager : NSObject {
	DAAccount *_account;	// 4 = 0x4
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
	NSTimer *_managerIdleTimer;	// 52 = 0x34
}
@property(assign) DAAccount *account;	// G=0x30970669; S=0x30970745; @synthesize=_account
@property(readonly, assign) id<DATask> activeModalTask;	// G=0x3096fe55; @synthesize=_activeModalTask
@property(readonly, assign) id<DATask> activeQueuedTask;	// G=0x30974881; @synthesize=_activeQueuedTask
@property(readonly, assign) NSArray *allTasks;	// G=0x3096fa79; 
@property(readonly, assign) NSArray *queuedTasks;	// G=0x30974895; @synthesize=_queuedTasks
- (id)init;	// 0x3095b0d5
- (id)initWithAccount:(id)account;	// 0x3096fe65
- (void)_cancelTasksWithReason:(int)reason;	// 0x309742e5
- (id)_getHeldIndependentTasks;	// 0x30974739
- (id)_getIndependentTasks;	// 0x309746e9
- (id)_getModalHeldIndependentTasks;	// 0x30974789
- (id)_getQueuedExclusiveTasks;	// 0x30974699
- (id)_getQueuedModalTasks;	// 0x30974829
- (id)_getQueuedTasks;	// 0x309747d9
- (BOOL)_hasTasksForcingNetworkConnection;	// 0x309716b5
- (void)_makeStateTransition;	// 0x30973545
- (void)_performTask:(id)task;	// 0x30972fbd
- (void)_populateVersionDescriptions;	// 0x30970581
- (void)_reactivateHeldTasks;	// 0x309732d9
- (void)_releasePowerAssertionForTask:(id)task;	// 0x309745a1
- (void)_requestCancelTasksWithReason:(int)reason;	// 0x309730b5
- (void)_retainPowerAssertionForTask:(id)task;	// 0x30974509
- (void)_schedulePerformTask:(id)task;	// 0x3097425d
- (void)_scheduleSelector:(SEL)selector withArgument:(id)argument;	// 0x309741b9
- (void)_scheduleStartModal:(id)modal;	// 0x3097427d
- (void)_startModal:(id)modal;	// 0x309731f5
- (BOOL)_taskForcesNetworking:(id)networking;	// 0x309715b1
- (BOOL)_taskInQueueForcesNetworkConnection:(id)queueForcesNetworkConnection;	// 0x309715f1
- (BOOL)_useFakeDescriptions;	// 0x3097060d
- (void)_useOpportunisticSocketsAgain;	// 0x30971535
- (id)_version;	// 0x309705e5
// declared property getter: - (id)account;	// 0x30970669
- (id)accountID;	// 0x3097084d
- (id)accountPersistentUUID;	// 0x3097086d
// declared property getter: - (id)activeModalTask;	// 0x3096fe55
// declared property getter: - (id)activeQueuedTask;	// 0x30974881
// declared property getter: - (id)allTasks;	// 0x3096fa79
- (void)cancelAllTasks;	// 0x30971131
- (void)cancelTask:(id)task;	// 0x3097111d
- (void)cancelTask:(id)task withUnderlyingError:(id)underlyingError;	// 0x309710bd
- (void)dealloc;	// 0x3096ff49
- (id)deviceID;	// 0x30970665
- (id)deviceType;	// 0x30970611
- (id)identityPersist;	// 0x3097080d
- (id)password;	// 0x309707c9
- (int)port;	// 0x30970789
// declared property getter: - (id)queuedTasks;	// 0x30974895
- (id)scheme;	// 0x3097082d
- (id)server;	// 0x309707a9
// declared property setter: - (void)setAccount:(id)account;	// 0x30970745
- (void)shutdown;	// 0x309711fd
- (id)stateString;	// 0x30971365
- (void)submitExclusiveTask:(id)task;	// 0x3097088d
- (void)submitExclusiveTask:(id)task toFrontOfQueue:(BOOL)queue;	// 0x309708a1
- (void)submitIndependentTask:(id)task;	// 0x30970bb9
- (void)submitQueuedTask:(id)task;	// 0x30970e21
- (void)taskDidFinish:(id)task;	// 0x30971831
- (void)taskEndModal:(id)modal;	// 0x30972c85
- (void)taskManagerDidAddTask:(id)taskManager;	// 0x30974879
- (void)taskManagerWillRemoveTask:(id)taskManager;	// 0x3097487d
- (void)taskRequestModal:(id)modal;	// 0x309726f1
- (BOOL)useSSL;	// 0x309707e9
- (id)user;	// 0x30970769
- (id)userAgent;	// 0x30970615
@end

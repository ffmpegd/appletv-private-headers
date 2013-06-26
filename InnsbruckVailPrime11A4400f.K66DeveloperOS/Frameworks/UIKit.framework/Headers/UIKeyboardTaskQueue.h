/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>

@class NSConditionLock, UIKeyboardTaskExecutionContext, NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardTaskQueue : NSObject {
	BOOL _executingOnMainThread;	// 4 = 0x4
	NSConditionLock *_lock;	// 8 = 0x8
	NSMutableArray *_tasks;	// 12 = 0xc
	NSMutableArray *_deferredTasks;	// 16 = 0x10
	UIKeyboardTaskExecutionContext *_executionContext;	// 20 = 0x14
	id _mainThreadContinuation;	// 24 = 0x18
}
@property(retain, nonatomic) UIKeyboardTaskExecutionContext *executionContext;	// G=0x2f94fd8d; S=0x2f94fd9d; @synthesize=_executionContext
- (id)init;	// 0x2f94f0f9
- (void)addDeferredTask:(id)task;	// 0x2f94fa61
- (void)addTask:(id)task;	// 0x2f94f9d9
- (void)continueExecutionOnMainThread;	// 0x2f94f26d
- (void)dealloc;	// 0x2f94f059
// declared property getter: - (id)executionContext;	// 0x2f94fd8d
- (void)finishExecution;	// 0x2f94f441
- (BOOL)isMainThreadExecutingTask;	// 0x2f94fd7d
- (void)lock;	// 0x2f94f1bd
- (void)lockWhenReadyForMainThread;	// 0x2f94f1dd
- (void)performDeferredTaskIfIdle;	// 0x2f94f8f9
- (void)performTask:(id)task;	// 0x2f94fc69
- (void)performTaskOnMainThread:(id)thread waitUntilDone:(BOOL)done;	// 0x2f94f5f5
- (void)promoteDeferredTaskIfIdle;	// 0x2f94f94d
// declared property setter: - (void)setExecutionContext:(id)context;	// 0x2f94fd9d
- (BOOL)tryLockWhenReadyForMainThread;	// 0x2f94f1fd
- (void)unlock;	// 0x2f94f225
- (void)waitUntilAllTasksAreFinished;	// 0x2f94fae9
@end

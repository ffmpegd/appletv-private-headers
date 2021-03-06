/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ActorKit.framework/ActorKit
 */

#import "ActorKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSConditionLock, NSThread;

@interface AKDispatchQueue : NSObject {
@private
	int _kqueueFD;	// 4 = 0x4
	int _keventFDs[2];	// 8 = 0x8
	NSThread *_thread;	// 16 = 0x10
	qed_queue_u *_queue;	// 20 = 0x14
	NSConditionLock *_runStateLock;	// 24 = 0x18
}
@property(readonly, assign) qed_queue_u *queue;	// G=0x336f56d1; converted property
+ (id)currentRunLoopDispatchQueue;	// 0x336f58e5
+ (id)migrantDispatchQueue;	// 0x336f6165
+ (id)newThreadRunLoopDispatchQueue;	// 0x336f5839
- (id)init;	// 0x336f5aa9
- (void)_afterStartedAddRunLoopSourceTo:(id)to;	// 0x336f5801
- (void)dealloc;	// 0x336f5f39
// converted property getter: - (qed_queue_u *)queue;	// 0x336f56d1
- (void)runThreadDispatchQueue:(id)queue;	// 0x336f56e1
- (void)start;	// 0x336f5d01
- (void)stop;	// 0x336f5b4d
- (void)switchToState:(id)state;	// 0x336f59e1
@end


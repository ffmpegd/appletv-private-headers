/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"

@class NSOperationQueue, NSOperation;

__attribute__((visibility("hidden")))
@interface __NSOperationInternal : NSObject {
	unsigned char __pad1[16];	// 4 = 0x4
	NSOperation *__outerOp;	// 20 = 0x14
	NSOperation *__prevOp;	// 24 = 0x18
	NSOperation *__nextOp;	// 28 = 0x1c
	NSOperation *__nextPriOp;	// 32 = 0x20
	NSOperationQueue *__queue;	// 36 = 0x24
	id __dependencies;	// 40 = 0x28
	id __down_dependencies;	// 44 = 0x2c
	long long __unfinished_deps;	// 48 = 0x30
	id __completion;	// 56 = 0x38
	void *__obsInfo;	// 60 = 0x3c
	void *__implicitObsInfo;	// 64 = 0x40
	long long __seqno;	// 68 = 0x44
	double __thread_prio;	// 76 = 0x4c
	int __RC;	// 84 = 0x54
	int __state;	// 88 = 0x58
	BOOL __prio;	// 92 = 0x5c
	unsigned char __cached_isReady;	// 93 = 0x5d
	unsigned char __isCancelled;	// 94 = 0x5e
	unsigned char __isBarrier;	// 95 = 0x5f
	unsigned char __pad2[4];	// 96 = 0x60
	opaque_pthread_mutex_t __wait_mutex;	// 100 = 0x64
	opaque_pthread_cond_t __wait_cond;	// 144 = 0x90
	unsigned char __pad3[40];	// 172 = 0xac
}
@property(retain) id completionBlock;	// G=0x32525e99; S=0x32535fed; converted property
@property(readonly, retain) id dependencies;	// G=0x3259943d; converted property
@property(assign) int queuePriority;	// G=0x32598a71; S=0x32598a81; converted property
@property(assign) double threadPriority;	// G=0x32598d29; S=0x32598d41; converted property
+ (void)_observeValueForKeyPath:(id)keyPath ofObject:(id)object changeKind:(unsigned)kind oldValue:(id)value newValue:(id)value5 indexes:(id)indexes context:(void *)context;	// 0x32524eed
- (id)init;	// 0x325238f1
- (id)__;	// 0x325998d5
- (BOOL)_isDeallocating;	// 0x32598805
- (BOOL)_tryRetain;	// 0x32598801
- (void)addDependency:(id)dependency;	// 0x32598ee9
- (void)cancel;	// 0x32548f51
// converted property getter: - (id)completionBlock;	// 0x32525e99
- (void)dealloc;	// 0x32534fc5
// converted property getter: - (id)dependencies;	// 0x3259943d
- (void)finalize;	// 0x32598985
- (void)invalidate;	// 0x32534f69
- (BOOL)isCancelled;	// 0x32535f91
- (BOOL)isExecuting;	// 0x3252c381
- (BOOL)isFinished;	// 0x32525db9
- (BOOL)isReady;	// 0x32523fd1
// converted property getter: - (int)queuePriority;	// 0x32598a71
- (oneway void)release;	// 0x32534f6d
- (void)removeDependency:(id)dependency;	// 0x32599195
- (id)retain;	// 0x325987b1
- (unsigned)retainCount;	// 0x325987f1
// converted property setter: - (void)setCompletionBlock:(id)block;	// 0x32535fed
// converted property setter: - (void)setQueuePriority:(int)priority;	// 0x32598a81
// converted property setter: - (void)setThreadPriority:(double)priority;	// 0x32598d41
- (void)start;	// 0x32523a71
// converted property getter: - (double)threadPriority;	// 0x32598d29
- (void)waitUntilFinished;	// 0x3254b9bd
- (void)waitUntilFinishedOrTimeout:(double)timeout;	// 0x32598d99
@end


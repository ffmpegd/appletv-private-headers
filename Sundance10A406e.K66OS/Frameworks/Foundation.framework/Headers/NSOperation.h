/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSOperation : NSObject {
	id _private;	// 4 = 0x4
	int _private1;	// 8 = 0x8
}
@property(retain) id completionBlock;	// G=0x35524e5d; S=0x35534fa9; converted property
@property(assign) void *observationInfo;	// G=0x3552326d; S=0x35598b1d; converted property
@property(assign) int queuePriority;	// G=0x35598ce9; S=0x35598d25; converted property
@property(assign) double threadPriority;	// G=0x35598d65; S=0x35598da1; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x355221fd
+ (void)initialize;	// 0x35521d21
- (id)init;	// 0x35521f11
- (id)__;	// 0x35598efd
- (id)_implicitObservationInfo;	// 0x3552328d
- (BOOL)_isDeallocating;	// 0x35598b59
- (BOOL)_tryRetain;	// 0x35522f25
- (void)addDependency:(id)dependency;	// 0x35598e39
- (void)cancel;	// 0x35547f15
// converted property getter: - (id)completionBlock;	// 0x35524e5d
- (void)dealloc;	// 0x35533ee1
- (id)dependencies;	// 0x35598eb9
- (void)finalize;	// 0x35598b91
- (BOOL)isAsynchronous;	// 0x35598c55
- (BOOL)isCancelled;	// 0x35534f55
- (BOOL)isConcurrent;	// 0x35598bc1
- (BOOL)isExecuting;	// 0x3552b349
- (BOOL)isFinished;	// 0x35524d81
- (BOOL)isReady;	// 0x35522f99
- (void)main;	// 0x35598ef5
// converted property getter: - (void *)observationInfo;	// 0x3552326d
// converted property getter: - (int)queuePriority;	// 0x35598ce9
- (oneway void)release;	// 0x35524eed
- (void)removeDependency:(id)dependency;	// 0x35598e79
- (id)retain;	// 0x3552b3a5
- (unsigned)retainCount;	// 0x35598b41
// converted property setter: - (void)setCompletionBlock:(id)block;	// 0x35534fa9
// converted property setter: - (void)setObservationInfo:(void *)info;	// 0x35598b1d
// converted property setter: - (void)setQueuePriority:(int)priority;	// 0x35598d25
// converted property setter: - (void)setThreadPriority:(double)priority;	// 0x35598da1
- (void)start;	// 0x35522a31
// converted property getter: - (double)threadPriority;	// 0x35598d65
- (void)waitUntilFinished;	// 0x3554a981
- (void)waitUntilFinishedOrTimeout:(double)timeout;	// 0x35598ded
@end

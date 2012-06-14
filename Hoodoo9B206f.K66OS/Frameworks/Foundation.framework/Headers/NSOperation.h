/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSOperation : NSObject {
@private
	id _private;	// 4 = 0x4
	int _private1;	// 8 = 0x8
}
@property(retain) id completionBlock;	// G=0x31d08e31; S=0x31d1efa5; converted property
@property(assign) void *observationInfo;	// G=0x31d1556d; S=0x31d7be45; converted property
@property(assign) int queuePriority;	// G=0x31d7c005; S=0x31d36c29; converted property
@property(assign) double threadPriority;	// G=0x31d7c041; S=0x31d7c07d; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31cf9009
+ (void)initialize;	// 0x31cf6c91
- (id)init;	// 0x31cf6cf9
- (id)__;	// 0x31d7c221
- (id)_implicitObservationInfo;	// 0x31d1558d
- (BOOL)_isDeallocating;	// 0x31d7be79
- (BOOL)_tryRetain;	// 0x31d154fd
- (void)addDependency:(id)dependency;	// 0x31d7c161
- (void)cancel;	// 0x31d2d14d
// converted property getter: - (id)completionBlock;	// 0x31d08e31
- (void)dealloc;	// 0x31d09009
- (id)dependencies;	// 0x31d7c1e1
- (void)finalize;	// 0x31d7beb1
- (BOOL)isAsynchronous;	// 0x31d7bf71
- (BOOL)isCancelled;	// 0x31d1f045
- (BOOL)isConcurrent;	// 0x31d7bedd
- (BOOL)isExecuting;	// 0x31d2d595
- (BOOL)isFinished;	// 0x31d1693d
- (BOOL)isReady;	// 0x31cf99e5
- (void)main;	// 0x31d7c21d
// converted property getter: - (void *)observationInfo;	// 0x31d1556d
// converted property getter: - (int)queuePriority;	// 0x31d7c005
- (oneway void)release;	// 0x31cf9abd
- (void)removeDependency:(id)dependency;	// 0x31d7c1a1
- (id)retain;	// 0x31cf9995
- (unsigned)retainCount;	// 0x31d7be65
// converted property setter: - (void)setCompletionBlock:(id)block;	// 0x31d1efa5
// converted property setter: - (void)setObservationInfo:(void *)info;	// 0x31d7be45
// converted property setter: - (void)setQueuePriority:(int)priority;	// 0x31d36c29
// converted property setter: - (void)setThreadPriority:(double)priority;	// 0x31d7c07d
- (void)start;	// 0x31d14ff9
// converted property getter: - (double)threadPriority;	// 0x31d7c041
- (void)waitUntilFinished;	// 0x31d7c0d1
- (void)waitUntilFinishedOrTimeout:(double)timeout;	// 0x31d7c10d
@end

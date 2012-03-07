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
@property(retain) id completionBlock;	// G=0x3201fe41; S=0x32035fb5; converted property
@property(assign) void *observationInfo;	// G=0x3202c57d; S=0x32092e55; converted property
@property(assign) int queuePriority;	// G=0x32093015; S=0x3204dc39; converted property
@property(assign) double threadPriority;	// G=0x32093051; S=0x3209308d; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x32010019
+ (void)initialize;	// 0x3200dca1
- (id)init;	// 0x3200dd09
- (id)__;	// 0x32093231
- (id)_implicitObservationInfo;	// 0x3202c59d
- (BOOL)_isDeallocating;	// 0x32092e89
- (BOOL)_tryRetain;	// 0x3202c50d
- (void)addDependency:(id)dependency;	// 0x32093171
- (void)cancel;	// 0x3204415d
// converted property getter: - (id)completionBlock;	// 0x3201fe41
- (void)dealloc;	// 0x32020019
- (id)dependencies;	// 0x320931f1
- (void)finalize;	// 0x32092ec1
- (BOOL)isAsynchronous;	// 0x32092f81
- (BOOL)isCancelled;	// 0x32036055
- (BOOL)isConcurrent;	// 0x32092eed
- (BOOL)isExecuting;	// 0x320445a5
- (BOOL)isFinished;	// 0x3202d94d
- (BOOL)isReady;	// 0x320109f5
- (void)main;	// 0x3209322d
// converted property getter: - (void *)observationInfo;	// 0x3202c57d
// converted property getter: - (int)queuePriority;	// 0x32093015
- (oneway void)release;	// 0x32010acd
- (void)removeDependency:(id)dependency;	// 0x320931b1
- (id)retain;	// 0x320109a5
- (unsigned)retainCount;	// 0x32092e75
// converted property setter: - (void)setCompletionBlock:(id)block;	// 0x32035fb5
// converted property setter: - (void)setObservationInfo:(void *)info;	// 0x32092e55
// converted property setter: - (void)setQueuePriority:(int)priority;	// 0x3204dc39
// converted property setter: - (void)setThreadPriority:(double)priority;	// 0x3209308d
- (void)start;	// 0x3202c009
// converted property getter: - (double)threadPriority;	// 0x32093051
- (void)waitUntilFinished;	// 0x320930e1
- (void)waitUntilFinishedOrTimeout:(double)timeout;	// 0x3209311d
@end


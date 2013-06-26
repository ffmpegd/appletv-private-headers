/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library

@class NSOperationQueue;

@interface ISOperationQueue : NSObject {
	NSOperationQueue *_queue;	// 4 = 0x4
}
@property(assign) BOOL adjustsMaxConcurrentOperationCount;	// G=0x3603777d; S=0x36037815; 
@property(assign) int maxConcurrentOperationCount;	// G=0x360377d5; S=0x36037829; converted property
+ (id)mainQueue;	// 0x360375b5
- (id)init;	// 0x36037499
- (void)addOperation:(id)operation;	// 0x36037621
- (void)addOperations:(id)operations waitUntilFinished:(BOOL)finished;	// 0x3603767d
// declared property getter: - (BOOL)adjustsMaxConcurrentOperationCount;	// 0x3603777d
- (void)cancelAllOperations;	// 0x36037795
- (void)dealloc;	// 0x36037535
// converted property getter: - (int)maxConcurrentOperationCount;	// 0x360377d5
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x36037869
- (int)operationCount;	// 0x360377b5
- (id)operations;	// 0x360377f5
// declared property setter: - (void)setAdjustsMaxConcurrentOperationCount:(BOOL)count;	// 0x36037815
// converted property setter: - (void)setMaxConcurrentOperationCount:(int)count;	// 0x36037829
- (void)setSuspended:(BOOL)suspended;	// 0x36037849
@end

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
@property(assign) int maxConcurrentOperationCount;	// G=0x327107b1; S=0x327107f1; converted property
+ (BOOL)isActive;	// 0x327105a9
+ (id)mainQueue;	// 0x327105e9
- (id)init;	// 0x327104c9
- (void)addOperation:(id)operation;	// 0x32710655
- (void)addOperations:(id)operations waitUntilFinished:(BOOL)finished;	// 0x327106b1
- (void)cancelAllOperations;	// 0x32710791
- (void)dealloc;	// 0x32710541
// converted property getter: - (int)maxConcurrentOperationCount;	// 0x327107b1
- (id)operations;	// 0x327107d1
// converted property setter: - (void)setMaxConcurrentOperationCount:(int)count;	// 0x327107f1
- (void)setSuspended:(BOOL)suspended;	// 0x32710811
@end


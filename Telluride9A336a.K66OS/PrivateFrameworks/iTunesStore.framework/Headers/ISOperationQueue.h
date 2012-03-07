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
@property(assign) int maxConcurrentOperationCount;	// G=0x35eba7b1; S=0x35eba7f1; converted property
+ (BOOL)isActive;	// 0x35eba5a9
+ (id)mainQueue;	// 0x35eba5e9
- (id)init;	// 0x35eba4c9
- (void)addOperation:(id)operation;	// 0x35eba655
- (void)addOperations:(id)operations waitUntilFinished:(BOOL)finished;	// 0x35eba6b1
- (void)cancelAllOperations;	// 0x35eba791
- (void)dealloc;	// 0x35eba541
// converted property getter: - (int)maxConcurrentOperationCount;	// 0x35eba7b1
- (id)operations;	// 0x35eba7d1
// converted property setter: - (void)setMaxConcurrentOperationCount:(int)count;	// 0x35eba7f1
- (void)setSuspended:(BOOL)suspended;	// 0x35eba811
@end


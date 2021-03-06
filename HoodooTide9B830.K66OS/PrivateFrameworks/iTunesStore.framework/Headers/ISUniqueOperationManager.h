/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISSingleton.h"
#import <NSObject.h> // Unknown library

@class ISUniqueOperationContext, NSMutableDictionary, NSMutableArray, NSLock;

@interface ISUniqueOperationManager : NSObject <ISSingleton> {
	ISUniqueOperationContext *_activeContext;	// 4 = 0x4
	NSMutableArray *_contexts;	// 8 = 0x8
	NSLock *_lock;	// 12 = 0xc
	NSMutableDictionary *_lockPool;	// 16 = 0x10
}
+ (void)setSharedInstance:(id)instance;	// 0x3554e361
+ (id)sharedInstance;	// 0x3554e3b5
- (id)init;	// 0x3554e251
- (id)_activeContext;	// 0x3554e849
- (id)_contextForOperation:(id)operation;	// 0x3554e8bd
- (void)checkInOperation:(id)operation;	// 0x3554e429
- (void)checkOutOperation:(id)operation;	// 0x3554e48d
- (void)dealloc;	// 0x3554e2d9
- (id)lockWithIdentifier:(id)identifier;	// 0x3554e561
- (id)predecessorForKey:(id)key operation:(id)operation;	// 0x3554e695
- (void)setPredecessorIfNeeded:(id)needed forKey:(id)key;	// 0x3554e729
- (void)uniqueOperationFinished:(id)finished forKey:(id)key;	// 0x3554e7b9
@end


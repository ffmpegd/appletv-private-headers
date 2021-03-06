/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSMutableSet;

@interface ISUniqueOperationContext : NSObject {
	NSMutableSet *_operations;	// 4 = 0x4
	NSMutableDictionary *_uniqueOperations;	// 8 = 0x8
}
- (id)init;	// 0x3689306d
- (void)addOperation:(id)operation;	// 0x36893171
- (BOOL)containsOperation:(id)operation;	// 0x36893191
- (unsigned)countOfOperations;	// 0x368931b5
- (void)dealloc;	// 0x368930f9
- (void)removeOperation:(id)operation;	// 0x368931d5
- (void)setUniqueOperation:(id)operation forKey:(id)key;	// 0x368931f5
- (id)uniqueOperationForKey:(id)key;	// 0x36893229
@end


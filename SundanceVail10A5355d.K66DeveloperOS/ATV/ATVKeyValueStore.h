/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ATVKeyValueStore : XXUnknownSuperclass {
	sqlite3 *_db;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_dbQueue;	// 8 = 0x8
	NSString *_domain;	// 12 = 0xc
}
+ (id)defaultStore;	// 0x1a1cc5
- (void)_dbDataValuesForKeys:(id)keys option:(int)option resolver:(id)resolver handler:(id)handler;	// 0x1a41ad
- (void)_dbDeleteCleanRowsNotUpdatedSince:(id)since completionHandler:(id)handler;	// 0x1a48f1
- (void)_dbDropAllWithCompletionHandler:(id)completionHandler;	// 0x1a4a85
- (void)_dbSetDataValues:(id)values versions:(id)versions forKeys:(id)keys dirtyFlag:(BOOL)flag;	// 0x1a3e11
- (void)_dbVersionsForKeys:(id)keys handler:(id)handler;	// 0x1a3ad1
- (void)_getItemsFromKVSWithKeys:(id)keys resultValues:(id)values sinceVersions:(id)versions handler:(id)handler;	// 0x1a36b5
- (id)_initWithDomain:(id)domain withCacheFilename:(id)cacheFilename;	// 0x1a248d
- (void)_internalPutItemsToKVS:(id)kvs resolvedKeys:(id)keys resolver:(id)resolver completionHandler:(id)handler;	// 0x1a303d
- (void)_objectsForKeys:(id)keys option:(int)option resolver:(id)resolver handler:(id)handler;	// 0x1a2d71
- (void)_putItemsToKVS:(id)kvs resolver:(id)resolver completionHandler:(id)handler;	// 0x1a2ff5
- (void)_setObjects:(id)objects forKeys:(id)keys resolver:(id)resolver handler:(id)handler;	// 0x1a2871
- (void)dealloc;	// 0x1a1dbd
- (id)objectForKey:(id)key;	// 0x1a2089
- (void)objectForKey:(id)key option:(int)option completionHandler:(id)handler;	// 0x1a1f2d
- (void)objectForKey:(id)key option:(int)option withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x1a1f75
- (void)objectsForKeys:(id)keys option:(int)option completionHandler:(id)handler;	// 0x1a1f51
- (void)objectsForKeys:(id)keys option:(int)option withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x1a1e45
- (void)purgeCacheDataNotUpdatedSince:(id)since completionHandler:(id)handler;	// 0x1a237d
- (void)resetForRetailWithCompletionHandler:(id)completionHandler;	// 0x1a2405
- (void)setObject:(id)object forKey:(id)key;	// 0x1a1e55
- (void)setObject:(id)object forKey:(id)key withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x1a1ed5
- (void)setObjects:(id)objects forKeys:(id)keys;	// 0x1a1ead
- (void)setObjects:(id)objects forKeys:(id)keys withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x1a1e35
@end


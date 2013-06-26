/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVSettingsSaver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ATVKeyValueStore : XXUnknownSuperclass <ATVSettingsSaver> {
	sqlite3 *_db;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_dbQueue;	// 8 = 0x8
	NSString *_domain;	// 12 = 0xc
}
+ (id)_defaultStoreDatabaseFilePath;	// 0x1c1699
+ (id)defaultStore;	// 0x1c032d
- (void)_dbDataValuesForKeys:(id)keys option:(int)option resolver:(id)resolver handler:(id)handler;	// 0x1c28a1
- (void)_dbDeleteCleanRowsNotUpdatedSince:(id)since completionHandler:(id)handler;	// 0x1c2fe5
- (void)_dbDropAllWithCompletionHandler:(id)completionHandler;	// 0x1c3179
- (void)_dbSetDataValues:(id)values versions:(id)versions forKeys:(id)keys dirtyFlag:(BOOL)flag;	// 0x1c2505
- (void)_dbVersionsForKeys:(id)keys handler:(id)handler;	// 0x1c21c5
- (void)_getItemsFromKVSWithKeys:(id)keys resultValues:(id)values sinceVersions:(id)versions handler:(id)handler;	// 0x1c1da9
- (id)_initWithDomain:(id)domain withCacheFilename:(id)cacheFilename;	// 0x1c0bc9
- (void)_internalPutItemsToKVS:(id)kvs resolvedKeys:(id)keys resolver:(id)resolver completionHandler:(id)handler;	// 0x1c1731
- (void)_objectsForKeys:(id)keys option:(int)option resolver:(id)resolver handler:(id)handler;	// 0x1c1415
- (void)_putItemsToKVS:(id)kvs resolver:(id)resolver completionHandler:(id)handler;	// 0x1c16e9
- (void)_setObjects:(id)objects forKeys:(id)keys resolver:(id)resolver handler:(id)handler;	// 0x1c0f15
- (void)addPathsToSaveTo:(id)to;	// 0x1c0491
- (void)dealloc;	// 0x1c03f9
- (BOOL)deleteStoreCacheFile;	// 0x1c0a95
- (id)objectForKey:(id)key;	// 0x1c0719
- (void)objectForKey:(id)key option:(int)option completionHandler:(id)handler;	// 0x1c05bd
- (void)objectForKey:(id)key option:(int)option withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x1c0605
- (void)objectsForKeys:(id)keys option:(int)option completionHandler:(id)handler;	// 0x1c05e1
- (void)objectsForKeys:(id)keys option:(int)option withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x1c0481
- (void)purgeCacheDataNotUpdatedSince:(id)since completionHandler:(id)handler;	// 0x1c0a0d
- (void)resetForRetailWithCompletionHandler:(id)completionHandler;	// 0x1c0b41
- (void)setObject:(id)object forKey:(id)key;	// 0x1c04e5
- (void)setObject:(id)object forKey:(id)key withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x1c0565
- (void)setObjects:(id)objects forKeys:(id)keys;	// 0x1c053d
- (void)setObjects:(id)objects forKeys:(id)keys withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x1c0471
@end

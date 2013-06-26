/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSUbiquitousKeyValueStore : NSObject {
	id _private1;	// 4 = 0x4
	id _private2;	// 8 = 0x8
	id _private3;	// 12 = 0xc
	void *_private4;	// 16 = 0x10
	void *_reserved[3];	// 20 = 0x14
}
+ (void)_appWillActivate;	// 0x3254b6d5
+ (void)_appWillDeactivate;	// 0x32525ff9
+ (void)_synchronizeStoresForced:(BOOL)forced;	// 0x32526011
+ (id)additionalStoreWithIdentifier:(id)identifier;	// 0x32642055
+ (id)defaultStore;	// 0x32641fe1
- (id)init;	// 0x32642251
- (id)initWithBundleIdentifier:(id)bundleIdentifier;	// 0x3252a9b5
- (id)initWithBundleIdentifier:(id)bundleIdentifier storeIdentifier:(id)identifier;	// 0x3252a9c9
- (id)initWithBundleIdentifier:(id)bundleIdentifier storeIdentifier:(id)identifier additionalStore:(BOOL)store;	// 0x3252a9ed
- (void)_adjustTimer:(id)timer;	// 0x3252b571
- (void)_adjustTimerForAutosync;	// 0x3252bb61
- (void)_configurationDidChange;	// 0x32643425
- (BOOL)_hasPendingSynchronize;	// 0x326423cd
- (void)_pleaseSynchronize:(id)synchronize;	// 0x3252bbcd
- (BOOL)_postDidChangeNotificationExternalChanges:(id)_post sourceChangeCount:(int)count;	// 0x326424bd
- (void)_registerToDaemon;	// 0x3252acb5
- (void)_rethrowException:(id)exception;	// 0x326426fd
- (void)_scheduleRemoteSynchronization;	// 0x3254b6e9
- (void)_setHasPendingSynchronize:(BOOL)synchronize;	// 0x32642421
- (void)_setShouldAvoidSynchronize:(BOOL)_set;	// 0x32642355
- (BOOL)_shouldAvoidSynchronize;	// 0x3252b249
- (void)_sourceDidChange:(id)_source;	// 0x32643411
- (int)_storeChangeFromSourceChange:(int)sourceChange;	// 0x326424a1
- (void)_syncConcurrently;	// 0x32642c5d
- (void)_syncConcurrentlyForced:(BOOL)forced;	// 0x326428fd
- (BOOL)_synchronizeForced:(BOOL)forced;	// 0x3252b2a1
- (BOOL)_synchronizeForced:(BOOL)forced notificationQueue:(id)queue;	// 0x3252b2b9
- (void)_unregisterFromDaemon;	// 0x326437cd
- (void)_useSourceAsyncWithBlock:(id)block;	// 0x3264209d
- (void)_useSourceSyncWithBlock:(id)block;	// 0x3264214d
- (id)arrayForKey:(id)key;	// 0x326439d5
- (BOOL)boolForKey:(id)key;	// 0x32643df5
- (id)dataForKey:(id)key;	// 0x32643b7d
- (void)dealloc;	// 0x32642265
- (id)dictionaryForKey:(id)key;	// 0x32643aa9
- (id)dictionaryRepresentation;	// 0x3252b661
- (double)doubleForKey:(id)key;	// 0x32643d41
- (void)finalize;	// 0x3264230d
- (long long)longLongForKey:(id)key;	// 0x32643c51
- (unsigned)maximumDataLengthPerKey;	// 0x32643895
- (unsigned)maximumKeyCount;	// 0x32643855
- (unsigned)maximumKeyLength;	// 0x32643875
- (unsigned)maximumTotalDataLength;	// 0x326438b5
- (id)objectForKey:(id)key;	// 0x3252b791
- (void)registerDefaultValues:(id)values;	// 0x32642e49
- (void)removeObjectForKey:(id)key;	// 0x32642e35
- (void)setArray:(id)array forKey:(id)key;	// 0x32643a11
- (void)setBool:(BOOL)aBool forKey:(id)key;	// 0x32643f11
- (void)setData:(id)data forKey:(id)key;	// 0x32643bb9
- (void)setDictionary:(id)dictionary forKey:(id)key;	// 0x32643ae5
- (void)setDouble:(double)aDouble forKey:(id)key;	// 0x32643db9
- (void)setLongLong:(long long)aLong forKey:(id)key;	// 0x32643d05
- (void)setObject:(id)object forKey:(id)key;	// 0x3252b939
- (void)setString:(id)string forKey:(id)key;	// 0x3264393d
- (id)stringForKey:(id)key;	// 0x326438d5
- (BOOL)synchronize;	// 0x3252b1f9
@end

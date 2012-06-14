/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSUbiquitousKeyValueStore : NSObject {
@private
	id _private1;	// 4 = 0x4
	id _private2;	// 8 = 0x8
	id _private3;	// 12 = 0xc
	void *_private4;	// 16 = 0x10
	void *_reserved[3];	// 20 = 0x14
}
+ (void)_appWillActivate;	// 0x31d2c49d
+ (void)_appWillDeactivate;	// 0x31d169c5
+ (void)_synchronizeStoresForced:(BOOL)forced;	// 0x31d169d9
+ (id)defaultStore;	// 0x31d1db49
- (id)init;	// 0x31d1db75
- (id)initWithBundleIdentifier:(id)bundleIdentifier;	// 0x31d1db89
- (void)_adjustTimer:(id)timer;	// 0x31d1e40d
- (void)_adjustTimerForAutosync;	// 0x31d3bd59
- (void)_configurationDidChange;	// 0x31e20ec1
- (BOOL)_hasPendingSynchronize;	// 0x31e1ff75
- (void)_pleaseSynchronize:(id)synchronize;	// 0x31d20859
- (BOOL)_postDidChangeNotificationExternalChanges:(id)_post sourceChangeCount:(int)count;	// 0x31e20059
- (void)_registerToDaemon;	// 0x31d1de09
- (void)_rethrowException:(id)exception;	// 0x31e20289
- (void)_scheduleRemoteSynchronization;	// 0x31e20999
- (void)_setHasPendingSynchronize:(BOOL)synchronize;	// 0x31e1ffcd
- (void)_setShouldAvoidSynchronize:(BOOL)_set;	// 0x31e1ff01
- (BOOL)_shouldAvoidSynchronize;	// 0x31d1deb1
- (void)_sourceDidChange:(id)_source;	// 0x31e20dc5
- (int)_storeChangeFromSourceChange:(int)sourceChange;	// 0x31e20049
- (void)_syncConcurrently;	// 0x31e2047d
- (BOOL)_synchronizeForced:(BOOL)forced;	// 0x31d1df09
- (BOOL)_synchronizeForced:(BOOL)forced notificationQueue:(dispatch_queue_s *)queue;	// 0x31d1df21
- (void)_unregisterFromDaemon;	// 0x31e211c5
- (id)arrayForKey:(id)key;	// 0x31e213d1
- (BOOL)boolForKey:(id)key;	// 0x31e217ed
- (id)dataForKey:(id)key;	// 0x31e21579
- (void)dealloc;	// 0x31d1daa5
- (id)dictionaryForKey:(id)key;	// 0x31e214a5
- (id)dictionaryRepresentation;	// 0x31e20811
- (double)doubleForKey:(id)key;	// 0x31e2173d
- (void)finalize;	// 0x31e1febd
- (long long)longLongForKey:(id)key;	// 0x31e2164d
- (unsigned)maximumDataLengthPerKey;	// 0x31e21291
- (unsigned)maximumKeyCount;	// 0x31e21251
- (unsigned)maximumKeyLength;	// 0x31e21271
- (unsigned)maximumTotalDataLength;	// 0x31e212b1
- (id)objectForKey:(id)key;	// 0x31d1e501
- (void)registerDefaultValues:(id)values;	// 0x31e2069d
- (void)removeObjectForKey:(id)key;	// 0x31e20689
- (void)setArray:(id)array forKey:(id)key;	// 0x31e2140d
- (void)setBool:(BOOL)aBool forKey:(id)key;	// 0x31e21905
- (void)setData:(id)data forKey:(id)key;	// 0x31e215b5
- (void)setDictionary:(id)dictionary forKey:(id)key;	// 0x31e214e1
- (void)setDouble:(double)aDouble forKey:(id)key;	// 0x31e217b1
- (void)setLongLong:(long long)aLong forKey:(id)key;	// 0x31e21701
- (void)setObject:(id)object forKey:(id)key;	// 0x31d3bb41
- (void)setString:(id)string forKey:(id)key;	// 0x31e21339
- (id)stringForKey:(id)key;	// 0x31e212d1
- (BOOL)synchronize;	// 0x31d1de61
@end

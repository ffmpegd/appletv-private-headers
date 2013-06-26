/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import </libobjc.A.h>

@class SSSQLiteDatabase, SSPersistentCache, NSString;
@protocol OS_dispatch_queue;

@interface SSDatabaseCache : NSObject {
	unsigned _maximumInlineBlobSize;	// 4 = 0x4
	NSString *_identifier;	// 8 = 0x8
	NSString *_cacheName;	// 12 = 0xc
	NSString *_path;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *_serialQueue;	// 20 = 0x14
	SSPersistentCache *_persistentCache;	// 24 = 0x18
	SSSQLiteDatabase *_database;	// 28 = 0x1c
	Class _cacheEntryClass;	// 32 = 0x20
}
@property(assign, nonatomic) unsigned maximumInlineBlobSize;	// G=0x32859721; S=0x32859731; @synthesize=_maximumInlineBlobSize
- (id)initWithIdentifier:(id)identifier cacheName:(id)name;	// 0x32857cd9
- (id)initWithIdentifier:(id)identifier cacheName:(id)name database:(id)database cacheEntryClass:(Class)aClass;	// 0x32857855
- (BOOL)_setupDatabase;	// 0x32857e5d
- (id)cacheEntryForLookupKey:(id)lookupKey;	// 0x32858f0d
- (id)cacheEntryProperties:(id)properties forLookupKeys:(id)lookupKeys;	// 0x32859319
- (void)clear;	// 0x32858701
- (void)clearCacheForLookupKey:(id)lookupKey;	// 0x3285884d
- (int)clearRetiredData;	// 0x328588b5
- (void)dealloc;	// 0x32857d25
- (id)description;	// 0x32857dc5
// declared property getter: - (unsigned)maximumInlineBlobSize;	// 0x32859721
- (id)setData:(id)data expiring:(double)expiring retiring:(double)retiring lookupKey:(id)key userInfo:(id)info;	// 0x32858f89
// declared property setter: - (void)setMaximumInlineBlobSize:(unsigned)size;	// 0x32859731
- (id)statistics;	// 0x32858019
@end

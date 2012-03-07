/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSURLCache.h> // Unknown library

@class NSLock, NSArray, NSString;

@interface ISURLCacheGroup : NSURLCache {
@private
	NSArray *_caches;	// 8 = 0x8
	NSString *_clientIdentifier;	// 12 = 0xc
	NSLock *_lock;	// 16 = 0x10
}
@property(readonly, assign) NSString *clientIdentifier;	// G=0x33dbc7d5; @synthesize=_clientIdentifier
@property(assign) unsigned diskCapacity;	// G=0x33dbbf29; S=0x33dbc1cd; converted property
@property(assign) unsigned memoryCapacity;	// G=0x33dbc019; S=0x33dbc1d1; converted property
+ (void)setSharedInstance:(id)instance;	// 0x33dbb649
+ (id)sharedInstance;	// 0x33dbb69d
- (id)init;	// 0x33dbb509
- (id)initWithClientIdentifier:(id)clientIdentifier;	// 0x33dbb51d
- (id)initWithMemoryCapacity:(unsigned)memoryCapacity diskCapacity:(unsigned)capacity diskPath:(id)path;	// 0x33dbb5a1
- (id)_ntsCacheForPersistentIdentifier:(id)persistentIdentifier;	// 0x33dbc2bd
- (id)_ntsCacheForRequest:(id)request;	// 0x33dbc385
- (void)_reloadForNewCaches:(id)newCaches;	// 0x33dbc439
- (id)cachedResponseForRequest:(id)request;	// 0x33dbbbfd
// declared property getter: - (id)clientIdentifier;	// 0x33dbc7d5
- (unsigned)currentDiskUsage;	// 0x33dbbd49
- (unsigned)currentMemoryUsage;	// 0x33dbbe39
- (void)dealloc;	// 0x33dbb5d5
// converted property getter: - (unsigned)diskCapacity;	// 0x33dbbf29
// converted property getter: - (unsigned)memoryCapacity;	// 0x33dbc019
- (void)purgeMemoryCache;	// 0x33dbb6e1
- (void)removeAllCachedResponses;	// 0x33dbc109
- (void)removeCachedResponseForRequest:(id)request;	// 0x33dbc169
- (void)saveMemoryCacheToDisk;	// 0x33dbb7bd
- (void)setCachesFromPropertyList:(id)propertyList;	// 0x33dbb899
// converted property setter: - (void)setDiskCapacity:(unsigned)capacity;	// 0x33dbc1cd
// converted property setter: - (void)setMemoryCapacity:(unsigned)capacity;	// 0x33dbc1d1
- (void)storeCachedResponse:(id)response forRequest:(id)request;	// 0x33dbc1d5
@end


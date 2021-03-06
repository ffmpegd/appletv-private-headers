/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library

@class GEOExpiringTileCache, NSMutableArray, NSLock, GEOTileCache;
@protocol GEOTileServerProxy;

@interface GEOTileLoader : NSObject {
	GEOTileCache *_tiles;	// 4 = 0x4
	GEOExpiringTileCache *_expTiles;	// 8 = 0x8
	NSMutableArray *_pendingLoads;	// 12 = 0xc
	NSLock *_pendingLoadsLock;	// 16 = 0x10
	NSMutableArray *_tileDecoders;	// 20 = 0x14
	id<GEOTileServerProxy> _serverConnection;	// 24 = 0x18
	int _memoryHits;	// 28 = 0x1c
	int _diskHits;	// 32 = 0x20
	int _networkHits;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) int diskHits;	// G=0x3392c2dd; 
@property(readonly, assign, nonatomic) int memoryHits;	// G=0x3392c2cd; 
@property(readonly, assign, nonatomic) int networkHits;	// G=0x3392c2ed; 
+ (id)diskCacheLocation;	// 0x3392a9bd
+ (void)setDiskCacheLocation:(id)location;	// 0x3392a97d
+ (void)setMemoryCacheCountLimit:(unsigned)limit;	// 0x3392a95d
+ (void)setMemoryCacheMinCapacity:(unsigned)capacity;	// 0x3392a959
+ (void)setMemoryCacheTotalCostLimit:(unsigned)limit;	// 0x3392a96d
+ (id)sharedLoader;	// 0x338fc1c9
+ (void)useLocalLoader;	// 0x3392a949
+ (void)useRemoteLoader;	// 0x3392a939
- (id)init;	// 0x338fc1fd
- (void)_activeTileGroupChanged:(id)changed;	// 0x3392b1e5
- (void)_asyncDecodeTile:(id)tile forKey:(const GEOTileKey *)key completion:(id)completion;	// 0x33902895
- (id)_decodeTile:(id)tile forKey:(const GEOTileKey *)key;	// 0x3392ab41
- (void)_loadTilesFromServer:(id)server checkDisk:(BOOL)disk allowNetworking:(BOOL)networking requireWiFi:(BOOL)fi;	// 0x3392b225
- (id)_pendingLoadForNetworkLoadList:(id)networkLoadList acquireLock:(BOOL)lock;	// 0x3390273d
- (id)_pendingLoadForOriginalList:(id)originalList acquireLock:(BOOL)lock;	// 0x33901325
- (void)_preempt:(id)preempt;	// 0x3392bc95
- (void)_tileEditionChanged:(id)changed;	// 0x3392b0bd
- (void)beginPreloadSessionOfSize:(unsigned long long)size;	// 0x3392be15
- (void)cancelRequest:(id)request;	// 0x3392b945
- (void)clearAllCaches;	// 0x3392ab01
- (void)closeDatabase;	// 0x3390531d
- (void)dealloc;	// 0x3392aa1d
// declared property getter: - (int)diskHits;	// 0x3392c2dd
- (void)endPreloadSession;	// 0x3392be35
- (id)expireTilesWithType:(unsigned char)type provider:(unsigned short)provider olderThan:(double)than;	// 0x3392c255
- (void)loadTiles:(id)tiles progress:(id)progress finished:(id)finished error:(id)error;	// 0x3392b5bd
- (void)loadTilesFromCache:(id)cache progress:(id)progress finished:(id)finished error:(id)error;	// 0x3392b591
- (void)loadTilesFromCacheAndNetwork:(id)cacheAndNetwork progress:(id)progress finished:(id)finished error:(id)error;	// 0x33900cbd
- (void)loadTilesFromCacheAndNetwork:(id)cacheAndNetwork progress:(id)progress finished:(id)finished error:(id)error skipNetwork:(BOOL)network;	// 0x33900ced
// declared property getter: - (int)memoryHits;	// 0x3392c2cd
// declared property getter: - (int)networkHits;	// 0x3392c2ed
- (void)openDatabase;	// 0x339214dd
- (void)preloadTiles:(id)tiles requireWiFi:(BOOL)fi progress:(id)progress finished:(id)finished error:(id)error;	// 0x3392b6ad
- (void)registerTileDecoder:(id)decoder;	// 0x338fe7f5
- (void)registerTileLoader:(Class)loader;	// 0x3392c275
- (id)renderDataForKey:(GEOTileKey *)key;	// 0x3392adad
- (id)renderDataForKey:(GEOTileKey *)key asyncHandler:(id)handler;	// 0x338ffcb1
- (void)reportCorruptTile:(const GEOTileKey *)tile;	// 0x3392bdf5
- (void)shrinkDiskCacheToSize:(unsigned long long)size finished:(id)finished;	// 0x3392c2fd
- (void)tileServerProxy:(id)proxy receivedData:(id)data forKey:(GEOTileKey)key forRequest:(id)request fromDisk:(BOOL)disk userInfo:(id)info;	// 0x339024c5
- (void)tileServerProxy:(id)proxy receivedError:(id)error forRequest:(id)request;	// 0x3392c1ad
- (void)tileServerProxy:(id)proxy requestFinished:(id)finished;	// 0x33903711
- (void)tileServerProxy:(id)proxy requestMovedToNetwork:(id)network;	// 0x339163b9
@end


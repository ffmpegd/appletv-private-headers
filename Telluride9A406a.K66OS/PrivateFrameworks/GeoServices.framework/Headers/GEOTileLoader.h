/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSMutableArray, GEOExpiringTileCache, NSMapTable, NSLock, GEOTileCache;
@protocol GEOTileServerProxy;

@interface GEOTileLoader : NSObject {
	GEOTileCache *_tiles;	// 4 = 0x4
	GEOExpiringTileCache *_expTiles;	// 8 = 0x8
	NSMapTable *_pendingLoads;	// 12 = 0xc
	NSLock *_pendingLoadsLock;	// 16 = 0x10
	NSMapTable *_pendingNetworkLoads;	// 20 = 0x14
	NSLock *_pendingNetworkLoadsLock;	// 24 = 0x18
	NSMutableArray *_tileDecoders;	// 28 = 0x1c
	id<GEOTileServerProxy> _serverConnection;	// 32 = 0x20
	int _memoryHits;	// 36 = 0x24
	int _diskHits;	// 40 = 0x28
	int _networkHits;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) int diskHits;	// G=0x34be64dd; 
@property(readonly, assign, nonatomic) int memoryHits;	// G=0x34be64cd; 
@property(readonly, assign, nonatomic) int networkHits;	// G=0x34be64ed; 
+ (id)diskCacheLocation;	// 0x34be47f9
+ (void)setDiskCacheLocation:(id)location;	// 0x34be47b9
+ (id)sharedLoader;	// 0x34be4815
+ (void)useLocalLoader;	// 0x34be47a9
+ (void)useRemoteLoader;	// 0x34be4799
- (id)init;	// 0x34be4881
- (void)_asyncDecodeTile:(id)tile forKey:(const GEOTileKey *)key completion:(id)completion;	// 0x34be4d0d
- (id)_decodeTile:(id)tile forKey:(const GEOTileKey *)key;	// 0x34be4c39
- (void)_loadTilesFromServer:(id)server checkDisk:(BOOL)disk allowNetworking:(BOOL)networking;	// 0x34be5619
- (void)_tileEditionChanged:(id)changed;	// 0x34be54f5
- (void)cancelAllRequests;	// 0x34be5bd1
- (void)cancelRequest:(id)request;	// 0x34be5e35
- (void)clearAllCaches;	// 0x34be4bfd
- (void)closeDatabase;	// 0x34be54b5
- (void)dealloc;	// 0x34be4aa5
// declared property getter: - (int)diskHits;	// 0x34be64dd
- (id)expireTilesWithType:(unsigned char)type provider:(unsigned short)provider olderThan:(double)than;	// 0x34be63f9
- (id)hostnameForProviderID:(unsigned short)providerID;	// 0x34be646d
- (void)loadTiles:(id)tiles progress:(id)progress finished:(id)finished error:(id)error;	// 0x34be5ae5
- (void)loadTilesFromCache:(id)cache progress:(id)progress finished:(id)finished error:(id)error;	// 0x34be5ab9
- (void)loadTilesFromCacheAndNetwork:(id)cacheAndNetwork progress:(id)progress finished:(id)finished error:(id)error;	// 0x34be5a8d
- (void)loadTilesFromCacheAndNetwork:(id)cacheAndNetwork progress:(id)progress finished:(id)finished error:(id)error skipNetwork:(BOOL)network;	// 0x34be57f9
// declared property getter: - (int)memoryHits;	// 0x34be64cd
// declared property getter: - (int)networkHits;	// 0x34be64ed
- (void)openDatabase;	// 0x34be54d5
- (void)registerTileDecoder:(id)decoder;	// 0x34be4b99
- (void)registerTileLoader:(Class)loader;	// 0x34be6419
- (id)renderDataForKey:(GEOTileKey *)key;	// 0x34be5099
- (id)renderDataForKey:(GEOTileKey *)key asyncHandler:(id)handler;	// 0x34be51cd
- (void)tileServerProxy:(id)proxy receivedData:(id)data forKey:(GEOTileKey)key forRequest:(id)request fromDisk:(BOOL)disk;	// 0x34be5f51
- (void)tileServerProxy:(id)proxy receivedError:(id)error forRequest:(id)request;	// 0x34be61bd
- (void)tileServerProxy:(id)proxy requestFinished:(id)finished;	// 0x34be62dd
- (void)tileServerProxy:(id)proxy requestMovedToNetwork:(id)network;	// 0x34be61b9
@end

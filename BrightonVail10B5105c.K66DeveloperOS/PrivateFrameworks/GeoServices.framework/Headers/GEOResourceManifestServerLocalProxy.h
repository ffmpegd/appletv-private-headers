/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "NSURLConnectionDelegate.h"
#import "GEOResourceLoaderDelegate.h"
#import "GEOResourceManifestServerProxy.h"
#import <NSObject.h> // Unknown library

@class GEORegionalResourcesInfo, NSTimer, NSError, GEORegionalResourcesLoader, NSMutableData, NSMutableDictionary, NSURLConnection, NSString, GEOResourceManifestDownload, GEOResourceLoader, GEOActiveTileGroup, NSLock;
@protocol GEOResourceManifestServerProxyDelegate;

__attribute__((visibility("hidden")))
@interface GEOResourceManifestServerLocalProxy : NSObject <NSURLConnectionDelegate, GEOResourceLoaderDelegate, GEOResourceManifestServerProxy> {
	id<GEOResourceManifestServerProxyDelegate> _delegate;	// 4 = 0x4
	NSURLConnection *_connection;	// 8 = 0x8
	NSMutableData *_responseData;	// 12 = 0xc
	NSString *_responseETag;	// 16 = 0x10
	BOOL _isObservingManifestReachability;	// 20 = 0x14
	NSTimer *_manifestUpdateTimer;	// 24 = 0x18
	BOOL _isObservingTileGroupReachability;	// 28 = 0x1c
	NSTimer *_tileGroupUpdateTimer;	// 32 = 0x20
	GEOResourceManifestDownload *_resourceManifest;	// 36 = 0x24
	GEOActiveTileGroup *_activeTileGroup;	// 40 = 0x28
	GEORegionalResourcesInfo *_regionalResourcesInfo;	// 44 = 0x2c
	GEOResourceLoader *_resourceLoader;	// 48 = 0x30
	NSMutableDictionary *_resourceRetainCounts;	// 52 = 0x34
	GEORegionalResourcesLoader *_regionalResourcesLoader;	// 56 = 0x38
	BOOL _started;	// 60 = 0x3c
	BOOL _hiDPI;	// 61 = 0x3d
	unsigned _manifestRetryCount;	// 64 = 0x40
	unsigned _tileGroupRetryCount;	// 68 = 0x44
	NSString *_authToken;	// 72 = 0x48
	NSLock *_authTokenLock;	// 76 = 0x4c
	NSError *_lastResourceManifestLoadError;	// 80 = 0x50
}
@property(readonly, retain) NSString *authToken;	// G=0x3396bc49; converted property
@property(assign, nonatomic) id<GEOResourceManifestServerProxyDelegate> delegate;	// G=0x33970ead; S=0x33970ebd; @synthesize=_delegate
- (id)initWithDelegate:(id)delegate;	// 0x3396ba25
- (void)_cancelConnection;	// 0x3396e485
- (void)_changeActiveTileGroup:(id)group flushTileCache:(BOOL)cache;	// 0x3396c559
- (void)_cleanupConnection;	// 0x3396e4c1
- (void)_considerChangingActiveTileGroup;	// 0x3396de3d
- (void)_countryProvidersDidChange:(id)_countryProviders;	// 0x3396e9c5
- (void)_forceChangeActiveTileGroup:(id)group flushTileCache:(BOOL)cache;	// 0x3396e025
- (void)_loadFromDisk;	// 0x3396bf39
- (id)_manifestURL;	// 0x3396eb4d
- (void)_reachabilityChanged:(id)changed;	// 0x3396ea7d
- (void)_registerReachabilityObserver:(unsigned)observer;	// 0x3396e9f5
- (void)_retainResource:(id)resource;	// 0x339701d5
- (void)_scheduleTileGroupUpdateTimerWithTimeInterval:(double)timeInterval;	// 0x3396df45
- (void)_scheduleUpdateTimerWithTimeInterval:(double)timeInterval;	// 0x3396f071
- (void)_tileGroupTimerFired:(id)fired;	// 0x3396dfd5
- (void)_updateManifest;	// 0x3396ed61
- (BOOL)_updateManifestIfNecessary;	// 0x3396ec41
- (void)_updateTimerFired:(id)fired;	// 0x3396f101
- (void)_writeActiveTileGroupToDisk:(id)disk;	// 0x3396e84d
- (void)_writeManifestToDisk:(id)disk;	// 0x3396e909
// converted property getter: - (id)authToken;	// 0x3396bc49
- (oneway void)cancelRegionalResourcesLoadForKeys:(id)keys;	// 0x33970e09
- (void)closeConnection;	// 0x3396bc45
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x3396f8bd
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x3396f47d
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x3396f151
- (void)connectionDidFinishLoading:(id)connection;	// 0x3396f4c1
- (void)dealloc;	// 0x3396ba9d
// declared property getter: - (id)delegate;	// 0x33970ead
- (oneway void)forceUpdate;	// 0x3396ef45
- (void)getResourceManifestWithHandler:(id)handler;	// 0x3396ef55
- (oneway void)loadRegionalResourcesForKeys:(id)keys allowNetwork:(BOOL)network;	// 0x3397063d
- (void)openConnection;	// 0x3396bc41
- (oneway void)refreshActiveTileGroup;	// 0x3396e6b5
- (oneway void)releaseResources:(id)resources;	// 0x33970361
- (oneway void)resetActiveTileGroup;	// 0x3396e645
- (id)resourceLoader:(id)loader resourceNamesForTileGroupWithIdentifier:(unsigned)identifier type:(int)type;	// 0x3396fa49
- (oneway void)retainResources:(id)resources;	// 0x33970295
- (oneway void)setActiveTileGroupIdentifier:(id)identifier;	// 0x3396e529
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33970ebd
- (oneway void)startServer:(id)server;	// 0x3396bcb5
@end


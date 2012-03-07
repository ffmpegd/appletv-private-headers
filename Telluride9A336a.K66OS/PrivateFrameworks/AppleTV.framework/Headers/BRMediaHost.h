/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSTimer, NSDictionary, NSSet, BRMediaHostEvent, BRMediaHostState;
@protocol BRUnresolvedMediaProviderHandler;

@interface BRMediaHost : NSObject {
@private
	NSDictionary *_hostInfo;	// 4 = 0x4
	NSMutableArray *_providers;	// 8 = 0x8
	int _hostType;	// 12 = 0xc
	NSMutableArray *_eventQueue;	// 16 = 0x10
	NSSet *_eventFilter;	// 20 = 0x14
	BRMediaHostEvent *_filterEvent;	// 24 = 0x18
	BRMediaHostState *_state;	// 28 = 0x1c
	NSTimer *_eventTimer;	// 32 = 0x20
	BOOL _supportsPhotos;	// 36 = 0x24
	BOOL _supportsPhotoThumbnails;	// 37 = 0x25
	id<BRUnresolvedMediaProviderHandler> _unresolvedProviderHandler;	// 40 = 0x28
}
@property(readonly, retain) NSDictionary *hostInfo;	// G=0x33b2c7c1; converted property
@property(readonly, assign) int hostType;	// G=0x33b2d649; converted property
@property(retain) id hostname;	// G=0x33b2c999; S=0x33b2c385; converted property
@property(retain) BRMediaHostState *state;	// G=0x33b2d639; S=0x33b2d439; converted property
@property(assign) BOOL supportsPhotoThumbnails;	// G=0x33b2d6cd; S=0x33b2d6bd; converted property
@property(assign) BOOL supportsPhotos;	// G=0x33b2d679; S=0x33b2d6ad; converted property
+ (void)_addHostToMounts:(id)mounts;	// 0x33b2e05d
+ (void)_hostsChanged;	// 0x33b2e085
+ (id)_mediaProviderAdvertisingMediaTypes:(id)types forceLocalResolution:(BOOL)resolution;	// 0x33b2ddad
+ (id)_mediaProvidersAdvertisingMediaTypes:(id)types forceLocalResolution:(BOOL)resolution;	// 0x33b2ded9
+ (void)_removeHostFromMounts:(id)mounts;	// 0x33b2e035
+ (void)_updateTo3_0:(id)a3_0;	// 0x33b2e451
+ (void)addMediaHost:(id)host;	// 0x33b2bb15
+ (id)allRentalAssets;	// 0x33b2bf89
+ (id)currentHost;	// 0x33b2b479
+ (id)daapHosts;	// 0x33b2ba25
+ (id)daapMediaHostWithHostInfo:(id)hostInfo;	// 0x33b2b379
+ (void)initialize;	// 0x33b2ae01
+ (BOOL)isPairedForSyncing:(BOOL *)syncing;	// 0x33b2be31
+ (id)localHost;	// 0x33b2b52d
+ (id)localMediaProviderAdvertisingMediaTypes:(id)types;	// 0x33b2bf75
+ (id)mediaHost;	// 0x33b2b129
+ (id)mediaHostForMediaProvider:(id)mediaProvider;	// 0x33b2b7c9
+ (id)mediaHostMatchingHostInfo:(id)info;	// 0x33b2b609
+ (id)mediaHosts;	// 0x33b2b851
+ (id)mediaProviderAdvertisingMediaTypes:(id)types;	// 0x33b2bf4d
+ (id)mediaProvidersAdvertisingMediaTypes:(id)types;	// 0x33b2bf61
+ (id)mountedMediaHosts;	// 0x33b2be89
+ (id)pairedHost;	// 0x33b2b915
+ (void)removeMediaHost:(id)host;	// 0x33b2bc49
+ (void)removeMediaHost:(id)host supressingRemoveNotification:(BOOL)notification;	// 0x33b2bc69
+ (void)setCurrentHost:(id)host;	// 0x33b2b591
+ (id)streamingHosts;	// 0x33b2b935
+ (id)streamingMediaHostWithHostInfo:(id)hostInfo;	// 0x33b2b275
+ (id)syncingHost;	// 0x33b2b925
+ (id)syncingMediaHostWithHostInfo:(id)hostInfo;	// 0x33b2b171
+ (void)unmountAllHosts;	// 0x33b2aff9
+ (void)unmountInactiveStreamingHosts;	// 0x33b2b081
- (id)init;	// 0x33b2c1a9
- (int)_codingVersion;	// 0x33b2e0e9
- (void)_mediaProviderLoadFailed:(id)failed;	// 0x33b2e359
- (void)_mediaProviderLoaded:(id)loaded;	// 0x33b2e31d
- (void)_mediaProviderUnloaded:(id)unloaded;	// 0x33b2e415
- (void)_mediaProviderUnloading:(id)unloading;	// 0x33b2e395
- (void)_mount;	// 0x33b2c9cd
- (void)_processEvent:(id)event;	// 0x33b2e26d
- (void)_processNextEvent;	// 0x33b2e0ed
- (void)_unmount;	// 0x33b2cad9
- (void)abandonEvent:(id)event;	// 0x33b2c6fd
- (void)addMediaProvider:(id)provider;	// 0x33b2cc69
- (void)addMediaProvider:(id)provider checkForDuplicates:(BOOL)duplicates;	// 0x33b2cc7d
- (BOOL)containsPasswordedProvider;	// 0x33b2d701
- (void)dealloc;	// 0x33b2c269
- (id)hostID;	// 0x33b2c335
// converted property getter: - (id)hostInfo;	// 0x33b2c7c1
// converted property getter: - (int)hostType;	// 0x33b2d649
// converted property getter: - (id)hostname;	// 0x33b2c999
- (BOOL)isLocal;	// 0x33b2d659
- (id)lastAccessedDate;	// 0x33b2d761
- (id)mediaProviderAdvertisingMediaTypes:(id)types;	// 0x33b2d275
- (id)mediaProviderWithID:(id)anId andMachineID:(id)anId2;	// 0x33b2d071
- (id)mediaProviders;	// 0x33b2cba1
- (id)mediaProvidersAdvertisingMediaTypes:(id)types;	// 0x33b2d161
- (void)postEvent:(id)event;	// 0x33b2c521
- (id)registeredMediaProviderForMediaTypes:(id)mediaTypes;	// 0x33b2d329
- (void)removeAllMediaProviders;	// 0x33b2d3a9
- (void)removeMediaProvider:(id)provider;	// 0x33b2ceed
- (void)removeMediaProviderWithID:(id)anId andMachineID:(id)anId2;	// 0x33b2d03d
// converted property setter: - (void)setHostname:(id)hostname;	// 0x33b2c385
// converted property setter: - (void)setState:(id)state;	// 0x33b2d439
// converted property setter: - (void)setSupportsPhotoThumbnails:(BOOL)thumbnails;	// 0x33b2d6bd
// converted property setter: - (void)setSupportsPhotos:(BOOL)photos;	// 0x33b2d6ad
- (void)setUnresolvedMediaProviderHandler:(id)handler;	// 0x33b2c341
// converted property getter: - (id)state;	// 0x33b2d639
// converted property getter: - (BOOL)supportsPhotoThumbnails;	// 0x33b2d6cd
// converted property getter: - (BOOL)supportsPhotos;	// 0x33b2d679
- (void)waitForEvent:(id)event toProcessEvent:(id)processEvent;	// 0x33b2c48d
@end


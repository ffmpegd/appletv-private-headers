/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"
#import "ATVPushNotificationListener.h"

@class NSObject, ATVURLDocument, HSCloudClient, NSTimer, ML3MusicLibrary, NSCountedSet, NSMapTable, NSArray, NSMutableDictionary, NSNumber, ATVBackgroundTask;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ATVCloudDataClient : XXUnknownSuperclass <ATVPushNotificationListener> {
	mach_timebase_info _timebaseInfo;	// 4 = 0x4
	BOOL _servicesInitialized;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_artworkProcessingQueue;	// 16 = 0x10
	unsigned short _concurrentArtworkRequestCount;	// 20 = 0x14
	BOOL _wasSagaPurchased;	// 22 = 0x16
	BOOL _deauthenticationInProgress;	// 23 = 0x17
	BOOL _shouldInitializeMusicAfterDeauthentication;	// 24 = 0x18
	NSArray *_rentalItems;	// 28 = 0x1c
	BOOL _sagaEnabled;	// 32 = 0x20
	BOOL _forceUpdateRentals;	// 33 = 0x21
	int _musicSyncStatus;	// 36 = 0x24
	float _musicSyncProgress;	// 40 = 0x28
	int _purchaseSyncStatus;	// 44 = 0x2c
	HSCloudClient *_hsCloudClient;	// 48 = 0x30
	ML3MusicLibrary *_mlLibrary;	// 52 = 0x34
	NSNumber *_accountDSID;	// 56 = 0x38
	ATVBackgroundTask *_jaliscoPushUpdateTask;	// 60 = 0x3c
	ATVBackgroundTask *_sagaPushUpdateTask;	// 64 = 0x40
	ATVBackgroundTask *_itemPropertiesUploadTask;	// 68 = 0x44
	NSMutableDictionary *_artworkRequestMap;	// 72 = 0x48
	NSTimer *_playerStopTimer;	// 76 = 0x4c
	ATVURLDocument *_storeRentalCheckCountRequest;	// 80 = 0x50
	ATVURLDocument *_storeRentalItemsRequest;	// 84 = 0x54
	unsigned long _fpContext;	// 88 = 0x58
	NSNumber *_cacheRentalID;	// 92 = 0x5c
	ATVBackgroundTask *_rentalExpirationTask;	// 96 = 0x60
	NSNumber *_rentalsLocalRank;	// 100 = 0x64
	int _lastRefreshInitiated;	// 104 = 0x68
	int _acquisitionRefreshesRentals;	// 108 = 0x6c
	NSCountedSet *_showInfosToIgnore;	// 112 = 0x70
	NSMutableDictionary *_showInfosToWriteToKVS;	// 116 = 0x74
	NSMapTable *_acquiredItemsDict;	// 120 = 0x78
}
@property(retain, nonatomic) NSNumber *accountDSID;	// G=0x3d43d; S=0x3d44d; @synthesize=_accountDSID
@property(retain, nonatomic) NSMapTable *acquiredItemsDict;	// G=0x3d65d; S=0x3d66d; @synthesize=_acquiredItemsDict
@property(assign, nonatomic) int acquisitionRefreshesRentals;	// G=0x3d5dd; S=0x3d5ed; @synthesize=_acquisitionRefreshesRentals
@property(retain, nonatomic) NSMutableDictionary *artworkRequestMap;	// G=0x3d4bd; S=0x3d4cd; @synthesize=_artworkRequestMap
@property(retain, nonatomic) NSNumber *cacheRentalID;	// G=0x3d55d; S=0x3d56d; @synthesize=_cacheRentalID
@property(assign, nonatomic) BOOL forceUpdateRentals;	// G=0x3d5fd; S=0x3d60d; @synthesize=_forceUpdateRentals
@property(assign, nonatomic) unsigned long fpContext;	// G=0x3d53d; S=0x3d54d; @synthesize=_fpContext
@property(retain, nonatomic) HSCloudClient *hsCloudClient;	// G=0x3d3fd; S=0x3d40d; @synthesize=_hsCloudClient
@property(readonly, assign, nonatomic) BOOL isJaliscoAvailableInStoreFront;	// G=0x3c459; 
@property(readonly, assign, nonatomic) BOOL isSagaAvailableInStoreFront;	// G=0x3c091; 
@property(readonly, assign, nonatomic) BOOL isSagaGeniusEnabled;	// G=0x3c319; 
@property(readonly, assign, nonatomic) BOOL isSagaPurchased;	// G=0x3c179; 
@property(retain, nonatomic) ATVBackgroundTask *itemPropertiesUploadTask;	// G=0x3d49d; S=0x3d4ad; @synthesize=_itemPropertiesUploadTask
@property(retain, nonatomic) ATVBackgroundTask *jaliscoPushUpdateTask;	// G=0x3d45d; S=0x3d46d; @synthesize=_jaliscoPushUpdateTask
@property(assign, nonatomic) int lastRefreshInitiated;	// G=0x3d5bd; S=0x3d5cd; @synthesize=_lastRefreshInitiated
@property(retain, nonatomic) ML3MusicLibrary *mlLibrary;	// G=0x3d41d; S=0x3d42d; @synthesize=_mlLibrary
@property(assign, nonatomic) float musicSyncProgress;	// G=0x3d3bd; S=0x3d3cd; @synthesize=_musicSyncProgress
@property(assign, nonatomic) int musicSyncStatus;	// G=0x3d39d; S=0x3d3ad; @synthesize=_musicSyncStatus
@property(retain, nonatomic) NSTimer *playerStopTimer;	// G=0x3d4dd; S=0x3d4ed; @synthesize=_playerStopTimer
@property(assign, nonatomic) int purchaseSyncStatus;	// G=0x3d3dd; S=0x3d3ed; @synthesize=_purchaseSyncStatus
@property(retain, nonatomic) ATVBackgroundTask *rentalExpirationTask;	// G=0x3d57d; S=0x3d58d; @synthesize=_rentalExpirationTask
@property(retain, nonatomic) NSNumber *rentalsLocalRank;	// G=0x3d59d; S=0x3d5ad; @synthesize=_rentalsLocalRank
@property(assign, nonatomic, getter=isSagaEnabled) BOOL sagaEnabled;	// G=0x3c229; S=0x3d38d; @synthesize=_sagaEnabled
@property(retain, nonatomic) ATVBackgroundTask *sagaPushUpdateTask;	// G=0x3d47d; S=0x3d48d; @synthesize=_sagaPushUpdateTask
@property(retain, nonatomic) NSCountedSet *showInfosToIgnore;	// G=0x3d61d; S=0x3d62d; @synthesize=_showInfosToIgnore
@property(retain, nonatomic) NSMutableDictionary *showInfosToWriteToKVS;	// G=0x3d63d; S=0x3d64d; @synthesize=_showInfosToWriteToKVS
@property(retain, nonatomic) ATVURLDocument *storeRentalCheckCountRequest;	// G=0x3d4fd; S=0x3d50d; @synthesize=_storeRentalCheckCountRequest
@property(retain, nonatomic) ATVURLDocument *storeRentalItemsRequest;	// G=0x3d51d; S=0x3d52d; @synthesize=_storeRentalItemsRequest
+ (void)_updateMediaItem:(id)item withShowInfo:(id)showInfo transactionOptions:(id)options;	// 0x35b26d
+ (id)cloudDataClient;	// 0x3bdb9
- (id)init;	// 0x3bf75
- (id)_acquireWithProperties:(id)properties completionBlock:(id)block notificationsHandler:(id)handler;	// 0x492401
- (void)_acquisitionSuccessful:(id)successful;	// 0x35b209
- (void)_addAcquiredItems:(id)items withCompletionHandler:(id)completionHandler;	// 0x35abbd
- (void)_addPurchase:(id)purchase;	// 0x35c281
- (void)_cancelAcquisition:(id)acquisition;	// 0x492615
- (void)_cancelPlayerStopTimer;	// 0x9bfc9
- (void)_checkInOutstandingRentals:(id)outstandingRentals;	// 0x35a7f1
- (void)_cloudClientLibraryUpdated:(id)updated;	// 0x9b9a1
- (id)_cloudItems;	// 0x35c4c5
- (id)_dataItemsFromStoreResponseDict:(id)storeResponseDict;	// 0x35a9e9
- (void)_deinitializeMusic;	// 0x9a6ed
- (void)_deinitializeRentals;	// 0x358251
- (void)_deleteCloudDatabase;	// 0x9b15d
- (void)_disableMusic;	// 0x9aa59
- (void)_fetchRentalsFromStore;	// 0x358c95
- (unsigned long)_getFairPlayContext;	// 0x3598c9
- (void)_handleCustomRequest:(id)request;	// 0x492d95
- (void)_handleJaliscoPushNotification:(id)notification;	// 0x3f779
- (void)_handleRentalQuery:(id)query;	// 0x3584c5
- (void)_handleRequest:(id)request;	// 0x4927d1
- (void)_handleResponse:(id)response forRequest:(id)request error:(id)error cancelled:(BOOL)cancelled;	// 0x493805
- (void)_handleSagaPushNotification:(id)notification;	// 0x3f9c1
- (void)_iTunesAccountActivity:(id)activity;	// 0x3ced1
- (void)_iTunesAccountChanged;	// 0x3cf45
- (void)_iTunesAccountReauthenticated;	// 0x3d029
- (void)_initializeMusic;	// 0x9a0f9
- (void)_initializeRentals;	// 0x358019
- (void)_initializeServices;	// 0x3ce89
- (BOOL)_isRentalQuery:(id)query;	// 0x35837d
- (BOOL)_isShowInfoBeingWrittenToKVSForMediaItem:(id)mediaItem;	// 0x35ba1d
- (void)_itemPropertyUpdateNotification:(id)notification;	// 0x3d261
- (void)_mainMenuVisible:(id)visible;	// 0x35c271
- (id)_mediaItemWithEarliestExpirationDate;	// 0x35a1d9
- (void)_musicItem:(id)item didChangeValuesForProperties:(id)properties;	// 0x9b781
- (void)_networkStateChanged:(id)changed;	// 0x35c1dd
- (id)_periodicJaliscoUpdateTask;	// 0x9bb2d
- (void)_playerStateChanged:(id)changed;	// 0x9bd11
- (void)_playerStopTimerHandler:(id)handler;	// 0x9bf51
- (void)_processFirstRequest;	// 0x492629
- (void)_processRequest:(id)request;	// 0x492705
- (void)_queueRentalRefreshCompleteNotification:(id)notification;	// 0x35a331
- (void)_refreshAvailableRentals;	// 0x35a481
- (void)_registerForMLDatabaseUpdates;	// 0x9b0ad
- (void)_registerJaliscoPushForUser:(id)user;	// 0x3f451
- (void)_registerSagaPushForUser:(id)user;	// 0x3f661
- (void)_rentalRefreshRequest:(id)request;	// 0x35a9b9
- (id)_rentals;	// 0x35a1c5
- (id)_rentalsAndPurchases;	// 0x35c735
- (void)_rootCollectionUpdated:(id)updated;	// 0x9ba7d
- (void)_showInfoChanged:(id)changed;	// 0x35b3e1
- (void)_startPeriodicJaliscoUpdate;	// 0x9bc41
- (void)_stopPeriodicJaliscoUpdate;	// 0x9bca9
- (void)_syncJalisco;	// 0x9aa89
- (void)_syncSaga;	// 0x9ade5
- (void)_unregisterJaliscoPush;	// 0x3f59d
- (void)_unregisterSagaPush;	// 0x3f6d5
- (void)_updateJaliscoWithReason:(long long)reason;	// 0x9b659
- (void)_updateRentalExpirationTask;	// 0x35a679
- (void)_updateRentals;	// 0x358349
- (void)_updateRentalsFromStore;	// 0x3591b5
- (void)_updateSaga;	// 0x9b711
- (void)_updateShowInfoForMediaItem:(id)mediaItem withPropertiesUpdated:(id)propertiesUpdated;	// 0x35bb91
- (void)_updateShowInfoForRentals:(id)rentals;	// 0x359a19
- (void)_updateSyncProgress;	// 0x9b4f1
- (void)_userActivityHandler:(id)handler;	// 0x9bed9
- (void)_videoItem:(id)item didChangeValuesForProperties:(id)properties;	// 0x35b771
// declared property getter: - (id)accountDSID;	// 0x3d43d
- (id)acquireWithProperties:(id)properties completionBlock:(id)block notificationsHandler:(id)handler;	// 0x3cb8d
// declared property getter: - (id)acquiredItemsDict;	// 0x3d65d
// declared property getter: - (int)acquisitionRefreshesRentals;	// 0x3d5dd
// declared property getter: - (id)artworkRequestMap;	// 0x3d4bd
// declared property getter: - (id)cacheRentalID;	// 0x3d55d
- (BOOL)canProcessQueryConcurrently:(id)concurrently;	// 0x3cd31
- (void)cancelAcquisition:(id)acquisition;	// 0x3cb9d
- (void)cancelArtworkRequestForIdentifier:(id)identifier;	// 0x3eb89
- (void)cancelImageRequest:(id)request;	// 0x3ce79
- (void)cancelLoad:(id)load;	// 0x4b3739
- (void)concreteDataClientConnect;	// 0x3cbad
- (void)concreteDataClientDisconnect;	// 0x3cca5
- (void)executeQuery:(id)query withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0x3cd69
// declared property getter: - (BOOL)forceUpdateRentals;	// 0x3d5fd
// declared property getter: - (unsigned long)fpContext;	// 0x3d53d
- (void)handleGeniusQuery:(id)query completionQueue:(id)queue completionHandler:(id)handler;	// 0x3d8e9
- (void)handleQuery:(id)query completionQueue:(id)queue completionHandler:(id)handler;	// 0x3d67d
// declared property getter: - (id)hsCloudClient;	// 0x3d3fd
- (id)imageKeyForObject:(id)object;	// 0x4b262d
- (id)imageRequestWithAsset:(id)asset imageID:(id)anId size:(CGSize)size crop:(BOOL)crop context:(id)context;	// 0x3ce55
// declared property getter: - (BOOL)isJaliscoAvailableInStoreFront;	// 0x3c459
// declared property getter: - (BOOL)isSagaAvailableInStoreFront;	// 0x3c091
// declared property getter: - (BOOL)isSagaEnabled;	// 0x3c229
// declared property getter: - (BOOL)isSagaGeniusEnabled;	// 0x3c319
// declared property getter: - (BOOL)isSagaPurchased;	// 0x3c179
// declared property getter: - (id)itemPropertiesUploadTask;	// 0x3d49d
// declared property getter: - (id)jaliscoPushUpdateTask;	// 0x3d45d
// declared property getter: - (int)lastRefreshInitiated;	// 0x3d5bd
- (id)loadArtworkForMedia:(id)media artworkIdentifier:(id)identifier withContext:(void *)context;	// 0x3df8d
- (void)loadArtworkURLsForItemIDs:(id)itemIDs completionHandler:(id)handler;	// 0x3c541
- (id)loadImageForObject:(id)object size:(CGSize)size crop:(BOOL)crop completionHandler:(id)handler;	// 0x4b2795
// declared property getter: - (id)mlLibrary;	// 0x3d41d
// declared property getter: - (float)musicSyncProgress;	// 0x3d3bd
// declared property getter: - (int)musicSyncStatus;	// 0x3d39d
// declared property getter: - (id)playerStopTimer;	// 0x3d4dd
- (void)processArtworkQuery:(id)query withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0x3ecb9
- (void)processNewArtworkQuery:(id)query withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0x4b3921
- (BOOL)processQueryAsync:(id)async;	// 0x3cce5
// declared property getter: - (int)purchaseSyncStatus;	// 0x3d3dd
- (void)pushNotificationServer:(id)server didReceiveMessageForTopic:(id)topic userInfo:(id)info;	// 0x3fc05
- (void)pushNotificationServerTokenDidChange:(id)pushNotificationServerToken;	// 0x3fc81
// declared property getter: - (id)rentalExpirationTask;	// 0x3d57d
// declared property getter: - (id)rentalsLocalRank;	// 0x3d59d
// declared property getter: - (id)sagaPushUpdateTask;	// 0x3d47d
// declared property setter: - (void)setAccountDSID:(id)dsid;	// 0x3d44d
// declared property setter: - (void)setAcquiredItemsDict:(id)dict;	// 0x3d66d
// declared property setter: - (void)setAcquisitionRefreshesRentals:(int)rentals;	// 0x3d5ed
// declared property setter: - (void)setArtworkRequestMap:(id)map;	// 0x3d4cd
// declared property setter: - (void)setCacheRentalID:(id)anId;	// 0x3d56d
// declared property setter: - (void)setForceUpdateRentals:(BOOL)rentals;	// 0x3d60d
// declared property setter: - (void)setFpContext:(unsigned long)context;	// 0x3d54d
// declared property setter: - (void)setHsCloudClient:(id)client;	// 0x3d40d
// declared property setter: - (void)setItemPropertiesUploadTask:(id)task;	// 0x3d4ad
// declared property setter: - (void)setJaliscoPushUpdateTask:(id)task;	// 0x3d46d
// declared property setter: - (void)setLastRefreshInitiated:(int)initiated;	// 0x3d5cd
// declared property setter: - (void)setMlLibrary:(id)library;	// 0x3d42d
// declared property setter: - (void)setMusicSyncProgress:(float)progress;	// 0x3d3cd
// declared property setter: - (void)setMusicSyncStatus:(int)status;	// 0x3d3ad
// declared property setter: - (void)setPlayerStopTimer:(id)timer;	// 0x3d4ed
// declared property setter: - (void)setPurchaseSyncStatus:(int)status;	// 0x3d3ed
// declared property setter: - (void)setRentalExpirationTask:(id)task;	// 0x3d58d
- (void)setRentals:(id)rentals;	// 0x359d4d
// declared property setter: - (void)setRentalsLocalRank:(id)rank;	// 0x3d5ad
// declared property setter: - (void)setSagaEnabled:(BOOL)enabled;	// 0x3d38d
- (void)setSagaEnabled:(BOOL)enabled;	// 0x9b361
// declared property setter: - (void)setSagaPushUpdateTask:(id)task;	// 0x3d48d
// declared property setter: - (void)setShowInfosToIgnore:(id)ignore;	// 0x3d62d
// declared property setter: - (void)setShowInfosToWriteToKVS:(id)kvs;	// 0x3d64d
// declared property setter: - (void)setStoreRentalCheckCountRequest:(id)request;	// 0x3d50d
// declared property setter: - (void)setStoreRentalItemsRequest:(id)request;	// 0x3d52d
// declared property getter: - (id)showInfosToIgnore;	// 0x3d61d
// declared property getter: - (id)showInfosToWriteToKVS;	// 0x3d63d
// declared property getter: - (id)storeRentalCheckCountRequest;	// 0x3d4fd
// declared property getter: - (id)storeRentalItemsRequest;	// 0x3d51d
- (void)updateJalisco;	// 0x3cb69
- (void)updateRentals;	// 0x3cb7d
- (void)updateSaga;	// 0x3cb59
@end


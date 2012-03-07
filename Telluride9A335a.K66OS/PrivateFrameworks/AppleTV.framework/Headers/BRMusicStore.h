/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRSingleton.h"
#import "ATVProgressMonitorConfiguration.h"

@class NSTimer, NSArray, NSDictionary, NSNumber, NSString, NSMutableDictionary, BRBackgroundTask;
@protocol BRMediaProvider;

@interface BRMusicStore : BRSingleton <ATVProgressMonitorConfiguration> {
@private
	int _musicStoreLoadState;	// 4 = 0x4
	NSDictionary *_storeFrontsDictionary;	// 8 = 0x8
	NSDictionary *_storeFrontCodesDictionary;	// 12 = 0xc
	NSNumber *_storeFrontID;	// 16 = 0x10
	NSArray *_rootCollection;	// 20 = 0x14
	NSArray *_partnerData;	// 24 = 0x18
	id<BRMediaProvider> _provider;	// 28 = 0x1c
	BOOL _initializing;	// 32 = 0x20
	NSString *_selectedLanguageCode;	// 36 = 0x24
	NSString *_storeMainMenuPresentsKey;	// 40 = 0x28
	dispatch_queue_s *_urlBagQueue;	// 44 = 0x2c
	NSDictionary *_urlBag;	// 48 = 0x30
	BRBackgroundTask *_bagReloadTask;	// 52 = 0x34
	NSTimer *_retryTimer;	// 56 = 0x38
	NSString *_platform;	// 60 = 0x3c
	BOOL _initializePlatform;	// 64 = 0x40
	NSMutableDictionary *_languageIDForLanguageCodeCache;	// 68 = 0x44
	BOOL _dsidSentWithLastStoreRefresh;	// 72 = 0x48
}
@property(retain) id currentStoreFrontID;	// G=0x34298121; S=0x34298521; converted property
@property(assign) BOOL dsidSentWithLastStoreRefresh;	// G=0x3429a0e9; S=0x3429a0f9; @synthesize=_dsidSentWithLastStoreRefresh
@property(assign) int musicStoreLoadState;	// G=0x34297f09; S=0x34297f19; converted property
@property(readonly, retain) NSArray *rootCollection;	// G=0x34299b55; converted property
+ (void)setSingleton:(id)singleton;	// 0x34297c8d
+ (id)singleton;	// 0x34297c9d
- (id)init;	// 0x34297cad
- (id)URLBagEntryForKey:(id)key;	// 0x34297f71
- (id)_acceptLanguage;	// 0x3429cbad
- (id)_augmentPartnerDataWithDefaultPartners:(id)defaultPartners;	// 0x3429c445
- (void)_bootstrapMusicStore;	// 0x3429a271
- (void)_bootstrapMusicStoreFromURL:(id)url;	// 0x3429a2a1
- (id)_canonicalNameForMediaType:(id)mediaType;	// 0x3429a115
- (id)_currentStoreFrontsFilePath;	// 0x3429c089
- (id)_defaultStoreFrontsFilePath;	// 0x3429c059
- (id)_determineLanguageCodeForStoreFront:(id)storeFront;	// 0x3429ce4d
- (void)_initializeGhostrider;	// 0x3429b659
- (BOOL)_initializeMusicStore;	// 0x3429ace1
- (id)_languageIDForLanguageCode:(id)languageCode;	// 0x3429cd3d
- (BOOL)_loadRootCollection:(id)collection;	// 0x3429ad71
- (double)_maxAgeFromResponseHeaders:(id)responseHeaders;	// 0x3429b821
- (void)_networkStateChanged:(id)changed;	// 0x3429bac1
- (id)_primaryMusicStoreURL;	// 0x3429a109
- (void)_requestStoreFrontList;	// 0x3429bbbd
- (void)_retryRootCollection:(id)collection;	// 0x3429b639
- (void)_rootCollectionLoaded:(id)loaded;	// 0x3429b0f1
- (void)_seedMusicStore:(id)store;	// 0x3429a3b5
- (BOOL)_seedMusicStoreWithBag:(id)bag;	// 0x3429ab85
- (void)_seedRequestProcessed:(id)processed;	// 0x3429a875
- (void)_setCurrentStoreFrontID:(id)anId language:(id)language platform:(id)platform;	// 0x3429c375
- (void)_setRootCollection:(id)collection;	// 0x3429b215
- (void)_storeFrontListRequestProcessed:(id)processed;	// 0x3429bd19
- (id)_storeFrontsDictionary;	// 0x3429c0bd
- (id)_storeLanguageID;	// 0x3429cc31
- (void)_storeLoadFailed:(id)failed;	// 0x3429a1e1
- (id)_trustedPartners:(id)partners;	// 0x3429c5f9
- (void)_updateDateAndTimeFromResponse:(id)response;	// 0x3429b995
- (void)_updateReloadTaskWithInterval:(double)interval;	// 0x3429a73d
- (void)_updateStoreFrontFromResponse:(id)response;	// 0x3429b921
- (id)_ytURLDictPath;	// 0x34298b11
- (id)beaconingPuntRatio;	// 0x34299521
- (id)beaconingURLString;	// 0x34299441
- (id)cacheBusterURLForURL:(id)url;	// 0x3429811d
- (id)commonHeaders;	// 0x342998e5
// converted property getter: - (id)currentStoreFrontID;	// 0x34298121
- (id)currentStoreFrontISO3166Code;	// 0x3429836d
- (void)dealloc;	// 0x34297dc9
- (void)decomposeCompositeStoreFrontHeader:(id)header;	// 0x342987c1
- (void)delayedRootCollectionReset;	// 0x34299f25
- (id)downloadCapInSecondsSpeedtest;	// 0x34299281
- (id)downloadMovieSpeedTestURLsArray;	// 0x342991a1
- (id)downloadSpeedTestPostResultsURLString;	// 0x34299361
- (id)downloadSpeedTestURLsArray;	// 0x342990c1
// declared property getter: - (BOOL)dsidSentWithLastStoreRefresh;	// 0x3429a0e9
- (id)keyValueStoreGetAllURLString;	// 0x34299601
- (id)keyValueStorePutAllURLString;	// 0x342996e1
- (id)matchLogoPath;	// 0x342998a1
- (id)matchStoreCategory;	// 0x342997c1
// converted property getter: - (int)musicStoreLoadState;	// 0x34297f09
- (id)provider;	// 0x34298915
- (void)purgeMusicStore;	// 0x34298a55
- (void)refreshURLBag;	// 0x34297ef9
// converted property getter: - (id)rootCollection;	// 0x34299b55
- (id)rootCollectionForMediaType:(id)mediaType;	// 0x34299c09
// converted property setter: - (void)setCurrentStoreFrontID:(id)anId;	// 0x34298521
- (void)setCurrentStoreFrontID:(id)anId language:(id)language;	// 0x34298535
// declared property setter: - (void)setDsidSentWithLastStoreRefresh:(BOOL)lastStoreRefresh;	// 0x3429a0f9
// converted property setter: - (void)setMusicStoreLoadState:(int)state;	// 0x34297f19
- (id)storeFronts;	// 0x3429a049
- (id)storeHeadersDictionary;	// 0x342999c5
- (id)storeHeadersWithDsid;	// 0x340ee329
- (id)storeMainMenuPresentsURLKey;	// 0x34298cbd
- (id)storeRecommendationsURL;	// 0x34298df5
- (id)storeRelatedMoviesURLString;	// 0x34298f01
- (id)storeViewMovieURLString;	// 0x34298fe1
- (id)userAgent;	// 0x34299aad
- (id)vendorBags;	// 0x34299efd
- (id)ytAuthURLBase;	// 0x34298c01
- (id)ytURLBase;	// 0x34298b45
@end


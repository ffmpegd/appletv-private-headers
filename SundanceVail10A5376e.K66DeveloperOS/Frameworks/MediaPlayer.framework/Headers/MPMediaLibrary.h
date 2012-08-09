/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class CADisplayLink, QueryCriteriaResultsCache, NSMutableDictionary, NSString, NSDate, NSURL, NSHashTable;
@protocol MPMediaLibraryDataProviderPrivate, OS_dispatch_queue;

@interface MPMediaLibrary : NSObject <NSCoding> {
	id<MPMediaLibraryDataProviderPrivate> _libraryDataProvider;	// 4 = 0x4
	int _libraryChangeObservers;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_entityCacheQueue;	// 12 = 0xc
	QueryCriteriaResultsCache *_itemsForCriteriaCache;	// 16 = 0x10
	QueryCriteriaResultsCache *_hasItemsForCriteriaCache;	// 20 = 0x14
	QueryCriteriaResultsCache *_countOfItemsForCriteriaCache;	// 24 = 0x18
	QueryCriteriaResultsCache *_itemResultSetsForCriteriaCache;	// 28 = 0x1c
	QueryCriteriaResultsCache *_collectionsForCriteriaCache;	// 32 = 0x20
	QueryCriteriaResultsCache *_hasCollectionsForCriteriaCache;	// 36 = 0x24
	QueryCriteriaResultsCache *_countOfCollectionsForCriteriaCache;	// 40 = 0x28
	QueryCriteriaResultsCache *_collectionsResultSetsForCriteriaCache;	// 44 = 0x2c
	NSMutableDictionary *_hasItemsDidLoadForCriteria;	// 48 = 0x30
	NSMutableDictionary *_hasCollectionsDidLoadForCriteria;	// 52 = 0x34
	NSMutableDictionary *_countOfCollectionsDidLoadForCriteria;	// 56 = 0x38
	NSMutableDictionary *_countOfItemsDidLoadForCriteria;	// 60 = 0x3c
	NSHashTable *_connectionAssertions;	// 64 = 0x40
	BOOL _disconnectAfterReleasingAssertions;	// 68 = 0x44
	float _connectionProgress;	// 72 = 0x48
	CADisplayLink *_connectionProgressDisplayLink;	// 76 = 0x4c
	double _connectionProgressStartTime;	// 80 = 0x50
	int _removalReason;	// 88 = 0x58
	unsigned _determinedHasMedia : 1;	// 92 = 0x5c
	unsigned _hasMedia : 1;	// 92 = 0x5c
	unsigned _determinedHasSongs : 1;	// 92 = 0x5c
	unsigned _hasSongs : 1;	// 92 = 0x5c
	unsigned _determinedHasGeniusMixes : 1;	// 92 = 0x5c
	unsigned _hasGeniusMixes : 1;	// 92 = 0x5c
	unsigned _determinedHasPlaylists : 1;	// 92 = 0x5c
	unsigned _hasPlaylists : 1;	// 92 = 0x5c
	unsigned _determinedHasComposers : 1;	// 93 = 0x5d
	unsigned _hasComposers : 1;	// 93 = 0x5d
	unsigned _determinedHasPodcasts : 1;	// 93 = 0x5d
	unsigned _hasPodcasts : 1;	// 93 = 0x5d
	unsigned _determinedHasUniversalBookmarkableItems : 1;	// 93 = 0x5d
	unsigned _hasUniversalBookmarkableContent : 1;	// 93 = 0x5d
	unsigned _determinedHasAudiobooks : 1;	// 93 = 0x5d
	unsigned _hasAudiobooks : 1;	// 93 = 0x5d
	BOOL _filteringDisabled;	// 94 = 0x5e
	BOOL _hasVideos;	// 95 = 0x5f
	BOOL _determinedHasVideos;	// 96 = 0x60
	BOOL _hasMusicVideos;	// 97 = 0x61
	BOOL _determinedHasMusicVideos;	// 98 = 0x62
	BOOL _hasAudibleAudioBooks;	// 99 = 0x63
	BOOL _determinedHasAudibleAudioBooks;	// 100 = 0x64
	BOOL _hasMovies;	// 101 = 0x65
	BOOL _determinedHasMovies;	// 102 = 0x66
	BOOL _hasCompilations;	// 103 = 0x67
	BOOL _determinedHasCompilations;	// 104 = 0x68
	BOOL _hasITunesU;	// 105 = 0x69
	BOOL _determinedHasITunesU;	// 106 = 0x6a
	BOOL _hasVideoITunesU;	// 107 = 0x6b
	BOOL _determinedHasVideoITunesU;	// 108 = 0x6c
	BOOL _hasMovieRentals;	// 109 = 0x6d
	BOOL _determinedHasMovieRentals;	// 110 = 0x6e
	BOOL _hasTVShows;	// 111 = 0x6f
	BOOL _determinedHasTVShows;	// 112 = 0x70
	BOOL _hasVideoPodcasts;	// 113 = 0x71
	BOOL _determinedHasVideoPodcasts;	// 114 = 0x72
	unsigned char _originalCellNetworkFlags;	// 115 = 0x73
	unsigned char _originalWiFiNetworkFlags;	// 116 = 0x74
}
@property(readonly, assign, nonatomic) NSString *_syncValidity;	// G=0x36ce8675; 
@property(readonly, assign) float connectionProgress;	// G=0x36ce55ad; converted property
@property(readonly, assign) BOOL hasAudibleAudioBooks;	// G=0x36ce4571; converted property
@property(readonly, assign) BOOL hasCompilations;	// G=0x36ce4665; converted property
@property(readonly, assign) BOOL hasMovieRentals;	// G=0x36ce47d5; converted property
@property(readonly, assign) BOOL hasMovies;	// G=0x36ce45e9; converted property
@property(readonly, assign) BOOL hasMusicVideos;	// G=0x36ce44f5; converted property
@property(readonly, assign) BOOL hasTVShows;	// G=0x36ce484d; converted property
@property(readonly, assign) BOOL hasVideoPodcasts;	// G=0x36ce48c9; converted property
@property(readonly, assign) BOOL hasVideos;	// G=0x36ce4479; converted property
@property(readonly, assign, nonatomic) NSDate *lastModifiedDate;	// G=0x36ce3891; 
@property(readonly, assign, nonatomic) NSURL *protectedContentSupportStorageURL;	// G=0x36ce839d; 
@property(assign, nonatomic) int removalReason;	// G=0x36ce3ab9; S=0x36ce3ac9; 
@property(retain) id ubiquitousBookmarkDomainVersionAnchorToken;	// G=0x36ce5125; S=0x36ce5091; converted property
@property(assign) unsigned long long ubiquitousBookmarkEntityRevisionAnchor;	// G=0x36ce50d9; S=0x36ce5039; converted property
+ (id)_libraryDataProviders;	// 0x36ce7f69
+ (id)_libraryForDataProvider:(id)dataProvider;	// 0x36ce7e91
+ (id)_mediaLibraries;	// 0x36ce7d09
+ (void)addLibraryDataProvider:(id)provider;	// 0x36ce7fe9
+ (void)beginDiscoveringMediaLibraries;	// 0x36ce3209
+ (id)defaultMediaLibrary;	// 0x36ce1edd
+ (id)deviceMediaLibrary;	// 0x36ce21c5
+ (void)endDiscoveringMediaLibraries;	// 0x36ce3225
+ (void)initialize;	// 0x36ce1e8d
+ (BOOL)isLibraryServerDisabled;	// 0x36ce55dd
+ (id)libraryDataProviders;	// 0x36ce7fb1
+ (id)mediaLibraries;	// 0x36ce7d6d
+ (id)mediaLibraryWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x36ce7da5
+ (void)reloadDisplayValuesForLibraryDataProvider:(id)libraryDataProvider;	// 0x36ce8251
+ (void)reloadDynamicPropertiesForLibraryDataProvider:(id)libraryDataProvider;	// 0x36ce81f9
+ (void)reloadInvisiblePropertiesForLibraryDataProvider:(id)libraryDataProvider;	// 0x36ce8225
+ (void)reloadLibraryDataProvider:(id)provider;	// 0x36ce81cd
+ (void)removeLibraryDataProvider:(id)provider removalReason:(int)reason;	// 0x36ce80e1
+ (void)setDefaultMediaLibrary:(id)library;	// 0x36ce2055
+ (void)setLibraryServerDisabled:(BOOL)disabled;	// 0x36ce55e1
+ (void)setRunLoopForNotifications:(id)notifications;	// 0x36ce55e5
+ (void)syncGenerationDidChangeForLibraryDataProvider:(id)syncGeneration;	// 0x36ce82cd
+ (void)uniqueIdentifierDidChangeForLibraryDataProvider:(id)uniqueIdentifier;	// 0x36ce8321
- (id)init;	// 0x36ce2231
- (id)initWithCoder:(id)coder;	// 0x36ce290d
- (BOOL)_checkHasContent:(BOOL *)content determined:(BOOL *)determined mediaType:(int)type queryHasEntitiesBlock:(id)block;	// 0x36ce4409
- (BOOL)_checkHasContent:(BOOL *)content determined:(BOOL *)determined queryHasEntitiesBlock:(id)block;	// 0x36ce43e9
- (void)_clearCachedContentDataWithCompletionBlock:(id)completionBlock;	// 0x36ce2c7d
- (void)_clearCachedEntitiesIncludingResultSets:(BOOL)sets completionBlock:(id)block;	// 0x36ce2b35
- (void)_clearPendingDisconnection;	// 0x36ce7531
- (id)_collectionPersistentIdentifiersForQueryCriteria:(id)queryCriteria;	// 0x36ce7181
- (id)_collectionsForQueryCriteria:(id)queryCriteria;	// 0x36ce7589
- (void)_connectionProgressDisplayLinkCallback:(id)callback;	// 0x36ce79d1
- (unsigned)_countOfCollectionsForQueryCriteria:(id)queryCriteria;	// 0x36ce6c75
- (unsigned)_countOfItemsForQueryCriteria:(id)queryCriteria;	// 0x36ce6b19
- (void)_didReceiveMemoryWarning:(id)warning;	// 0x36ce3141
- (void)_displayValuesDidChangeNotification:(id)_displayValues;	// 0x36ce3155
- (void)_enabledMediaTypesDidChangeNotification:(id)_enabledMediaTypes;	// 0x36ce31bd
- (id)_getCachedValueForQueryCritiera:(id)queryCritiera valueCriteriaCache:(id)cache entitiesForCriteriaCache:(id)criteriaCache didLoadBlocksByQueryCriteria:(id)criteria valueLoadedFromEntitiesArrayBlock:(id)entitiesArrayBlock loadValueFromDataProviderBlock:(id)dataProviderBlock;	// 0x36ce5f5d
- (BOOL)_hasCollectionsForQueryCriteria:(id)queryCriteria;	// 0x36ce69b5
- (BOOL)_hasItemsForQueryCriteria:(id)queryCriteria;	// 0x36ce6851
- (id)_initWithLibraryDataProvider:(id)libraryDataProvider;	// 0x36ce7c11
- (id)_itemPersistentIdentifiersForQueryCriteria:(id)queryCriteria;	// 0x36ce6dd1
- (id)_itemsForQueryCriteria:(id)queryCriteria;	// 0x36ce5a8d
- (unsigned long long)_persistentIDForAssetURL:(id)assetURL;	// 0x36ce5679
- (void)_reloadLibraryForContentsChangeWithNotificationInfo:(id)notificationInfo;	// 0x36ce2dc9
- (void)_reloadLibraryForDynamicPropertyChangeWithNotificationInfo:(id)notificationInfo;	// 0x36ce2f55
- (void)_reloadLibraryForInvisiblePropertyChangeWithNotificationInfo:(id)notificationInfo;	// 0x36ce30e5
- (void)_removeConnectionAssertion:(id)assertion;	// 0x36ce7a91
- (id)_sanitizeQueryCriteriaForQueryCriteria:(id)queryCriteria;	// 0x36ce7545
- (void)_stopConnectionProgressDisplayLink;	// 0x36ce7b69
// declared property getter: - (id)_syncValidity;	// 0x36ce8675
- (id)addPlaylistWithName:(id)name;	// 0x36ce4bf9
- (id)addPlaylistWithName:(id)name activeGeniusPlaylist:(BOOL)playlist;	// 0x36ce4c0d
- (void)beginGeneratingLibraryChangeNotifications;	// 0x36ce3241
- (void)connectWithAuthenticationData:(id)authenticationData completionBlock:(id)block;	// 0x36ce5341
- (void)connectWithCompletionHandler:(id)completionHandler;	// 0x36ce3255
- (id)connectionAssertionWithIdentifier:(id)identifier;	// 0x36ce53c1
// converted property getter: - (float)connectionProgress;	// 0x36ce55ad
- (unsigned long long)currentEntityRevision;	// 0x36ce38f5
- (void)dealloc;	// 0x36ce2515
- (id)description;	// 0x36ce2719
- (void)disconnect;	// 0x36ce37d9
- (void)downloadAsset:(id)asset completionHandler:(id)handler;	// 0x36ce4f3d
- (void)downloadItem:(id)item completionHandler:(id)handler;	// 0x36ce4eb5
- (void)encodeWithCoder:(id)coder;	// 0x36ce2825
- (void)endGeneratingLibraryChangeNotifications;	// 0x36ce3879
- (void)enumerateEntityChangesAfterSyncAnchor:(id)anchor usingBlock:(id)block;	// 0x36ce8695
- (id)errorResolverForMediaItem:(id)mediaItem;	// 0x36d082ed
- (BOOL)hasAlbums;	// 0x36ce4049
- (BOOL)hasArtists;	// 0x36ce4031
// converted property getter: - (BOOL)hasAudibleAudioBooks;	// 0x36ce4571
- (BOOL)hasAudiobooks;	// 0x36ce4325
// converted property getter: - (BOOL)hasCompilations;	// 0x36ce4665
- (BOOL)hasComposers;	// 0x36ce42ad
- (BOOL)hasGeniusMixes;	// 0x36ce3f0d
- (BOOL)hasGenres;	// 0x36ce4295
- (BOOL)hasITunesUContent;	// 0x36ce46dd
- (BOOL)hasMedia;	// 0x36ce3e25
- (BOOL)hasMediaOfType:(int)type;	// 0x36ce3db5
// converted property getter: - (BOOL)hasMovieRentals;	// 0x36ce47d5
// converted property getter: - (BOOL)hasMovies;	// 0x36ce45e9
// converted property getter: - (BOOL)hasMusicVideos;	// 0x36ce44f5
- (BOOL)hasPlaylists;	// 0x36ce3fb9
- (BOOL)hasPodcasts;	// 0x36ce4125
- (BOOL)hasSongs;	// 0x36ce4061
// converted property getter: - (BOOL)hasTVShows;	// 0x36ce484d
- (BOOL)hasUniversalBookmarkableItems;	// 0x36ce41e9
- (BOOL)hasVideoITunesUContent;	// 0x36ce4759
// converted property getter: - (BOOL)hasVideoPodcasts;	// 0x36ce48c9
// converted property getter: - (BOOL)hasVideos;	// 0x36ce4479
- (unsigned)hash;	// 0x36ce27fd
- (BOOL)isArtworkIdenticalForItem:(id)item otherItem:(id)item2 compareRepresentativeItemArtwork:(BOOL)artwork missingAlwaysComparesEqual:(BOOL)equal;	// 0x36ce4e1d
- (BOOL)isEqual:(id)equal;	// 0x36ce278d
- (BOOL)isGeniusEnabled;	// 0x36ce5221
- (BOOL)isValidAssetURL:(id)url;	// 0x36ce55e9
- (BOOL)itemExistsWithPersistentID:(unsigned long long)persistentID;	// 0x36ce586d
- (id)itemWithPersistentID:(unsigned long long)persistentID;	// 0x36ce4945
- (id)itemWithPersistentID:(unsigned long long)persistentID verifyExistence:(BOOL)existence;	// 0x36ce4969
- (id)itemWithStoreID:(unsigned long long)storeID;	// 0x36ce49bd
// declared property getter: - (id)lastModifiedDate;	// 0x36ce3891
- (id)libraryDataProvider;	// 0x36ce7cf9
- (BOOL)libraryHasBeenModifiedWithToken:(id)token;	// 0x36ce3c75
- (id)modificationToken;	// 0x36ce3af9
- (id)name;	// 0x36ce3a99
- (id)newPlaylistWithPersistentID:(unsigned long long)persistentID;	// 0x36ce4a39
- (id)pathForAssetURL:(id)assetURL;	// 0x36ce5605
- (void)performReadTransactionWithBlock:(id)block;	// 0x36ce5549
- (BOOL)performTransactionWithBlock:(id)block;	// 0x36ce54ed
- (void)performUbiquitousDatabaseUpdateTransaction:(id)transaction;	// 0x36ce516d
- (BOOL)playlistExistsWithPersistentID:(unsigned long long)persistentID;	// 0x36ce597d
- (long long)playlistGeneration;	// 0x36ce398d
- (id)playlistWithPersistentID:(unsigned long long)persistentID;	// 0x36ce4bd1
- (void)populateLocationPropertiesOfItem:(id)item withPath:(id)path;	// 0x36ce4fc9
- (id)preferredAudioLanguages;	// 0x36ce5269
- (id)preferredSubtitleLanguages;	// 0x36ce52b1
// declared property getter: - (id)protectedContentSupportStorageURL;	// 0x36ce839d
// declared property getter: - (int)removalReason;	// 0x36ce3ab9
- (BOOL)removeItems:(id)items;	// 0x36ce4ced
- (BOOL)removePlaylist:(id)playlist;	// 0x36ce4db5
- (BOOL)requiresAuthentication;	// 0x36ce52f9
// declared property setter: - (void)setRemovalReason:(int)reason;	// 0x36ce3ac9
// converted property setter: - (void)setUbiquitousBookmarkDomainVersionAnchorToken:(id)token;	// 0x36ce5091
// converted property setter: - (void)setUbiquitousBookmarkEntityRevisionAnchor:(unsigned long long)anchor;	// 0x36ce5039
- (int)status;	// 0x36ce3a25
- (unsigned long long)syncGenerationID;	// 0x36ce3941
- (id)syncValidity;	// 0x36ce55bd
// converted property getter: - (id)ubiquitousBookmarkDomainVersionAnchorToken;	// 0x36ce5125
// converted property getter: - (unsigned long long)ubiquitousBookmarkEntityRevisionAnchor;	// 0x36ce50d9
- (id)uniqueIdentifier;	// 0x36ce3ad9
- (void)updateUbiquitousValuesForTrackWithKey:(id)key mediaPropertyValues:(id)values timestamp:(double)timestamp;	// 0x36ce51c5
- (BOOL)writable;	// 0x36ce39dd
@end

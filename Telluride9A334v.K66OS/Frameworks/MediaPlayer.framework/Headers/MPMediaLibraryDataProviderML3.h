/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library
#import "MPMediaLibraryDataProviderPrivate.h"

@class NSArray, NSString, NSSet, ML3MusicLibrary;

@interface MPMediaLibraryDataProviderML3 : NSObject <MPMediaLibraryDataProviderPrivate> {
	dispatch_queue_s *_backgroundTaskQueue;	// 4 = 0x4
	unsigned _backgroundTask;	// 8 = 0x8
	unsigned _backgroundTaskCount;	// 12 = 0xc
	ML3MusicLibrary *_library;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) BOOL isGeniusEnabled;
@property(retain, nonatomic) ML3MusicLibrary *library;	// G=0x34e590a5; S=0x34e5388d; @synthesize=_library
@property(readonly, assign, nonatomic) NSString *name;	// G=0x34e539a5; 
@property(readonly, assign, nonatomic) NSArray *preferredAudioLanguages;	// G=0x34e55f21; 
@property(readonly, assign, nonatomic) NSArray *preferredSubtitleLanguages;	// G=0x34e55f41; 
@property(readonly, assign, nonatomic) NSSet *propertiesToCache;
@property(readonly, assign, nonatomic) BOOL requiresAuthentication;
@property(readonly, assign, nonatomic) NSString *syncValidity;	// G=0x34e55f71; 
@property(readonly, assign, nonatomic) NSString *uniqueIdentifier;	// G=0x34e539d9; 
+ (id)_unadjustedValueForMPProperty:(id)mpproperty withDefaultValue:(id)defaultValue;	// 0x34e57b5d
- (id)initWithLibrary:(id)library;	// 0x34e5360d
- (void)_displayValuesDidChange:(id)_displayValues;	// 0x34e57f41
- (void)_dynamicPropertiesDidChange:(id)_dynamicProperties;	// 0x34e57f21
- (void)_libraryContentsDidChange:(id)_libraryContents;	// 0x34e57f01
- (void)_loadEntitiesUsingFetchRequest:(id)request entityQuery:(id)query writeBlock:(id)block;	// 0x34e57f81
- (void)_loadProperties:(id)properties ofEntityWithIdentifier:(long long)identifier ML3EntityClass:(Class)aClass completionBlock:(id)block;	// 0x34e58add
- (void)_loadValueForAggregateFunction:(id)aggregateFunction entityClass:(Class)aClass property:(id)property query:(id)query completionBlock:(id)block;	// 0x34e58d19
- (BOOL)_removeEntitiesWithIdentifiers:(long long *)identifiers count:(unsigned)count entityClass:(Class)aClass;	// 0x34e58e85
- (void)_syncGenerationDidChange:(id)_syncGeneration;	// 0x34e57f61
- (void)addItemWithIdentifier:(long long)identifier toPlaylistWithIdentifier:(long long)identifier2 completionBlock:(id)block;	// 0x34e557e1
- (void)addItemsWithIdentifiers:(long long *)identifiers count:(unsigned)count toPlaylistWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x34e559b9
- (long long)addPlaylistWithValuesForProperties:(id)properties;	// 0x34e552d1
- (id)adjustedValueForMPProperty:(id)mpproperty ofEntity:(id)entity withDefaultValue:(id)defaultValue;	// 0x34e566f5
- (void)dealloc;	// 0x34e53771
- (void)downloadItemWithIdentifier:(long long)identifier completionHandler:(id)handler;	// 0x34e5620d
- (void)enumerateCollectionIdentifiersForQueryCriteria:(id)queryCriteria cancelBlock:(id)block usingBlock:(id)block3;	// 0x34e54319
- (void)enumerateEntityChangesAfterSyncAnchor:(id)anchor itemBlock:(id)block collectionBlock:(id)block3;	// 0x34e55fc9
- (void)enumerateItemIdentifiersForQueryCriteria:(id)queryCriteria cancelBlock:(id)block usingBlock:(id)block3;	// 0x34e54275
- (BOOL)hasGeniusMixes;	// 0x34e53ec1
- (BOOL)hasMediaOfType:(int)type;	// 0x34e53c6d
- (BOOL)itemExistsWithPersistentID:(unsigned long long)persistentID;	// 0x34e53fc5
- (id)lastModifiedDate;	// 0x34e539e5
// declared property getter: - (id)library;	// 0x34e590a5
- (void)loadBestArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x34e55f61
- (void)loadBestTimedArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime completionBlock:(id)block;	// 0x34e55f69
- (void)loadCollectionsUsingFetchRequest:(id)request;	// 0x34e549e9
- (void)loadItemsUsingFetchRequest:(id)request;	// 0x34e548d1
- (void)loadProperties:(id)properties ofCollectionWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x34e54c05
- (void)loadProperties:(id)properties ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x34e54bb9
- (void)loadQueryCriteria:(id)criteria hasCollectionsWithCompletionBlock:(id)completionBlock;	// 0x34e54181
- (void)loadQueryCriteria:(id)criteria hasItemsWithCompletionBlock:(id)completionBlock;	// 0x34e5408d
- (void)loadValueForAggregateFunction:(id)aggregateFunction onCollectionsForProperty:(id)property queryCriteria:(id)criteria completionBlock:(id)block;	// 0x34e54871
- (void)loadValueForAggregateFunction:(id)aggregateFunction onItemsForProperty:(id)property queryCriteria:(id)criteria completionBlock:(id)block;	// 0x34e547fd
- (void)moveItemFromIndex:(unsigned)index toIndex:(unsigned)index2 inPlaylistWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x34e55d59
// declared property getter: - (id)name;	// 0x34e539a5
- (void)performBackgroundTaskWithBlock:(id)block;	// 0x34e56295
- (BOOL)performTransactionWithBlock:(id)block;	// 0x34e54dbd
- (BOOL)playlistExistsWithPersistentID:(unsigned long long)persistentID;	// 0x34e54029
- (long long)playlistGeneration;	// 0x34e53ad5
// declared property getter: - (id)preferredAudioLanguages;	// 0x34e55f21
// declared property getter: - (id)preferredSubtitleLanguages;	// 0x34e55f41
- (void)removeAllItemsInPlaylistWithIdentifier:(long long)identifier;	// 0x34e55c95
- (void)removeItemsWithIdentifiers:(long long *)identifiers atFilteredIndexes:(id)filteredIndexes inPlaylistWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x34e55b81
- (BOOL)removeItemsWithIdentifiers:(long long *)identifiers count:(unsigned)count;	// 0x34e5579d
- (BOOL)removePlaylistWithIdentifier:(long long)identifier;	// 0x34e5574d
// declared property setter: - (void)setLibrary:(id)library;	// 0x34e5388d
- (BOOL)setValue:(id)value forProperty:(id)property ofItemWithIdentifier:(long long)identifier;	// 0x34e54f2d
- (BOOL)setValue:(id)value forProperty:(id)property ofPlaylistWithIdentifier:(long long)identifier;	// 0x34e55241
- (unsigned long long)syncGenerationID;	// 0x34e53ab5
// declared property getter: - (id)syncValidity;	// 0x34e55f71
- (double)timestampForAppliedUbiquitousBookmarkKey:(id)appliedUbiquitousBookmarkKey;	// 0x34e56275
// declared property getter: - (id)uniqueIdentifier;	// 0x34e539d9
- (void)updateUbiquitousBookmarksWithKey:(id)key bookmarkMediaValue:(id)value timestamp:(double)timestamp;	// 0x34e56211
- (BOOL)writable;	// 0x34e53c49
@end


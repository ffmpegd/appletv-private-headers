/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Entity.h"


@interface ML3Track : ML3Entity {
}
+ (id)TVShowEpisodesDefaultOrderingProperties;	// 0x33efd181
+ (BOOL)_clearLocationFromLibrary:(id)library persistentIDs:(const long long *)ids count:(unsigned)count;	// 0x33effa25
+ (BOOL)_deleteAssetAtPath:(id)path;	// 0x33effda1
+ (void)_enumeratePathsToDeleteFromLibrary:(id)library persistentIDs:(const long long *)ids count:(unsigned)count usingBlock:(id)block;	// 0x33effe19
+ (id)_flattenedChapterDataWithImportChapters:(id)importChapters library:(id)library trackPersistentID:(long long)anId;	// 0x33f1ed25
+ (id)_normalizedImportChapters:(id)chapters trackPersistentID:(long long)anId;	// 0x33f1eb8d
+ (id)albumAllArtistsDefaultOrderingProperties;	// 0x33ed4831
+ (id)albumAndArtistDefaultOrderingProperties;	// 0x33efd151
+ (id)albumsDefaultOrderingProperties;	// 0x33ee0ee1
+ (id)allProperties;	// 0x33efd1ed
+ (id)artistAllAlbumsDefaultOrderingProperties;	// 0x33efd141
+ (id)artistsDefaultOrderingProperties;	// 0x33ee1381
+ (id)collectionClassesToUpdateBeforeDelete;	// 0x33efe10d
+ (id)composersDefaultOrderingProperties;	// 0x33efd161
+ (id)containerQueryWithContainer:(id)container;	// 0x33f14a4d
+ (id)containerQueryWithContainer:(id)container predicate:(id)predicate;	// 0x33f14ab5
+ (id)containerQueryWithContainer:(id)container predicate:(id)predicate orderingProperties:(id)properties;	// 0x33f14b2d
+ (id)containerQueryWithContainer:(id)container predicate:(id)predicate orderingTerms:(id)terms;	// 0x33f14bb1
+ (id)databaseTable;	// 0x33ecdd35
+ (id)defaultOrderingProperties;	// 0x33ee0ed1
+ (BOOL)deleteFromLibrary:(id)library deletionType:(int)type persistentIDs:(const long long *)ids count:(unsigned)count;	// 0x33efd30d
+ (id)extraTablesToDelete;	// 0x33efd1fd
+ (id)extraTablesToInsert;	// 0x33efd20d
+ (id)flattenedChapterDataFromSyncInfoDictionaries:(id)syncInfoDictionaries trackPersistentID:(long long)anId;	// 0x33f1f4b9
+ (id)foreignColumnForProperty:(id)property;	// 0x33eddb95
+ (id)foreignDatabaseTableForProperty:(id)property;	// 0x33eddb45
+ (id)genresDefaultOrderingProperties;	// 0x33efd131
+ (id)importChaptersByParsingAsset:(id)asset;	// 0x33f1f879
+ (void)initialize;	// 0x33ec8d91
+ (id)joinClausesForProperty:(id)property;	// 0x33ecdbc1
+ (BOOL)libraryContentsChangeForProperty:(id)property;	// 0x33ed4c2d
+ (BOOL)libraryDynamicChangeForProperty:(id)property;	// 0x33eddb19
+ (id)orderingTermsForITTGTrackOrder:(unsigned long)ittgtrackOrder descending:(BOOL)descending;	// 0x33f0f8e1
+ (id)persistentIDColumnForTable:(id)table;	// 0x33ede351
+ (id)podcastsDefaultOrderingProperties;	// 0x33ee3d01
+ (id)podcastsEpisodesDefaultOrderingProperties;	// 0x33efd171
+ (void)populateSortOrdersOfPropertyValues:(id)propertyValues inLibrary:(id)library cachedNameOrders:(id)orders;	// 0x33efd9f1
+ (id)predisambiguatedProperties;	// 0x33ecdbad
+ (BOOL)registerBookmarkMetadataIdentifierFunctionOnConnection:(id)connection;	// 0x33ecdd4d
+ (int)revisionTrackingCode;	// 0x33edea95
+ (id)sectionPropertyForProperty:(id)property;	// 0x33ed7369
+ (id)subselectPropertyForProperty:(id)property;	// 0x33efd195
+ (id)subselectStatementForProperty:(id)property;	// 0x33ed7661
+ (BOOL)trackValueAreInTheCloud:(id)theCloud;	// 0x33efe9c5
+ (BOOL)trackWithPersistentID:(long long)persistentID existsInLibrary:(id)library;	// 0x33efd875
+ (BOOL)unlinkRedownloadableAssetsFromLibrary:(id)library persistentIDs:(const long long *)ids count:(unsigned)count;	// 0x33efe1bd
+ (BOOL)unlinkRedownloadableAssetsFromLibrary:(id)library persistentIDs:(const long long *)ids count:(unsigned)count deletedFileSize:(long long *)size;	// 0x33efe1e1
+ (id)unsettableProperties;	// 0x33eddb05
- (id)initWithDictionary:(id)dictionary inLibrary:(id)library cachedNameOrders:(id)orders;	// 0x33efdfd1
- (id)absoluteFilePath;	// 0x33efd25d
- (id)artworkCacheIDAtPlaybackTime:(double)playbackTime;	// 0x33eda5c9
- (id)chapterTOC;	// 0x33eda509
- (void)didChangeValueForProperties:(const id *)properties count:(unsigned)count;	// 0x33edeb19
- (BOOL)populateArtworkCacheWithArtworkData:(id)artworkData;	// 0x33f1ea0d
- (void)populateChapterDataWithImportChapters:(id)importChapters;	// 0x33f1ff79
- (void)populateLocationPropertiesWithPath:(id)path;	// 0x33f2013d
- (id)rawIntegrity;	// 0x33efed01
- (void)updateCollectionCloudStatus;	// 0x33eff049
- (BOOL)updateIntegrity;	// 0x33efeacd
- (void)updateUbiquitousBookmarkTimestamp;	// 0x33eff87d
@end

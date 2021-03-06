/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library

@class ML3DatabaseMetadata, ML3NondurableWriteSet, ML3UbiquitousDatabase, NSString, NSMutableArray, ML3Container, NSArray, ML3MusicLibrary_SQLiteDatabaseContext;

@interface ML3MusicLibrary : NSObject {
@private
	ML3MusicLibrary_SQLiteDatabaseContext *_mainDatabaseContext;	// 4 = 0x4
	ML3MusicLibrary_SQLiteDatabaseContext *_backgroundDatabaseContext;	// 8 = 0x8
	ML3UbiquitousDatabase *_ubiquitousDatabase;	// 12 = 0xc
	dispatch_queue_s *_backgroundQueue;	// 16 = 0x10
	opaque_pthread_t *_backgroundQueueOwner;	// 20 = 0x14
	NSString *_path;	// 24 = 0x18
	NSMutableArray *_pendingNotifyPostNames;	// 28 = 0x1c
	NSString *_notifyName;	// 32 = 0x20
	int _notifyToken;	// 36 = 0x24
	NSString *_nonContentsNotifyName;	// 40 = 0x28
	int _nonContentsNotifyToken;	// 44 = 0x2c
	NSString *_displayValuesNotifyName;	// 48 = 0x30
	int _displayValuesNotifyToken;	// 52 = 0x34
	NSString *_syncGenerationNotifyName;	// 56 = 0x38
	int _syncGenerationNotifyToken;	// 60 = 0x3c
	BOOL _enableWrites;	// 64 = 0x40
	BOOL _requiresProcessAssertion;	// 65 = 0x41
	int _backupDisabledCount;	// 68 = 0x44
	BOOL _backupNeeded;	// 72 = 0x48
	BOOL _hasEverConnectedToDatabase;	// 73 = 0x49
	id _mcSettingsObserver;	// 76 = 0x4c
	dispatch_queue_s *_artworkQueue;	// 80 = 0x50
	int _artworkBlobFD;	// 84 = 0x54
	dispatch_queue_s *_nondurableConcurrentQueue;	// 88 = 0x58
	ML3NondurableWriteSet *_nondurableWriteSet;	// 92 = 0x5c
}
@property(readonly, assign) long long autoFilledTracksTotalSize;	// G=0x364d0679; 
@property(readonly, assign) long long currentRevision;	// G=0x364d02f1; 
@property(readonly, assign) ML3DatabaseMetadata *databaseInfo;	// G=0x364be371; 
@property(readonly, assign, nonatomic) BOOL hasEverConnectedToDatabase;	// G=0x364b8e01; @synthesize=_hasEverConnectedToDatabase
@property(readonly, assign) NSArray *localizedSectionIndexTitles;	// G=0x364b6df1; 
@property(readonly, retain) ML3MusicLibrary_SQLiteDatabaseContext *mainDatabaseContext;	// G=0x364b1c19; converted property
@property(readonly, assign) BOOL mediaRestrictionEnabled;	// G=0x364b6865; 
@property(readonly, assign, nonatomic, getter=isNondurableWritingActive) BOOL nondurableWritingActive;	// G=0x364bc399; 
@property(readonly, assign) NSString *path;	// G=0x364b0779; @synthesize=_path
@property(readonly, assign) long long persistentID;	// G=0x364d0185; 
@property(readonly, assign) NSArray *preferredAudioTracks;	// G=0x364be315; 
@property(readonly, assign) NSArray *preferredSubtitleTracks;	// G=0x364be48d; 
@property(readonly, assign) ML3Container *purchasedTracksPlaylist;	// G=0x364ce3a9; 
@property(readonly, assign) BOOL requiresPostProcessing;	// G=0x364b078d; 
@property(assign) long long syncGenerationID;	// G=0x364b899d; S=0x364d045d; 
@property(readonly, retain) ML3UbiquitousDatabase *ubiquitousDatabase;	// G=0x364b36ed; converted property
@property(readonly, assign, nonatomic) BOOL writable;	// G=0x364afa31; 
+ (id)_autoFillTrackPredicate;	// 0x364d05e1
+ (sqlite3 *)_openedDatabaseHandleForPath:(id)path enableWrites:(BOOL)writes forLibrary:(id)library;	// 0x364b1cc9
+ (void)_stepStatement:(sqlite3_stmt *)statement hasRow:(BOOL *)row didFinish:(BOOL *)finish;	// 0x364b3101
+ (id)allSchemaSQL;	// 0x364ed451
+ (MLArtworkFormatSpec)artworkFormatSpecForArtworkFormatID:(unsigned)artworkFormatID;	// 0x364ba285
+ (BOOL)buildDatabaseTablesUsingHandle:(sqlite3 *)handle usingTransaction:(BOOL)transaction;	// 0x364ed7c5
+ (void)closeDatabaseHandle:(sqlite3 *)handle;	// 0x364ccc79
+ (BOOL)createIndexesUsingHandle:(sqlite3 *)handle;	// 0x364ef129
+ (int)currentUserVersion;	// 0x364b351d
+ (BOOL)dropIndexesUsingHandle:(sqlite3 *)handle;	// 0x364ef109
+ (BOOL)dropIndexesUsingHandle:(sqlite3 *)handle tableNames:(const char *)names;	// 0x364eef09
+ (void)enumerateSortMapTablesUsingBlock:(id)block;	// 0x364cfc49
+ (BOOL)executeSQL:(id)sql usingHandle:(sqlite3 *)handle;	// 0x364b6d01
+ (BOOL)executeSQL:(id)sql usingHandle:(sqlite3 *)handle waitIfBusy:(BOOL)busy;	// 0x364b6d25
+ (BOOL)importationEnabled;	// 0x364cbfc9
+ (id)indexSchemaSQL;	// 0x364ed6a1
+ (void)initialize;	// 0x364af229
+ (id)itemIndexSchemaSQL;	// 0x364ed629
+ (id)itemSchemaSQL;	// 0x364ed445
+ (id)localizedSectionHeaderForSectionHeader:(id)sectionHeader;	// 0x364b88bd
+ (id)localizedSectionIndexTitleForSectionHeader:(id)sectionHeader;	// 0x364b7e55
+ (id)mainDatabasePath;	// 0x364af99d
+ (BOOL)migrateToCurrentUserVersionUsingHandle:(sqlite3 *)currentUserVersionUsingHandle;	// 0x364edf25
+ (sqlite3 *)openedDatabaseHandleForPath:(id)path enableWrites:(BOOL)writes;	// 0x364cc6e5
+ (BOOL)orderingLanguageMatchesSystemUsingHandle:(sqlite3 *)handle;	// 0x364b3529
+ (unsigned)readableArtworkFormatIDForArtworkFormatID:(unsigned)artworkFormatID;	// 0x364d1161
+ (BOOL)schemaExactlyMatchesSystemUsingHandle:(sqlite3 *)handle;	// 0x364edbe5
+ (id)sectionIndexTitleForSectionHeader:(id)sectionHeader;	// 0x364b7aed
+ (id)sectionIndexTitles;	// 0x364b7aa5
+ (void)setImportationEnabled:(BOOL)enabled;	// 0x364af4f5
+ (id)sharedLibrary;	// 0x364af5f1
+ (id)sortMapSchemaSQL;	// 0x364ed439
+ (BOOL)statementDidFinishAfterStepping:(sqlite3_stmt *)statement;	// 0x364bd639
+ (BOOL)statementHasRowAfterStepping:(sqlite3_stmt *)stepping;	// 0x364b30d9
+ (id)storeLinkSchemaSQL;	// 0x364ed42d
+ (id)systemCurrentLanguage;	// 0x364b3651
+ (BOOL)updateSortMapOnHandle:(sqlite3 *)handle usingTransaction:(BOOL)transaction;	// 0x364f0f89
+ (BOOL)userVersionMatchesSystemUsingHandle:(sqlite3 *)handle;	// 0x364b3399
+ (int)userVersionUsingHandle:(sqlite3 *)handle;	// 0x364b33f9
- (id)initWithPath:(id)path enableWrites:(BOOL)writes;	// 0x364af61d
- (void)_accessAccountCacheDBForSQL:(id)sql usingBlock:(id)block;	// 0x364d30dd
- (void)_accessArtworkBlobFDWithBlock:(id)block;	// 0x364be2bd
- (void)_accessDatabaseContextUsingBlock:(id)block;	// 0x364b1b9d
- (BOOL)_commitNondurableWrites;	// 0x364bce35
- (void)_delayableNotifyPost:(id)post;	// 0x364bdf59
- (void)_dispatchBackgroundAsynchronouslyUsingBlock:(id)block;	// 0x364cd3c1
- (void)_dispatchBackgroundSynchronouslyUsingBlock:(id)block;	// 0x364b3289
- (BOOL)_insertImageBytes:(const void *)bytes length:(unsigned long)length forCacheID:(id)cacheID formatID:(unsigned)anId imageSubRect:(CGRect)rect;	// 0x364d132d
- (id)_insertStringsIntoSortMapOrFail:(id)fail;	// 0x364ef8d1
- (BOOL)_mustProcessLanguageChange;	// 0x364cfd69
- (void)_onBackgroundQueuePerformBlock:(id)block;	// 0x364b32fd
- (void)_postChangeNotificationAndScheduleFlushLocalOnly:(BOOL)only;	// 0x364bde55
- (void)_postDisplayValuesChangeNotificationLocalOnly:(BOOL)only;	// 0x364cfbe1
- (void)_postNonContentsChangeNotificationAndScheduleFlushLocalOnly:(BOOL)only;	// 0x364bef21
- (void)_scheduleCommitNondurableWritesAfterTimeInterval:(double)interval;	// 0x364d4249
- (void)accessDatabaseUsingBlock:(id)block;	// 0x364b3235
- (void)accessSortKeyBuilder:(id)builder;	// 0x364b742d
- (long long)addStringToSortMap:(id)sortMap;	// 0x364cfde9
- (id)albumArtistForEffectiveAlbumArtistName:(id)effectiveAlbumArtistName;	// 0x364e466d
- (id)albumForAlbumArtistPersistentID:(long long)albumArtistPersistentID albumName:(id)name feedURL:(id)url seasonNumber:(id)number compilation:(BOOL)compilation;	// 0x364d9a05
- (id)appleIDForDSID:(unsigned long long)dsid;	// 0x364d3361
- (void)applyUbiquitousBookmarksToTrack:(id)track;	// 0x364d3fd1
- (id)artistForArtistName:(id)artistName seriesName:(id)name;	// 0x364d92a5
// declared property getter: - (long long)autoFilledTracksTotalSize;	// 0x364d0679
- (id)backgroundQueue_backgroundDatabaseContext;	// 0x364b3335
- (BOOL)buildDatabaseTables;	// 0x364eda6d
- (BOOL)coerceValidDatabase;	// 0x364ef501
- (BOOL)compactArtwork;	// 0x364d2871
- (id)composerForComposerName:(id)composerName;	// 0x364e3e35
- (BOOL)createIndexes;	// 0x364ef365
// declared property getter: - (long long)currentRevision;	// 0x364d02f1
// declared property getter: - (id)databaseInfo;	// 0x364be371
- (void)dealloc;	// 0x364cc51d
- (BOOL)deleteAllArtwork;	// 0x364d230d
- (BOOL)deleteAndRecreateDatabaseUsingHandle:(sqlite3 **)handle;	// 0x364eec0d
- (BOOL)deleteArtworkForCacheID:(id)cacheID;	// 0x364d2571
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)leastTotalSize;	// 0x364d0841
- (BOOL)dropItemIndexes;	// 0x364ef1e5
- (void)enumeratePersistentIDsAfterRevision:(long long)revision usingBlock:(id)block;	// 0x364d04c1
- (BOOL)executeSQL:(id)sql;	// 0x364cccbd
- (id)genreForGenre:(id)genre;	// 0x364dd29d
- (id)groupingKeyForString:(id)string;	// 0x364cd68d
- (BOOL)hasArtworkForCacheID:(id)cacheID;	// 0x364d11ad
// declared property getter: - (BOOL)hasEverConnectedToDatabase;	// 0x364b8e01
- (void)incrementalVaccuumIfAppropriate;	// 0x364ccf75
- (BOOL)insertArtworkWithImageData:(id)imageData forCacheID:(id)cacheID;	// 0x364d1c79
- (long long)insertStringIntoSortMapNoTransaction:(id)transaction;	// 0x364bd1c1
- (id)insertStringsIntoSortMap:(id)map;	// 0x364f097d
// declared property getter: - (BOOL)isNondurableWritingActive;	// 0x364bc399
- (BOOL)isReadable;	// 0x364cfde5
- (void)loadArtworkForCacheID:(id)cacheID formatID:(unsigned)anId completionHandler:(id)handler;	// 0x364be0b5
- (id)localizedSectionHeaderForSectionIndex:(unsigned)sectionIndex;	// 0x364b72a5
// declared property getter: - (id)localizedSectionIndexTitles;	// 0x364b6df1
- (id)locationKindForKind:(id)kind;	// 0x364f35cd
// converted property getter: - (id)mainDatabaseContext;	// 0x364b1c19
// declared property getter: - (BOOL)mediaRestrictionEnabled;	// 0x364b6865
- (void)migratePresignedValidity;	// 0x364cc2d9
- (XXStruct_Cy4r_A)nameOrderForString:(id)string;	// 0x364bc241
- (id)nondurableWriteSetForReading;	// 0x364b2fad
- (id)nondurableWriteSetForWriting;	// 0x364bc7f9
- (void)notifyContentsDidChange;	// 0x364bde01
- (void)notifyDisplayValuesPropertyDidChange;	// 0x364ce2fd
- (void)notifyNonContentsPropertyDidChange;	// 0x364beecd
- (sqlite3 *)openedDatabaseHandle;	// 0x364b1c7d
// declared property getter: - (id)path;	// 0x364b0779
- (void)performTransactionAllowingWrites:(BOOL)writes withBlock:(id)block;	// 0x364b6a15
- (void)performTransactionKind:(int)kind waitIfBusy:(BOOL)busy withBlock:(id)block;	// 0x364b6a41
- (void)performTransactionKind:(int)kind withBlock:(id)block;	// 0x364cda3d
- (void)performTransactionWithBlock:(id)block;	// 0x364bd9f9
// declared property getter: - (long long)persistentID;	// 0x364d0185
- (BOOL)populateArtworkCacheWithArtworkData:(id)artworkData trackValues:(id)values;	// 0x364ea21d
- (BOOL)populateStaticItemsOfDynamicContainers;	// 0x364cce21
// declared property getter: - (id)preferredAudioTracks;	// 0x364be315
// declared property getter: - (id)preferredSubtitleTracks;	// 0x364be48d
- (void)prepareStatementForSQL:(id)sql cache:(BOOL)cache usingBlock:(id)block;	// 0x364b1aed
- (void)prepareStatementForSQL:(id)sql usingBlock:(id)block;	// 0x364b1acd
- (void)prepareStatementForSQLPrefix:(id)sqlprefix inPersistentIDs:(const long long *)persistentIDs count:(unsigned)count usingBlock:(id)block;	// 0x364cbb89
// declared property getter: - (id)purchasedTracksPlaylist;	// 0x364ce3a9
- (void)reconnectBackgroundDatabaseContext;	// 0x364cd319
- (void)reconnectMainDatabaseContext;	// 0x364cd2c9
- (void)reconnectToDatabase;	// 0x364cd471
- (void)removeOrphanedTracks;	// 0x364d4391
// declared property getter: - (BOOL)requiresPostProcessing;	// 0x364b078d
- (BOOL)resetAllContents;	// 0x364f1955
- (void)savePlaylists;	// 0x364cf021
- (void)savePlaylistsSinceRevision:(long long)revision withGrappaID:(unsigned)grappaID;	// 0x364cf045
- (void)saveTrackMetadata;	// 0x364ce821
- (void)saveTrackMetadataSinceRevision:(long long)revision withGrappaID:(unsigned)grappaID;	// 0x364ce845
- (unsigned)sectionIndexTitleIndexForSectionIndex:(unsigned)sectionIndex;	// 0x364b74f9
- (BOOL)setAppleID:(id)anId forDSID:(unsigned long long)dsid;	// 0x364d31d1
// declared property setter: - (void)setSyncGenerationID:(long long)anId;	// 0x364d045d
- (BOOL)setValue:(id)value forDatabaseProperty:(id)databaseProperty;	// 0x364d3581
// declared property getter: - (long long)syncGenerationID;	// 0x364b899d
- (double)timestampForAppliedUbiquitousBookmarkKey:(id)appliedUbiquitousBookmarkKey;	// 0x364d3721
// converted property getter: - (id)ubiquitousDatabase;	// 0x364b36ed
- (BOOL)updateActivePlaylistNamesForCurrentLanguage;	// 0x364e4be1
- (void)updateOrderingLanguagesForCurrentLanguage;	// 0x364e4d29
- (BOOL)updateSortMap;	// 0x364cffcd
- (void)updateTrackIntegrity;	// 0x364cc501
- (void)updateUbiquitousBookmarksFromTrack:(id)track;	// 0x364d3e85
- (void)updateUbiquitousBookmarksWithKey:(id)key bookmarkTime:(id)time timestamp:(double)timestamp;	// 0x364d3955
- (id)valueForDatabaseProperty:(id)databaseProperty;	// 0x364b89d1
// declared property getter: - (BOOL)writable;	// 0x364afa31
@end


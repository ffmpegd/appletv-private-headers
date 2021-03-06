/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3SqliteDatabase.h"
#import "MusicLibrary-Structs.h"
#import "ML3SqliteDatabaseSubclass.h"

@class NSString;

@interface ML3UbiquitousDatabase : ML3SqliteDatabase <ML3SqliteDatabaseSubclass> {
	BOOL _needsToPurgeOldEntries;	// 29 = 0x1d
	BOOL _isInTransaction;	// 30 = 0x1e
}
@property(copy, nonatomic) NSString *ubiquitousBookmarkDomainVersionAnchorToken;	// G=0x33f2aca5; S=0x33f2ac89; 
@property(assign, nonatomic) unsigned long long ubiquitousBookmarkEntityRevisionAnchor;	// G=0x33f2ac41; S=0x33f2abed; 
+ (id)allSchemaSQL;	// 0x33f2a6f5
+ (int)currentUserVersion;	// 0x33ed1219
+ (id)databasePath;	// 0x33ed0a15
+ (BOOL)migrateFromVersion:(int)version outUserVersion:(int *)version2 usingHandle:(sqlite3 *)handle;	// 0x33f2a7e1
- (BOOL)_setValue:(id)value forDatabaseProperty:(id)databaseProperty;	// 0x33f2a9e1
- (void)_updateUbiquitousBookmarkMetadataWithMetadataIdentifier:(id)metadataIdentifier propertyValues:(id)values timestamp:(double)timestamp;	// 0x33f2acc1
- (id)_valueForDatabaseProperty:(id)databaseProperty;	// 0x33f2a7e5
- (void)applyUbiqiutousBookmarkMetadataToTrack:(id)track;	// 0x33f2b909
- (void)didCommitInDatabaseContext:(id)databaseContext;	// 0x33f2b181
- (void)dumpUbiquitousMetadata;	// 0x33f2bd3d
- (void)insertUbiquitousBookmarkMetadataWithMetadataIdentifier:(id)metadataIdentifier propertyValues:(id)values timestamp:(double)timestamp;	// 0x33f2b451
- (void)insertUbiquitousBookmarkMetadataWithValuesFromTrack:(id)track;	// 0x33f2b4b1
- (void)performTransactionWithBlock:(id)block;	// 0x33f2b13d
- (void)purgeOldEntriesIfNecessary;	// 0x33f2b1d1
- (void)removeUbiquitousBookmarkMetadataForTrack:(id)track;	// 0x33f2b8a9
- (void)resetUbiquitousMetadata;	// 0x33f2bc95
// declared property setter: - (void)setUbiquitousBookmarkDomainVersionAnchorToken:(id)token;	// 0x33f2ac89
// declared property setter: - (void)setUbiquitousBookmarkEntityRevisionAnchor:(unsigned long long)anchor;	// 0x33f2abed
// declared property getter: - (id)ubiquitousBookmarkDomainVersionAnchorToken;	// 0x33f2aca5
// declared property getter: - (unsigned long long)ubiquitousBookmarkEntityRevisionAnchor;	// 0x33f2ac41
@end


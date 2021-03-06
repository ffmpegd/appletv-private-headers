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
@property(copy, nonatomic) NSString *ubiquitousBookmarkDomainVersionAnchorToken;	// G=0x3486c0a5; S=0x3486c089; 
@property(assign, nonatomic) unsigned long long ubiquitousBookmarkEntityRevisionAnchor;	// G=0x3486c041; S=0x3486bfed; 
+ (id)allSchemaSQL;	// 0x3486baf5
+ (int)currentUserVersion;	// 0x348126d9
+ (id)databasePath;	// 0x34811ed5
+ (BOOL)migrateFromVersion:(int)version outUserVersion:(int *)version2 usingHandle:(sqlite3 *)handle;	// 0x3486bbe1
- (BOOL)_setValue:(id)value forDatabaseProperty:(id)databaseProperty;	// 0x3486bde1
- (void)_updateUbiquitousBookmarkMetadataWithMetadataIdentifier:(id)metadataIdentifier propertyValues:(id)values timestamp:(double)timestamp;	// 0x3486c0c1
- (id)_valueForDatabaseProperty:(id)databaseProperty;	// 0x3486bbe5
- (void)applyUbiqiutousBookmarkMetadataToTrack:(id)track;	// 0x3486cd09
- (void)didCommitInDatabaseContext:(id)databaseContext;	// 0x3486c581
- (void)dumpUbiquitousMetadata;	// 0x3486d13d
- (void)insertUbiquitousBookmarkMetadataWithMetadataIdentifier:(id)metadataIdentifier propertyValues:(id)values timestamp:(double)timestamp;	// 0x3486c851
- (void)insertUbiquitousBookmarkMetadataWithValuesFromTrack:(id)track;	// 0x3486c8b1
- (void)performTransactionWithBlock:(id)block;	// 0x3486c53d
- (void)purgeOldEntriesIfNecessary;	// 0x3486c5d1
- (void)removeUbiquitousBookmarkMetadataForTrack:(id)track;	// 0x3486cca9
- (void)resetUbiquitousMetadata;	// 0x3486d095
// declared property setter: - (void)setUbiquitousBookmarkDomainVersionAnchorToken:(id)token;	// 0x3486c089
// declared property setter: - (void)setUbiquitousBookmarkEntityRevisionAnchor:(unsigned long long)anchor;	// 0x3486bfed
// declared property getter: - (id)ubiquitousBookmarkDomainVersionAnchorToken;	// 0x3486c0a5
// declared property getter: - (unsigned long long)ubiquitousBookmarkEntityRevisionAnchor;	// 0x3486c041
@end


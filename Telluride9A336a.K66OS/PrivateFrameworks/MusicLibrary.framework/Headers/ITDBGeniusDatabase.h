/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"

@class ML3SqliteDatabase;

__attribute__((visibility("hidden")))
@interface ITDBGeniusDatabase : NSObject {
@private
	ML3SqliteDatabase *_db;	// 4 = 0x4
	double _connectionFailedTime;	// 8 = 0x8
	CFDictionaryRef _statementCache;	// 16 = 0x10
	BOOL _isInTransaction;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL isInTransaction;	// G=0x30e06aa1; S=0x30e06ab1; @synthesize=_isInTransaction
+ (id)fallbackGeniusDatabaseFilePath;	// 0x30e05955
+ (id)geniusDatabaseFilePath;	// 0x30df9f35
+ (id)sharedGeniusDatabase;	// 0x30df9d8d
- (id)init;	// 0x30df9dd9
- (void)_connect;	// 0x30df9e6d
- (BOOL)_copyBlobData:(id *)data blobAllocType:(int)type table:(id)table blobColumn:(id)column where:(id)where;	// 0x30e06099
- (id)_copyBlobDataAndBytesInTable:(id)table blobColumn:(id)column where:(id)where;	// 0x30e064cd
- (unsigned)_getInt32ValueInTable:(id)table column:(id)column;	// 0x30e05a55
- (unsigned long long)_getInt64ValueInTable:(id)table column:(id)column where:(id)where limit:(unsigned)limit;	// 0x30e05c31
- (BOOL)_hasAnySongs;	// 0x30e0676d
- (unsigned)_hasRowsInTable:(id)table;	// 0x30df9fe9
- (void)_loadDatabaseAtPath:(id)path;	// 0x30df9f51
- (BOOL)_readBlobForRowID:(unsigned long long)rowID intoData:(id)data table:(const char *)table blobColumn:(const char *)column;	// 0x30e06529
- (BOOL)_readBlobIntoData:(id)data table:(id)table blobColumn:(id)column where:(id)where;	// 0x30e064fd
- (id)copyGeniusConfigrationDataAndBytes;	// 0x30e068cd
- (id)copyGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)globalID;	// 0x30e06925
- (id)copyGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)globalID;	// 0x30e06989
- (id)database;	// 0x30dfa12d
- (unsigned)defaultMinTrackCount;	// 0x30e0686d
- (unsigned)defaultTrackCount;	// 0x30e0689d
- (unsigned)geniusConfigurationVersion;	// 0x30e06901
- (BOOL)getGeniusConfigrationDataAndBytesIntoData:(id)data;	// 0x30e069ed
- (BOOL)getGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)globalID intoData:(id)data;	// 0x30e06a21
- (BOOL)getGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)globalID intoData:(id)data;	// 0x30e06a61
- (BOOL)hasDatabase;	// 0x30e0673d
- (BOOL)hasGeniusDataAvailable;	// 0x30e06801
- (BOOL)hasGeniusFeatureEnabled;	// 0x30df9e21
// declared property getter: - (BOOL)isInTransaction;	// 0x30e06aa1
// declared property setter: - (void)setIsInTransaction:(BOOL)transaction;	// 0x30e06ab1
@end


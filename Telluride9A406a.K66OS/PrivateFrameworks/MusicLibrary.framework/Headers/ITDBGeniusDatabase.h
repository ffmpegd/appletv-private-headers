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
@property(assign, nonatomic) BOOL isInTransaction;	// G=0x364c6891; S=0x364c68a1; @synthesize=_isInTransaction
+ (id)fallbackGeniusDatabaseFilePath;	// 0x364c5745
+ (id)geniusDatabaseFilePath;	// 0x364b9e91
+ (id)sharedGeniusDatabase;	// 0x364b9ce9
- (id)init;	// 0x364b9d35
- (void)_connect;	// 0x364b9dc9
- (BOOL)_copyBlobData:(id *)data blobAllocType:(int)type table:(id)table blobColumn:(id)column where:(id)where;	// 0x364c5e89
- (id)_copyBlobDataAndBytesInTable:(id)table blobColumn:(id)column where:(id)where;	// 0x364c62bd
- (unsigned)_getInt32ValueInTable:(id)table column:(id)column;	// 0x364c5845
- (unsigned long long)_getInt64ValueInTable:(id)table column:(id)column where:(id)where limit:(unsigned)limit;	// 0x364c5a21
- (BOOL)_hasAnySongs;	// 0x364c655d
- (unsigned)_hasRowsInTable:(id)table;	// 0x364b9f45
- (void)_loadDatabaseAtPath:(id)path;	// 0x364b9ead
- (BOOL)_readBlobForRowID:(unsigned long long)rowID intoData:(id)data table:(const char *)table blobColumn:(const char *)column;	// 0x364c6319
- (BOOL)_readBlobIntoData:(id)data table:(id)table blobColumn:(id)column where:(id)where;	// 0x364c62ed
- (id)copyGeniusConfigrationDataAndBytes;	// 0x364c66bd
- (id)copyGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)globalID;	// 0x364c6715
- (id)copyGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)globalID;	// 0x364c6779
- (id)database;	// 0x364ba089
- (unsigned)defaultMinTrackCount;	// 0x364c665d
- (unsigned)defaultTrackCount;	// 0x364c668d
- (unsigned)geniusConfigurationVersion;	// 0x364c66f1
- (BOOL)getGeniusConfigrationDataAndBytesIntoData:(id)data;	// 0x364c67dd
- (BOOL)getGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)globalID intoData:(id)data;	// 0x364c6811
- (BOOL)getGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)globalID intoData:(id)data;	// 0x364c6851
- (BOOL)hasDatabase;	// 0x364c652d
- (BOOL)hasGeniusDataAvailable;	// 0x364c65f1
- (BOOL)hasGeniusFeatureEnabled;	// 0x364b9d7d
// declared property getter: - (BOOL)isInTransaction;	// 0x364c6891
// declared property setter: - (void)setIsInTransaction:(BOOL)transaction;	// 0x364c68a1
@end


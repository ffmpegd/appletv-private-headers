/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library

@class ML3SqliteDatabase;

@interface ITDBGeniusDatabase : NSObject {
	ML3SqliteDatabase *_db;	// 4 = 0x4
	double _connectionFailedTime;	// 8 = 0x8
	CFDictionaryRef _statementCache;	// 16 = 0x10
	BOOL _isInTransaction;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL isInTransaction;	// G=0x30ad3495; S=0x30ad34a5; @synthesize=_isInTransaction
+ (id)fallbackGeniusDatabaseFilePath;	// 0x30ad21bd
+ (id)geniusDatabaseFilePath;	// 0x30ac7c11
+ (id)sharedGeniusDatabase;	// 0x30ac7a15
- (id)init;	// 0x30ac7a6d
- (void).cxx_destruct;	// 0x30ad34b5
- (void)_connect;	// 0x30ac7b19
- (BOOL)_copyBlobData:(id *)data blobAllocType:(int)type table:(id)table blobColumn:(id)column where:(id)where;	// 0x30ad29c1
- (id)_copyBlobDataAndBytesInTable:(id)table blobColumn:(id)column where:(id)where;	// 0x30ad2e45
- (unsigned)_getInt32ValueInTable:(id)table column:(id)column;	// 0x30ad2309
- (unsigned long long)_getInt64ValueInTable:(id)table column:(id)column where:(id)where limit:(unsigned)limit;	// 0x30ad252d
- (BOOL)_hasAnySongs;	// 0x30ad3101
- (unsigned)_hasRowsInTable:(id)table;	// 0x30ac7ce1
- (void)_loadDatabaseAtPath:(id)path;	// 0x30ac7c2d
- (BOOL)_readBlobForRowID:(unsigned long long)rowID intoData:(id)data table:(const char *)table blobColumn:(const char *)column;	// 0x30ad2ea5
- (BOOL)_readBlobIntoData:(id)data table:(id)table blobColumn:(id)column where:(id)where;	// 0x30ad2e79
- (id)copyGeniusConfigrationDataAndBytes;	// 0x30ad329d
- (id)copyGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)globalID;	// 0x30ad32f9
- (id)copyGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)globalID;	// 0x30ad336d
- (id)database;	// 0x30ac7e61
- (unsigned)defaultMinTrackCount;	// 0x30ad323d
- (unsigned)defaultTrackCount;	// 0x30ad326d
- (unsigned)geniusConfigurationVersion;	// 0x30ad32d5
- (BOOL)getGeniusConfigrationDataAndBytesIntoData:(id)data;	// 0x30ad33e1
- (BOOL)getGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)globalID intoData:(id)data;	// 0x30ad3415
- (BOOL)getGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)globalID intoData:(id)data;	// 0x30ad3455
- (BOOL)hasDatabase;	// 0x30ad30d1
- (BOOL)hasGeniusDataAvailable;	// 0x30ad31cd
- (BOOL)hasGeniusFeatureEnabled;	// 0x30ac7ac9
// declared property getter: - (BOOL)isInTransaction;	// 0x30ad3495
// declared property setter: - (void)setIsInTransaction:(BOOL)transaction;	// 0x30ad34a5
@end

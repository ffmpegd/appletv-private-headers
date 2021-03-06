/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, GEOTileDBMRU;
@protocol OS_dispatch_queue;

@interface GEOTileDBReader : NSObject {
	BOOL _defunct;	// 4 = 0x4
	BOOL _closed;	// 5 = 0x5
	int _editionUpdating;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_readQueue;	// 12 = 0xc
	NSString *_path;	// 16 = 0x10
	sqlite3 *_db;	// 20 = 0x14
	sqlite3_stmt *_tileQuery;	// 24 = 0x18
	sqlite3_stmt *_versionQuery;	// 28 = 0x1c
	GEOTileDBMRU *_tileDBMRU;	// 32 = 0x20
	XXStruct_nbUehC *_expirationRecords;	// 36 = 0x24
	unsigned _expirationRecordCount;	// 40 = 0x28
}
@property(assign) BOOL closed;	// G=0x33f8021d; S=0x33f8022d; 
@property(retain, nonatomic) GEOTileDBMRU *tileDBMRU;	// G=0x33f80e15; S=0x33f80e25; @synthesize=_tileDBMRU
- (id)initWithPath:(id)path;	// 0x33f7fc11
- (void)_closeDB;	// 0x33f80029
- (id)_dataForKey:(GEOTileKey)key;	// 0x33f802d9
- (void)_databaseReset:(id)reset;	// 0x33f7fe89
- (void)_deviceLocking;	// 0x33f7ff81
- (void)_editionUpdateBegin:(id)begin;	// 0x33f7fffd
- (void)_editionUpdateEnd:(id)end;	// 0x33f80011
- (void)_openDB;	// 0x33f8007d
// declared property getter: - (BOOL)closed;	// 0x33f8021d
- (id)dataForKey:(GEOTileKey *)key;	// 0x33f80525
- (void)dataForKey:(GEOTileKey *)key asyncHandler:(id)handler;	// 0x33f80711
- (void)dataForKeys:(id)keys asyncHandler:(id)handler;	// 0x33f80931
- (void)dealloc;	// 0x33f7fdbd
// declared property setter: - (void)setClosed:(BOOL)closed;	// 0x33f8022d
- (void)setExpirationRecords:(XXStruct_nbUehC *)records count:(unsigned)count;	// 0x33f80d59
// declared property setter: - (void)setTileDBMRU:(id)dbmru;	// 0x33f80e25
// declared property getter: - (id)tileDBMRU;	// 0x33f80e15
@end


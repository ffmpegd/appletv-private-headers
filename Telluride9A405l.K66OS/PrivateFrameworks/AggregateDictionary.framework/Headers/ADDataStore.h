/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AggregateDictionary.framework/AggregateDictionary
 */

#import "AggregateDictionary-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface ADDataStore : NSObject {
	NSString *_path;	// 4 = 0x4
	sqlite3 *_db;	// 8 = 0x8
	sqlite3_stmt *_selectScalarsWithPrefixInTimePeriodStatement;	// 12 = 0xc
	sqlite3_stmt *_selectDistributionsWithPrefixInTimePeriodStatement;	// 16 = 0x10
	sqlite3_stmt *_selectScalarStatement;	// 20 = 0x14
	sqlite3_stmt *_insertScalarStatement;	// 24 = 0x18
	sqlite3_stmt *_updateScalarStatement;	// 28 = 0x1c
	sqlite3_stmt *_selectDistributionStatement;	// 32 = 0x20
	sqlite3_stmt *_insertDistributionStatement;	// 36 = 0x24
	sqlite3_stmt *_updateDistributionStatement;	// 40 = 0x28
	sqlite3_stmt *_deleteScalarStatement;	// 44 = 0x2c
	sqlite3_stmt *_deleteDistributionStatement;	// 48 = 0x30
}
@property(readonly, assign, nonatomic) NSString *path;	// G=0x350fbaad; @synthesize=_path
- (id)initWithDefaultPath;	// 0x350fcf15
- (id)initWithPath:(id)path;	// 0x350fbc21
- (BOOL)_createTables;	// 0x350fbe31
- (int)_schemaVersion;	// 0x350fbf89
- (int)beginTransaction;	// 0x350fc8a1
- (int)commitTransaction;	// 0x350fc875
- (void)dealloc;	// 0x350fce01
- (void)deleteAllValuesOnOrBeforeDate:(int)date;	// 0x350fc7ad
- (void)deleteDistributionForKey:(id)key withDaysSince1970:(int)daysSince1970;	// 0x350fbffd
- (void)deleteScalarForKey:(id)key withDaysSince1970:(int)daysSince1970;	// 0x350fc0a9
- (int)distribution:(XXStruct_j7IYfC *)distribution forKey:(id)key withDaysSince1970:(int)daysSince1970;	// 0x350fc489
- (BOOL)distributionsForKeyPrefix:(id)keyPrefix minDaysSince1970:(int)a1970 maxDaysSince1970:(int)a19703 rowHandler:(id)handler;	// 0x350fc8cd
- (BOOL)distributionsForKeyPrefix:(id)keyPrefix minDaysSince1970:(int)a1970 maxDaysSince1970:(int)a19703 withConsumer:(id)consumer;	// 0x350fbb71
- (void)incrementalVacuum;	// 0x350fc849
- (void)insertDistribution:(XXStruct_j7IYfC *)distribution forKey:(id)key withDaysSince1970:(int)daysSince1970;	// 0x350fc155
- (void)insertScalar:(long long)scalar forKey:(id)key withDaysSince1970:(int)daysSince1970;	// 0x350fc269
// declared property getter: - (id)path;	// 0x350fbaad
- (int)scalar:(long long *)scalar forKey:(id)key withDaysSince1970:(int)daysSince1970;	// 0x350fc5c5
- (BOOL)scalarsForKeyPrefix:(id)keyPrefix minDaysSince1970:(int)a1970 maxDaysSince1970:(int)a19703 rowHandler:(id)handler;	// 0x350fcb8d
- (BOOL)scalarsForKeyPrefix:(id)keyPrefix minDaysSince1970:(int)a1970 maxDaysSince1970:(int)a19703 withConsumer:(id)consumer;	// 0x350fbabd
- (void)updateDistribution:(XXStruct_j7IYfC *)distribution forID:(int)anId;	// 0x350fc329
- (void)updateScalar:(long long)scalar forID:(int)anId;	// 0x350fc401
@end


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
@property(readonly, assign, nonatomic) NSString *path;	// G=0x32171769; @synthesize=_path
- (id)initWithDefaultPath;	// 0x32171a45
- (id)initWithPath:(id)path;	// 0x321718b9
- (BOOL)_createTables;	// 0x321721c9
- (int)_schemaVersion;	// 0x32171b65
- (int)beginTransaction;	// 0x32172365
- (int)commitTransaction;	// 0x32172339
- (void)dealloc;	// 0x32171a7d
- (void)deleteAllValuesOnOrBeforeDate:(int)date;	// 0x32171bdd
- (void)deleteDistributionForKey:(id)key withDaysSince1970:(int)daysSince1970;	// 0x321723c9
- (void)deleteScalarForKey:(id)key withDaysSince1970:(int)daysSince1970;	// 0x32172445
- (int)distribution:(XXStruct_j7IYfC *)distribution forKey:(id)key withDaysSince1970:(int)daysSince1970;	// 0x321724c1
- (BOOL)distributionsForKeyPrefix:(id)keyPrefix minDaysSince1970:(int)a1970 maxDaysSince1970:(int)a19703 rowHandler:(id)handler;	// 0x32171f19
- (BOOL)distributionsForKeyPrefix:(id)keyPrefix minDaysSince1970:(int)a1970 maxDaysSince1970:(int)a19703 withConsumer:(id)consumer;	// 0x32171779
- (void)incrementalVacuum;	// 0x3217230d
- (void)insertDistribution:(XXStruct_j7IYfC *)distribution forKey:(id)key withDaysSince1970:(int)daysSince1970;	// 0x32172881
- (void)insertScalar:(long long)scalar forKey:(id)key withDaysSince1970:(int)daysSince1970;	// 0x32172775
// declared property getter: - (id)path;	// 0x32171769
- (int)scalar:(long long *)scalar forKey:(id)key withDaysSince1970:(int)daysSince1970;	// 0x321725d5
- (BOOL)scalarsForKeyPrefix:(id)keyPrefix minDaysSince1970:(int)a1970 maxDaysSince1970:(int)a19703 rowHandler:(id)handler;	// 0x32171c69
- (BOOL)scalarsForKeyPrefix:(id)keyPrefix minDaysSince1970:(int)a1970 maxDaysSince1970:(int)a19703 withConsumer:(id)consumer;	// 0x32171815
- (void)updateDistribution:(XXStruct_j7IYfC *)distribution forID:(int)anId;	// 0x3217295d
- (void)updateScalar:(long long)scalar forID:(int)anId;	// 0x32172805
@end


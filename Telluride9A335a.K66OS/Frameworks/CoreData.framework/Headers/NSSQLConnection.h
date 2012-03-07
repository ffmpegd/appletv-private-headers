/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSSQLAdapter, NSArray, NSSQLStatement;

__attribute__((visibility("hidden")))
@interface NSSQLConnection : NSObject {
@private
	NSSQLAdapter *_adapter;	// 4 = 0x4
	BOOL _transactionIsOpen;	// 8 = 0x8
	BOOL _useSyntaxColoredLogging;	// 9 = 0x9
	int _debug;	// 12 = 0xc
	NSSQLStatement *_sqlStatement;	// 16 = 0x10
	NSArray *_columnsToFetch;	// 20 = 0x14
	NSArray *_metadataColumns;	// 24 = 0x18
}
@property(readonly, retain) NSSQLAdapter *adapter;	// G=0x330c3ff1; converted property
@property(retain) NSArray *columnsToFetch;	// G=0x330c6f29; S=0x330c6f49; converted property
@property(readonly, retain) NSArray *metadataColumns;	// G=0x330c6f91; converted property
@property(readonly, retain) NSSQLStatement *sqlStatement;	// G=0x330c68a5; converted property
+ (void)initialize;	// 0x330ec589
- (id)initWithAdapter:(id)adapter;	// 0x330c34b1
- (void)_forceDisconnectOnError;	// 0x331692e1
- (void)_performPostSaveTasks;	// 0x331692dd
- (void)_raiseOptimisticLockingExceptionWithReason:(id)reason;	// 0x3316ad05
// converted property getter: - (id)adapter;	// 0x330c3ff1
- (void)addPeerRangeForPeerID:(id)peerID entityName:(id)name rangeStart:(id)start rangeEnd:(id)end peerRangeStart:(id)start5 peerRangeEnd:(id)end6;	// 0x33169735
- (id)allPeerRanges;	// 0x33169701
- (void)awake;	// 0x331692a5
- (void)beginTransaction;	// 0x3316ac91
- (BOOL)canConnect;	// 0x3316ab8d
// converted property getter: - (id)columnsToFetch;	// 0x330c6f29
- (void)commitTransaction;	// 0x3316ac5d
- (void)connect;	// 0x3316abf5
- (void)createIndexesForEntity:(id)entity;	// 0x3316a13d
- (void)createManyToManyTablesForEntity:(id)entity;	// 0x331694d9
- (void)createMetadata;	// 0x33169639
- (void)createPrimaryKeyTableForModel:(id)model knownEmpty:(BOOL)empty;	// 0x33169805
- (void)createSchema;	// 0x33169e29
- (void)createTableForEntity:(id)entity;	// 0x33169469
- (void)createTablesForEntities:(id)entities;	// 0x331695b1
- (BOOL)databaseIsEmpty;	// 0x3316ab59
- (void)dealloc;	// 0x330e49fd
- (void)deleteCorrelation:(id)correlation;	// 0x3316aa55
- (void)deleteRow:(id)row;	// 0x3316a9ed
- (id)describeResults;	// 0x3316a91d
- (void)didCreateSchema;	// 0x331692c9
- (void)disconnect;	// 0x3316abc1
- (void)endFetch;	// 0x3316a881
- (void)endPrimaryKeyGeneration;	// 0x331692d9
- (void)execute;	// 0x3316a985
- (long long)fetchMaxPrimaryKeyForEntity:(id)entity;	// 0x33169dc1
- (id)fetchMetadata;	// 0x330c52dd
- (int)fetchResultSet:(void *)set usingFetchPlan:(id)plan;	// 0x3316a8b5
- (id)fetchTableCreationSQL;	// 0x33169d59
- (id)fetchTableNames;	// 0x33169d8d
- (id)fetchUbiqiutyKnowledgeVector;	// 0x331697d1
- (void)finalize;	// 0x3316acc5
- (void)forceTransactionClosed;	// 0x331692ad
- (long long)generatePrimaryKeysForEntity:(id)entity batch:(unsigned)batch;	// 0x331692cd
- (BOOL)hasMetadataTable;	// 0x33169d25
- (BOOL)hasOpenTransaction;	// 0x330e441d
- (BOOL)hasPrimaryKeyTable;	// 0x33169925
- (void)insertCorrelation:(id)correlation;	// 0x3316aabd
- (void)insertRow:(id)row;	// 0x3316aaf1
- (BOOL)isFetchInProgress;	// 0x3316a951
- (BOOL)isOpen;	// 0x3316ab25
// converted property getter: - (id)metadataColumns;	// 0x330c6f91
- (id)newFetchedArray;	// 0x3316a8e9
- (void)performAdapterOperation:(id)operation;	// 0x3316a779
- (void)performAdapterOperations:(id)operations;	// 0x3316a6d1
- (void)prepareAndExecuteSQLStatement:(id)statement;	// 0x33169425
- (void)prepareForPrimaryKeyGeneration;	// 0x331692d5
- (void)prepareSQLStatement:(id)statement;	// 0x330c5e35
- (CFArrayRef)rawIntegerRowsForSQL:(id)sql;	// 0x33169df5
- (void)releaseSQLStatement;	// 0x330c7f01
- (void)resetSQLStatement;	// 0x331693f9
- (void)rollbackTransaction;	// 0x3316ac29
- (void)saveMetadata:(id)metadata;	// 0x33169959
- (void)selectAttributes:(id)attributes fetchRequest:(id)request lock:(BOOL)lock entity:(id)entity;	// 0x3316a9b9
// converted property setter: - (void)setColumnsToFetch:(id)fetch;	// 0x330c6f49
- (void)setExclusiveLockingMode:(BOOL)mode;	// 0x331692c1
- (void)sleep;	// 0x331692a9
// converted property getter: - (id)sqlStatement;	// 0x330c68a5
- (void)transactionDidBegin;	// 0x331692f1
- (void)transactionDidCommit;	// 0x33169349
- (void)transactionDidRollback;	// 0x331693a1
- (void)updateCorrelation:(id)correlation;	// 0x3316aa89
- (void)updateRow:(id)row;	// 0x3316aa21
- (void)updateUbiquityKnowledgeForPeerWithID:(id)anId andTransactionNumber:(id)number;	// 0x33169769
- (void)updateUbiquityKnowledgeVector:(id)vector;	// 0x3316979d
- (void)willCreateSchema;	// 0x331692c5
@end


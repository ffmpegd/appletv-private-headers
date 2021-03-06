/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MLSQLiteConnectionSQLiteDelegate.h"
#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library

@class ML3NondurableWriteSet, ML3MusicLibrary, CPLRUDictionary, MLSQLiteConnectionQueue, MLSQLiteConnection;

@interface ML3MusicLibrary_SQLiteDatabaseContext : NSObject <MLSQLiteConnectionSQLiteDelegate> {
	ML3MusicLibrary *_library;	// 4 = 0x4
	MLSQLiteConnection *_connection;	// 8 = 0x8
	const void *_iTunesExtensions;	// 12 = 0xc
	iPhoneSortKeyBuilder *_sortKeyBuilder;	// 16 = 0x10
	CPLRUDictionary *_statementCache;	// 20 = 0x14
	ML3NondurableWriteSet *_nondurableWriteSet;	// 24 = 0x18
	int _transactionKind;	// 28 = 0x1c
	unsigned _writeStatementCount;	// 32 = 0x20
	unsigned _transactionHasChanges : 1;	// 36 = 0x24
	unsigned _transactionHasNonContentsChanges : 1;	// 36 = 0x24
	unsigned _transactionHasInvisiblePropertyChanges : 1;	// 36 = 0x24
	unsigned _transactionHasDisplayValuesChanges : 1;	// 36 = 0x24
	MLSQLiteConnectionQueue *_connectionQueue;	// 40 = 0x28
}
@property(readonly, assign, nonatomic) MLSQLiteConnection *connection;	// G=0x3402d9bd; @synthesize=_connection
@property(readonly, assign, nonatomic) MLSQLiteConnectionQueue *connectionQueue;	// G=0x3402d7fd; @synthesize=_connectionQueue
@property(retain, nonatomic) ML3NondurableWriteSet *nondurableWriteSet;	// G=0x3403bc05; S=0x34035245; @synthesize=_nondurableWriteSet
@property(readonly, assign, nonatomic) iPhoneSortKeyBuilder *sortKeyBuilder;	// G=0x34037e2d; @synthesize=_sortKeyBuilder
@property(assign, nonatomic) BOOL transactionHasChanges;	// G=0x3403c049; S=0x3403c05d; 
@property(assign, nonatomic) BOOL transactionHasDisplayValuesChanges;	// G=0x3403c0ed; S=0x3403c101; 
@property(assign, nonatomic) BOOL transactionHasInvisiblePropertyChanges;	// G=0x3403c0b5; S=0x3403c0c9; 
@property(assign, nonatomic) BOOL transactionHasNonContentsChanges;	// G=0x3403c07d; S=0x3403c091; 
@property(assign, nonatomic) int transactionKind;	// G=0x34035225; S=0x34035235; @synthesize=_transactionKind
- (id)initWithLibrary:(id)library connectionQueue:(id)queue;	// 0x34026de5
- (void).cxx_destruct;	// 0x3405176d
// declared property getter: - (id)connection;	// 0x3402d9bd
- (void)connection:(id)connection didOpenDBHandle:(sqlite3 *)handle;	// 0x3402e4fd
- (void)connection:(id)connection willCloseDBHandle:(sqlite3 *)handle;	// 0x34051731
// declared property getter: - (id)connectionQueue;	// 0x3402d7fd
- (void)dealloc;	// 0x340516bd
// declared property getter: - (id)nondurableWriteSet;	// 0x3403bc05
// declared property setter: - (void)setNondurableWriteSet:(id)set;	// 0x34035245
// declared property setter: - (void)setTransactionHasChanges:(BOOL)changes;	// 0x3403c05d
// declared property setter: - (void)setTransactionHasDisplayValuesChanges:(BOOL)changes;	// 0x3403c101
// declared property setter: - (void)setTransactionHasInvisiblePropertyChanges:(BOOL)changes;	// 0x3403c0c9
// declared property setter: - (void)setTransactionHasNonContentsChanges:(BOOL)changes;	// 0x3403c091
// declared property setter: - (void)setTransactionKind:(int)kind;	// 0x34035235
// declared property getter: - (iPhoneSortKeyBuilder *)sortKeyBuilder;	// 0x34037e2d
// declared property getter: - (BOOL)transactionHasChanges;	// 0x3403c049
// declared property getter: - (BOOL)transactionHasDisplayValuesChanges;	// 0x3403c0ed
// declared property getter: - (BOOL)transactionHasInvisiblePropertyChanges;	// 0x3403c0b5
// declared property getter: - (BOOL)transactionHasNonContentsChanges;	// 0x3403c07d
// declared property getter: - (int)transactionKind;	// 0x34035225
@end


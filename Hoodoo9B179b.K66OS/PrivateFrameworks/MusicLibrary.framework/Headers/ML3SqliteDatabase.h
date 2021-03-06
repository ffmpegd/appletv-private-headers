/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library

@class ML3SqliteDatabaseContext, NSString;

__attribute__((visibility("hidden")))
@interface ML3SqliteDatabase : NSObject {
@private
	ML3SqliteDatabaseContext *_mainDatabaseContext;	// 4 = 0x4
	ML3SqliteDatabaseContext *_backgroundDatabaseContext;	// 8 = 0x8
	dispatch_queue_s *_backgroundQueue;	// 12 = 0xc
	NSString *_path;	// 16 = 0x10
	BOOL _enableWrites;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *path;	// G=0x3003fa39; @synthesize=_path
+ (id)allSchemaSQL;	// 0x3003ef9d
+ (BOOL)attachAuxiliaryDatabases:(sqlite3 *)databases;	// 0x3000db45
+ (BOOL)buildDatabaseTablesUsingHandle:(sqlite3 *)handle usingTransaction:(BOOL)transaction;	// 0x3003f041
+ (void)closeDatabaseHandle:(sqlite3 *)handle;	// 0x3003e63d
+ (id)databasePath;	// 0x3003e4f1
+ (BOOL)executeSQL:(id)sql usingHandle:(sqlite3 *)handle;	// 0x3003ec05
+ (void)limitCacheSize:(sqlite3 *)size;	// 0x3000db49
+ (BOOL)migrateFromVersion:(int)version outUserVersion:(int *)version2 usingHandle:(sqlite3 *)handle;	// 0x3003f5c5
+ (BOOL)migrateToCurrentUserVersionUsingHandle:(sqlite3 *)currentUserVersionUsingHandle;	// 0x3003f5c9
+ (BOOL)orderingLanguageMatchesSystemUsingHandle:(sqlite3 *)handle;	// 0x3003f3e5
+ (void)registerCustomCallbacksOnHandle:(sqlite3 *)handle;	// 0x3000db4d
+ (void)registerFunctionsOnHandle:(sqlite3 *)handle;	// 0x3000db5d
+ (BOOL)statementDidFinishAfterStepping:(sqlite3_stmt *)statement;	// 0x3003e879
+ (BOOL)statementHasRowAfterStepping:(sqlite3_stmt *)stepping;	// 0x30013fd1
+ (void)stepStatement:(sqlite3_stmt *)statement hasRow:(BOOL *)row didFinish:(BOOL *)finish;	// 0x30013ff9
+ (id)systemCurrentLanguage;	// 0x3003efa1
+ (int)userVersionCurrent;	// 0x3003f03d
+ (BOOL)userVersionMatchesSystemUsingHandle:(sqlite3 *)handle;	// 0x3000dc35
+ (int)userVersionUsingHandle:(sqlite3 *)handle;	// 0x3000dcb1
- (id)initWithPath:(id)path enableWrites:(BOOL)writes;	// 0x3000d4c9
- (void)_debugLoggingOptionsDidChangeNotification:(id)_debugLoggingOptions;	// 0x3003e599
- (BOOL)_openDatabaseWithOpenHandler:(id)openHandler;	// 0x3000d9cd
- (void)accessDatabaseContextUsingBlock:(id)block;	// 0x3000d789
- (void)accessDatabaseUsingBlock:(id)block;	// 0x3000d735
- (id)backgroundQueue_backgroundDatabaseContext;	// 0x3000d839
- (BOOL)buildDatabaseTables;	// 0x3003f1d9
- (BOOL)canWriteToDatabase;	// 0x3003e5ed
- (BOOL)coerceValidDatabase;	// 0x3003f775
- (void)dealloc;	// 0x3003e4f5
- (BOOL)deleteAndRecreateDatabaseUsingHandle:(sqlite3 **)handle;	// 0x3003f6c1
- (void)didCommitInDatabaseContext:(id)databaseContext;	// 0x3003ece5
- (void)didRollbackInDatabaseContext:(id)databaseContext;	// 0x3003ecf9
- (BOOL)executeSQL:(id)sql;	// 0x3003e715
- (id)newDatabaseContext;	// 0x3000d871
- (BOOL)openDatabaseHandle:(sqlite3 **)handle;	// 0x3000d8c5
- (sqlite3 *)openedDatabaseHandle;	// 0x3003e619
// declared property getter: - (id)path;	// 0x3003fa39
- (void)performOperationInBackground:(id)background;	// 0x3003ec69
- (void)performTransactionWithBlock:(id)block;	// 0x3003ed0d
- (void)prepareStatementForSQL:(id)sql usingBlock:(id)block;	// 0x30013f09
- (void)reconnectBackgroundDatabaseContext;	// 0x3003e8d1
- (void)reconnectMainDatabaseContext;	// 0x3003e8a5
- (void)reconnectToDatabase;	// 0x3003e8fd
- (BOOL)requiresPostProcessing;	// 0x3000d635
@end


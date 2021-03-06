/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library

@class ML3SqliteDatabaseContext, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ML3SqliteDatabase : NSObject {
@private
	ML3SqliteDatabaseContext *_mainDatabaseContext;	// 4 = 0x4
	ML3SqliteDatabaseContext *_backgroundDatabaseContext;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_backgroundQueue;	// 12 = 0xc
	NSString *_path;	// 16 = 0x10
	BOOL _enableWrites;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *path;	// G=0x3462ab41; @synthesize=_path
+ (id)allSchemaSQL;	// 0x34629fa9
+ (BOOL)attachAuxiliaryDatabases:(sqlite3 *)databases;	// 0x345e5141
+ (BOOL)buildDatabaseTablesUsingHandle:(sqlite3 *)handle usingTransaction:(BOOL)transaction;	// 0x3462a04d
+ (void)closeDatabaseHandle:(sqlite3 *)handle;	// 0x346295f5
+ (int)currentUserVersion;	// 0x3462a049
+ (id)databasePath;	// 0x346294cd
+ (BOOL)executeSQL:(id)sql usingHandle:(sqlite3 *)handle;	// 0x34629be1
+ (void)limitCacheSize:(sqlite3 *)size;	// 0x345e5145
+ (BOOL)migrateFromVersion:(int)version outUserVersion:(int *)version2 usingHandle:(sqlite3 *)handle;	// 0x3462a661
+ (BOOL)migrateToCurrentUserVersionUsingHandle:(sqlite3 *)currentUserVersionUsingHandle;	// 0x3462a665
+ (BOOL)orderingLanguageMatchesSystemUsingHandle:(sqlite3 *)handle;	// 0x3462a485
+ (void)registerCustomCallbacksOnHandle:(sqlite3 *)handle;	// 0x345e5149
+ (void)registerFunctionsOnHandle:(sqlite3 *)handle;	// 0x345e5159
+ (BOOL)statementDidFinishAfterStepping:(sqlite3_stmt *)statement;	// 0x3462984d
+ (BOOL)statementHasRowAfterStepping:(sqlite3_stmt *)stepping;	// 0x345ed7c5
+ (void)stepStatement:(sqlite3_stmt *)statement hasRow:(BOOL *)row didFinish:(BOOL *)finish;	// 0x345ed7ed
+ (id)systemCurrentLanguage;	// 0x34629fad
+ (BOOL)userVersionMatchesSystemUsingHandle:(sqlite3 *)handle;	// 0x345e5239
+ (int)userVersionUsingHandle:(sqlite3 *)handle;	// 0x345e52b1
- (id)initWithPath:(id)path enableWrites:(BOOL)writes;	// 0x345e49b1
- (void).cxx_destruct;	// 0x3462ab55
- (void)_debugLoggingOptionsDidChangeNotification:(id)_debugLoggingOptions;	// 0x34629551
- (BOOL)_openDatabaseWithOpenHandler:(id)openHandler;	// 0x345e4fc1
- (void)accessDatabaseContextUsingBlock:(id)block;	// 0x345e4d0d
- (void)accessDatabaseUsingBlock:(id)block;	// 0x345e4cad
- (id)backgroundQueue_backgroundDatabaseContext;	// 0x345e4e11
- (BOOL)buildDatabaseTables;	// 0x3462a235
- (BOOL)canWriteToDatabase;	// 0x346295a5
- (BOOL)coerceValidDatabase;	// 0x3462a831
- (void)dealloc;	// 0x346294d1
- (BOOL)deleteAndRecreateDatabaseUsingHandle:(sqlite3 **)handle;	// 0x3462a77d
- (void)didCommitInDatabaseContext:(id)databaseContext;	// 0x34629ce1
- (void)didRollbackInDatabaseContext:(id)databaseContext;	// 0x34629cf5
- (BOOL)executeSQL:(id)sql;	// 0x346296cd
- (id)newDatabaseContext;	// 0x345e4e51
- (BOOL)openDatabaseHandle:(sqlite3 **)handle;	// 0x345e4ea5
- (sqlite3 *)openedDatabaseHandle;	// 0x346295d1
// declared property getter: - (id)path;	// 0x3462ab41
- (void)performOperationInBackground:(id)background;	// 0x34629c55
- (void)performTransactionWithBlock:(id)block;	// 0x34629d09
- (void)prepareStatementForSQL:(id)sql usingBlock:(id)block;	// 0x345ed6d9
- (void)reconnectBackgroundDatabaseContext;	// 0x34629891
- (void)reconnectMainDatabaseContext;	// 0x34629879
- (void)reconnectToDatabase;	// 0x346298a9
- (BOOL)requiresPostProcessing;	// 0x345e4b95
@end


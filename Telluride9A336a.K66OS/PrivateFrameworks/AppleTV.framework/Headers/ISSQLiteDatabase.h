/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ISSQLiteDatabase : NSObject {
@private
	sqlite3 *_db;	// 4 = 0x4
	BOOL _isInTransaction;	// 8 = 0x8
	dispatch_queue_s *_dispatchQueue;	// 12 = 0xc
	CFDictionaryRef _statementCache;	// 16 = 0x10
}
+ (void)_stepStatement:(sqlite3_stmt *)statement hasRow:(BOOL *)row didFinish:(BOOL *)finish;	// 0x33be8025
+ (BOOL)statementDidFinishAfterStepping:(sqlite3_stmt *)statement;	// 0x33be78e9
+ (BOOL)statementHasRowAfterStepping:(sqlite3_stmt *)stepping;	// 0x33be7915
- (id)initWithDatabaseURL:(id)databaseURL;	// 0x33be764d
- (void)_accessDatabaseUsingBlock:(id)block;	// 0x33be80bd
- (int)_resetAndReopenDatabaseWithPath:(id)path;	// 0x33be80ed
- (sqlite3_stmt *)_statementForSQL:(id)sql cache:(BOOL)cache;	// 0x33be81a5
- (void)accessDatabaseUsingBlock:(id)block;	// 0x33be793d
- (void)dealloc;	// 0x33be786d
- (BOOL)executeSQL:(id)sql;	// 0x33be79e9
- (void)performTransactionWithBlock:(id)block;	// 0x33be7be5
- (void)prepareStatementForSQL:(id)sql cache:(BOOL)cache usingBlock:(id)block;	// 0x33be7e35
@end


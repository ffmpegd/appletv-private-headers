/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface ISSQLiteDatabase : NSObject {
@private
	sqlite3 *_db;	// 4 = 0x4
	BOOL _isInTransaction;	// 8 = 0x8
	dispatch_queue_s *_dispatchQueue;	// 12 = 0xc
	CFDictionaryRef _statementCache;	// 16 = 0x10
}
+ (void)_stepStatement:(sqlite3_stmt *)statement hasRow:(BOOL *)row didFinish:(BOOL *)finish;	// 0x30424ad9
+ (BOOL)statementDidFinishAfterStepping:(sqlite3_stmt *)statement;	// 0x3042439d
+ (BOOL)statementHasRowAfterStepping:(sqlite3_stmt *)stepping;	// 0x304243c9
- (id)initWithDatabaseURL:(id)databaseURL;	// 0x30424101
- (void)_accessDatabaseUsingBlock:(id)block;	// 0x30424b71
- (int)_resetAndReopenDatabaseWithPath:(id)path;	// 0x30424ba1
- (sqlite3_stmt *)_statementForSQL:(id)sql cache:(BOOL)cache;	// 0x30424c59
- (void)accessDatabaseUsingBlock:(id)block;	// 0x304243f1
- (void)dealloc;	// 0x30424321
- (BOOL)executeSQL:(id)sql;	// 0x3042449d
- (void)performTransactionWithBlock:(id)block;	// 0x30424699
- (void)prepareStatementForSQL:(id)sql cache:(BOOL)cache usingBlock:(id)block;	// 0x304248e9
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface ML3SqliteDatabaseContext : NSObject {
	sqlite3 **_dbStack;	// 4 = 0x4
	unsigned _dbStackCurrentIndex;	// 8 = 0x8
	CFDictionaryRef _statementCache;	// 12 = 0xc
	BOOL _isInTransaction;	// 16 = 0x10
	NSString *_path;	// 20 = 0x14
	BOOL _enableWrites;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) sqlite3 *db;	// G=0x34812b61; 
@property(assign, nonatomic) BOOL isInTransaction;	// G=0x34859c4d; S=0x34859c5d; @synthesize=_isInTransaction
- (id)initWithDB:(sqlite3 *)db;	// 0x34812a81
- (void).cxx_destruct;	// 0x34859c6d
// declared property getter: - (sqlite3 *)db;	// 0x34812b61
- (void)dealloc;	// 0x34859a65
- (BOOL)executeSQL:(id)sql;	// 0x34859aed
// declared property getter: - (BOOL)isInTransaction;	// 0x34859c4d
- (void)popDB;	// 0x34859b91
- (void)pushDB:(sqlite3 *)db;	// 0x34859b49
// declared property setter: - (void)setIsInTransaction:(BOOL)transaction;	// 0x34859c5d
- (sqlite3_stmt *)statementForSQL:(id)sql;	// 0x348221d9
@end


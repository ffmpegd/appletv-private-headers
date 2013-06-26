/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import </libobjc.A.h>

@class SSSQLiteQueryDescriptor, SSSQLiteDatabase;

@interface SSSQLiteQuery : NSObject {
	SSSQLiteDatabase *_database;	// 4 = 0x4
	SSSQLiteQueryDescriptor *_descriptor;	// 8 = 0x8
}
@property(readonly, assign) int countOfEntities;	// G=0x32849301; 
@property(readonly, assign) SSSQLiteDatabase *database;	// G=0x328497a5; 
@property(readonly, assign) SSSQLiteQueryDescriptor *queryDescriptor;	// G=0x3284a081; 
- (id)initWithDatabase:(id)database descriptor:(id)descriptor;	// 0x32848fd9
- (id)_newSelectSQLWithProperties:(const id *)properties count:(unsigned)count;	// 0x3284a0b9
- (void)bindToSelectStatement:(sqlite3_stmt *)selectStatement bindingIndex:(inout int *)index;	// 0x328490b5
- (id)copyEntityIdentifiers;	// 0x32849121
- (id)copySelectSQLWithProperties:(const id *)properties count:(unsigned)count;	// 0x32849221
// declared property getter: - (int)countOfEntities;	// 0x32849301
- (BOOL)createTemporaryTableWithName:(id)name properties:(const id *)properties count:(unsigned)count;	// 0x3284941d
// declared property getter: - (id)database;	// 0x328497a5
- (void)dealloc;	// 0x32849051
- (BOOL)deleteAllEntities;	// 0x328497dd
- (void)enumerateMemoryEntitiesUsingBlock:(id)block;	// 0x32849a9d
- (void)enumerateMemoryEntitiesWithProperties:(id)properties usingBlock:(id)block;	// 0x32849b0d
- (void)enumeratePersistentIDsAndProperties:(const id *)properties count:(unsigned)count usingBlock:(id)block;	// 0x32849e95
- (void)enumeratePersistentIDsUsingBlock:(id)block;	// 0x32849e0d
// declared property getter: - (id)queryDescriptor;	// 0x3284a081
@end

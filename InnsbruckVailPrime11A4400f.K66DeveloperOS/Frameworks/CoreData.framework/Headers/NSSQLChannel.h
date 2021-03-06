/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import </libobjc.A.h>

@class NSSQLEntity, NSManagedObjectContext, NSSQLConnection, NSSQLCore, NSMutableArray;

@interface NSSQLChannel : NSObject {
	NSSQLConnection *_connection;	// 4 = 0x4
	NSSQLCore *_sqlCore;	// 8 = 0x8
	NSSQLEntity *_currentEntity;	// 12 = 0xc
	NSMutableArray *_fetchProperties;	// 16 = 0x10
	NSManagedObjectContext *_currentMOCon;	// 20 = 0x14
}
@property(readonly, retain) NSSQLConnection *connection;	// G=0x2d06b231; converted property
@property(retain) id currentContext;	// G=0x2d0f1dd5; S=0x2d06b0f5; converted property
@property(readonly, retain) NSSQLCore *sqlCore;	// G=0x2d06b0d5; converted property
- (id)initWithSQLCore:(id)sqlcore;	// 0x2d06af3d
- (void)_closeChannel;	// 0x2d0f1db5
- (void)_openChannel;	// 0x2d06b105
- (id)_propertiesToFetch;	// 0x2d0f1a25
- (void)_setCurrentEntityAndRelationshipWithFetchRequest:(id)fetchRequest;	// 0x2d0f1de5
- (void)bindTempTablesForStatementIfNecessary:(id)statementIfNecessary;	// 0x2d0f1b11
// converted property getter: - (id)connection;	// 0x2d06b231
// converted property getter: - (id)currentContext;	// 0x2d0f1dd5
- (void)dealloc;	// 0x2d0f19a5
- (void)endFetch;	// 0x2d0f1d1d
- (void)endFetchAndRecycleStatement:(BOOL)statement;	// 0x2d0f1d31
- (void)finalize;	// 0x2d0f1965
- (BOOL)isFetchInProgress;	// 0x2d0f1a55
- (BOOL)selectCountWithFetchRequest:(id)fetchRequest;	// 0x2d0f1c69
- (void)selectRowsWithCachedStatement:(id)cachedStatement;	// 0x2d0f1bf1
- (void)selectRowsWithFetchRequest:(id)fetchRequest;	// 0x2d0f1a79
- (void)selectRowsWithStatement:(id)statement;	// 0x2d06b149
// converted property setter: - (void)setCurrentContext:(id)context;	// 0x2d06b0f5
- (void)setCurrentEntity:(id)entity;	// 0x2d0f1a45
// converted property getter: - (id)sqlCore;	// 0x2d06b0d5
@end


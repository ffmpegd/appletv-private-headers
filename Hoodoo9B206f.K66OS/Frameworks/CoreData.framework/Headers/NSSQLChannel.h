/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSSQLConnection, NSManagedObjectContext, NSSQLCore, NSSQLEntity, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSSQLChannel : NSObject {
@private
	NSSQLConnection *_connection;	// 4 = 0x4
	NSSQLCore *_sqlCore;	// 8 = 0x8
	NSSQLEntity *_currentEntity;	// 12 = 0xc
	NSMutableArray *_fetchProperties;	// 16 = 0x10
	NSManagedObjectContext *_currentMOCon;	// 20 = 0x14
}
@property(readonly, retain) NSSQLConnection *connection;	// G=0x362431f9; converted property
@property(retain) id currentContext;	// G=0x362d5751; S=0x362430cd; converted property
@property(readonly, retain) NSSQLCore *sqlCore;	// G=0x362430ad; converted property
- (id)initWithSQLCore:(id)sqlcore;	// 0x36242ee5
- (void)_closeChannel;	// 0x362d5841
- (void)_openChannel;	// 0x362430dd
- (id)_propertiesToFetch;	// 0x362d5a2d
- (void)_setCurrentEntityAndRelationshipWithFetchRequest:(id)fetchRequest;	// 0x362d5761
// converted property getter: - (id)connection;	// 0x362431f9
// converted property getter: - (id)currentContext;	// 0x362d5751
- (void)dealloc;	// 0x36250985
- (void)endFetch;	// 0x36250a05
- (void)endFetchAndRecycleStatement:(BOOL)statement;	// 0x362438b9
- (void)finalize;	// 0x362d5a4d
- (BOOL)isFetchInProgress;	// 0x362440b9
- (BOOL)selectCountWithFetchRequest:(id)fetchRequest;	// 0x362d5861
- (void)selectRowsWithCachedStatement:(id)cachedStatement;	// 0x362d5915
- (void)selectRowsWithFetchRequest:(id)fetchRequest;	// 0x362d5995
- (void)selectRowsWithStatement:(id)statement;	// 0x36243121
// converted property setter: - (void)setCurrentContext:(id)context;	// 0x362430cd
- (void)setCurrentEntity:(id)entity;	// 0x362d5741
// converted property getter: - (id)sqlCore;	// 0x362430ad
@end


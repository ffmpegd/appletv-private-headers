/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSSQLCore;

__attribute__((visibility("hidden")))
@interface NSSQLAdapter : NSObject {
@private
	NSMutableArray *_connections;	// 4 = 0x4
	NSSQLCore *_sqlCore;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *connections;	// G=0x33166c61; converted property
@property(readonly, retain) NSSQLCore *sqlCore;	// G=0x330c3541; converted property
- (id)initWithSQLCore:(id)sqlcore;	// 0x330c31dd
- (id)_newSelectStatementWithFetchRequest:(id)fetchRequest ignoreInheritance:(BOOL)inheritance;	// 0x330cdc41
- (id)_originalRowForUpdate:(id)update;	// 0x33166e15
// converted property getter: - (id)connections;	// 0x33166c61
- (id)createConnection;	// 0x331686f5
- (void)dealloc;	// 0x330e478d
- (Class)generatorClass;	// 0x33166d61
- (BOOL)hasOpenConnections;	// 0x33166c7d
- (id)newCopyAndInsertStatementForManyToMany:(id)many toManyToMany:(id)many2 intermediateTableName:(id)name invertColumns:(BOOL)columns;	// 0x331673fd
- (id)newCountStatementWithFetchRequest:(id)fetchRequest;	// 0x33168315
- (id)newCreateIndexStatementForColumn:(id)column;	// 0x33167c85
- (id)newCreateIndexStatementForColumnWithName:(id)name inTableWithName:(id)name2;	// 0x33167bd5
- (id)newCreateIndexStatementForColumns:(id)columns;	// 0x33167eb1
- (id)newCreatePrimaryKeyTableStatement;	// 0x331670b1
- (id)newCreateTableStatementForEntity:(id)entity;	// 0x33166ef1
- (id)newCreateTableStatementForManyToMany:(id)many;	// 0x331678d1
- (id)newDeleteStatementWithCorrelation:(id)correlation;	// 0x331680bd
- (id)newDeleteStatementWithRow:(id)row;	// 0x33166e59
- (id)newDropTableStatementForTableNamed:(id)tableNamed;	// 0x331677a5
- (id)newGeneratorWithStatement:(id)statement;	// 0x3316866d
- (id)newInsertStatementWithCorrelation:(id)correlation;	// 0x3316824d
- (id)newInsertStatementWithRow:(id)row;	// 0x33166d7d
- (id)newPrimaryKeyInitializeStatementForEntity:(id)entity withInitialMaxPK:(long long)initialMaxPK;	// 0x331671ed
- (id)newRenameTableStatementFrom:(id)from to:(id)to;	// 0x33167825
- (id)newRenameTableStatementFromManyToMany:(id)many toManyToMany:(id)many2 orToRandomSpot:(id)randomSpot;	// 0x33167325
- (id)newSQLStringForResettingPrimaryKeMaxWithEntities:(id)entities;	// 0x33167d0d
- (id)newSelectStatementWithFetchRequest:(id)fetchRequest;	// 0x330cdc2d
- (id)newStatementWithEntity:(id)entity;	// 0x330cff95
- (id)newStatementWithSQLString:(id)sqlstring;	// 0x330c5619
- (id)newStatementWithoutEntity;	// 0x33166d09
- (id)newUpdateStatementWithCorrelation:(id)correlation;	// 0x33168185
- (id)newUpdateStatementWithRow:(id)row;	// 0x33168551
- (void)registerConnection:(id)connection;	// 0x330c3561
// converted property getter: - (id)sqlCore;	// 0x330c3541
- (unsigned)sqlTypeForExpressionConstantValue:(id)expressionConstantValue;	// 0x330d3d91
- (Class)statementClass;	// 0x33166d45
- (BOOL)supportsCorrelatedSubqueries;	// 0x33166c79
- (id)type;	// 0x33167e7d
- (id)typeStringForColumn:(id)column;	// 0x33166c71
- (id)typeStringForSQLType:(unsigned)sqltype;	// 0x33166c75
- (void)unregisterConnection:(id)connection;	// 0x33167ce9
- (id)url;	// 0x330c3655
@end


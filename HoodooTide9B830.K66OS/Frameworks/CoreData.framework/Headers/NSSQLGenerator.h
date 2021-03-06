/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSSQLCore;

__attribute__((visibility("hidden")))
@interface NSSQLGenerator : NSObject {
@private
	NSSQLCore *_persistentStore;	// 4 = 0x4
}
+ (void)initialize;	// 0x32286b31
- (id)initWithPersistentStore:(id)persistentStore;	// 0x322682c5
- (id)_predicateForSpecificEntity:(id)specificEntity;	// 0x3231fca9
- (id)_predicateRestrictingSuperentitiesForEntity:(id)entity;	// 0x3231ff29
- (id)_predicateRestrictingToSubentitiesForEntity:(id)entity;	// 0x3231fde9
- (void)generateGroupByIntermediatesForProperties:(id)properties inContext:(id)context;	// 0x3231fba9
- (void)generateHavingIntermediateForPredicate:(id)predicate inContext:(id)context;	// 0x3231fb21
- (void)generateIntermediateForLimit:(unsigned)limit inContext:(id)context;	// 0x3226bba9
- (void)generateIntermediateForOffset:(unsigned)offset inContext:(id)context;	// 0x3231fc29
- (id)generateIntermediatesForFetchInContext:(id)context countOnly:(BOOL)only;	// 0x3226a461
- (void)generateOrderIntermediateInContext:(id)context;	// 0x3226ba39
- (void)generateSelectIntermediateInContext:(id)context;	// 0x3226b191
- (void)generateWhereIntermediatesInContext:(id)context;	// 0x3226accd
- (id)initializeContextForFetchRequest:(id)fetchRequest ignoreInheritance:(BOOL)inheritance nestingLevel:(unsigned)level;	// 0x32268759
- (id)newSQLStatementForFetchRequest:(id)fetchRequest ignoreInheritance:(BOOL)inheritance countOnly:(BOOL)only nestingLevel:(unsigned)level;	// 0x32268305
- (id)predicateForFetchRequestInContext:(id)context;	// 0x32268d51
@end


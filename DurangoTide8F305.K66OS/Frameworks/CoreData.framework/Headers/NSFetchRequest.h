/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"
#import "NSCopying.h"

@class NSPredicate, NSEntityDescription, NSArray;

@interface NSFetchRequest : NSObject <NSCoding, NSCopying> {
@private
	NSArray *_affectedStores;	// 4 = 0x4
	NSArray *_groupByProperties;	// 8 = 0x8
	NSPredicate *_havingPredicate;	// 12 = 0xc
	unsigned _offset;	// 16 = 0x10
	NSArray *_valuesToFetch;	// 20 = 0x14
	NSEntityDescription *_entity;	// 24 = 0x18
	NSPredicate *_predicate;	// 28 = 0x1c
	NSArray *_sortDescriptors;	// 32 = 0x20
	unsigned _batchSize;	// 36 = 0x24
	unsigned long _fetchLimit;	// 40 = 0x28
	NSArray *_relationshipKeyPathsForPrefetching;	// 44 = 0x2c
	fetchRequestFlags _flags;	// 48 = 0x30
}
@property(retain) NSArray *affectedStores;	// G=0x34296735; S=0x342faf61; converted property
@property(retain) NSEntityDescription *entity;	// G=0x34295801; S=0x342943c9; converted property
@property(assign) unsigned fetchBatchSize;	// G=0x34297bd5; S=0x342c6ecd; converted property
@property(assign) unsigned fetchLimit;	// G=0x34295991; S=0x342c90f1; converted property
@property(assign) unsigned fetchOffset;	// G=0x3429a639; S=0x342f9ff1; converted property
@property(retain) NSArray *groupByProperties;	// G=0x34299b11; S=0x342fa79d; converted property
@property(retain) NSPredicate *havingPredicate;	// G=0x34299115; S=0x342fa005; converted property
@property(assign) BOOL includesPendingChanges;	// G=0x342f9fcd; S=0x342c9115; converted property
@property(assign) BOOL includesPropertyValues;	// G=0x342959a1; S=0x342c8e61; converted property
@property(assign) BOOL includesSubentities;	// G=0x342990e9; S=0x342f9fb1; converted property
@property(retain) NSPredicate *predicate;	// G=0x342990d9; S=0x342a6b79; converted property
@property(retain) id propertiesToFetch;	// G=0x34297bf9; S=0x342aa6b9; converted property
@property(retain) NSArray *relationshipKeyPathsForPrefetching;	// G=0x34297ea9; S=0x342d56d5; converted property
@property(assign) unsigned resultType;	// G=0x342958a5; S=0x342aae45; converted property
@property(assign) BOOL returnsDistinctResults;	// G=0x342abf3d; S=0x342fa131; converted property
@property(assign) BOOL returnsObjectsAsFaults;	// G=0x34297be5; S=0x342c7f9d; converted property
@property(retain) NSArray *sortDescriptors;	// G=0x3429a599; S=0x342944dd; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x342f9fad
+ (id)fetchRequestWithEntityName:(id)entityName;	// 0x342fa089
+ (void)initialize;	// 0x342c09cd
- (id)init;	// 0x34294001
- (id)initWithCoder:(id)coder;	// 0x342d5b0d
- (id)initWithEntityName:(id)entityName;	// 0x342fa0cd
- (void)_incrementInUseCounter;	// 0x342c2a1d
- (BOOL)_isEditable;	// 0x342944c5
- (void)_resolveEntityWithContext:(id)context;	// 0x3429572d
- (void)_throwIfNotEditable;	// 0x34294475
// converted property getter: - (id)affectedStores;	// 0x34296735
- (id)copyWithZone:(NSZone *)zone;	// 0x342c8d25
- (void)dealloc;	// 0x342a1f75
- (id)description;	// 0x342fa161
- (void)encodeWithCoder:(id)coder;	// 0x342fa57d
// converted property getter: - (id)entity;	// 0x34295801
- (id)entityName;	// 0x342fa045
// converted property getter: - (unsigned)fetchBatchSize;	// 0x34297bd5
// converted property getter: - (unsigned)fetchLimit;	// 0x34295991
// converted property getter: - (unsigned)fetchOffset;	// 0x3429a639
// converted property getter: - (id)groupByProperties;	// 0x34299b11
- (BOOL)hasChanges;	// 0x342fa001
- (unsigned)hash;	// 0x342fa559
// converted property getter: - (id)havingPredicate;	// 0x34299115
// converted property getter: - (BOOL)includesPendingChanges;	// 0x342f9fcd
// converted property getter: - (BOOL)includesPropertyValues;	// 0x342959a1
// converted property getter: - (BOOL)includesSubentities;	// 0x342990e9
- (BOOL)isEqual:(id)equal;	// 0x342fa679
// converted property getter: - (id)predicate;	// 0x342990d9
// converted property getter: - (id)propertiesToFetch;	// 0x34297bf9
// converted property getter: - (id)relationshipKeyPathsForPrefetching;	// 0x34297ea9
- (unsigned)requestType;	// 0x34296731
// converted property getter: - (unsigned)resultType;	// 0x342958a5
// converted property getter: - (BOOL)returnsDistinctResults;	// 0x342abf3d
// converted property getter: - (BOOL)returnsObjectsAsFaults;	// 0x34297be5
// converted property setter: - (void)setAffectedStores:(id)stores;	// 0x342faf61
// converted property setter: - (void)setEntity:(id)entity;	// 0x342943c9
// converted property setter: - (void)setFetchBatchSize:(unsigned)size;	// 0x342c6ecd
// converted property setter: - (void)setFetchLimit:(unsigned)limit;	// 0x342c90f1
// converted property setter: - (void)setFetchOffset:(unsigned)offset;	// 0x342f9ff1
// converted property setter: - (void)setGroupByProperties:(id)properties;	// 0x342fa79d
// converted property setter: - (void)setHavingPredicate:(id)predicate;	// 0x342fa005
// converted property setter: - (void)setIncludesPendingChanges:(BOOL)changes;	// 0x342c9115
// converted property setter: - (void)setIncludesPropertyValues:(BOOL)values;	// 0x342c8e61
// converted property setter: - (void)setIncludesSubentities:(BOOL)subentities;	// 0x342f9fb1
// converted property setter: - (void)setPredicate:(id)predicate;	// 0x342a6b79
// converted property setter: - (void)setPropertiesToFetch:(id)fetch;	// 0x342aa6b9
// converted property setter: - (void)setRelationshipKeyPathsForPrefetching:(id)prefetching;	// 0x342d56d5
// converted property setter: - (void)setResultType:(unsigned)type;	// 0x342aae45
// converted property setter: - (void)setReturnsDistinctResults:(BOOL)results;	// 0x342fa131
// converted property setter: - (void)setReturnsObjectsAsFaults:(BOOL)faults;	// 0x342c7f9d
// converted property setter: - (void)setSortDescriptors:(id)descriptors;	// 0x342944dd
// converted property getter: - (id)sortDescriptors;	// 0x3429a599
- (id)stores;	// 0x342fa11d
@end


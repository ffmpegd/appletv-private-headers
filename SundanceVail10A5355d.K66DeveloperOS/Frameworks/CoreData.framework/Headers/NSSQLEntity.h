/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSStoreMapping.h"

@class NSString, NSArray, NSSQLStatement, NSSQLStoreMappingGenerator, NSSQLModel, NSSQLEntityKey, NSKnownKeysMappingStrategy, NSSQLOptLockKey, NSEntityDescription, NSSQLPrimaryKey, NSMutableDictionary, NSMutableArray;

@interface NSSQLEntity : NSStoreMapping {
	NSSQLModel *_model;	// 8 = 0x8
	NSEntityDescription *_entityDescription;	// 12 = 0xc
	NSString *_tableName;	// 16 = 0x10
	NSMutableDictionary *_properties;	// 20 = 0x14
	NSArray *_propertyAllCache;	// 24 = 0x18
	NSArray *_propertiesAllToManysCache;	// 28 = 0x1c
	NSArray *_propertyManyToManyCache;	// 32 = 0x20
	NSMutableArray *_columnsToFetch;	// 36 = 0x24
	NSMutableArray *_ekColumns;	// 40 = 0x28
	NSMutableArray *_fkColumns;	// 44 = 0x2c
	NSMutableArray *_fokColumns;	// 48 = 0x30
	NSMutableArray *_attrColumns;	// 52 = 0x34
	NSMutableArray *_virtualFKs;	// 56 = 0x38
	NSSQLPrimaryKey *_primaryKey;	// 60 = 0x3c
	NSSQLEntityKey *_entityKey;	// 64 = 0x40
	NSSQLOptLockKey *_optLockKey;	// 68 = 0x44
	NSMutableArray *_subentities;	// 72 = 0x48
	NSSQLEntity *_superentity;	// 76 = 0x4c
	NSSQLEntity *_rootEntity;	// 80 = 0x50
	NSSQLStoreMappingGenerator *_mappingGenerator;	// 84 = 0x54
	unsigned _entityID;	// 88 = 0x58
	unsigned _subentityMaxID;	// 92 = 0x5c
	NSRange _toOneRange;	// 96 = 0x60
	long long _maxPK;	// 104 = 0x68
	NSSQLStatement *_insertStatementCache;	// 112 = 0x70
	NSSQLStatement *_deletionStatementCache;	// 116 = 0x74
	NSSQLStatement *_faultingStatementCache;	// 120 = 0x78
	NSMutableDictionary *_toManyRelationshipStatementCache;	// 124 = 0x7c
	void *_fetch_entity_plan;	// 128 = 0x80
	NSKnownKeysMappingStrategy *_propertyMapping;	// 132 = 0x84
	void *_odiousHashHackStorage;	// 136 = 0x88
	unsigned _pkCount;	// 140 = 0x8c
	sqlentityFlags _sqlentityFlags;	// 144 = 0x90
}
@property(readonly, retain) NSMutableArray *columnsToFetch;	// G=0x3348a425; converted property
@property(readonly, retain) NSEntityDescription *entityDescription;	// G=0x33479de1; converted property
@property(readonly, assign) unsigned entityID;	// G=0x334a0dd5; converted property
@property(readonly, retain) NSSQLStoreMappingGenerator *mappingGenerator;	// G=0x3347bd79; converted property
@property(readonly, retain) NSSQLModel *model;	// G=0x33479f89; converted property
@property(readonly, retain) NSSQLOptLockKey *optLockKey;	// G=0x33490ec5; converted property
@property(readonly, retain) NSSQLPrimaryKey *primaryKey;	// G=0x334a0bcd; converted property
@property(readonly, retain) NSMutableDictionary *properties;	// G=0x3352ea29; converted property
@property(readonly, retain) NSKnownKeysMappingStrategy *propertyMapping;	// G=0x3352f94d; converted property
@property(readonly, retain) NSSQLEntity *rootEntity;	// G=0x3352f42d; converted property
@property(retain) NSMutableArray *subentities;	// G=0x3347c659; S=0x3352eddd; converted property
@property(readonly, assign) unsigned subentityMaxID;	// G=0x334a0de5; converted property
@property(retain) NSSQLEntity *superentity;	// G=0x3347af29; S=0x3352ee71; converted property
@property(readonly, retain) NSString *tableName;	// G=0x3348d55d; converted property
- (id)initWithModel:(id)model entityDescription:(id)description;	// 0x3347962d
- (void)_addColumnToFetch:(id)fetch;	// 0x3347b94d
- (void)_addForeignOrderKeyForToOne:(id)one entity:(id)entity;	// 0x334a35e9
- (void)_addRootColumnToFetch:(id)fetch;	// 0x3347ba19
- (void)_addSubentity:(id)subentity;	// 0x3352ee05
- (id)_addVirtualToOneForToMany:(id)many withInheritedProperty:(id)inheritedProperty;	// 0x334a3fb5
- (BOOL)_collectFKSlots:(id)slots error:(id *)error;	// 0x3352f0bd
- (void)_doPostModelGenerationCleanup;	// 0x3347d201
- (BOOL)_entityIsBroken:(id *)broken;	// 0x3352f3ad
- (unsigned)_generateIDWithSuperEntity:(id)superEntity nextID:(unsigned)anId;	// 0x33479df1
- (void)_generateInverseRelationshipsAndMore;	// 0x3347c669
- (void)_generateProperties;	// 0x3347a0cd
- (void *)_odiousHashHack;	// 0x3352f0ad
- (unsigned)_pkCount;	// 0x3352f43d
- (id)_propertySearchMapping;	// 0x3347c259
- (void)_resetPKCount;	// 0x3352f44d
- (void)_setMaxPK:(long long)pk;	// 0x3352f461
- (id)_sqlPropertyWithRenamingIdentifier:(id)renamingIdentifier;	// 0x3352ef29
- (NSRange)_toOneRange;	// 0x334a3101
- (void)addInsertedObject:(id)object toArray:(id)array;	// 0x3352f519
- (BOOL)addPropertiesForReadOnlyFetch:(id)readOnlyFetch keys:(id)keys context:(id)context;	// 0x334a0e55
- (id)attributeColumns;	// 0x33490eb5
- (id)attributeNamed:(id)named;	// 0x3352ef19
- (id)attributes;	// 0x3352f96d
- (void)cacheDeletionStatement:(id)statement;	// 0x3352f6f1
- (void)cacheFaultingStatement:(id)statement;	// 0x3352f755
- (void)cacheFaultingStatement:(id)statement andFetchRequest:(id)request forRelationship:(id)relationship;	// 0x3352f7e5
- (void)cacheInsertStatement:(id)statement;	// 0x3352f68d
- (void)clearCachedStatements;	// 0x3349d1e5
- (id)columnsToCreate;	// 0x3352edcd
// converted property getter: - (id)columnsToFetch;	// 0x3348a425
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x334a0955
- (void)dealloc;	// 0x3349cef9
- (id)deletionStatement;	// 0x3352f6e1
- (id)description;	// 0x3352f61d
// converted property getter: - (id)entityDescription;	// 0x33479de1
// converted property getter: - (unsigned)entityID;	// 0x334a0dd5
- (id)externalName;	// 0x3352f95d
- (id)faultingStatement;	// 0x3352f745
- (unsigned)fetchIndexForKey:(id)key;	// 0x3352ed81
- (void)finalize;	// 0x3352e98d
- (id)foreignEntityKeyColumns;	// 0x33490e95
- (id)foreignKeyColumns;	// 0x33490e85
- (id)foreignOrderKeyColumns;	// 0x33490ea5
- (BOOL)hasAttributesWithExternalDataReferences;	// 0x3348201d
- (BOOL)hasInheritance;	// 0x3348a459
- (BOOL)hasSubentities;	// 0x33486f41
- (id)insertStatement;	// 0x3352f67d
- (BOOL)isKindOfSQLEntity:(id)sqlentity;	// 0x3352eec1
- (BOOL)isRootEntity;	// 0x3347a0b5
- (id)manyToManyRelationships;	// 0x3352ec61
// converted property getter: - (id)mappingGenerator;	// 0x3347bd79
// converted property getter: - (id)model;	// 0x33479f89
- (id)name;	// 0x33479949
- (long long)nextPrimaryKey64;	// 0x3352f475
// converted property getter: - (id)optLockKey;	// 0x33490ec5
- (id)preparedFaultingCachesForRelationship:(id)relationship;	// 0x3352f7a9
// converted property getter: - (id)primaryKey;	// 0x334a0bcd
// converted property getter: - (id)properties;	// 0x3352ea29
- (id)propertiesByName;	// 0x334a0df5
// converted property getter: - (id)propertyMapping;	// 0x3352f94d
- (id)propertyNamed:(id)named;	// 0x3348be29
- (id)relationshipNamed:(id)named;	// 0x334a34cd
// converted property getter: - (id)rootEntity;	// 0x3352f42d
// converted property setter: - (void)setSubentities:(id)subentities;	// 0x3352eddd
// converted property setter: - (void)setSuperentity:(id)superentity;	// 0x3352ee71
// converted property getter: - (id)subentities;	// 0x3347c659
- (id)subentityKey;	// 0x334a0dc5
// converted property getter: - (unsigned)subentityMaxID;	// 0x334a0de5
// converted property getter: - (id)superentity;	// 0x3347af29
// converted property getter: - (id)tableName;	// 0x3348d55d
- (id)toManyRelationships;	// 0x3352eb41
- (id)virtualForeignKeyColumns;	// 0x334925d9
@end

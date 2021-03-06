/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSEntityMapping, NSMutableDictionary, NSSQLEntity;

@interface _NSSQLEntityMigrationDescription : NSObject {
	NSEntityMapping *_entityMapping;	// 4 = 0x4
	NSMutableDictionary *_sqlValuesByColumnName;	// 8 = 0x8
	NSMutableDictionary *_sourceEntitiesByToOneWithNewEntityKey;	// 12 = 0xc
	NSSQLEntity *_dstEntity;	// 16 = 0x10
	NSSQLEntity *_srcEntity;	// 20 = 0x14
	int _migrationType;	// 24 = 0x18
	NSMutableArray *_addedManyToManys;	// 28 = 0x1c
	NSMutableArray *_removedManyToManys;	// 32 = 0x20
	NSMutableArray *_transformedManyToManys;	// 36 = 0x24
	NSMutableArray *_processedTransforms;	// 40 = 0x28
	NSMutableArray *_pendingTransforms;	// 44 = 0x2c
}
@property(readonly, retain) NSMutableArray *addedManyToManys;	// G=0x33dfdbf5; converted property
@property(readonly, assign) NSSQLEntity *destinationEntity;	// G=0x33dfe3f5; @synthesize=_dstEntity
@property(readonly, assign) NSEntityMapping *entityMapping;	// G=0x33dfe409; @synthesize=_entityMapping
@property(readonly, assign) int migrationType;	// G=0x33dfe41d; @synthesize=_migrationType
@property(readonly, retain) NSMutableArray *removedManyToManys;	// G=0x33dfdde5; converted property
@property(readonly, retain) NSMutableDictionary *sourceEntitiesByToOneWithNewEntityKey;	// G=0x33dfcc25; converted property
@property(readonly, assign) NSSQLEntity *sourceEntity;	// G=0x33dfe3e1; @synthesize=_srcEntity
@property(readonly, retain) NSMutableArray *transformedManyToManys;	// G=0x33dfdfd5; converted property
- (id)initWithEntityMapping:(id)entityMapping sourceEntity:(id)entity destinationEntity:(id)entity3;	// 0x33dfc7d9
- (void)_generateSQLValueMappingsWithMigrationContext:(NSSQLMigrationContext)migrationContext;	// 0x33dfc9c5
- (void)_populateSQLValuesByPropertyFromTransforms:(id)transforms migrationContext:(NSSQLMigrationContext)context;	// 0x33dfd3e1
- (void)_populateSQLValuesForDestinationToOne:(id)one fromSourceToOne:(id)one2;	// 0x33dfcc35
- (void)_populateSQLValuesForVirtualToOnesWithMigrationContext:(NSSQLMigrationContext)migrationContext;	// 0x33dfcfa9
- (id)_unmappedRelationshipForFormerlyVirtualToOne:(id)one migrationContext:(NSSQLMigrationContext)context;	// 0x33dfce99
// converted property getter: - (id)addedManyToManys;	// 0x33dfdbf5
- (void)dealloc;	// 0x33dfc88d
// declared property getter: - (id)destinationEntity;	// 0x33dfe3f5
// declared property getter: - (id)entityMapping;	// 0x33dfe409
// declared property getter: - (int)migrationType;	// 0x33dfe41d
- (id)nextPropertyTransform;	// 0x33dfe239
// converted property getter: - (id)removedManyToManys;	// 0x33dfdde5
// converted property getter: - (id)sourceEntitiesByToOneWithNewEntityKey;	// 0x33dfcc25
// declared property getter: - (id)sourceEntity;	// 0x33dfe3e1
- (id)sqlValueForColumnName:(id)columnName migrationContext:(NSSQLMigrationContext)context;	// 0x33dfdbad
// converted property getter: - (id)transformedManyToManys;	// 0x33dfdfd5
@end


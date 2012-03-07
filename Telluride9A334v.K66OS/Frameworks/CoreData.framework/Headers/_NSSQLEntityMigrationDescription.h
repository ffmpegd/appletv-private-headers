/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSMutableArray, NSMutableDictionary, NSSQLEntity, NSEntityMapping;

__attribute__((visibility("hidden")))
@interface _NSSQLEntityMigrationDescription : NSObject {
@private
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
@property(readonly, retain) NSMutableArray *addedManyToManys;	// G=0x31f33125; converted property
@property(readonly, assign) NSSQLEntity *destinationEntity;	// G=0x31f32a15; @synthesize=_dstEntity
@property(readonly, assign) NSEntityMapping *entityMapping;	// G=0x31f32a05; @synthesize=_entityMapping
@property(readonly, assign) int migrationType;	// G=0x31f329f5; @synthesize=_migrationType
@property(readonly, retain) NSMutableArray *removedManyToManys;	// G=0x31f32f25; converted property
@property(readonly, retain) NSMutableDictionary *sourceEntitiesByToOneWithNewEntityKey;	// G=0x31f329e5; converted property
@property(readonly, assign) NSSQLEntity *sourceEntity;	// G=0x31f32a25; @synthesize=_srcEntity
@property(readonly, retain) NSMutableArray *transformedManyToManys;	// G=0x31f32cbd; converted property
- (id)initWithEntityMapping:(id)entityMapping sourceEntity:(id)entity destinationEntity:(id)entity3;	// 0x31f32a35
- (void)_generateSQLValueMappingsWithMigrationContext:(NSSQLMigrationContext)migrationContext;	// 0x31f344d5
- (void)_populateSQLValuesByPropertyFromTransforms:(id)transforms migrationContext:(NSSQLMigrationContext)context;	// 0x31f3336d
- (void)_populateSQLValuesForDestinationToOne:(id)one fromSourceToOne:(id)one2;	// 0x31f34201
- (void)_populateSQLValuesForVirtualToOnesWithMigrationContext:(NSSQLMigrationContext)migrationContext;	// 0x31f33c71
- (id)_unmappedRelationshipForFormerlyVirtualToOne:(id)one migrationContext:(NSSQLMigrationContext)context;	// 0x31f340e9
// converted property getter: - (id)addedManyToManys;	// 0x31f33125
- (void)dealloc;	// 0x31f34779
// declared property getter: - (id)destinationEntity;	// 0x31f32a15
// declared property getter: - (id)entityMapping;	// 0x31f32a05
// declared property getter: - (int)migrationType;	// 0x31f329f5
- (id)nextPropertyTransform;	// 0x31f32af5
// converted property getter: - (id)removedManyToManys;	// 0x31f32f25
// converted property getter: - (id)sourceEntitiesByToOneWithNewEntityKey;	// 0x31f329e5
// declared property getter: - (id)sourceEntity;	// 0x31f32a25
- (id)sqlValueForColumnName:(id)columnName migrationContext:(NSSQLMigrationContext)context;	// 0x31f33325
// converted property getter: - (id)transformedManyToManys;	// 0x31f32cbd
@end


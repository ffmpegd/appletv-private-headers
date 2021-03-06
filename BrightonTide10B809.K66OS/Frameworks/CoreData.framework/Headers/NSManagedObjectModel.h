/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "NSFastEnumeration.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSSet;

@interface NSManagedObjectModel : NSObject <NSCoding, NSCopying, NSFastEnumeration> {
	id _dataForOptimization;	// 4 = 0x4
	id *_optimizationHints;	// 8 = 0x8
	id _localizationPolicy;	// 12 = 0xc
	NSMutableDictionary *_entities;	// 16 = 0x10
	NSMutableDictionary *_configurations;	// 20 = 0x14
	NSMutableDictionary *_fetchRequestTemplates;	// 24 = 0x18
	NSSet *_versionIdentifiers;	// 28 = 0x1c
	managedObjectModelFlags _managedObjectModelFlags;	// 32 = 0x20
}
@property(readonly, retain) NSMutableDictionary *configurations;	// G=0x30f0fde5; converted property
@property(retain) NSMutableDictionary *entities;	// G=0x30ea0719; S=0x30f0fc59; converted property
@property(retain) id localizationDictionary;	// G=0x30f10219; S=0x30f10261; converted property
@property(retain) NSSet *versionIdentifiers;	// G=0x30ea17ad; S=0x30f102ed; converted property
+ (void)_deepCollectEntitiesInArray:(id)array entity:(id)entity;	// 0x30f141f5
+ (id)_modelPathsFromBundles:(id)bundles;	// 0x30f14289
+ (id)_newModelFromOptimizedEncoding:(id)optimizedEncoding error:(id *)error;	// 0x30e8c60d
+ (void)initialize;	// 0x30e8b891
+ (id)mergedModelFromBundles:(id)bundles;	// 0x30f0e189
+ (id)mergedModelFromBundles:(id)bundles forStoreMetadata:(id)storeMetadata;	// 0x30f0ec59
+ (id)modelByMergingModels:(id)models;	// 0x30f0e37d
+ (id)modelByMergingModels:(id)models forStoreMetadata:(id)storeMetadata;	// 0x30f0ee45
- (id)init;	// 0x30e90db9
- (id)initWithCoder:(id)coder;	// 0x30f0f301
- (id)initWithContentsOfOptimizedURL:(id)optimizedURL;	// 0x30e8c43d
- (id)initWithContentsOfURL:(id)url;	// 0x30e8b8ad
- (id)initWithContentsOfURL:(id)url forStoreMetadata:(id)storeMetadata;	// 0x30f139d9
- (void)_addEntities:(id)entities toConfiguration:(id)configuration;	// 0x30f14dc9
- (void)_addEntity:(id)entity;	// 0x30f13bf1
- (void)_addVersionIdentifiers:(id)identifiers;	// 0x30f15049
- (id)_configurationsByName;	// 0x30f14db9
- (void)_createCachesAndOptimizeState;	// 0x30f145e9
- (id)_entitiesByVersionHash;	// 0x30f150f1
- (id)_entityForName:(id)name;	// 0x30ea2a81
- (id)_entityVersionHashesByNameInStyle:(unsigned)style;	// 0x30ea0739
- (void)_flattenProperties;	// 0x30f14515
- (BOOL)_hasPrecomputedKeyOrder;	// 0x30e94f65
- (id)_initWithEntities:(id)entities;	// 0x30e90e09
- (BOOL)_isConfiguration:(id)configuration inStyle:(unsigned)style compatibleWithStoreMetadata:(id)storeMetadata;	// 0x30ea0359
- (BOOL)_isOptimizedForEncoding;	// 0x30f14b39
- (id)_localizationPolicy;	// 0x30f15039
- (id)_modelForVersionHashes:(id)versionHashes;	// 0x30f13e89
- (id)_optimizedEncoding:(id *)encoding;	// 0x30f1035d
- (id)_precomputedKeysForEntity:(id)entity;	// 0x30e99f35
- (void)_removeEntities:(id)entities fromConfiguration:(id)configuration;	// 0x30f14f39
- (void)_removeEntity:(id)entity;	// 0x30f14d31
- (void)_removeEntityNamed:(id)named;	// 0x30f14bad
- (void)_restoreValidation;	// 0x30f152f1
- (void)_setIsEditable:(BOOL)editable;	// 0x30e91411
- (void)_setIsEditable:(BOOL)editable optimizationStyle:(unsigned)style;	// 0x30e91425
- (void)_setLocalizationPolicy:(id)policy;	// 0x30e9107d
- (id)_sortedEntitiesForConfiguration:(id)configuration;	// 0x30e956d1
- (void)_stripForMigration;	// 0x30f15229
- (void)_throwIfNotEditable;	// 0x30f14b4d
- (id)_versionIdentifiersAsArray;	// 0x30ea1785
// converted property getter: - (id)configurations;	// 0x30f0fde5
- (id)copyWithZone:(NSZone *)zone;	// 0x30f0f57d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x30f0fb95
- (void)dealloc;	// 0x30e8c2f1
- (id)description;	// 0x30f0faf1
- (void)encodeWithCoder:(id)coder;	// 0x30f0f0a5
// converted property getter: - (id)entities;	// 0x30ea0719
- (id)entitiesByName;	// 0x30ea2699
- (id)entitiesForConfiguration:(id)configuration;	// 0x30e9579d
- (id)entityVersionHashesByName;	// 0x30ea1771
- (id)fetchRequestFromTemplateWithName:(id)name substitutionVariables:(id)variables;	// 0x30f101a1
- (id)fetchRequestTemplateForName:(id)name;	// 0x30f0ffa9
- (id)fetchRequestTemplatesByName;	// 0x30f0ff85
- (unsigned)hash;	// 0x30f0fa11
- (BOOL)isConfiguration:(id)configuration compatibleWithStoreMetadata:(id)storeMetadata;	// 0x30ea0339
- (BOOL)isEditable;	// 0x30f144fd
- (BOOL)isEqual:(id)equal;	// 0x30f0fa39
// converted property getter: - (id)localizationDictionary;	// 0x30f10219
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x30f0fa01
// converted property setter: - (void)setEntities:(id)entities;	// 0x30f0fc59
- (void)setEntities:(id)entities forConfiguration:(id)configuration;	// 0x30f0fe15
- (void)setFetchRequestTemplate:(id)aTemplate forName:(id)name;	// 0x30f0ffd5
// converted property setter: - (void)setLocalizationDictionary:(id)dictionary;	// 0x30f10261
// converted property setter: - (void)setVersionIdentifiers:(id)identifiers;	// 0x30f102ed
- (id)versionHash;	// 0x30f13d25
// converted property getter: - (id)versionIdentifiers;	// 0x30ea17ad
@end


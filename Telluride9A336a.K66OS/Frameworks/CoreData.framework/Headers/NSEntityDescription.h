/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSCoding.h"
#import "NSFastEnumeration.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSManagedObjectModel, NSData, NSString, NSMutableDictionary;

@interface NSEntityDescription : NSObject <NSCoding, NSCopying, NSFastEnumeration> {
@private
	int _cd_rc;	// 4 = 0x4
	id _snapshotClass;	// 8 = 0x8
	NSString *_versionHashModifier;	// 12 = 0xc
	NSData *_versionHash;	// 16 = 0x10
	NSManagedObjectModel *_model;	// 20 = 0x14
	NSString *_classNameForEntity;	// 24 = 0x18
	Class _instanceClass;	// 28 = 0x1c
	NSString *_name;	// 32 = 0x20
	NSEntityDescription *_rootentity;	// 36 = 0x24
	NSEntityDescription *_superentity;	// 40 = 0x28
	NSMutableDictionary *_subentities;	// 44 = 0x2c
	NSMutableDictionary *_properties;	// 48 = 0x30
	id _propertyMapping;	// 52 = 0x34
	NSRange *_propertyRanges;	// 56 = 0x38
	entityDescriptionFlags _entityDescriptionFlags;	// 60 = 0x3c
	void *_extraIvars;	// 64 = 0x40
	NSMutableDictionary *_userInfo;	// 68 = 0x44
	id _flattenedSubentities;	// 72 = 0x48
	id **_kvcPropertyAccessors;	// 76 = 0x4c
	long _modelsReferenceIDForEntity;	// 80 = 0x50
}
@property(assign, getter=isAbstract) BOOL abstract;	// G=0x32308cf5; S=0x32353879; converted property
@property(retain) id compoundIndexes;	// G=0x32354e45; S=0x322f4e19; converted property
@property(retain) id elementID;	// G=0x32354775; S=0x32354765; converted property
@property(retain) id managedObjectClassName;	// G=0x3231a6bd; S=0x32353481; converted property
@property(retain) NSString *name;	// G=0x322f4e09; S=0x323536f9; converted property
@property(retain) NSMutableDictionary *properties;	// G=0x32308d09; S=0x323538ad; converted property
@property(retain) id renamingIdentifier;	// G=0x323535ed; S=0x322f4d61; converted property
@property(retain) NSMutableDictionary *subentities;	// G=0x322ff099; S=0x32354051; converted property
@property(readonly, retain) NSEntityDescription *superentity;	// G=0x322f6be9; converted property
@property(retain) NSMutableDictionary *userInfo;	// G=0x32352e69; S=0x32353341; converted property
@property(readonly, retain) NSData *versionHash;	// G=0x323089ad; converted property
@property(retain) NSString *versionHashModifier;	// G=0x32352ead; S=0x323536a5; converted property
+ (id)_MOClassName;	// 0x32356aa9
+ (id)entityForName:(id)name inManagedObjectContext:(id)managedObjectContext;	// 0x3230a325
+ (void)initialize;	// 0x3232ac25
+ (id)insertNewObjectForEntityForName:(id)name inManagedObjectContext:(id)managedObjectContext;	// 0x32353521
- (id)init;	// 0x32352fb5
- (id)initWithCoder:(id)coder;	// 0x322f42cd
- (void)_addProperty:(id)property;	// 0x32355e65
- (void)_addSubentity:(id)subentity;	// 0x32355a91
- (id)_allPropertyNames;	// 0x32354abd
- (id)_attributeNamed:(id)named;	// 0x32354785
- (CFSetRef)_collectSubentities;	// 0x322f90b9
- (id)_compoundIndexes;	// 0x32352f9d
- (void)_createCachesAndOptimizeState;	// 0x322f6c71
- (Class)_entityClass;	// 0x3231c88d
- (void)_flattenProperties;	// 0x322f68d1
- (BOOL)_hasAttributesWithExternalDataReferences;	// 0x322fe83d
- (BOOL)_hasCustomPrimitiveProperties;	// 0x32357c8d
- (BOOL)_hasPropertiesIndexedBySpotlight;	// 0x323558a1
- (BOOL)_hasPropertiesStoredInTruthFile;	// 0x32355999
- (id)_initWithName:(id)name;	// 0x32354c69
- (BOOL)_isDeallocating;	// 0x32353621
- (BOOL)_isEditable;	// 0x322fe94d
- (BOOL)_isFlattened;	// 0x322f6bd5
- (BOOL)_isInheritedPropertyNamed:(id)named;	// 0x32354a4d
- (void *)_leopardStyleAttributesByName;	// 0x32300755
- (void *)_leopardStyleRelationshipsByName;	// 0x32300d99
- (id)_localRelationshipNamed:(id)named;	// 0x32354839
- (long)_modelsReferenceID;	// 0x3231974d
- (id)_newMappingForPropertiesOfRange:(unsigned)range;	// 0x322f92e5
- (void *)_newSnowLeopardStyleDictionaryContainingPropertiesOfType:(unsigned)type;	// 0x32356361
- (id)_new_implicitlyObservedKeys;	// 0x32354b7d
- (unsigned long)_offsetRelationshipIndex:(unsigned long)index fromSuperEntity:(id)superEntity andIsToMany:(BOOL)many;	// 0x32352ef9
- (id)_propertiesOfType:(unsigned)type;	// 0x3235535d
- (id)_propertyNamed:(id)named;	// 0x32314e45
- (NSRange *)_propertyRangesByType;	// 0x32352ee9
- (id)_propertySearchMapping;	// 0x322f9391
- (id)_propertyWithRenamingIdentifier:(id)renamingIdentifier;	// 0x3235522d
- (id)_relationshipNamed:(id)named;	// 0x3235487d
- (id)_relationshipNamesByType:(BOOL)type;	// 0x323555a9
- (void)_removeProperty:(id)property;	// 0x32355d41
- (void)_removePropertyNamed:(id)named;	// 0x32354ae5
- (void)_removeSubentity:(id)subentity;	// 0x323549a1
- (void)_restoreValidation;	// 0x323557d9
- (id)_rootEntity;	// 0x3235495d
- (void)_setIsEditable:(BOOL)editable;	// 0x32356085
- (void)_setIsFlattened:(BOOL)flattened;	// 0x322f6bf9
- (void)_setManagedObjectModel:(id)model;	// 0x32355c65
- (void)_setModelsReferenceID:(long)anId;	// 0x322f6c61
- (void)_setSuperentity:(id)superentity;	// 0x32355cdd
- (BOOL)_skipValidation;	// 0x32352f79
- (Class)_snapshotClass;	// 0x32355e11
- (id)_sortedSubentities;	// 0x322fefcd
- (void)_stripForMigration;	// 0x323556fd
- (BOOL)_subentitiesIncludes:(id)includes;	// 0x32356211
- (id)_subentityNamed:(id)named;	// 0x32354931
- (void)_throwIfNotEditable;	// 0x322f6c25
- (BOOL)_tryRetain;	// 0x32353649
- (void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 uniquedMappings:(id)mappings entities:(id)entities;	// 0x323563d5
- (id)attributeKeys;	// 0x3235323d
- (id)attributesByName;	// 0x323532c9
// converted property getter: - (id)compoundIndexes;	// 0x32354e45
- (id)copyWithZone:(NSZone *)zone;	// 0x32354301
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x32353a25
- (void)dealloc;	// 0x32325625
- (id)description;	// 0x323541c9
// converted property getter: - (id)elementID;	// 0x32354775
- (void)encodeWithCoder:(id)coder;	// 0x32352fc9
- (void)finalize;	// 0x32354701
- (unsigned)hash;	// 0x3232cd39
- (id)inverseForRelationshipKey:(id)relationshipKey;	// 0x323533b1
// converted property getter: - (BOOL)isAbstract;	// 0x32308cf5
- (BOOL)isEqual:(id)equal;	// 0x3232cd61
- (BOOL)isKindOfEntity:(id)entity;	// 0x32353395
- (id)knownKeysMappingStrategy;	// 0x32355be5
// converted property getter: - (id)managedObjectClassName;	// 0x3231a6bd
- (id)managedObjectModel;	// 0x32352e9d
// converted property getter: - (id)name;	// 0x322f4e09
// converted property getter: - (id)properties;	// 0x32308d09
- (id)propertiesByName;	// 0x322f93a1
- (id)relationshipsByName;	// 0x32353305
- (id)relationshipsWithDestinationEntity:(id)destinationEntity;	// 0x32353b11
- (oneway void)release;	// 0x322f4ce1
// converted property getter: - (id)renamingIdentifier;	// 0x323535ed
- (id)retain;	// 0x322f4bf9
- (unsigned)retainCount;	// 0x32352ebd
// converted property setter: - (void)setAbstract:(BOOL)anAbstract;	// 0x32353879
// converted property setter: - (void)setCompoundIndexes:(id)indexes;	// 0x322f4e19
// converted property setter: - (void)setElementID:(id)anId;	// 0x32354765
// converted property setter: - (void)setManagedObjectClassName:(id)name;	// 0x32353481
// converted property setter: - (void)setName:(id)name;	// 0x323536f9
// converted property setter: - (void)setProperties:(id)properties;	// 0x323538ad
// converted property setter: - (void)setRenamingIdentifier:(id)identifier;	// 0x322f4d61
// converted property setter: - (void)setSubentities:(id)subentities;	// 0x32354051
// converted property setter: - (void)setUserInfo:(id)info;	// 0x32353341
// converted property setter: - (void)setVersionHashModifier:(id)modifier;	// 0x323536a5
// converted property getter: - (id)subentities;	// 0x322ff099
- (id)subentitiesByName;	// 0x32352e8d
// converted property getter: - (id)superentity;	// 0x322f6be9
- (id)toManyRelationshipKeys;	// 0x32353e79
- (id)toOneRelationshipKeys;	// 0x32353ca1
// converted property getter: - (id)userInfo;	// 0x32352e69
// converted property getter: - (id)versionHash;	// 0x323089ad
// converted property getter: - (id)versionHashModifier;	// 0x32352ead
@end


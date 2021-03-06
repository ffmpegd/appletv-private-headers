/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSExpression, NSDictionary, NSData, NSString, NSMutableArray;

@interface NSEntityMapping : NSObject {
@private
	void *_reserved;	// 4 = 0x4
	void *_reserved1;	// 8 = 0x8
	NSDictionary *_mappingsByName;	// 12 = 0xc
	NSString *_name;	// 16 = 0x10
	unsigned _mappingType;	// 20 = 0x14
	NSString *_sourceEntityName;	// 24 = 0x18
	NSData *_sourceEntityVersionHash;	// 28 = 0x1c
	NSString *_destinationEntityName;	// 32 = 0x20
	NSData *_destinationEntityVersionHash;	// 36 = 0x24
	NSExpression *_sourceExpression;	// 40 = 0x28
	NSDictionary *_userInfo;	// 44 = 0x2c
	NSString *_entityMigrationPolicyClassName;	// 48 = 0x30
	NSMutableArray *_attributeMappings;	// 52 = 0x34
	NSMutableArray *_relationshipMappings;	// 56 = 0x38
	entityMappingFlags _entityMappingFlags;	// 60 = 0x3c
}
@property(retain) NSMutableArray *attributeMappings;	// G=0x32b353d9; S=0x32b35ced; converted property
@property(retain) NSString *destinationEntityName;	// G=0x32b353b9; S=0x32b35c29; converted property
@property(retain) NSData *destinationEntityVersionHash;	// G=0x32b353c9; S=0x32b35c7d; converted property
@property(retain) NSString *entityMigrationPolicyClassName;	// G=0x32b35419; S=0x32b35e3d; converted property
@property(assign) unsigned mappingType;	// G=0x32b35379; S=0x32b35389; converted property
@property(retain) NSString *name;	// G=0x32b35a95; S=0x32b35b11; converted property
@property(retain) NSMutableArray *relationshipMappings;	// G=0x32b353e9; S=0x32b35d41; converted property
@property(retain) NSString *sourceEntityName;	// G=0x32b35399; S=0x32b35b65; converted property
@property(retain) NSData *sourceEntityVersionHash;	// G=0x32b353a9; S=0x32b35bb9; converted property
@property(retain) NSExpression *sourceExpression;	// G=0x32b353f9; S=0x32b35d95; converted property
@property(retain) NSDictionary *userInfo;	// G=0x32b35409; S=0x32b35de9; converted property
+ (void)initialize;	// 0x32b35e91
- (id)init;	// 0x32b35445
- (id)initWithCoder:(id)coder;	// 0x32b362d1
- (void)_addAttributeMapping:(id)mapping;	// 0x32b35ead
- (void)_addRelationshipMapping:(id)mapping;	// 0x32b35ee9
- (void)_createCachesAndOptimizeState;	// 0x32b35441
- (id)_initWithSourceEntityDescription:(id)sourceEntityDescription destinationEntityDescription:(id)description;	// 0x32b36521
- (id)_mappingsByName;	// 0x32b368fd
- (id)_migrationPolicy;	// 0x32b3671d
- (void)_setIsEditable:(BOOL)editable;	// 0x32b36809
- (void)_throwIfNotEditable;	// 0x32b3689d
// converted property getter: - (id)attributeMappings;	// 0x32b353d9
- (id)copyWithZone:(NSZone *)zone;	// 0x32b35665
- (void)dealloc;	// 0x32b35f25
- (id)description;	// 0x32b35949
// converted property getter: - (id)destinationEntityName;	// 0x32b353b9
// converted property getter: - (id)destinationEntityVersionHash;	// 0x32b353c9
- (void)encodeWithCoder:(id)coder;	// 0x32b35459
// converted property getter: - (id)entityMigrationPolicyClassName;	// 0x32b35419
- (BOOL)isEditable;	// 0x32b35429
- (BOOL)isEqual:(id)equal;	// 0x32b36089
// converted property getter: - (unsigned)mappingType;	// 0x32b35379
// converted property getter: - (id)name;	// 0x32b35a95
// converted property getter: - (id)relationshipMappings;	// 0x32b353e9
// converted property setter: - (void)setAttributeMappings:(id)mappings;	// 0x32b35ced
// converted property setter: - (void)setDestinationEntityName:(id)name;	// 0x32b35c29
// converted property setter: - (void)setDestinationEntityVersionHash:(id)hash;	// 0x32b35c7d
// converted property setter: - (void)setEntityMigrationPolicyClassName:(id)name;	// 0x32b35e3d
// converted property setter: - (void)setMappingType:(unsigned)type;	// 0x32b35389
// converted property setter: - (void)setName:(id)name;	// 0x32b35b11
// converted property setter: - (void)setRelationshipMappings:(id)mappings;	// 0x32b35d41
// converted property setter: - (void)setSourceEntityName:(id)name;	// 0x32b35b65
// converted property setter: - (void)setSourceEntityVersionHash:(id)hash;	// 0x32b35bb9
// converted property setter: - (void)setSourceExpression:(id)expression;	// 0x32b35d95
// converted property setter: - (void)setUserInfo:(id)info;	// 0x32b35de9
// converted property getter: - (id)sourceEntityName;	// 0x32b35399
// converted property getter: - (id)sourceEntityVersionHash;	// 0x32b353a9
// converted property getter: - (id)sourceExpression;	// 0x32b353f9
// converted property getter: - (id)userInfo;	// 0x32b35409
@end


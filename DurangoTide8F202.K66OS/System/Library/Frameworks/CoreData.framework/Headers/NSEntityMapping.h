/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSData, NSDictionary, NSMutableArray, NSString, NSExpression;

@interface NSEntityMapping : NSObject {
@private
	void *_reserved;	// 4 = 0x4
	void *_reserved1;	// 8 = 0x8
	void *_reserved2;	// 12 = 0xc
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
@property(retain) NSMutableArray *attributeMappings;	// G=0x3312cf59; S=0x3312d15d; converted property
@property(retain) NSString *destinationEntityName;	// G=0x3312cf39; S=0x3312d20d; converted property
@property(retain) NSData *destinationEntityVersionHash;	// G=0x3312cf49; S=0x3312d1a9; converted property
@property(retain) NSString *entityMigrationPolicyClassName;	// G=0x3312cf99; S=0x3312d02d; converted property
@property(assign) unsigned mappingType;	// G=0x3312cef9; S=0x3312cf09; converted property
@property(retain) NSString *name;	// G=0x3312d355; S=0x3312d309; converted property
@property(retain) NSMutableArray *relationshipMappings;	// G=0x3312cf69; S=0x3312d111; converted property
@property(retain) NSString *sourceEntityName;	// G=0x3312cf19; S=0x3312d2bd; converted property
@property(retain) NSData *sourceEntityVersionHash;	// G=0x3312cf29; S=0x3312d259; converted property
@property(retain) NSExpression *sourceExpression;	// G=0x3312cf79; S=0x3312d0c5; converted property
@property(retain) NSDictionary *userInfo;	// G=0x3312cf89; S=0x3312d079; converted property
+ (void)initialize;	// 0x3312d94d
- (id)init;	// 0x3312d935
- (id)initWithCoder:(id)coder;	// 0x3312db39
- (void)_addAttributeMapping:(id)mapping;	// 0x3312cff9
- (void)_addRelationshipMapping:(id)mapping;	// 0x3312cfc5
- (void)_createCachesAndOptimizeState;	// 0x3312cfc1
- (id)_initWithSourceEntityDescription:(id)sourceEntityDescription destinationEntityDescription:(id)description;	// 0x3312d96d
- (id)_migrationPolicy;	// 0x3312e181
- (void)_setIsEditable:(BOOL)editable;	// 0x3312e0f9
- (void)_throwIfNotEditable;	// 0x3312e0a9
// converted property getter: - (id)attributeMappings;	// 0x3312cf59
- (id)copyWithZone:(NSZone *)zone;	// 0x3312d50d
- (void)dealloc;	// 0x3312dd45
- (id)description;	// 0x3312d3cd
// converted property getter: - (id)destinationEntityName;	// 0x3312cf39
// converted property getter: - (id)destinationEntityVersionHash;	// 0x3312cf49
- (void)encodeWithCoder:(id)coder;	// 0x3312d789
// converted property getter: - (id)entityMigrationPolicyClassName;	// 0x3312cf99
- (BOOL)isEditable;	// 0x3312cfa9
- (BOOL)isEqual:(id)equal;	// 0x3312de79
// converted property getter: - (unsigned)mappingType;	// 0x3312cef9
// converted property getter: - (id)name;	// 0x3312d355
// converted property getter: - (id)relationshipMappings;	// 0x3312cf69
// converted property setter: - (void)setAttributeMappings:(id)mappings;	// 0x3312d15d
// converted property setter: - (void)setDestinationEntityName:(id)name;	// 0x3312d20d
// converted property setter: - (void)setDestinationEntityVersionHash:(id)hash;	// 0x3312d1a9
// converted property setter: - (void)setEntityMigrationPolicyClassName:(id)name;	// 0x3312d02d
// converted property setter: - (void)setMappingType:(unsigned)type;	// 0x3312cf09
// converted property setter: - (void)setName:(id)name;	// 0x3312d309
// converted property setter: - (void)setRelationshipMappings:(id)mappings;	// 0x3312d111
// converted property setter: - (void)setSourceEntityName:(id)name;	// 0x3312d2bd
// converted property setter: - (void)setSourceEntityVersionHash:(id)hash;	// 0x3312d259
// converted property setter: - (void)setSourceExpression:(id)expression;	// 0x3312d0c5
// converted property setter: - (void)setUserInfo:(id)info;	// 0x3312d079
// converted property getter: - (id)sourceEntityName;	// 0x3312cf19
// converted property getter: - (id)sourceEntityVersionHash;	// 0x3312cf29
// converted property getter: - (id)sourceExpression;	// 0x3312cf79
// converted property getter: - (id)userInfo;	// 0x3312cf89
@end

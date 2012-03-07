/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSStoreMapping.h"

@class NSString, NSPropertyDescription, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLProperty : NSStoreMapping {
@private
	NSString *_name;	// 8 = 0x8
	NSPropertyDescription *_propertyDescription;	// 12 = 0xc
	NSSQLEntity *_entity;	// 16 = 0x10
	unsigned _propertyType;	// 20 = 0x14
}
@property(readonly, retain) NSSQLEntity *entity;	// G=0x3232c38d; converted property
@property(readonly, retain) NSString *name;	// G=0x323012b5; converted property
@property(retain) NSPropertyDescription *propertyDescription;	// G=0x32312fdd; S=0x32329aad; converted property
@property(readonly, assign) unsigned propertyType;	// G=0x323011f9; converted property
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x32300fa9
- (void)_setName:(id)name;	// 0x32301025
- (id)columnName;	// 0x323d7029
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x32329925
- (void)dealloc;	// 0x32317695
- (id)description;	// 0x323d7105
// converted property getter: - (id)entity;	// 0x3232c38d
- (id)externalName;	// 0x323299fd
- (BOOL)isAttribute;	// 0x323d7055
- (BOOL)isColumn;	// 0x323d702d
- (BOOL)isEntityKey;	// 0x323d70cd
- (BOOL)isEqual:(id)equal;	// 0x323d7189
- (BOOL)isForeignEntityKey;	// 0x323d709d
- (BOOL)isForeignKey;	// 0x323d7085
- (BOOL)isForeignOrderKey;	// 0x323d70b5
- (BOOL)isManyToMany;	// 0x32313005
- (BOOL)isOptLockKey;	// 0x323d70e5
- (BOOL)isPrimaryKey;	// 0x323d706d
- (BOOL)isRelationship;	// 0x32302cd1
- (BOOL)isToMany;	// 0x32312fed
- (BOOL)isToOne;	// 0x32314035
// converted property getter: - (id)name;	// 0x323012b5
// converted property getter: - (id)propertyDescription;	// 0x32312fdd
// converted property getter: - (unsigned)propertyType;	// 0x323011f9
- (void)setEntityForReadOnlyFetch:(id)readOnlyFetch;	// 0x32329d75
// converted property setter: - (void)setPropertyDescription:(id)description;	// 0x32329aad
- (unsigned)slot;	// 0x323d70fd
@end

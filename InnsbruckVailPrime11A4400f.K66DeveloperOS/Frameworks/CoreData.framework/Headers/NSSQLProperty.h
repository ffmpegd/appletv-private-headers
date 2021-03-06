/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSStoreMapping.h"

@class NSPropertyDescription, NSSQLEntity, NSString;

@interface NSSQLProperty : NSStoreMapping {
	NSString *_name;	// 8 = 0x8
	NSPropertyDescription *_propertyDescription;	// 12 = 0xc
	NSSQLEntity *_entity;	// 16 = 0x10
	unsigned _propertyType;	// 20 = 0x14
}
@property(readonly, retain) NSSQLEntity *entity;	// G=0x2d056d21; converted property
@property(readonly, retain) NSString *name;	// G=0x2d054ae9; converted property
@property(retain) NSPropertyDescription *propertyDescription;	// G=0x2d056ba1; S=0x2d12931d; converted property
@property(readonly, assign) unsigned propertyType;	// G=0x2d054a2d; converted property
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x2d0547e1
- (void)_setName:(id)name;	// 0x2d054859
- (id)columnName;	// 0x2d12932d
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x2d12950d
- (void)dealloc;	// 0x2d1292b1
- (id)description;	// 0x2d129481
// converted property getter: - (id)entity;	// 0x2d056d21
- (id)externalName;	// 0x2d129331
- (BOOL)isAttribute;	// 0x2d129369
- (BOOL)isColumn;	// 0x2d129341
- (BOOL)isEntityKey;	// 0x2d1293e1
- (BOOL)isEqual:(id)equal;	// 0x2d129411
- (BOOL)isForeignEntityKey;	// 0x2d1293b1
- (BOOL)isForeignKey;	// 0x2d129399
- (BOOL)isForeignOrderKey;	// 0x2d1293c9
- (BOOL)isManyToMany;	// 0x2d056bb1
- (BOOL)isOptLockKey;	// 0x2d1293f9
- (BOOL)isPrimaryKey;	// 0x2d129381
- (BOOL)isRelationship;	// 0x2d056b65
- (BOOL)isToMany;	// 0x2d056d31
- (BOOL)isToOne;	// 0x2d056d09
// converted property getter: - (id)name;	// 0x2d054ae9
// converted property getter: - (id)propertyDescription;	// 0x2d056ba1
// converted property getter: - (unsigned)propertyType;	// 0x2d054a2d
- (void)setEntityForReadOnlyFetch:(id)readOnlyFetch;	// 0x2d1295ad
// converted property setter: - (void)setPropertyDescription:(id)description;	// 0x2d12931d
- (unsigned)slot;	// 0x2d129505
@end


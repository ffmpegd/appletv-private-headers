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
@property(readonly, retain) NSSQLEntity *entity;	// G=0x3478d38d; converted property
@property(readonly, retain) NSString *name;	// G=0x347622b5; converted property
@property(retain) NSPropertyDescription *propertyDescription;	// G=0x34773fdd; S=0x3478aaad; converted property
@property(readonly, assign) unsigned propertyType;	// G=0x347621f9; converted property
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x34761fa9
- (void)_setName:(id)name;	// 0x34762025
- (id)columnName;	// 0x34838029
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x3478a925
- (void)dealloc;	// 0x34778695
- (id)description;	// 0x34838105
// converted property getter: - (id)entity;	// 0x3478d38d
- (id)externalName;	// 0x3478a9fd
- (BOOL)isAttribute;	// 0x34838055
- (BOOL)isColumn;	// 0x3483802d
- (BOOL)isEntityKey;	// 0x348380cd
- (BOOL)isEqual:(id)equal;	// 0x34838189
- (BOOL)isForeignEntityKey;	// 0x3483809d
- (BOOL)isForeignKey;	// 0x34838085
- (BOOL)isForeignOrderKey;	// 0x348380b5
- (BOOL)isManyToMany;	// 0x34774005
- (BOOL)isOptLockKey;	// 0x348380e5
- (BOOL)isPrimaryKey;	// 0x3483806d
- (BOOL)isRelationship;	// 0x34763cd1
- (BOOL)isToMany;	// 0x34773fed
- (BOOL)isToOne;	// 0x34775035
// converted property getter: - (id)name;	// 0x347622b5
// converted property getter: - (id)propertyDescription;	// 0x34773fdd
// converted property getter: - (unsigned)propertyType;	// 0x347621f9
- (void)setEntityForReadOnlyFetch:(id)readOnlyFetch;	// 0x3478ad75
// converted property setter: - (void)setPropertyDescription:(id)description;	// 0x3478aaad
- (unsigned)slot;	// 0x348380fd
@end


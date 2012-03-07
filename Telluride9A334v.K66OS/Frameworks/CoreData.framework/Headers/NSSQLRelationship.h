/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLProperty.h"

@class NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLRelationship : NSSQLProperty {
@private
	NSSQLEntity *_destinationEntity;	// 24 = 0x18
	NSSQLRelationship *_inverse;	// 28 = 0x1c
}
@property(readonly, retain) NSSQLEntity *destinationEntity;	// G=0x31e6f1e1; converted property
- (id)initForReadOnlyFetchWithEntity:(id)entity propertyDescription:(id)description;	// 0x31f1a219
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x31e6ed75
- (void)_setForeignOrderKey:(id)key;	// 0x31f1a215
- (void)_setInverseRelationship:(id)relationship;	// 0x31e6f285
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x31f1a259
- (id)correlationTableName;	// 0x31f1a211
- (void)dealloc;	// 0x31f1a2d1
// converted property getter: - (id)destinationEntity;	// 0x31e6f1e1
- (id)foreignKey;	// 0x31e6f389
- (id)inverseRelationship;	// 0x31e6f255
- (BOOL)isOrdered;	// 0x31f1a2a9
- (id)relationshipDescription;	// 0x31e6f265
- (id)sourceEntity;	// 0x31e6f569
@end

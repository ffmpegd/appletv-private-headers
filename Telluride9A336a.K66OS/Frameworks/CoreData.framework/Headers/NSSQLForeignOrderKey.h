/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLColumn.h"

@class NSSQLForeignKey;

__attribute__((visibility("hidden")))
@interface NSSQLForeignOrderKey : NSSQLColumn {
@private
	NSSQLForeignKey *_foreignKey;	// 52 = 0x34
}
@property(readonly, retain) NSSQLForeignKey *foreignKey;	// G=0x32403135; converted property
- (id)initForReadOnlyFetchingOfEntity:(id)entity toOneRelationship:(id)oneRelationship;	// 0x324031bd
- (id)initWithEntity:(id)entity foreignKey:(id)key;	// 0x324032bd
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x32403261
- (void)dealloc;	// 0x32403155
// converted property getter: - (id)foreignKey;	// 0x32403135
- (void)setFKForReadOnlyFetch:(id)readOnlyFetch;	// 0x32403145
- (id)toOneRelationship;	// 0x32403195
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLRelationship.h"

@class NSSQLForeignEntityKey, NSSQLForeignKey, NSSQLForeignOrderKey;

__attribute__((visibility("hidden")))
@interface NSSQLToOne : NSSQLRelationship {
@private
	NSSQLForeignKey *_foreignKey;	// 32 = 0x20
	NSSQLForeignEntityKey *_foreignEntityKey;	// 36 = 0x24
	NSSQLForeignOrderKey *_foreignOrderKey;	// 40 = 0x28
	unsigned _slot;	// 44 = 0x2c
	BOOL _isVirtual;	// 48 = 0x30
}
@property(readonly, retain) NSSQLForeignEntityKey *foreignEntityKey;	// G=0x32b09401; converted property
@property(readonly, retain) NSSQLForeignKey *foreignKey;	// G=0x32b093f1; converted property
@property(readonly, retain) NSSQLForeignOrderKey *foreignOrderKey;	// G=0x32b09779; converted property
@property(readonly, assign) BOOL isVirtual;	// G=0x32b09bd1; converted property
@property(readonly, assign) unsigned slot;	// G=0x32bbe935; converted property
- (id)initForReadOnlyFetchWithEntity:(id)entity propertyDescription:(id)description;	// 0x32bbe945
- (id)initWithEntity:(id)entity inverseToMany:(id)many;	// 0x32b0a521
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x32b08d21
- (id)initWithEntity:(id)entity propertyDescription:(id)description virtualForToMany:(id)many;	// 0x32b08d45
- (void)_setForeignOrderKey:(id)key;	// 0x32bbed09
- (id)columnName;	// 0x32bbece1
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x32bbea65
- (void)dealloc;	// 0x32bbed51
- (id)description;	// 0x32bbec55
// converted property getter: - (id)foreignEntityKey;	// 0x32b09401
// converted property getter: - (id)foreignKey;	// 0x32b093f1
// converted property getter: - (id)foreignOrderKey;	// 0x32b09779
- (BOOL)isOptional;	// 0x32bbec19
// converted property getter: - (BOOL)isVirtual;	// 0x32b09bd1
// converted property getter: - (unsigned)slot;	// 0x32bbe935
@end


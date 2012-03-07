/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSArray, NSExpression, NSString, NSDictionary;

@interface NSPropertyMapping : NSObject {
@private
	void *_reserved;	// 4 = 0x4
	void *_reserved1;	// 8 = 0x8
	NSArray *_propertyTransforms;	// 12 = 0xc
	NSString *_name;	// 16 = 0x10
	NSExpression *_valueExpression;	// 20 = 0x14
	NSDictionary *_userInfo;	// 24 = 0x18
	propertyMappingFlags _propertyMappingFlags;	// 28 = 0x1c
}
@property(retain) NSString *name;	// G=0x323a3ca5; S=0x323a3f35; converted property
@property(retain) NSDictionary *userInfo;	// G=0x323a3cc5; S=0x323a3fdd; converted property
@property(retain) NSExpression *valueExpression;	// G=0x323a3cb5; S=0x323a3f89; converted property
+ (void)initialize;	// 0x323a4031
- (id)init;	// 0x323a3d01
- (id)initWithCoder:(id)coder;	// 0x323a4269
- (id)initWithName:(id)name valueExpression:(id)expression;	// 0x323a404d
- (void)_createCachesAndOptimizeState;	// 0x323a3ced
- (id)_initWithDestinationName:(id)destinationName valueExpression:(id)expression;	// 0x323a4381
- (id)_propertyTransforms;	// 0x323a3cf1
- (void)_setIsEditable:(BOOL)editable;	// 0x323a4425
- (void)_setPropertyTransforms:(id)transforms;	// 0x323a405d
- (void)_throwIfNotEditable;	// 0x323a44b9
- (id)copyWithZone:(NSZone *)zone;	// 0x323a3dd9
- (void)dealloc;	// 0x323a40b1
- (id)description;	// 0x323a3ea1
- (void)encodeWithCoder:(id)coder;	// 0x323a3d15
- (BOOL)isEditable;	// 0x323a3cd5
- (BOOL)isEqual:(id)equal;	// 0x323a415d
// converted property getter: - (id)name;	// 0x323a3ca5
// converted property setter: - (void)setName:(id)name;	// 0x323a3f35
// converted property setter: - (void)setUserInfo:(id)info;	// 0x323a3fdd
// converted property setter: - (void)setValueExpression:(id)expression;	// 0x323a3f89
// converted property getter: - (id)userInfo;	// 0x323a3cc5
// converted property getter: - (id)valueExpression;	// 0x323a3cb5
@end


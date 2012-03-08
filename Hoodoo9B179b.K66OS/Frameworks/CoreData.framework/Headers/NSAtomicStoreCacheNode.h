/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSManagedObjectID;

@interface NSAtomicStoreCacheNode : NSObject {
@private
	NSManagedObjectID *_objectID;	// 4 = 0x4
	unsigned __versionNumber;	// 8 = 0x8
	NSMutableDictionary *_propertyCache;	// 12 = 0xc
	void *_reserved1;	// 16 = 0x10
}
@property(readonly, retain) NSManagedObjectID *objectID;	// G=0x32b27f9d; converted property
@property(retain) NSMutableDictionary *propertyCache;	// G=0x32b27fd5; S=0x32b2803d; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x32b27f99
+ (void)initialize;	// 0x32b28081
- (id)init;	// 0x32b2809d
- (id)initWithObjectID:(id)objectID;	// 0x32b280e5
- (void)_setVersionNumber:(unsigned)number;	// 0x32b27fbd
- (id)_snapshot_;	// 0x32b27fd1
- (unsigned)_versionNumber;	// 0x32b27fad
- (void)dealloc;	// 0x32b2837d
- (BOOL)isEqual:(id)equal;	// 0x32b27fe5
- (const id *)knownKeyValuesPointer;	// 0x32b27fcd
// converted property getter: - (id)objectID;	// 0x32b27f9d
// converted property getter: - (id)propertyCache;	// 0x32b27fd5
// converted property setter: - (void)setPropertyCache:(id)cache;	// 0x32b2803d
- (void)setValue:(id)value forKey:(id)key;	// 0x32b2819d
- (id)valueForKey:(id)key;	// 0x32b2828d
@end

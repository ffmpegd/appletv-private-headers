/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSObject.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSCoding.h"
#import "NSFastEnumeration.h"


@interface NSDictionary : NSObject <NSCopying, NSMutableCopying, NSCoding, NSFastEnumeration> {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x306e35d5
+ (id)dictionary;	// 0x3070dce9
+ (id)dictionaryWithDictionary:(id)dictionary;	// 0x30724379
+ (id)dictionaryWithDictionary:(id)dictionary copyItems:(BOOL)items;	// 0x3078a255
+ (id)dictionaryWithObject:(id)object forKey:(id)key;	// 0x306ec3b1
+ (id)dictionaryWithObjects:(id)objects forKeys:(id)keys;	// 0x30716049
+ (id)dictionaryWithObjects:(const id *)objects forKeys:(const id *)keys count:(unsigned)count;	// 0x3070fdc5
+ (id)dictionaryWithObjectsAndKeys:(id)objectsAndKeys;	// 0x306e32dd
- (id)initWithCoder:(id)coder;	// 0x3078a315
- (id)initWithDictionary:(id)dictionary;	// 0x30722bf9
- (id)initWithDictionary:(id)dictionary copyItems:(BOOL)items;	// 0x30722c0d
- (id)initWithObject:(id)object forKey:(id)key;	// 0x3078a22d
- (id)initWithObjects:(id)objects forKeys:(id)keys;	// 0x3071209d
- (id)initWithObjects:(const id *)objects forKeys:(const id *)keys count:(unsigned)count;	// 0x3078a209
- (id)initWithObjectsAndKeys:(id)objectsAndKeys;	// 0x3070b1d1
- (void)__apply:(/*function-pointer*/ void *)apply context:(void *)context;	// 0x3078a099
- (BOOL)__getValue:(id *)value forKey:(id)key;	// 0x3078a1ad
- (unsigned long)_cfTypeID;	// 0x30788e8d
- (id)allKeys;	// 0x306f9dad
- (id)allKeysForObject:(id)object;	// 0x30731399
- (id)allObjects;	// 0x30788e91
- (id)allValues;	// 0x306de445
- (BOOL)containsKey:(id)key;	// 0x30789001
- (BOOL)containsObject:(id)object;	// 0x30789025
- (id)copyWithZone:(NSZone *)zone;	// 0x3078a295
- (unsigned)count;	// 0x30788e21
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x30727c01
- (unsigned)countForKey:(id)key;	// 0x30716cf1
- (unsigned)countForObject:(id)object;	// 0x307890f1
- (id)description;	// 0x3078a1f5
- (id)descriptionWithLocale:(id)locale;	// 0x30738d41
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x3071658d
- (void)encodeWithCoder:(id)coder;	// 0x3078a319
- (void)enumerateKeysAndObjectsUsingBlock:(id)block;	// 0x3070f36d
- (void)enumerateKeysAndObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x3070f3f9
- (void)getKeys:(id *)keys;	// 0x307894ad
- (void)getObjects:(id *)objects;	// 0x30789569
- (void)getObjects:(id *)objects andKeys:(id *)keys;	// 0x3072d091
- (void)getObjects:(id *)objects andKeys:(id *)keys count:(unsigned)count;	// 0x306de5b9
- (unsigned)hash;	// 0x30789625
- (id)invertedDictionary;	// 0x30789635
- (BOOL)isEqual:(id)equal;	// 0x30716d5d
- (BOOL)isEqualToDictionary:(id)dictionary;	// 0x3070de49
- (BOOL)isNSDictionary__;	// 0x306f9da9
- (id)keyEnumerator;	// 0x30788e69
- (id)keysOfEntriesPassingTest:(id)entriesPassingTest;	// 0x30789811
- (id)keysOfEntriesWithOptions:(unsigned)options passingTest:(id)test;	// 0x30789689
- (id)keysSortedByValueUsingComparator:(id)comparator;	// 0x30789cf1
- (id)keysSortedByValueUsingSelector:(SEL)selector;	// 0x30789d7d
- (id)keysSortedByValueWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x3078989d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3078a2d9
- (id)objectEnumerator;	// 0x307276d1
- (id)objectForKey:(id)key;	// 0x30788e45
- (id)objectsForKeys:(id)keys notFoundMarker:(id)marker;	// 0x30789df9
@end


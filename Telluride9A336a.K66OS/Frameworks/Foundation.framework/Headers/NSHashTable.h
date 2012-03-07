/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "NSFastEnumeration.h"


@interface NSHashTable : NSObject <NSCopying, NSCoding, NSFastEnumeration> {
}
+ (id)alloc;	// 0x3364f7f1
+ (id)allocWithZone:(NSZone *)zone;	// 0x336baf65
+ (id)hashTableWithOptions:(unsigned)options;	// 0x336baf91
+ (id)hashTableWithWeakObjects;	// 0x3366f19d
- (id)init;	// 0x336bb0cd
- (id)initWithCoder:(id)coder;	// 0x336bafdd
- (id)initWithOptions:(unsigned)options capacity:(unsigned)capacity;	// 0x336bb039
- (id)initWithPointerFunctions:(id)pointerFunctions capacity:(unsigned)capacity;	// 0x336bb14d
- (void)addObject:(id)object;	// 0x336bb11d
- (id)allObjects;	// 0x336bb0fd
- (id)anyObject;	// 0x336bb16d
- (BOOL)containsObject:(id)object;	// 0x33650079
- (id)copy;	// 0x336bb135
- (id)copyWithZone:(NSZone *)zone;	// 0x336bb84d
- (unsigned)count;	// 0x336bb0f5
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x336bb0ed
- (id)description;	// 0x336bb0d5
- (void)encodeWithCoder:(id)coder;	// 0x336bb0e5
- (void *)getItem:(const void *)item;	// 0x336bb115
- (void)getKeys:(void **)keys count:(unsigned *)count;	// 0x336bb145
- (void)insertKnownAbsentItem:(const void *)item;	// 0x336bb125
- (void)intersectHashTable:(id)table;	// 0x336bb3c9
- (BOOL)intersectsHashTable:(id)table;	// 0x336bb1ad
- (BOOL)isEqualToHashTable:(id)hashTable;	// 0x336bb251
- (BOOL)isSubsetOfHashTable:(id)hashTable;	// 0x336bb325
- (id)member:(id)member;	// 0x33683f5d
- (void)minusHashTable:(id)table;	// 0x336bb641
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x336bb85d
- (id)mutableSet;	// 0x336bb6dd
- (id)objectEnumerator;	// 0x336bb0dd
- (id)pointerFunctions;	// 0x336bb155
- (void)removeAllItems;	// 0x336bb13d
- (void)removeAllObjects;	// 0x336bb15d
- (void)removeItem:(const void *)item;	// 0x336bb12d
- (void)removeObject:(id)object;	// 0x3364ffbd
- (id)setRepresentation;	// 0x336bb795
- (void)unionHashTable:(id)table;	// 0x336bb5a5
- (unsigned)weakCount;	// 0x336bb105
@end


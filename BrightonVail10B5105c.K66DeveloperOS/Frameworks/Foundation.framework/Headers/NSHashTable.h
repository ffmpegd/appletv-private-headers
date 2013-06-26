/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSFastEnumeration.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "Foundation-Structs.h"


@interface NSHashTable : NSObject <NSCopying, NSCoding, NSFastEnumeration> {
}
+ (id)alloc;	// 0x36075495
+ (id)allocWithZone:(NSZone *)zone;	// 0x360e7cb5
+ (id)hashTableWithOptions:(unsigned)options;	// 0x360e7d29
+ (id)hashTableWithWeakObjects;	// 0x360e7ce1
+ (id)weakObjectsHashTable;	// 0x360bf80d
- (id)init;	// 0x360e7e69
- (id)initWithCoder:(id)coder;	// 0x360e7d75
- (id)initWithOptions:(unsigned)options capacity:(unsigned)capacity;	// 0x360e7dd1
- (id)initWithPointerFunctions:(id)pointerFunctions capacity:(unsigned)capacity;	// 0x360e7f21
- (void)addObject:(id)object;	// 0x360e7ed9
- (id)allObjects;	// 0x360e7eb1
- (id)anyObject;	// 0x360e7f49
- (BOOL)containsObject:(id)object;	// 0x36075b49
- (id)copy;	// 0x360e7efd
- (id)copyWithZone:(NSZone *)zone;	// 0x360e8749
- (unsigned)count;	// 0x360e7ea5
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x360e7e99
- (id)description;	// 0x360e7e75
- (void)encodeWithCoder:(id)coder;	// 0x360e7e8d
- (void *)getItem:(const void *)item;	// 0x360e7ecd
- (void)getKeys:(void **)keys count:(unsigned *)count;	// 0x360e7f15
- (void)insertKnownAbsentItem:(const void *)item;	// 0x360e7ee5
- (void)intersectHashTable:(id)table;	// 0x360e8215
- (BOOL)intersectsHashTable:(id)table;	// 0x360e7fa5
- (BOOL)isEqualToHashTable:(id)hashTable;	// 0x360e8065
- (BOOL)isSubsetOfHashTable:(id)hashTable;	// 0x360e8155
- (id)member:(id)member;	// 0x36074411
- (void)minusHashTable:(id)table;	// 0x360e84d1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x360e8759
- (id)mutableSet;	// 0x360e85a1
- (id)objectEnumerator;	// 0x360e7e81
- (id)pointerFunctions;	// 0x360e7f2d
- (void)removeAllItems;	// 0x360e7f09
- (void)removeAllObjects;	// 0x360e7f39
- (void)removeItem:(const void *)item;	// 0x360e7ef1
- (void)removeObject:(id)object;	// 0x36075a81
- (id)setRepresentation;	// 0x360e8675
- (void)unionHashTable:(id)table;	// 0x360e8415
- (unsigned)weakCount;	// 0x360e7ebd
@end

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


@interface NSArray : NSObject <NSCopying, NSMutableCopying, NSCoding, NSFastEnumeration> {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x30ce87e9
+ (id)array;	// 0x30cecd65
+ (id)arrayWithArray:(id)array;	// 0x30d03d19
+ (id)arrayWithArray:(id)array copyItems:(BOOL)items;	// 0x30d8c0a1
+ (id)arrayWithArray:(id)array range:(NSRange)range;	// 0x30d8c055
+ (id)arrayWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x30d8c009
+ (id)arrayWithObject:(id)object;	// 0x30ceae4d
+ (id)arrayWithObjects:(id)objects;	// 0x30d15c9d
+ (id)arrayWithObjects:(const id *)objects count:(unsigned)count;	// 0x30ce87a9
+ (id)arrayWithOrderedSet:(id)orderedSet;	// 0x30d8c5d9
+ (id)arrayWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x30d8c571
+ (id)arrayWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x30d8c525
+ (id)arrayWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x30d8c4d9
+ (id)arrayWithSet:(id)set;	// 0x30d8c905
+ (id)arrayWithSet:(id)set copyItems:(BOOL)items;	// 0x30d8c8c5
- (id)initWithArray:(id)array;	// 0x30d16501
- (id)initWithArray:(id)array copyItems:(BOOL)items;	// 0x30cf0059
- (id)initWithArray:(id)array range:(NSRange)range;	// 0x30d8bfe5
- (id)initWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x30cf00a1
- (id)initWithCoder:(id)coder;	// 0x30d8c9b1
- (id)initWithObject:(id)object;	// 0x30d8bfc5
- (id)initWithObjects:(id)objects;	// 0x30cfed05
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x30d8bfa1
- (id)initWithOrderedSet:(id)orderedSet;	// 0x30d8c49d
- (id)initWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x30d8c455
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x30d8c431
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x30d8c109
- (id)initWithSet:(id)set;	// 0x30d8c8b1
- (id)initWithSet:(id)set copyItems:(BOOL)items;	// 0x30d8c639
- (unsigned long)_cfTypeID;	// 0x30d257f1
- (BOOL)_hasObjects;	// 0x30d1244d
- (BOOL)_hasStrongReferences;	// 0x30d89bb5
- (id)allObjects;	// 0x30d89bb9
- (id)arrayByAddingObject:(id)object;	// 0x30d27d15
- (id)arrayByAddingObjectsFromArray:(id)array;	// 0x30d30781
- (id)arrayByApplyingSelector:(SEL)selector;	// 0x30d269f5
- (id)arrayByExcludingObjectsInArray:(id)array;	// 0x30d1f4e1
- (id)arrayByExcludingToObjectsInArray:(id)array;	// 0x30d8c9b9
- (id)componentsJoinedByString:(id)string;	// 0x30d03755
- (BOOL)containsObject:(id)object;	// 0x30cf5275
- (BOOL)containsObject:(id)object inRange:(NSRange)range;	// 0x30d89d29
- (BOOL)containsObjectIdenticalTo:(id)to;	// 0x30d89f51
- (BOOL)containsObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x30d89e59
- (id)copyWithZone:(NSZone *)zone;	// 0x30d8c945
- (unsigned)count;	// 0x30d89b6d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x30d28b29
- (unsigned)countForObject:(id)object;	// 0x30d8a119
- (unsigned)countForObject:(id)object inRange:(NSRange)range;	// 0x30d89fe9
- (id)description;	// 0x30d8bf8d
- (id)descriptionWithLocale:(id)locale;	// 0x30d201a5
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x30d201b9
- (void)encodeWithCoder:(id)coder;	// 0x30d8c9b5
- (void)enumerateObjectsAtIndexes:(id)indexes options:(unsigned)options usingBlock:(id)block;	// 0x30d8a1e9
- (void)enumerateObjectsUsingBlock:(id)block;	// 0x30d19f25
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x30cefe95
- (id)firstObject;	// 0x30d8a7a9
- (id)firstObjectCommonWithArray:(id)array;	// 0x30d8a7e1
- (void)getObjects:(id *)objects;	// 0x30d1e3b9
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x30d28c81
- (unsigned)hash;	// 0x30d2883d
- (unsigned)indexOfObject:(id)object;	// 0x30cf5371
- (unsigned)indexOfObject:(id)object inRange:(NSRange)range;	// 0x30d8a93d
- (unsigned)indexOfObject:(id)object inSortedRange:(NSRange)sortedRange options:(unsigned)options usingComparator:(id)comparator;	// 0x30d8ae99
- (unsigned)indexOfObjectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x30d8b255
- (unsigned)indexOfObjectIdenticalTo:(id)to;	// 0x30d162f9
- (unsigned)indexOfObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x30d2d8dd
- (unsigned)indexOfObjectPassingTest:(id)objectPassingTest;	// 0x30d27ef1
- (unsigned)indexOfObjectWithOptions:(unsigned)options passingTest:(id)test;	// 0x30d27f7d
- (id)indexesOfObject:(id)object;	// 0x30d8ac15
- (id)indexesOfObject:(id)object inRange:(NSRange)range;	// 0x30d8aa79
- (id)indexesOfObjectIdenticalTo:(id)to;	// 0x30d8ae25
- (id)indexesOfObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x30d8accd
- (id)indexesOfObjectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x30d8b6e1
- (id)indexesOfObjectsPassingTest:(id)objectsPassingTest;	// 0x30d16a09
- (id)indexesOfObjectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x30d16a95
- (BOOL)isEqual:(id)equal;	// 0x30d2015d
- (BOOL)isEqualToArray:(id)array;	// 0x30d17749
- (BOOL)isNSArray__;	// 0x30d12449
- (id)lastObject;	// 0x30ce0171
- (void)makeObjectsPerformSelector:(SEL)selector;	// 0x30cf63c9
- (void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;	// 0x30d31a19
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x30d04235
- (id)objectAtIndex:(unsigned)index;	// 0x30d89b91
- (id)objectEnumerator;	// 0x30d31115
- (id)objectsAtIndexes:(id)indexes;	// 0x30d16b49
- (id)objectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x30d8bc55
- (id)objectsPassingTest:(id)test;	// 0x30d8be79
- (id)objectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x30d8bdd9
- (id)reverseObjectEnumerator;	// 0x30d19de1
- (id)reversedArray;	// 0x30d8bf05
- (id)sortedArrayFromRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x30d265f1
- (id)sortedArrayUsingComparator:(id)comparator;	// 0x30d272ad
- (id)sortedArrayUsingFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x30d26481
- (id)sortedArrayUsingSelector:(SEL)selector;	// 0x30d277dd
- (id)sortedArrayWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x30d26541
- (id)subarrayWithRange:(NSRange)range;	// 0x30d24ca1
@end


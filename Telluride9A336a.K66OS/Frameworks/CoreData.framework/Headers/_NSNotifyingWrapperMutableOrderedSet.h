/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSMutableOrderedSet.h> // Unknown library

@class NSManagedObject, NSString;

__attribute__((visibility("hidden")))
@interface _NSNotifyingWrapperMutableOrderedSet : NSMutableOrderedSet {
@private
	NSManagedObject *_container;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
	NSMutableOrderedSet *_mutableOrderedSet;	// 12 = 0xc
}
- (id)initWithContainer:(id)container key:(id)key mutableOrderedSet:(id)set;	// 0x32408d51
- (void)addObject:(id)object;	// 0x32406abd
- (void)addObjects:(const id *)objects count:(unsigned)count;	// 0x32408901
- (void)addObjectsFromArray:(id)array;	// 0x324087a9
- (id)allObjects;	// 0x32408b9d
- (id)array;	// 0x32406411
- (BOOL)containsObject:(id)object;	// 0x324062e9
- (id)copyWithZone:(NSZone *)zone;	// 0x3240610d
- (unsigned)count;	// 0x32406725
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x32406745
- (void)dealloc;	// 0x32407019
- (id)description;	// 0x32406641
- (id)descriptionWithLocale:(id)locale;	// 0x32406661
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x32406685
- (void)enumerateObjectsAtIndexes:(id)indexes options:(unsigned)options usingBlock:(id)block;	// 0x324064a1
- (void)enumerateObjectsUsingBlock:(id)block;	// 0x32406451
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x32406475
- (void)exchangeObjectAtIndex:(unsigned)index withObjectAtIndex:(unsigned)index2;	// 0x324086f1
- (id)firstObject;	// 0x32406281
- (void)getObjects:(id *)objects;	// 0x32406211
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x3240619d
- (unsigned)indexOfObject:(id)object;	// 0x324061ed
- (unsigned)indexOfObject:(id)object inSortedRange:(NSRange)sortedRange options:(unsigned)options usingComparator:(id)comparator;	// 0x324065c5
- (unsigned)indexOfObjectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x3240651d
- (unsigned)indexOfObjectPassingTest:(id)objectPassingTest;	// 0x324064cd
- (unsigned)indexOfObjectWithOptions:(unsigned)options passingTest:(id)test;	// 0x324064f1
- (id)indexesOfObjectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x32406599
- (id)indexesOfObjectsPassingTest:(id)objectsPassingTest;	// 0x32406549
- (id)indexesOfObjectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x3240656d
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x32406771
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x32406cbd
- (void)insertObjects:(id *)objects count:(unsigned)count atIndex:(unsigned)index;	// 0x32406bdd
- (void)intersectOrderedSet:(id)set;	// 0x32407f8d
- (void)intersectSet:(id)set;	// 0x32407aa9
- (BOOL)intersectsOrderedSet:(id)set;	// 0x32406311
- (BOOL)intersectsSet:(id)set;	// 0x32406339
- (BOOL)isEqualToOrderedSet:(id)orderedSet;	// 0x324062c1
- (BOOL)isSubsetOfOrderedSet:(id)orderedSet;	// 0x32406389
- (BOOL)isSubsetOfSet:(id)set;	// 0x32406361
- (id)lastObject;	// 0x324062a1
- (void)minusOrderedSet:(id)set;	// 0x32407dd5
- (void)minusSet:(id)set;	// 0x324078d5
- (void)moveObjectsAtIndexes:(id)indexes toIndex:(unsigned)index;	// 0x32408639
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32406155
- (id)objectAtIndex:(unsigned)index;	// 0x324061c9
- (id)objectEnumerator;	// 0x324063b1
- (id)objectsAtIndexes:(id)indexes;	// 0x3240625d
- (void)removeAllObjects;	// 0x32406ee1
- (void)removeObject:(id)object;	// 0x32408319
- (void)removeObjectAtIndex:(unsigned)index;	// 0x324068d9
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x32406e41
- (void)removeObjectsInArray:(id)array;	// 0x32408161
- (void)removeObjectsInRange:(NSRange)range;	// 0x32406d65
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x324069ad
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x32408345
- (void)replaceObjectsInRange:(NSRange)range withObjects:(const id *)objects count:(unsigned)count;	// 0x32408375
- (id)reverseObjectEnumerator;	// 0x324063d1
- (id)reversedOrderedSet;	// 0x324063f1
- (id)set;	// 0x32406431
- (void)setObject:(id)object atIndex:(unsigned)index;	// 0x32408609
- (void)setValue:(id)value forKey:(id)key;	// 0x324066b1
- (void)sortRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x324070ad
- (void)sortUsingComparator:(id)comparator;	// 0x32406fc9
- (void)sortWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x32406ff5
- (id)sortedArrayUsingComparator:(id)comparator;	// 0x324065f1
- (id)sortedArrayWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x32406615
- (void)unionOrderedSet:(id)set;	// 0x32407c7d
- (void)unionSet:(id)set;	// 0x3240777d
- (id)valueForKey:(id)key;	// 0x324066dd
- (id)valueForKeyPath:(id)keyPath;	// 0x32406701
@end


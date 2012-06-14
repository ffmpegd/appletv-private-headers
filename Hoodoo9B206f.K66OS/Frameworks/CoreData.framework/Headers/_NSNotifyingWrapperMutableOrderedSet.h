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
- (id)initWithContainer:(id)container key:(id)key mutableOrderedSet:(id)set;	// 0x36337f4d
- (void)addObject:(id)object;	// 0x36335cb9
- (void)addObjects:(const id *)objects count:(unsigned)count;	// 0x36337afd
- (void)addObjectsFromArray:(id)array;	// 0x363379a5
- (id)allObjects;	// 0x36337d99
- (id)array;	// 0x3633560d
- (BOOL)containsObject:(id)object;	// 0x363354e5
- (id)copyWithZone:(NSZone *)zone;	// 0x36335309
- (unsigned)count;	// 0x36335921
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x36335941
- (void)dealloc;	// 0x36336215
- (id)description;	// 0x3633583d
- (id)descriptionWithLocale:(id)locale;	// 0x3633585d
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x36335881
- (void)enumerateObjectsAtIndexes:(id)indexes options:(unsigned)options usingBlock:(id)block;	// 0x3633569d
- (void)enumerateObjectsUsingBlock:(id)block;	// 0x3633564d
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x36335671
- (void)exchangeObjectAtIndex:(unsigned)index withObjectAtIndex:(unsigned)index2;	// 0x363378ed
- (id)firstObject;	// 0x3633547d
- (void)getObjects:(id *)objects;	// 0x3633540d
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x36335399
- (unsigned)indexOfObject:(id)object;	// 0x363353e9
- (unsigned)indexOfObject:(id)object inSortedRange:(NSRange)sortedRange options:(unsigned)options usingComparator:(id)comparator;	// 0x363357c1
- (unsigned)indexOfObjectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x36335719
- (unsigned)indexOfObjectPassingTest:(id)objectPassingTest;	// 0x363356c9
- (unsigned)indexOfObjectWithOptions:(unsigned)options passingTest:(id)test;	// 0x363356ed
- (id)indexesOfObjectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x36335795
- (id)indexesOfObjectsPassingTest:(id)objectsPassingTest;	// 0x36335745
- (id)indexesOfObjectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x36335769
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x3633596d
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x36335eb9
- (void)insertObjects:(id *)objects count:(unsigned)count atIndex:(unsigned)index;	// 0x36335dd9
- (void)intersectOrderedSet:(id)set;	// 0x36337189
- (void)intersectSet:(id)set;	// 0x36336ca5
- (BOOL)intersectsOrderedSet:(id)set;	// 0x3633550d
- (BOOL)intersectsSet:(id)set;	// 0x36335535
- (BOOL)isEqualToOrderedSet:(id)orderedSet;	// 0x363354bd
- (BOOL)isSubsetOfOrderedSet:(id)orderedSet;	// 0x36335585
- (BOOL)isSubsetOfSet:(id)set;	// 0x3633555d
- (id)lastObject;	// 0x3633549d
- (void)minusOrderedSet:(id)set;	// 0x36336fd1
- (void)minusSet:(id)set;	// 0x36336ad1
- (void)moveObjectsAtIndexes:(id)indexes toIndex:(unsigned)index;	// 0x36337835
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x36335351
- (id)objectAtIndex:(unsigned)index;	// 0x363353c5
- (id)objectEnumerator;	// 0x363355ad
- (id)objectsAtIndexes:(id)indexes;	// 0x36335459
- (void)removeAllObjects;	// 0x363360dd
- (void)removeObject:(id)object;	// 0x36337515
- (void)removeObjectAtIndex:(unsigned)index;	// 0x36335ad5
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x3633603d
- (void)removeObjectsInArray:(id)array;	// 0x3633735d
- (void)removeObjectsInRange:(NSRange)range;	// 0x36335f61
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x36335ba9
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x36337541
- (void)replaceObjectsInRange:(NSRange)range withObjects:(const id *)objects count:(unsigned)count;	// 0x36337571
- (id)reverseObjectEnumerator;	// 0x363355cd
- (id)reversedOrderedSet;	// 0x363355ed
- (id)set;	// 0x3633562d
- (void)setObject:(id)object atIndex:(unsigned)index;	// 0x36337805
- (void)setValue:(id)value forKey:(id)key;	// 0x363358ad
- (void)sortRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x363362a9
- (void)sortUsingComparator:(id)comparator;	// 0x363361c5
- (void)sortWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x363361f1
- (id)sortedArrayUsingComparator:(id)comparator;	// 0x363357ed
- (id)sortedArrayWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x36335811
- (void)unionOrderedSet:(id)set;	// 0x36336e79
- (void)unionSet:(id)set;	// 0x36336979
- (id)valueForKey:(id)key;	// 0x363358d9
- (id)valueForKeyPath:(id)keyPath;	// 0x363358fd
@end

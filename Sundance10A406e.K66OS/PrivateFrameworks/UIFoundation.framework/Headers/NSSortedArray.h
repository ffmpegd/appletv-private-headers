/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import <NSMutableArray.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSSortedArray : NSMutableArray {
	NSMutableArray *_array;	// 4 = 0x4
	SEL _compareSelector;	// 8 = 0x8
	unsigned _cachedCount;	// 12 = 0xc
	id _cachedFirstObject;	// 16 = 0x10
}
@property(assign) SEL compareSelector;	// G=0x3466d5d5; S=0x3466d5e5; converted property
+ (void)initialize;	// 0x3466d49d
- (id)init;	// 0x3466d5c1
- (id)initWithArray:(id)array;	// 0x3466d895
- (id)initWithArray:(id)array copyItems:(BOOL)items;	// 0x3466d781
- (id)initWithCapacity:(unsigned)capacity;	// 0x3466d659
- (id)initWithCapacity:(unsigned)capacity compareSelector:(SEL)selector;	// 0x3466d4dd
- (id)initWithCoder:(id)coder;	// 0x3466d945
- (id)initWithCompareSelector:(SEL)compareSelector;	// 0x3466d5ad
- (id)initWithObjects:(id)objects;	// 0x3466d6bd
- (id)initWithObjects:(id *)objects count:(unsigned)count;	// 0x3466d66d
- (void)_insertObjectInSortOrder:(id)sortOrder;	// 0x3466da45
- (void)addObject:(id)object;	// 0x3466dc29
// converted property getter: - (SEL)compareSelector;	// 0x3466d5d5
- (BOOL)conformsToProtocol:(id)protocol;	// 0x3466d9a9
- (unsigned)count;	// 0x3466dbc9
- (void)dealloc;	// 0x3466d9f9
- (void)encodeWithCoder:(id)coder;	// 0x3466d8e1
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x3466dcf5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3466d8a9
- (id)objectAtIndex:(unsigned)index;	// 0x3466dbd9
- (void)removeLastObject;	// 0x3466dca1
- (void)removeObjectAtIndex:(unsigned)index;	// 0x3466dd05
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x3466dc39
- (void)setArray:(id)array;	// 0x3466dd59
// converted property setter: - (void)setCompareSelector:(SEL)selector;	// 0x3466d5e5
- (void)sortUsingFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x3466ddf5
- (void)sortUsingSelector:(SEL)selector;	// 0x3466de59
@end

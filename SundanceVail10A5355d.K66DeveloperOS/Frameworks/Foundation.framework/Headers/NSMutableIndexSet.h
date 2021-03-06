/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSIndexSet.h"
#import "Foundation-Structs.h"


@interface NSMutableIndexSet : NSIndexSet {
	void *_reserved;	// 16 = 0x10
}
- (void)_addRangeToArray:(NSRange)array;	// 0x34659785
- (void)_ensureRangeCapacity:(unsigned)capacity;	// 0x34659831
- (void)_incrementBy:(unsigned)by startingAtIndex:(unsigned)index;	// 0x346b4d51
- (void)_insertRange:(NSRange)range inArrayAtIndex:(unsigned)index;	// 0x346810d9
- (void)_mergeOverlappingRangesStartingAtIndex:(unsigned)index;	// 0x34659939
- (void)_removeAndDecrementBy:(unsigned)by startingAtIndex:(unsigned)index;	// 0x346b4f3d
- (void)_removeRangeInArrayAtIndex:(unsigned)index;	// 0x3468134d
- (void)_replaceRangeInArrayAtIndex:(unsigned)index withRange:(NSRange)range;	// 0x3465fab5
- (void)addIndex:(unsigned)index;	// 0x34659511
- (void)addIndexes:(id)indexes;	// 0x3467a225
- (void)addIndexes:(const unsigned *)indexes count:(unsigned)count;	// 0x346b4b21
- (void)addIndexesFromIndexSet:(id)indexSet;	// 0x346b4b11
- (void)addIndexesInRange:(NSRange)range;	// 0x34659525
- (Class)classForCoder;	// 0x346b4b01
- (void)removeAllIndexes;	// 0x3467a1cd
- (void)removeIndex:(unsigned)index;	// 0x346811fd
- (void)removeIndexes:(id)indexes;	// 0x346b4c09
- (void)removeIndexesFromIndexSet:(id)indexSet;	// 0x346b4d41
- (void)removeIndexesInRange:(NSRange)range;	// 0x34681211
- (void)shiftIndexesStartingAtIndex:(unsigned)index by:(int)by;	// 0x346b5089
@end


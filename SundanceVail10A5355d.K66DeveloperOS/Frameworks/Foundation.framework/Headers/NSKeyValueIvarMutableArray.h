/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueMutableArray.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSKeyValueIvarMutableArray : NSKeyValueMutableArray {
	objc_ivar *_ivar;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x346bb72d
- (id)_nonNilMutableArrayValueWithSelector:(SEL)selector;	// 0x346bb885
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x346bb73d
- (void)_proxyNonGCFinalize;	// 0x346bb795
- (void)_raiseNilValueExceptionWithSelector:(SEL)selector;	// 0x346bb811
- (void)addObject:(id)object;	// 0x346bb961
- (unsigned)count;	// 0x346bb7d5
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x346bb8c9
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x346bb9dd
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x346bba85
- (id)objectAtIndex:(unsigned)index;	// 0x346bb901
- (id)objectsAtIndexes:(id)indexes;	// 0x346bb931
- (void)removeLastObject;	// 0x346bbc19
- (void)removeObjectAtIndex:(unsigned)index;	// 0x346bbc45
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x346bbc75
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x346bbca5
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x346bbcd9
@end

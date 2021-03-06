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
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x373898a5
- (id)_nonNilMutableArrayValueWithSelector:(SEL)selector;	// 0x373899fd
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x373898b5
- (void)_proxyNonGCFinalize;	// 0x3738990d
- (void)_raiseNilValueExceptionWithSelector:(SEL)selector;	// 0x37389989
- (void)addObject:(id)object;	// 0x37389ad9
- (unsigned)count;	// 0x3738994d
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x37389a41
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x37389b55
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x37389bfd
- (id)objectAtIndex:(unsigned)index;	// 0x37389a79
- (id)objectsAtIndexes:(id)indexes;	// 0x37389aa9
- (void)removeLastObject;	// 0x37389d91
- (void)removeObjectAtIndex:(unsigned)index;	// 0x37389dbd
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x37389ded
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x37389e1d
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x37389e51
@end


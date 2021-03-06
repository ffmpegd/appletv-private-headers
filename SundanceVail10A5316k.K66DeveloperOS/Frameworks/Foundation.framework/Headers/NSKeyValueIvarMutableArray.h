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
@private
	objc_ivar *_ivar;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x31a65155
- (id)_nonNilMutableArrayValueWithSelector:(SEL)selector;	// 0x31a652ad
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x31a65165
- (void)_proxyNonGCFinalize;	// 0x31a651bd
- (void)_raiseNilValueExceptionWithSelector:(SEL)selector;	// 0x31a65239
- (void)addObject:(id)object;	// 0x31a65389
- (unsigned)count;	// 0x31a651fd
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x31a652f1
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x31a65405
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x31a654ad
- (id)objectAtIndex:(unsigned)index;	// 0x31a65329
- (id)objectsAtIndexes:(id)indexes;	// 0x31a65359
- (void)removeLastObject;	// 0x31a65641
- (void)removeObjectAtIndex:(unsigned)index;	// 0x31a6566d
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x31a6569d
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x31a656cd
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x31a65701
@end


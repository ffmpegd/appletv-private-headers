/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueMutableArray.h"

@class NSKeyValueMutatingArrayMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableArray : NSKeyValueMutableArray {
@private
	NSKeyValueMutatingArrayMethodSet *_mutatingMethods;	// 12 = 0xc
}
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x32479c61
- (void)_proxyNonGCFinalize;	// 0x32479c15
- (void)addObject:(id)object;	// 0x32479be5
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x3247a329
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x3247a2bd
- (void)removeLastObject;	// 0x32479bb9
- (void)removeObjectAtIndex:(unsigned)index;	// 0x3247a21d
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x3247a1bd
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x3247a0a5
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x3247a039
@end


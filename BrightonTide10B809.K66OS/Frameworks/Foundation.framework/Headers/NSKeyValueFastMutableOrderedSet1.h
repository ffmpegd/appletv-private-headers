/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueFastMutableOrderedSet.h"

@class NSKeyValueNonmutatingOrderedSetMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableOrderedSet1 : NSKeyValueFastMutableOrderedSet {
	NSKeyValueNonmutatingOrderedSetMethodSet *_nonmutatingMethods;	// 16 = 0x10
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x318ea715
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x318e8865
- (void)_proxyNonGCFinalize;	// 0x318ea625
- (unsigned)count;	// 0x318e8a01
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x318ea04d
- (unsigned)indexOfObject:(id)object;	// 0x318ea211
- (id)objectAtIndex:(unsigned)index;	// 0x318ea389
- (id)objectsAtIndexes:(id)indexes;	// 0x319bbc2d
@end


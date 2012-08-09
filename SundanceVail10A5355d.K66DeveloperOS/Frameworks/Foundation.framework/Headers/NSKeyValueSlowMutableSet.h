/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueMutableSet.h"

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableSet : NSKeyValueMutableSet {
	NSKeyValueGetter *_valueGetter;	// 12 = 0xc
	NSKeyValueSetter *_valueSetter;	// 16 = 0x10
	BOOL _treatNilValuesLikeEmptySets;	// 20 = 0x14
	BOOL _padding[3];	// 21 = 0x15
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x346bce51
- (id)_createMutableSetValueWithSelector:(SEL)selector;	// 0x346bd119
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x346bce61
- (void)_proxyNonGCFinalize;	// 0x346bcf11
- (void)_raiseNilValueExceptionWithSelector:(SEL)selector;	// 0x346bcf89
- (id)_setValueWithSelector:(SEL)selector;	// 0x346bcffd
- (void)addObject:(id)object;	// 0x346bd181
- (void)addObjectsFromArray:(id)array;	// 0x346bd225
- (unsigned)count;	// 0x346bd051
- (void)intersectSet:(id)set;	// 0x346bd2c5
- (id)member:(id)member;	// 0x346bd07d
- (void)minusSet:(id)set;	// 0x346bd335
- (id)objectEnumerator;	// 0x346bd0ad
- (void)removeAllObjects;	// 0x346bd3a5
- (void)removeObject:(id)object;	// 0x346bd459
- (void)setSet:(id)set;	// 0x346bd4c9
- (void)unionSet:(id)set;	// 0x346bd541
@end

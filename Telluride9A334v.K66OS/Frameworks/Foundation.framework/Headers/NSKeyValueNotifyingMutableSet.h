/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueMutableSet.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSKeyValueNotifyingMutableSet : NSKeyValueMutableSet {
@private
	NSMutableSet *_mutableSet;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x30679a41
+ (id)_proxyShare;	// 0x30679a51
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x30679a81
- (void)_proxyNonGCFinalize;	// 0x30679afd
- (void)addObject:(id)object;	// 0x30679bb1
- (void)addObjectsFromArray:(id)array;	// 0x30679c7d
- (unsigned)count;	// 0x30679b51
- (void)intersectSet:(id)set;	// 0x30679d4d
- (id)member:(id)member;	// 0x30679b71
- (void)minusSet:(id)set;	// 0x30679dd5
- (id)objectEnumerator;	// 0x30679b91
- (void)removeAllObjects;	// 0x30679e5d
- (void)removeObject:(id)object;	// 0x30679efd
- (void)setSet:(id)set;	// 0x30679fc9
- (void)unionSet:(id)set;	// 0x3067a051
@end


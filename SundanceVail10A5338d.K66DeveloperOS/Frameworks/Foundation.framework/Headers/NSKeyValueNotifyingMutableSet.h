/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueMutableSet.h"


__attribute__((visibility("hidden")))
@interface NSKeyValueNotifyingMutableSet : NSKeyValueMutableSet {
	NSMutableSet *_mutableSet;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x3738bb79
+ (id)_proxyShare;	// 0x3738bb89
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x3738bbb9
- (void)_proxyNonGCFinalize;	// 0x3738bc35
- (void)addObject:(id)object;	// 0x3738bce5
- (void)addObjectsFromArray:(id)array;	// 0x3738bdad
- (unsigned)count;	// 0x3738bc85
- (void)intersectSet:(id)set;	// 0x3738be75
- (id)member:(id)member;	// 0x3738bca5
- (void)minusSet:(id)set;	// 0x3738bef9
- (id)objectEnumerator;	// 0x3738bcc5
- (void)removeAllObjects;	// 0x3738bf7d
- (void)removeObject:(id)object;	// 0x3738c019
- (void)setSet:(id)set;	// 0x3738c0e1
- (void)unionSet:(id)set;	// 0x3738c165
@end


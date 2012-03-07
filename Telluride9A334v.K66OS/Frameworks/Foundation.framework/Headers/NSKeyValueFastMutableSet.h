/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueMutableSet.h"
#import "Foundation-Structs.h"

@class NSKeyValueMutatingSetMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableSet : NSKeyValueMutableSet {
@private
	NSKeyValueMutatingSetMethodSet *_mutatingMethods;	// 12 = 0xc
}
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x30678649
- (void)_proxyNonGCFinalize;	// 0x306786b1
- (void)addObject:(id)object;	// 0x30678705
- (void)addObjectsFromArray:(id)array;	// 0x306787b5
- (void)intersectSet:(id)set;	// 0x30678875
- (void)minusSet:(id)set;	// 0x306788d5
- (void)removeAllObjects;	// 0x30678935
- (void)removeObject:(id)object;	// 0x306789ed
- (void)setSet:(id)set;	// 0x30678a9d
- (void)unionSet:(id)set;	// 0x30678afd
@end


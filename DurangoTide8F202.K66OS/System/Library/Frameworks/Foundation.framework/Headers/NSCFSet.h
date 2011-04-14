/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableSet.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSCFSet : NSMutableSet {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x32495a51
- (unsigned)_trueCount;	// 0x32495cc1
- (void)addObject:(id)object;	// 0x32495fad
- (Class)classForCoder;	// 0x32495c89
- (id)copyWithZone:(NSZone *)zone;	// 0x324966e1
- (unsigned)count;	// 0x32495ccd
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x32495cf9
- (void)finalize;	// 0x32495c4d
- (void)getObjects:(id *)objects;	// 0x324961e9
- (unsigned)hash;	// 0x32495c19
- (BOOL)isEqual:(id)equal;	// 0x32495bcd
- (id)member:(id)member;	// 0x32495cd9
- (void)minusSet:(id)set;	// 0x3249609d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32496711
- (id)objectEnumerator;	// 0x32495d09
- (oneway void)release;	// 0x32495c35
- (void)removeAllObjects;	// 0x32496181
- (void)removeObject:(id)object;	// 0x32496025
- (id)retain;	// 0x32495c25
- (unsigned)retainCount;	// 0x32495c41
- (void)setSet:(id)set;	// 0x32496205
- (void)unionSet:(id)set;	// 0x32495ed1
@end

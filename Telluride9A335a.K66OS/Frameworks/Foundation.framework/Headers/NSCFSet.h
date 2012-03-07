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
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3209dab1
- (BOOL)_isDeallocating;	// 0x3209da61
- (unsigned)_trueCount;	// 0x3209db79
- (BOOL)_tryRetain;	// 0x3209da4d
- (void)addObject:(id)object;	// 0x3209dbe9
- (Class)classForCoder;	// 0x3209dab5
- (id)copyWithZone:(NSZone *)zone;	// 0x3209daf5
- (unsigned)count;	// 0x3209db4d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3209db7d
- (void)finalize;	// 0x3209da6d
- (void)getObjects:(id *)objects;	// 0x3209dda9
- (unsigned)hash;	// 0x3209da31
- (BOOL)isEqual:(id)equal;	// 0x3209d9e5
- (id)member:(id)member;	// 0x3209db51
- (void)minusSet:(id)set;	// 0x3209ddc9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3209db31
- (id)objectEnumerator;	// 0x3209db8d
- (oneway void)release;	// 0x3209da45
- (void)removeAllObjects;	// 0x3209dd49
- (void)removeObject:(id)object;	// 0x3209dc99
- (id)retain;	// 0x3209da35
- (unsigned)retainCount;	// 0x3209da49
- (void)setSet:(id)set;	// 0x3209df81
- (void)unionSet:(id)set;	// 0x3209dea9
@end


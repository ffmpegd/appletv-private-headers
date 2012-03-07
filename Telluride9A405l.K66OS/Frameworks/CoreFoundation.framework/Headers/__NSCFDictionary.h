/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableDictionary.h"


__attribute__((visibility("hidden")))
@interface __NSCFDictionary : NSMutableDictionary {
@private
	unsigned char _cfinfo[4];	// 4 = 0x4
	unsigned _bits[4];	// 8 = 0x8
	void *_callbacks;	// 24 = 0x18
	id *_values;	// 28 = 0x1c
	id *_keys;	// 32 = 0x20
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3530be85
- (BOOL)_isDeallocating;	// 0x3530be31
- (BOOL)_tryRetain;	// 0x3530be1d
- (Class)classForCoder;	// 0x352ad051
- (id)copyWithZone:(NSZone *)zone;	// 0x3527a1b5
- (unsigned)count;	// 0x3525e5b5
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3525e775
- (void)finalize;	// 0x3530be41
- (unsigned)hash;	// 0x3530be19
- (BOOL)isEqual:(id)equal;	// 0x35296d11
- (id)keyEnumerator;	// 0x3528f591
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x35279f1d
- (id)objectForKey:(id)key;	// 0x3525dfe5
- (oneway void)release;	// 0x352641bd
- (void)removeAllObjects;	// 0x3526c085
- (void)removeObjectForKey:(id)key;	// 0x35279a39
- (id)retain;	// 0x352558c9
- (unsigned)retainCount;	// 0x3530be3d
- (void)setObject:(id)object forKey:(id)key;	// 0x352795d1
- (void)setObservationInfo:(void *)info;	// 0x3530be89
@end


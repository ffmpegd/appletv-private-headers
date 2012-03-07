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
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x348fde85
- (BOOL)_isDeallocating;	// 0x348fde31
- (BOOL)_tryRetain;	// 0x348fde1d
- (Class)classForCoder;	// 0x3489f051
- (id)copyWithZone:(NSZone *)zone;	// 0x3486c1b5
- (unsigned)count;	// 0x348505b5
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x34850775
- (void)finalize;	// 0x348fde41
- (unsigned)hash;	// 0x348fde19
- (BOOL)isEqual:(id)equal;	// 0x34888d11
- (id)keyEnumerator;	// 0x34881591
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3486bf1d
- (id)objectForKey:(id)key;	// 0x3484ffe5
- (oneway void)release;	// 0x348561bd
- (void)removeAllObjects;	// 0x3485e085
- (void)removeObjectForKey:(id)key;	// 0x3486ba39
- (id)retain;	// 0x348478c9
- (unsigned)retainCount;	// 0x348fde3d
- (void)setObject:(id)object forKey:(id)key;	// 0x3486b5d1
- (void)setObservationInfo:(void *)info;	// 0x348fde89
@end


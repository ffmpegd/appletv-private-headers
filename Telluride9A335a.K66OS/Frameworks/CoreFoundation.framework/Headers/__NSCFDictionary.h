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
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x33504e85
- (BOOL)_isDeallocating;	// 0x33504e31
- (BOOL)_tryRetain;	// 0x33504e1d
- (Class)classForCoder;	// 0x334a6051
- (id)copyWithZone:(NSZone *)zone;	// 0x334731b5
- (unsigned)count;	// 0x334575b5
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x33457775
- (void)finalize;	// 0x33504e41
- (unsigned)hash;	// 0x33504e19
- (BOOL)isEqual:(id)equal;	// 0x3348fd11
- (id)keyEnumerator;	// 0x33488591
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x33472f1d
- (id)objectForKey:(id)key;	// 0x33456fe5
- (oneway void)release;	// 0x3345d1bd
- (void)removeAllObjects;	// 0x33465085
- (void)removeObjectForKey:(id)key;	// 0x33472a39
- (id)retain;	// 0x3344e8c9
- (unsigned)retainCount;	// 0x33504e3d
- (void)setObject:(id)object forKey:(id)key;	// 0x334725d1
- (void)setObservationInfo:(void *)info;	// 0x33504e89
@end


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
	unsigned char _cfinfo[4];	// 4 = 0x4
	unsigned _bits[4];	// 8 = 0x8
	void *_callbacks;	// 24 = 0x18
	id *_values;	// 28 = 0x1c
	id *_keys;	// 32 = 0x20
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x2d27df3d
- (BOOL)_isDeallocating;	// 0x2d27deed
- (BOOL)_tryRetain;	// 0x2d27dedd
- (Class)classForCoder;	// 0x2d27df41
- (id)copyWithZone:(NSZone *)zone;	// 0x2d2044d1
- (unsigned)count;	// 0x2d1def2d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x2d1df0a5
- (void)finalize;	// 0x2d27defd
- (unsigned)hash;	// 0x2d211f41
- (BOOL)isEqual:(id)equal;	// 0x2d1f9e29
- (id)keyEnumerator;	// 0x2d1f9ebd
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x2d1d3c45
- (id)objectForKey:(id)key;	// 0x2d1c1d89
- (oneway void)release;	// 0x2d1cd95d
- (void)removeAllObjects;	// 0x2d1ef19d
- (void)removeObjectForKey:(id)key;	// 0x2d1f818d
- (id)retain;	// 0x2d1c1115
- (unsigned)retainCount;	// 0x2d27def9
- (void)setObject:(id)object forKey:(id)key;	// 0x2d1d3ab9
- (void)setObservationInfo:(void *)info;	// 0x2d27df85
@end

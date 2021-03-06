/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSMutableDictionary.h"
#import "CoreFoundation-Structs.h"

@class NSSharedKeySet;

@interface NSSharedKeyDictionary : NSMutableDictionary {
	NSSharedKeySet *_keyMap;	// 4 = 0x4
	unsigned _count;	// 8 = 0x8
	id *_values;	// 12 = 0xc
	/*function-pointer*/ void *_ifkIMP;	// 16 = 0x10
	NSMutableDictionary *_sideDic;	// 20 = 0x14
	unsigned long _mutations;	// 24 = 0x18
}
@property(readonly, assign) unsigned count;	// G=0x3118e0f5; converted property
+ (id)sharedKeyDictionaryWithKeySet:(id)keySet;	// 0x3118e815
- (id)initWithCoder:(id)coder;	// 0x3118ed5d
- (id)initWithKeySet:(id)keySet;	// 0x3118e795
- (Class)classForCoder;	// 0x3118eaf5
- (id)copyWithZone:(NSZone *)zone;	// 0x3118ea01
// converted property getter: - (unsigned)count;	// 0x3118e0f5
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3118f095
- (void)dealloc;	// 0x3118e851
- (void)encodeWithCoder:(id)coder;	// 0x3118eb11
- (void)finalize;	// 0x3118e925
- (id)keyEnumerator;	// 0x3118e1a9
- (id)keySet;	// 0x3118e785
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3118eae5
- (id)objectForKey:(id)key;	// 0x3118e129
- (void)removeObjectForKey:(id)key;	// 0x3118e655
- (void)setObject:(id)object forKey:(id)key;	// 0x3118e4c5
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSDictionary.h> // Unknown library


@interface NSSimpleAttributeDictionary : NSDictionary {
@private
	unsigned numElements;	// 4 = 0x4
	unsigned refCount;	// 8 = 0x8
	NSSimpleAttributeDictionaryElement elements[1];	// 12 = 0xc
}
+ (id)emptyAttributeDictionary;	// 0x3061c735
+ (id)newWithDictionary:(id)dictionary;	// 0x3061d3b1
- (id)copyWithZone:(NSZone *)zone;	// 0x306dba0d
- (unsigned)count;	// 0x306db841
- (void)dealloc;	// 0x306db89d
- (void)finalize;	// 0x306db929
- (id)keyEnumerator;	// 0x306db851
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x306db955
- (id)newWithKey:(id)key object:(id)object;	// 0x306db55d
- (id)objectForKey:(id)key;	// 0x3061df55
- (unsigned)slotForKey:(id)key;	// 0x3061df95
@end


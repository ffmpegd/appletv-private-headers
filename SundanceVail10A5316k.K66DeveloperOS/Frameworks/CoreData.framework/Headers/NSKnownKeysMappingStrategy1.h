/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSKnownKeysMappingStrategy.h"


__attribute__((visibility("hidden")))
@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy {
@private
	int _cd_rc;	// 4 = 0x4
	void *_table;	// 8 = 0x8
	unsigned long _length;	// 12 = 0xc
	id _reserved1;	// 16 = 0x10
	id *_keys;	// 20 = 0x14
}
@property(readonly, assign) id *keys;	// G=0x32d075a9; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x32d64579
+ (id)alloc;	// 0x32d6457d
+ (id)allocWithZone:(NSZone *)zone;	// 0x32d64585
+ (void)initialize;	// 0x32d32f6d
- (id)initForKeys:(id)keys;	// 0x32d0a451
- (id)initForKeys:(id *)keys count:(unsigned)count;	// 0x32d04a91
- (id)initWithCoder:(id)coder;	// 0x32d647a5
- (void)_coreCreationForKeys:(const id *)keys count:(unsigned long)count;	// 0x32d04add
- (void)_coreDealloc:(BOOL)dealloc;	// 0x32d0d2a9
- (BOOL)_isDeallocating;	// 0x32d645f5
- (CFArrayRef)_makeBranchTableForKeys:(const char **)keys count:(unsigned long)count;	// 0x32d04ce5
- (BOOL)_tryRetain;	// 0x32d645a5
- (id)allKeys;	// 0x32d64631
- (Class)classForArchiver;	// 0x32d64789
- (Class)classForCoder;	// 0x32d6476d
- (id)copyWithZone:(NSZone *)zone;	// 0x32d6497d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x32d6498d
- (void)dealloc;	// 0x32d0d295
- (void)encodeWithCoder:(id)coder;	// 0x32d648b1
- (unsigned)fastIndexForKnownKey:(id)knownKey;	// 0x32d0d16d
- (unsigned)hash;	// 0x32d64729
- (unsigned)indexForKey:(id)key;	// 0x32d25d85
- (BOOL)isEqual:(id)equal;	// 0x32d6466d
// converted property getter: - (id *)keys;	// 0x32d075a9
- (unsigned)length;	// 0x32d052b1
- (oneway void)release;	// 0x32d052f9
- (id)retain;	// 0x32d052c1
- (unsigned)retainCount;	// 0x32d64591
@end

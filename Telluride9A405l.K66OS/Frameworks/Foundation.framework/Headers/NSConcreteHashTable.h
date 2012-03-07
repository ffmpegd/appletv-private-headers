/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSHashTable.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSConcreteHashTable : NSHashTable {
@private
	NSSlice slice;	// 4 = 0x4
	unsigned count;	// 68 = 0x44
	unsigned capacity;	// 72 = 0x48
	unsigned options;	// 76 = 0x4c
	unsigned mutations;	// 80 = 0x50
}
@property(readonly, assign) unsigned count;	// G=0x3029add1; converted property
- (id)init;	// 0x302c286d
- (id)initWithCoder:(id)coder;	// 0x302c289d
- (id)initWithOptions:(unsigned)options capacity:(unsigned)capacity;	// 0x3025681d
- (id)initWithPointerFunctions:(id)pointerFunctions capacity:(unsigned)capacity;	// 0x3028ae15
- (void)_initBlock;	// 0x3025694d
- (void)addObject:(id)object;	// 0x30256c71
- (id)allObjects;	// 0x302c2ddd
- (void)assign:(unsigned)assign key:(const void *)key;	// 0x30256e3d
- (Class)classForCoder;	// 0x302c2881
- (id)copy;	// 0x3028f42d
// converted property getter: - (unsigned)count;	// 0x3029add1
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3026cdc1
- (void)dealloc;	// 0x302578a5
- (id)description;	// 0x302c2f59
- (void)encodeWithCoder:(id)coder;	// 0x302c2931
- (void)finalize;	// 0x302c2f05
- (void *)getItem:(const void *)item;	// 0x30257099
- (void)getKeys:(void **)keys count:(unsigned *)count;	// 0x302c2e95
- (unsigned)hash;	// 0x302c2af1
- (void)hashGrow;	// 0x30256e99
- (void)insertItem:(const void *)item;	// 0x3028f5a5
- (void)insertKnownAbsentItem:(const void *)item;	// 0x302c2cd9
- (BOOL)isEqual:(id)equal;	// 0x302c2b15
- (id)objectEnumerator;	// 0x302c3035
- (id)pointerFunctions;	// 0x302c2a8d
- (void)raiseCountUnderflowException;	// 0x302c2c25
- (void)rehash;	// 0x302c2c69
- (unsigned)rehashAround:(unsigned)around;	// 0x30257705
- (void)removeAllItems;	// 0x302c2d91
- (void)removeItem:(const void *)item;	// 0x30256fcd
@end


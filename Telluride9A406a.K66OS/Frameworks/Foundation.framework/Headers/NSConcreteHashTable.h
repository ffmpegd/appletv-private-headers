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
@property(readonly, assign) unsigned count;	// G=0x35e1edd1; converted property
- (id)init;	// 0x35e4686d
- (id)initWithCoder:(id)coder;	// 0x35e4689d
- (id)initWithOptions:(unsigned)options capacity:(unsigned)capacity;	// 0x35dda81d
- (id)initWithPointerFunctions:(id)pointerFunctions capacity:(unsigned)capacity;	// 0x35e0ee15
- (void)_initBlock;	// 0x35dda94d
- (void)addObject:(id)object;	// 0x35ddac71
- (id)allObjects;	// 0x35e46ddd
- (void)assign:(unsigned)assign key:(const void *)key;	// 0x35ddae3d
- (Class)classForCoder;	// 0x35e46881
- (id)copy;	// 0x35e1342d
// converted property getter: - (unsigned)count;	// 0x35e1edd1
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x35df0dc1
- (void)dealloc;	// 0x35ddb8a5
- (id)description;	// 0x35e46f59
- (void)encodeWithCoder:(id)coder;	// 0x35e46931
- (void)finalize;	// 0x35e46f05
- (void *)getItem:(const void *)item;	// 0x35ddb099
- (void)getKeys:(void **)keys count:(unsigned *)count;	// 0x35e46e95
- (unsigned)hash;	// 0x35e46af1
- (void)hashGrow;	// 0x35ddae99
- (void)insertItem:(const void *)item;	// 0x35e135a5
- (void)insertKnownAbsentItem:(const void *)item;	// 0x35e46cd9
- (BOOL)isEqual:(id)equal;	// 0x35e46b15
- (id)objectEnumerator;	// 0x35e47035
- (id)pointerFunctions;	// 0x35e46a8d
- (void)raiseCountUnderflowException;	// 0x35e46c25
- (void)rehash;	// 0x35e46c69
- (unsigned)rehashAround:(unsigned)around;	// 0x35ddb705
- (void)removeAllItems;	// 0x35e46d91
- (void)removeItem:(const void *)item;	// 0x35ddafcd
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSHashTable.h"


__attribute__((visibility("hidden")))
@interface NSConcreteHashTable : NSHashTable {
	NSSlice slice;	// 4 = 0x4
	unsigned count;	// 68 = 0x44
	unsigned capacity;	// 72 = 0x48
	unsigned options;	// 76 = 0x4c
	unsigned mutations;	// 80 = 0x50
}
@property(readonly, assign) unsigned count;	// G=0x34683175; converted property
- (id)init;	// 0x346af3e9
- (id)initWithCoder:(id)coder;	// 0x346af435
- (id)initWithOptions:(unsigned)options capacity:(unsigned)capacity;	// 0x3463e969
- (id)initWithPointerFunctions:(id)pointerFunctions capacity:(unsigned)capacity;	// 0x3467322d
- (void)_initBlock;	// 0x3463ea95
- (void)addObject:(id)object;	// 0x3463ee39
- (id)allObjects;	// 0x346af9bd
- (void)assign:(unsigned)assign key:(const void *)key;	// 0x3463f029
- (Class)classForCoder;	// 0x346af419
- (id)copy;	// 0x346778d1
// converted property getter: - (unsigned)count;	// 0x34683175
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x346550ed
- (void)dealloc;	// 0x3463faad
- (id)description;	// 0x346afb59
- (void)encodeWithCoder:(id)coder;	// 0x346af4c9
- (void)finalize;	// 0x346afb05
- (void *)getItem:(const void *)item;	// 0x3463f265
- (void)getKeys:(void **)keys count:(unsigned *)count;	// 0x346afa91
- (unsigned)hash;	// 0x346af6a9
- (void)hashGrow;	// 0x3463f085
- (void)insertItem:(const void *)item;	// 0x34677a6d
- (void)insertKnownAbsentItem:(const void *)item;	// 0x346af8b5
- (BOOL)isEqual:(id)equal;	// 0x346af6d1
- (id)objectEnumerator;	// 0x346afc31
- (id)pointerFunctions;	// 0x346af645
- (void)raiseCountUnderflowException;	// 0x346af801
- (void)rehash;	// 0x346af845
- (unsigned)rehashAround:(unsigned)around;	// 0x3463f8fd
- (void)removeAllItems;	// 0x346af971
- (void)removeItem:(const void *)item;	// 0x3463f19d
@end


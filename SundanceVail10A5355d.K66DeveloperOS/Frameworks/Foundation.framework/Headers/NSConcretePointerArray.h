/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPointerArray.h"


__attribute__((visibility("hidden")))
@interface NSConcretePointerArray : NSPointerArray {
	NSSlice slice;	// 4 = 0x4
	unsigned count;	// 68 = 0x44
	unsigned capacity;	// 72 = 0x48
	unsigned options;	// 76 = 0x4c
	unsigned mutations;	// 80 = 0x50
	BOOL needsCompaction;	// 84 = 0x54
}
@property(assign) unsigned count;	// G=0x3468c64d; S=0x3468c65d; converted property
- (id)init;	// 0x3468b751
- (id)initWithCoder:(id)coder;	// 0x3468b98d
- (id)initWithOptions:(unsigned)options;	// 0x3468b779
- (id)initWithPointerFunctions:(id)pointerFunctions;	// 0x3468b879
- (void)_initBlock;	// 0x3468b765
- (void)_markNeedsCompaction;	// 0x3468c549
- (void)addPointer:(void *)pointer;	// 0x3468c09d
- (void)arrayGrow:(unsigned)grow;	// 0x3468bf25
- (Class)classForCoder;	// 0x3468b971
- (void)compact;	// 0x3468c55d
- (id)copyWithZone:(NSZone *)zone;	// 0x3468c835
// converted property getter: - (unsigned)count;	// 0x3468c64d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3468be39
- (void)dealloc;	// 0x3468ba39
- (void)encodeWithCoder:(id)coder;	// 0x3468bce1
- (void)finalize;	// 0x3468bae5
- (unsigned)hash;	// 0x3468bba9
- (unsigned)indexOfPointer:(void *)pointer;	// 0x3468c729
- (void)insertPointer:(void *)pointer atIndex:(unsigned)index;	// 0x3468c2a9
- (BOOL)isEqual:(id)equal;	// 0x3468bbd1
- (void *)pointerAtIndex:(unsigned)index;	// 0x3468bfed
- (id)pointerFunctions;	// 0x3468bec1
- (void)removePointer:(void *)pointer;	// 0x3468c799
- (void)removePointerAtIndex:(unsigned)index;	// 0x3468c159
- (void)replacePointerAtIndex:(unsigned)index withPointer:(void *)pointer;	// 0x3468c44d
// converted property setter: - (void)setCount:(unsigned)count;	// 0x3468c65d
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPointerFunctions.h"


__attribute__((visibility("hidden")))
@interface NSConcretePointerFunctions : NSPointerFunctions {
@private
	NSSlice slice;	// 4 = 0x4
}
@property(assign) /*function-pointer*/ void *acquireFunction;	// G=0x32490105; S=0x3249007d; converted property
@property(assign) /*function-pointer*/ void *descriptionFunction;	// G=0x324900f5; S=0x3249006d; converted property
@property(assign) /*function-pointer*/ void *hashFunction;	// G=0x324900d5; S=0x3249003d; converted property
@property(assign) /*function-pointer*/ void *isEqualFunction;	// G=0x324900e5; S=0x32490055; converted property
@property(assign) /*function-pointer*/ void *relinquishFunction;	// G=0x32490115; S=0x3249008d; converted property
@property(assign) /*function-pointer*/ void *sizeFunction;	// G=0x324900c5; S=0x3249002d; converted property
@property(assign) BOOL usesStrongWriteBarrier;	// G=0x32490125; S=0x3249009d; converted property
@property(assign) BOOL usesWeakReadAndWriteBarriers;	// G=0x32490139; S=0x324900b1; converted property
+ (void)initializeBackingStore:(NSSlice *)store sentinel:(bool)sentinel;	// 0x324226e5
+ (bool)initializeSlice:(NSSlice *)slice withOptions:(unsigned)options;	// 0x32422415
- (id)initWithOptions:(unsigned)options;	// 0x32490535
// converted property getter: - (/*function-pointer*/ void *)acquireFunction;	// 0x32490105
- (id)copyWithZone:(NSZone *)zone;	// 0x324901d1
// converted property getter: - (/*function-pointer*/ void *)descriptionFunction;	// 0x324900f5
- (unsigned)hash;	// 0x3249001d
// converted property getter: - (/*function-pointer*/ void *)hashFunction;	// 0x324900d5
- (BOOL)isEqual:(id)equal;	// 0x32490021
// converted property getter: - (/*function-pointer*/ void *)isEqualFunction;	// 0x324900e5
// converted property getter: - (/*function-pointer*/ void *)relinquishFunction;	// 0x32490115
// converted property setter: - (void)setAcquireFunction:(/*function-pointer*/ void *)function;	// 0x3249007d
// converted property setter: - (void)setDescriptionFunction:(/*function-pointer*/ void *)function;	// 0x3249006d
// converted property setter: - (void)setHashFunction:(/*function-pointer*/ void *)function;	// 0x3249003d
// converted property setter: - (void)setIsEqualFunction:(/*function-pointer*/ void *)function;	// 0x32490055
// converted property setter: - (void)setRelinquishFunction:(/*function-pointer*/ void *)function;	// 0x3249008d
// converted property setter: - (void)setSizeFunction:(/*function-pointer*/ void *)function;	// 0x3249002d
// converted property setter: - (void)setUsesStrongWriteBarrier:(BOOL)barrier;	// 0x3249009d
// converted property setter: - (void)setUsesWeakReadAndWriteBarriers:(BOOL)barriers;	// 0x324900b1
// converted property getter: - (/*function-pointer*/ void *)sizeFunction;	// 0x324900c5
// converted property getter: - (BOOL)usesStrongWriteBarrier;	// 0x32490125
// converted property getter: - (BOOL)usesWeakReadAndWriteBarriers;	// 0x32490139
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSObject.h"
#import "CoreFoundation-Structs.h"


@interface NSInvocation : NSObject {
@private
	void *_frame;	// 4 = 0x4
	void *_retdata;	// 8 = 0x8
	id _signature;	// 12 = 0xc
	id _container;	// 16 = 0x10
	unsigned char _retainedArgs;	// 20 = 0x14
	unsigned char _reserved[15];	// 21 = 0x15
}
@property(assign) SEL selector;	// G=0x3526a0b9; S=0x3528c785; converted property
@property(retain) id target;	// G=0x352b0e41; S=0x35295e05; converted property
+ (id)invocationWithMethodSignature:(id)methodSignature;	// 0x35269ea5
- (id)init;	// 0x3530ded9
- (void)_addAttachedObject:(id)object;	// 0x3530e101
- (BOOL)argumentsRetained;	// 0x3530e0e9
- (id)copyWithZone:(NSZone *)zone;	// 0x3530e159
- (void)dealloc;	// 0x3526b179
- (void)getArgument:(void *)argument atIndex:(int)index;	// 0x3526a0dd
- (void)getReturnValue:(void *)value;	// 0x352ab72d
- (void)invoke;	// 0x3526a741
- (void)invokeSuper;	// 0x3530e649
- (void)invokeUsingIMP:(/*function-pointer*/ void *)imp;	// 0x3530e55d
- (void)invokeWithTarget:(id)target;	// 0x3526a3cd
- (id)methodSignature;	// 0x3528c5f5
- (void)retainArguments;	// 0x3528c6e9
// converted property getter: - (SEL)selector;	// 0x3526a0b9
- (void)setArgument:(void *)argument atIndex:(int)index;	// 0x3526a405
- (void)setReturnValue:(void *)value;	// 0x3530e2d1
// converted property setter: - (void)setSelector:(SEL)selector;	// 0x3528c785
// converted property setter: - (void)setTarget:(id)target;	// 0x35295e05
// converted property getter: - (id)target;	// 0x352b0e41
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library

@class NSInvocation;

@interface BRInvocationAnimationDelegate : NSObject {
@private
	NSInvocation *_startInvocation;	// 4 = 0x4
	NSInvocation *_endInvocation;	// 8 = 0x8
	id _endTarget;	// 12 = 0xc
}
@property(readonly, retain) NSInvocation *endInvocation;	// G=0x32fd4f7d; converted property
@property(readonly, retain) NSInvocation *startInvocation;	// G=0x32fd4f6d; converted property
+ (id)delegateWithEndInvocation:(id)endInvocation;	// 0x32fd5329
+ (id)delegateWithStartInvocation:(id)startInvocation;	// 0x32fd52e5
+ (id)delegateWithStartInvocation:(id)startInvocation endInvocation:(id)invocation;	// 0x32fd529d
+ (id)delegateWithTarget:(id)target endSelector:(SEL)selector;	// 0x32fd5269
+ (id)delegateWithTarget:(id)target startSelector:(SEL)selector;	// 0x32fd5235
+ (id)delegateWithTarget:(id)target startSelector:(SEL)selector endSelector:(SEL)selector3;	// 0x32fd512d
- (id)initWithStartInvocation:(id)startInvocation endInvocation:(id)invocation;	// 0x32fd53d9
- (void)animationDidStart:(id)animation;	// 0x32fd5089
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x32fd4f8d
- (void)dealloc;	// 0x32fd536d
// converted property getter: - (id)endInvocation;	// 0x32fd4f7d
// converted property getter: - (id)startInvocation;	// 0x32fd4f6d
@end


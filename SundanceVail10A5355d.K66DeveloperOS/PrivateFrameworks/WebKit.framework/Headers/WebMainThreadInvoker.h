/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSProxy.h> // Unknown library


@interface WebMainThreadInvoker : NSProxy {
	id target;	// 4 = 0x4
	id exception;	// 8 = 0x8
}
- (id)initWithTarget:(id)target;	// 0x316dfc29
- (void)forwardInvocation:(id)invocation;	// 0x316dfc39
- (void)handleException:(id)exception;	// 0x316dfd25
- (id)methodSignatureForSelector:(SEL)selector;	// 0x316dfd05
@end


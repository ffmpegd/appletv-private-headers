/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class _WebSafeAsyncForwarder;

@interface _WebSafeForwarder : NSObject {
	id target;	// 4 = 0x4
	id defaultTarget;	// 8 = 0x8
	BOOL catchExceptions;	// 12 = 0xc
	_WebSafeAsyncForwarder *asyncForwarder;	// 16 = 0x10
	long asyncForwarderPred;	// 20 = 0x14
}
@property(readonly, retain) _WebSafeAsyncForwarder *asyncForwarder;	// G=0x33548df5; converted property
- (id)initWithTarget:(id)target defaultTarget:(id)target2 catchExceptions:(BOOL)exceptions;	// 0x33554229
// converted property getter: - (id)asyncForwarder;	// 0x33548df5
- (void)clearTarget;	// 0x33556d91
- (void)dealloc;	// 0x33556da5
- (void)forwardInvocation:(id)invocation;	// 0x335474e5
- (id)methodSignatureForSelector:(SEL)selector;	// 0x335474c5
- (BOOL)respondsToSelector:(SEL)selector;	// 0x335c8dd1
@end

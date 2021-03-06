/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UIViewServiceSession_HostInterface.h"
#import <NSObject.h> // Unknown library
#import "XPCProxyTarget.h"

@class _UIAsyncInvocation;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIViewServiceSessionConnectionCatcher : NSObject <_UIViewServiceSession_HostInterface, XPCProxyTarget> {
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	id _continuation;	// 8 = 0x8
	BOOL _isInvalidated;	// 12 = 0xc
	_UIAsyncInvocation *_invalidationInvocation;	// 16 = 0x10
	int __automatic_invalidation_retainCount;	// 20 = 0x14
	BOOL __automatic_invalidation_invalidated;	// 24 = 0x18
}
+ (id)awaitRequestThen:(id)then;	// 0x3060d249
- (int)__automatic_invalidation_logic;	// 0x3060cfd5
- (void)__requestConnectionToDeputyOfType:(id)type withReplyHandler:(id)replyHandler;	// 0x3060d57d
- (BOOL)_isDeallocating;	// 0x3060d21d
- (BOOL)_tryRetain;	// 0x3060d1cd
- (void)dealloc;	// 0x3060d6d5
- (id)invalidate;	// 0x3060d669
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x3060d689
- (oneway void)release;	// 0x3060d0f9
- (id)retain;	// 0x3060d0c1
- (unsigned)retainCount;	// 0x3060d1b9
@end


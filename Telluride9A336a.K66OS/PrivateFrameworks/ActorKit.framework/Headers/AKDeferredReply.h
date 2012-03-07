/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ActorKit.framework/ActorKit
 */

#import <NSObject.h> // Unknown library

@class NSConditionLock, NSInvocation;

@interface AKDeferredReply : NSObject {
@private
	NSInvocation *_invocation;	// 4 = 0x4
	NSConditionLock *_blockingLock;	// 8 = 0x8
}
@property(readonly, retain) NSInvocation *invocation;	// G=0x346cccb5; converted property
+ (id)currentReply;	// 0x346ccfb1
+ (void)initialize;	// 0x346cce65
- (id)init;	// 0x346ccd95
- (id)initWithInvocation:(id)invocation andBlockingLock:(id)lock;	// 0x346ccde5
- (void)becomeCurrentReply;	// 0x346cccc5
- (void)dealloc;	// 0x346ccfc1
// converted property getter: - (id)invocation;	// 0x346cccb5
- (void)resignCurrentReply;	// 0x346cccd9
- (void)sendReply;	// 0x346ccd31
- (void)setReturnValue:(void *)value;	// 0x346ccced
@end

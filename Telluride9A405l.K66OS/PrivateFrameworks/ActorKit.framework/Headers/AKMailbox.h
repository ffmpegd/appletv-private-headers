/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ActorKit.framework/ActorKit
 */

#import <NSProxy.h> // Unknown library
#import "ActorKit-Structs.h"

@class AKDispatchQueue, Protocol;

@interface AKMailbox : NSProxy {
@private
	id _target;	// 4 = 0x4
	Protocol *_publicProtocol;	// 8 = 0x8
	Protocol *_privateProtocol;	// 12 = 0xc
	AKDispatchQueue *_dispatchQueue;	// 16 = 0x10
	qed_queue_u *_queue;	// 20 = 0x14
}
@property(retain) AKDispatchQueue *dispatchQueue;	// G=0x34bff4b5; S=0x34bff525; converted property
@property(assign, nonatomic) id target;	// G=0x34bff4d5; S=0x34bff4e5; @synthesize=_target
+ (id)mailboxWithTarget:(id)target protocol:(id)protocol;	// 0x34bff55d
- (id)initWithTarget:(id)target protocol:(id)protocol;	// 0x34bff4f5
- (BOOL)conformsToProtocol:(id)protocol;	// 0x34bff481
- (void)dealloc;	// 0x34bff59d
// converted property getter: - (id)dispatchQueue;	// 0x34bff4b5
- (void)forwardInvocation:(id)invocation;	// 0x34bff66d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x34bff5ed
- (BOOL)respondsToSelector:(SEL)selector;	// 0x34bff84d
- (id)send;	// 0x34bff4b1
// converted property setter: - (void)setDispatchQueue:(id)queue;	// 0x34bff525
- (void)setPrivateMessages:(id)messages;	// 0x34bff4c5
// declared property setter: - (void)setTarget:(id)target;	// 0x34bff4e5
- (BOOL)swapCurrentTarget:(id)target forNewTarget:(id)newTarget;	// 0x34bff5c9
// declared property getter: - (id)target;	// 0x34bff4d5
@end


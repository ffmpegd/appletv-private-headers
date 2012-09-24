/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <NSObject.h> // Unknown library
#import "AssistantServices-Structs.h"

@class NSString;

@interface DKConnection : NSObject {
	dispatch_queue_s *_queue;	// 4 = 0x4
	xpc_connection_s *_conn;	// 8 = 0x8
	dispatch_queue_s *_deliveryQueue;	// 12 = 0xc
	id _messageHandler;	// 16 = 0x10
	id _disconnectHandler;	// 20 = 0x14
	id _target;	// 24 = 0x18
}
@property(copy, nonatomic) id disconnectHandler;	// G=0x3021dbdd; S=0x3021dbf1; @synthesize=_disconnectHandler
@property(copy, nonatomic) id messageHandler;	// G=0x3021dbb9; S=0x3021dbcd; @synthesize=_messageHandler
@property(readonly, assign) NSString *serviceName;	// G=0x3021d0d1; 
@property(retain, nonatomic) id target;	// G=0x3021dc01; S=0x3021dc11; @synthesize=_target
- (id)initWithServiceName:(id)serviceName onQueue:(dispatch_queue_s *)queue;	// 0x3021ceb9
- (void).cxx_destruct;	// 0x3021dc25
- (void)_handleBarrierMessage:(void *)message;	// 0x3021d88d
- (void)_handleXPCError:(void *)error;	// 0x3021d7a9
- (void)_handleXPCMessage:(void *)message;	// 0x3021d919
- (id)_initWithXPCConnection:(xpc_connection_s *)xpcconnection;	// 0x3021cf91
- (void)_sendMessage:(id)message handler:(id)handler;	// 0x3021d11d
- (void)_setEventHandlerOnConnection:(xpc_connection_s *)connection;	// 0x3021da4d
- (void)asyncBarrierWithBlock:(id)block;	// 0x3021d669
- (void)dealloc;	// 0x3021ce49
// declared property getter: - (id)disconnectHandler;	// 0x3021dbdd
// declared property getter: - (id)messageHandler;	// 0x3021dbb9
- (void)remoteBarrier;	// 0x3021d689
- (BOOL)remoteBarrierWithTimeout:(double)timeout;	// 0x3021d6a9
- (void)sendMessage:(id)message;	// 0x3021d24d
- (void)sendMessage:(id)message withReply:(id)reply;	// 0x3021d261
- (void)sendMessage:(id)message withReplySync:(id)replySync;	// 0x3021d58d
// declared property getter: - (id)serviceName;	// 0x3021d0d1
// declared property setter: - (void)setDisconnectHandler:(id)handler;	// 0x3021dbf1
// declared property setter: - (void)setMessageHandler:(id)handler;	// 0x3021dbcd
// declared property setter: - (void)setTarget:(id)target;	// 0x3021dc11
// declared property getter: - (id)target;	// 0x3021dc01
@end

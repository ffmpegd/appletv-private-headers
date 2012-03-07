/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"


@interface SSXPCConnection : NSObject {
@private
	xpc_connection_s *_connection;	// 4 = 0x4
	dispatch_queue_s *_dispatchQueue;	// 8 = 0x8
	id _disconnectBlock;	// 12 = 0xc
	dispatch_queue_s *_replyQueue;	// 16 = 0x10
	id _messageBlock;	// 20 = 0x14
}
@property(copy) id disconnectBlock;	// G=0x324f755d; S=0x324f79c9; 
@property(copy) id messageBlock;	// G=0x324f770d; S=0x324f7abd; 
- (id)init;	// 0x324f73f9
- (id)initWithServiceName:(id)serviceName;	// 0x324f740d
- (id)initWithXPCConnection:(xpc_connection_s *)xpcconnection;	// 0x324f7459
- (id)_initSSXPCConnection;	// 0x324f73a9
- (void)_reloadEventHandler;	// 0x324f7c59
- (dispatch_queue_s *)copyReplyQueue;	// 0x324f78a9
- (xpc_endpoint_s *)createXPCEndpoint;	// 0x324f7549
- (void)dealloc;	// 0x324f74a5
// declared property getter: - (id)disconnectBlock;	// 0x324f755d
// declared property getter: - (id)messageBlock;	// 0x324f770d
- (void)sendMessage:(void *)message;	// 0x324f798d
- (void)sendMessage:(void *)message withReply:(id)reply;	// 0x324f79a1
// declared property setter: - (void)setDisconnectBlock:(id)block;	// 0x324f79c9
// declared property setter: - (void)setMessageBlock:(id)block;	// 0x324f7abd
- (void)setReplyQueue:(dispatch_queue_s *)queue;	// 0x324f7bb1
@end


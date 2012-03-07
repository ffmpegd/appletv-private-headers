/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;
@protocol WebInspectorXPCWrapperDelegate;

@interface WebInspectorXPCWrapper : NSObject {
@private
	id<WebInspectorXPCWrapperDelegate> _delegate;	// 4 = 0x4
	NSString *_tag;	// 8 = 0x8
	xpc_connection_s *_connection;	// 12 = 0xc
	void *_currentMessage;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) BOOL available;	// G=0x364ff415; 
@property(assign, nonatomic) xpc_connection_s *connection;	// G=0x364ff44d; S=0x364ff45d; @synthesize=_connection
@property(assign, nonatomic) void *currentMessage;	// G=0x364ff42d; S=0x364ff43d; @synthesize=_currentMessage
@property(assign, nonatomic) id<WebInspectorXPCWrapperDelegate> delegate;	// G=0x364ff47d; S=0x364ff48d; @synthesize=_delegate
@property(copy, nonatomic) NSString *tag;	// G=0x364ff46d; S=0x364ff53d; @synthesize=_tag
- (id)initWithConnection:(xpc_connection_s *)connection;	// 0x364ff49d
- (id)_deserializeMessage:(void *)message;	// 0x364ff8f9
- (void)_handleEvent:(void *)event;	// 0x364ff7fd
// declared property getter: - (BOOL)available;	// 0x364ff415
- (void)barrierWithCompletionHandler:(id)completionHandler;	// 0x364ff561
- (void)close;	// 0x364ffb75
// declared property getter: - (xpc_connection_s *)connection;	// 0x364ff44d
// declared property getter: - (void *)currentMessage;	// 0x364ff42d
- (void)dealloc;	// 0x364ffb19
// declared property getter: - (id)delegate;	// 0x364ff47d
- (void)sendMessage:(id)message userInfo:(id)info;	// 0x364ff7d9
- (void)sendMessage:(id)message userInfo:(id)info replyHandler:(id)handler;	// 0x364ff5c9
// declared property setter: - (void)setConnection:(xpc_connection_s *)connection;	// 0x364ff45d
// declared property setter: - (void)setCurrentMessage:(void *)message;	// 0x364ff43d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x364ff48d
// declared property setter: - (void)setTag:(id)tag;	// 0x364ff53d
// declared property getter: - (id)tag;	// 0x364ff46d
@end


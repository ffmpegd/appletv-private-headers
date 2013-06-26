/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import </libobjc.A.h>
#import "WebBookmarksXPCConnectionDelegate.h"

@class NSMutableDictionary, NSMutableArray;
@protocol OS_xpc_object;

@interface WebBookmarksXPCListener : NSObject <WebBookmarksXPCConnectionDelegate> {
	NSObject<OS_xpc_object> *_listenerConnection;	// 4 = 0x4
	NSMutableArray *_clientConnections;	// 8 = 0x8
	id<WebBookmarksXPCConnectionDelegate> _delegate;	// 12 = 0xc
	NSMutableDictionary *_messageHandlers;	// 16 = 0x10
}
- (id)initListenerForMachService:(const char *)machService delegate:(id)delegate;	// 0x32e64ea1
- (void)_handleIncomingConnection:(id)connection;	// 0x32e6504d
- (void)connection:(id)connection didCloseWithError:(id)error;	// 0x32e651b5
- (void)dealloc;	// 0x32e64fe9
- (void)setHandler:(id)handler forMessageNamed:(const char *)messageNamed;	// 0x32e650dd
- (void)setMessageHandlers:(id)handlers;	// 0x32e65139
@end

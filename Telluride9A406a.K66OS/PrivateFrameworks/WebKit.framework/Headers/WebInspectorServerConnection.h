/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class WebInspectorRemoteChannel;

__attribute__((visibility("hidden")))
@interface WebInspectorServerConnection : NSObject {
@private
	WebInspectorRemoteChannel *_channel;	// 4 = 0x4
}
- (id)init;	// 0x30326a55
- (void)clearChannel;	// 0x30326a3d
- (void)dealloc;	// 0x30326ae9
- (void)receivedWebSocketMessage:(id)message;	// 0x30326a99
- (void)sendWebSocketMessage:(id)message;	// 0x30326a51
@end


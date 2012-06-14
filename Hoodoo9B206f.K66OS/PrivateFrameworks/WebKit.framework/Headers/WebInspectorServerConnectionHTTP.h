/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import "WebInspectorServerConnection.h"


__attribute__((visibility("hidden")))
@interface WebInspectorServerConnectionHTTP : WebInspectorServerConnection {
@private
	int _socketFileDescriptor;	// 8 = 0x8
	CFReadStreamRef _readStream;	// 12 = 0xc
	CFWriteStreamRef _writeStream;	// 16 = 0x10
	BOOL _isWebSocketServer;	// 20 = 0x14
	BOOL _shouldCloseAfterSendingResponse;	// 21 = 0x15
	CFHTTPMessageRef _httpMessage;	// 24 = 0x18
	CFHTTPMessageRef _httpResponse;	// 28 = 0x1c
	CFDataRef _incomingWebSocketData;	// 32 = 0x20
	CFDataRef _outgoingData;	// 36 = 0x24
}
- (id)initWithSocketFileDescriptor:(int)socketFileDescriptor;	// 0x30d8bc31
- (void)_sendPendingData;	// 0x30d8d535
- (void)clearChannel;	// 0x30d8d4c1
- (void)close;	// 0x30d8d5c9
- (void)dealloc;	// 0x30d8d711
- (void)handleReadEvent:(unsigned long)event;	// 0x30d8bdd1
- (void)handleWriteEvent:(unsigned long)event;	// 0x30d8bda5
- (void)read:(const char *)read length:(long)length;	// 0x30d8d401
- (void)readHTTPMessage:(const char *)message length:(long)length;	// 0x30d8d291
- (void)readWebSocketMessage:(const char *)message length:(long)length;	// 0x30d8d151
- (void)send;	// 0x30d8d501
- (void)sendHTTPDynamicJSONListingResponse;	// 0x30d8c5a5
- (void)sendHTTPInspectorPageResponse:(id)response;	// 0x30d8c3a5
- (void)sendHTTPResponse;	// 0x30d8d075
- (void)sendWebSocketMessage:(id)message;	// 0x30d8d435
- (void)sendWebSocketResponse:(id)response;	// 0x30d8be31
- (void)shutdown;	// 0x30d8d5b9
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "TCPServer.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVTCPControlReceiver : TCPServer {
@private
	Class connClass;	// 52 = 0x34
	NSMutableArray *_openConnections;	// 56 = 0x38
}
@property(assign) Class connectionClass;	// G=0x3399f1fd; S=0x3399f20d; converted property
- (id)init;	// 0x3399f039
- (BOOL)_start;	// 0x3399f3bd
// converted property getter: - (Class)connectionClass;	// 0x3399f1fd
- (void)connectionClosed:(id)closed;	// 0x3399f2ad
- (void)dealloc;	// 0x3399f1b1
- (void)handleNewConnectionFromAddress:(id)address inputStream:(id)stream outputStream:(id)stream3;	// 0x3399f21d
- (void)newBytesReceived:(id)received data:(id)data;	// 0x3399f359
// converted property setter: - (void)setConnectionClass:(Class)aClass;	// 0x3399f20d
@end


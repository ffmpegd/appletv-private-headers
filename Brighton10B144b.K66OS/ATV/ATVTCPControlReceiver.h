/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TCPServer.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVTCPControlReceiver : TCPServer {
	Class connClass;	// 52 = 0x34
	NSMutableArray *_openConnections;	// 56 = 0x38
}
@property(assign) Class connectionClass;	// G=0x23fb35; S=0x23fb45; converted property
- (id)init;	// 0x23f971
- (BOOL)_start;	// 0x23fd05
// converted property getter: - (Class)connectionClass;	// 0x23fb35
- (void)connectionClosed:(id)closed;	// 0x23fbe5
- (void)dealloc;	// 0x23fae9
- (void)handleNewConnectionFromAddress:(id)address inputStream:(id)stream outputStream:(id)stream3;	// 0x23fb55
- (void)newBytesReceived:(id)received data:(id)data;	// 0x23fc95
// converted property setter: - (void)setConnectionClass:(Class)aClass;	// 0x23fb45
@end


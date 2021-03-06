/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import "AirTraffic-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, ATXPCConnection, NSDictionary;

@interface ATXPCMessage : NSObject {
@private
	ATXPCConnection *_receivingConnection;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	NSDictionary *_info;	// 12 = 0xc
	xpc_connection_s *_x_reply_connection;	// 16 = 0x10
	void *_x_reply;	// 20 = 0x14
}
@property(copy, nonatomic) NSDictionary *info;	// G=0x350f2195; S=0x350f21a5; @synthesize=_info
@property(readonly, assign, nonatomic) NSString *name;	// G=0x350f2185; @synthesize=_name
- (id)initWithName:(id)name;	// 0x350f1c3d
- (void *)_createXPCMessage;	// 0x350f1f39
- (id)_initWithXPCMessage:(void *)xpcmessage onConnection:(id)connection;	// 0x350f1d1d
- (void)dealloc;	// 0x350f1c91
// declared property getter: - (id)info;	// 0x350f2195
// declared property getter: - (id)name;	// 0x350f2185
- (BOOL)needsReply;	// 0x350f2159
- (void)sendReply:(id)reply;	// 0x350f2011
// declared property setter: - (void)setInfo:(id)info;	// 0x350f21a5
@end


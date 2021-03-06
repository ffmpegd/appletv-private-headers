/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "NSStreamDelegate.h"

@class ATVTCPControlReceiver, NSMutableData, NSData, NSMutableArray, NSInputStream, NSOutputStream;

__attribute__((visibility("hidden")))
@interface ATVTCPConnection : NSObject <NSStreamDelegate> {
@private
	id _delegate;	// 4 = 0x4
	NSData *_peerAddress;	// 8 = 0x8
	ATVTCPControlReceiver *_server;	// 12 = 0xc
	NSMutableArray *_requests;	// 16 = 0x10
	NSInputStream *_istream;	// 20 = 0x14
	NSOutputStream *_ostream;	// 24 = 0x18
	NSMutableData *_ibuffer;	// 28 = 0x1c
	NSMutableData *_obuffer;	// 32 = 0x20
	BOOL _isValid;	// 36 = 0x24
}
@property(assign) id delegate;	// G=0x336d2145; S=0x336d2155; converted property
@property(readonly, assign) BOOL isValid;	// G=0x336d2185; converted property
@property(readonly, retain) NSData *peerAddress;	// G=0x336d2165; converted property
@property(readonly, retain) ATVTCPControlReceiver *server;	// G=0x336d2175; converted property
- (id)init;	// 0x336d24c1
- (id)initWithPeerAddress:(id)peerAddress inputStream:(id)stream outputStream:(id)stream3 forServer:(id)server;	// 0x336d238d
- (void)dealloc;	// 0x336d2339
// converted property getter: - (id)delegate;	// 0x336d2145
- (void)invalidate;	// 0x336d2221
// converted property getter: - (BOOL)isValid;	// 0x336d2185
// converted property getter: - (id)peerAddress;	// 0x336d2165
- (BOOL)processIncomingBytes;	// 0x336d2195
// converted property getter: - (id)server;	// 0x336d2175
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x336d2155
- (void)stream:(id)stream handleEvent:(unsigned)event;	// 0x336d2819
@end


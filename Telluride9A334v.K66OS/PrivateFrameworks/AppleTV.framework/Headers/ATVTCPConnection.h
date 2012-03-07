/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NSStreamDelegate.h"
#import <NSObject.h> // Unknown library

@class NSData, NSMutableData, NSMutableArray, NSInputStream, ATVTCPControlReceiver, NSOutputStream;

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
@property(assign) id delegate;	// G=0x3311a5ad; S=0x3311a5bd; converted property
@property(readonly, assign) BOOL isValid;	// G=0x3311a5ed; converted property
@property(readonly, retain) NSData *peerAddress;	// G=0x3311a5cd; converted property
@property(readonly, retain) ATVTCPControlReceiver *server;	// G=0x3311a5dd; converted property
- (id)init;	// 0x3311a3e1
- (id)initWithPeerAddress:(id)peerAddress inputStream:(id)stream outputStream:(id)stream3 forServer:(id)server;	// 0x3311a3f9
- (void)dealloc;	// 0x3311a54d
// converted property getter: - (id)delegate;	// 0x3311a5ad
- (void)invalidate;	// 0x3311a5fd
// converted property getter: - (BOOL)isValid;	// 0x3311a5ed
// converted property getter: - (id)peerAddress;	// 0x3311a5cd
- (BOOL)processIncomingBytes;	// 0x3311a71d
// converted property getter: - (id)server;	// 0x3311a5dd
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3311a5bd
- (void)stream:(id)stream handleEvent:(unsigned)event;	// 0x3311a7b5
@end

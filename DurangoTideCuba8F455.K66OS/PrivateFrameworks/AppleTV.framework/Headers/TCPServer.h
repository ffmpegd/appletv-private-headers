/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSNetService;

__attribute__((visibility("hidden")))
@interface TCPServer : NSObject {
@private
	id delegate;	// 4 = 0x4
	NSString *domain;	// 8 = 0x8
	NSString *name;	// 12 = 0xc
	NSString *type;	// 16 = 0x10
	unsigned short port;	// 20 = 0x14
	CFSocketRef ipv4socket;	// 24 = 0x18
	CFSocketRef ipv6socket;	// 28 = 0x1c
	NSNetService *netService;	// 32 = 0x20
	BOOL publishConnection;	// 36 = 0x24
	CFRunLoopRef _runLoop;	// 40 = 0x28
	CFRunLoopSourceRef _source4;	// 44 = 0x2c
	CFRunLoopSourceRef _source6;	// 48 = 0x30
}
@property(assign) id delegate;	// G=0x3069a339; S=0x3069a349; converted property
@property(retain) NSString *domain;	// G=0x3069a359; S=0x3069a495; converted property
@property(retain) NSString *name;	// G=0x3069a369; S=0x3069a459; converted property
@property(assign) unsigned short port;	// G=0x3069a389; S=0x3069a399; converted property
@property(retain) NSString *type;	// G=0x3069a379; S=0x3069a41d; converted property
- (id)init;	// 0x3069a335
- (void)dealloc;	// 0x3069a4d1
// converted property getter: - (id)delegate;	// 0x3069a339
// converted property getter: - (id)domain;	// 0x3069a359
- (void)handleNewConnectionFromAddress:(id)address inputStream:(id)stream outputStream:(id)stream3;	// 0x3069a3b9
// converted property getter: - (id)name;	// 0x3069a369
// converted property getter: - (unsigned short)port;	// 0x3069a389
- (void)publishConnection:(BOOL)connection;	// 0x3069a3a9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3069a349
// converted property setter: - (void)setDomain:(id)domain;	// 0x3069a495
// converted property setter: - (void)setName:(id)name;	// 0x3069a459
// converted property setter: - (void)setPort:(unsigned short)port;	// 0x3069a399
// converted property setter: - (void)setType:(id)type;	// 0x3069a41d
- (BOOL)start:(id *)start;	// 0x3069a71d
- (BOOL)stop;	// 0x3069a659
// converted property getter: - (id)type;	// 0x3069a379
@end

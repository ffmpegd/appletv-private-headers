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
@property(assign) id delegate;	// G=0x3076c98d; S=0x3076c99d; converted property
@property(retain) NSString *domain;	// G=0x3076c9ad; S=0x3076cae9; converted property
@property(retain) NSString *name;	// G=0x3076c9bd; S=0x3076caad; converted property
@property(assign) unsigned short port;	// G=0x3076c9dd; S=0x3076c9ed; converted property
@property(retain) NSString *type;	// G=0x3076c9cd; S=0x3076ca71; converted property
- (id)init;	// 0x3076c989
- (void)dealloc;	// 0x3076cb25
// converted property getter: - (id)delegate;	// 0x3076c98d
// converted property getter: - (id)domain;	// 0x3076c9ad
- (void)handleNewConnectionFromAddress:(id)address inputStream:(id)stream outputStream:(id)stream3;	// 0x3076ca0d
// converted property getter: - (id)name;	// 0x3076c9bd
// converted property getter: - (unsigned short)port;	// 0x3076c9dd
- (void)publishConnection:(BOOL)connection;	// 0x3076c9fd
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3076c99d
// converted property setter: - (void)setDomain:(id)domain;	// 0x3076cae9
// converted property setter: - (void)setName:(id)name;	// 0x3076caad
// converted property setter: - (void)setPort:(unsigned short)port;	// 0x3076c9ed
// converted property setter: - (void)setType:(id)type;	// 0x3076ca71
- (BOOL)start:(id *)start;	// 0x3076cd71
- (BOOL)stop;	// 0x3076ccad
// converted property getter: - (id)type;	// 0x3076c9cd
@end

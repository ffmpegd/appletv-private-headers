/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HomeSharing-Structs.h"
#import <NSObject.h> // Unknown library

@class NSNetService;

@interface _HSUnresolvedLibrary : NSObject {
	id _completionHandler;	// 4 = 0x4
	NSNetService *_netService;	// 8 = 0x8
	DNSServiceRef_tRef _resolvingDNSService;	// 12 = 0xc
}
- (id)initWithNSNetService:(id)nsnetService;	// 0x31deae95
- (void)_callAndInvalidateCompletionHandlerWithLibrary:(id)library;	// 0x31deaf61
- (void)_netServiceDidNotResolve;	// 0x31deb83d
- (void)_netServiceDidResolveAddressWithTXTRecordData:(id)_netService host:(hostent *)host port:(unsigned short)port;	// 0x31deb251
- (void)_timeoutResolve;	// 0x31deb21d
- (void)dealloc;	// 0x31deaee9
- (void)resolveWithTimeout:(double)timeout completionHandler:(id)handler;	// 0x31deafa5
@end

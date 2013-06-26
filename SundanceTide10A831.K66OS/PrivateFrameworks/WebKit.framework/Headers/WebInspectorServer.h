/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import "WebInspectorXPCWrapperDelegate.h"
#import <NSObject.h> // Unknown library
#import "WebInspectorClientRegistryDelegate.h"

@class WebInspectorServerWebViewConnectionController, WebInspectorXPCWrapper;

@interface WebInspectorServer : NSObject <WebInspectorXPCWrapperDelegate, WebInspectorClientRegistryDelegate> {
	BOOL _isEnabled;	// 4 = 0x4
	int _notifyToken;	// 8 = 0x8
	WebInspectorXPCWrapper *_xpcConnection;	// 12 = 0xc
	WebInspectorServerWebViewConnectionController *_connectionController;	// 16 = 0x10
}
@property(readonly, assign) BOOL isEnabled;	// G=0x350966e5; converted property
@property(readonly, retain) WebInspectorXPCWrapper *xpcConnection;	// G=0x350966f5; converted property
- (id)init;	// 0x3503cf15
- (void)dealloc;	// 0x35096595
- (void)didRegisterClient:(WebInspectorClient *)client;	// 0x3503d6f1
- (void)didUnregisterClient:(WebInspectorClient *)client;	// 0x3509687d
// converted property getter: - (BOOL)isEnabled;	// 0x350966e5
- (void)pushListing;	// 0x3503d701
- (void)setupXPCConnectionIfNeeded;	// 0x35096705
- (void)start;	// 0x3503d0c9
- (void)stop;	// 0x35096649
// converted property getter: - (id)xpcConnection;	// 0x350966f5
- (void)xpcConnection:(id)connection receivedMessage:(id)message userInfo:(id)info;	// 0x350967b1
- (void)xpcConnectionFailed:(id)failed;	// 0x35096819
@end

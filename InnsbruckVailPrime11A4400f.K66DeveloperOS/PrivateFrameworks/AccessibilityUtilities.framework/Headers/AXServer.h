/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import </libobjc.A.h>

@class AXIPCServer, NSString, AXIPCClient;

@interface AXServer : NSObject {
	AXIPCServer *_server;	// 4 = 0x4
	AXIPCClient *_client;	// 8 = 0x8
	NSString *_serverIdentifier;	// 12 = 0xc
}
@property(retain, nonatomic) AXIPCClient *client;	// G=0x2fe386bd; S=0x2fe386cd; @synthesize=_client
@property(retain, nonatomic) AXIPCServer *server;	// G=0x2fe3869d; S=0x2fe386ad; @synthesize=_server
@property(copy, nonatomic) NSString *serverIdentifier;	// G=0x2fe37f81; S=0x2fe386dd; @synthesize=_serverIdentifier
- (BOOL)_connectIfNecessary;	// 0x2fe381c9
- (void)_connectServerIfNecessary;	// 0x2fe3857d
- (void)_didConnectToClient;	// 0x2fe381b9
- (void)_didConnectToServer;	// 0x2fe381c1
- (id)_serviceName;	// 0x2fe38669
- (void)_wasDisconnectedFromClient;	// 0x2fe381bd
- (void)_willClearServer;	// 0x2fe381c5
// declared property getter: - (id)client;	// 0x2fe386bd
- (void)dealloc;	// 0x2fe37ee1
- (id)sendMessage:(id)message;	// 0x2fe3816d
- (void)sendSimpleMessageForKey:(int)key;	// 0x2fe38025
- (BOOL)sendSimpleMessageWithResult:(int)result;	// 0x2fe380a9
// declared property getter: - (id)server;	// 0x2fe3869d
// declared property getter: - (id)serverIdentifier;	// 0x2fe37f81
// declared property setter: - (void)setClient:(id)client;	// 0x2fe386cd
// declared property setter: - (void)setServer:(id)server;	// 0x2fe386ad
// declared property setter: - (void)setServerIdentifier:(id)identifier;	// 0x2fe386dd
@end

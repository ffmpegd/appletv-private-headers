/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import </libobjc.A.h>

@class ACAccount, NSXPCConnection;
@protocol ACDOAuthSignerProtocol;

@interface ACOAuthSigner : NSObject {
	NSXPCConnection *_connection;	// 4 = 0x4
	ACAccount *_account;	// 8 = 0x8
	id<ACDOAuthSignerProtocol> _proxyShim;	// 12 = 0xc
	BOOL _shouldIncludeAppIdInRequest;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL shouldIncludeAppIdInRequest;	// G=0x2c990ffd; S=0x2c99100d; @synthesize=_shouldIncludeAppIdInRequest
- (id)initWithAccount:(id)account;	// 0x2c9906dd
- (id)initWithAccount:(id)account remoteEndpoint:(id)endpoint;	// 0x2c9906f1
- (void).cxx_destruct;	// 0x2c99101d
- (void)_connectToRemoteOAuthSignerUsingEndpoint:(id)remoteOAuthSignerUsingEndpoint;	// 0x2c990de1
- (void)dealloc;	// 0x2c99083d
- (void)disconnectFromRemoteOAuthSigner;	// 0x2c990fdd
// declared property setter: - (void)setShouldIncludeAppIdInRequest:(BOOL)includeAppIdInRequest;	// 0x2c99100d
// declared property getter: - (BOOL)shouldIncludeAppIdInRequest;	// 0x2c990ffd
- (id)signedURLRequestWithURLRequest:(id)urlrequest;	// 0x2c990dc1
- (id)signedURLRequestWithURLRequest:(id)urlrequest applicationID:(id)anId timestamp:(id)timestamp;	// 0x2c990b5d
- (id)signedURLRequestWithURLRequest:(id)urlrequest callingPID:(id)pid timestamp:(id)timestamp;	// 0x2c99087d
@end


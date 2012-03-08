/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library
#import "CoreDAV-Structs.h"
#import "CoreDAVAccountInfoProvider.h"

@class NSData, NSString, NSDictionary, NSError, NSURL, NSSet;

@interface CoreDAVDiscoveryAccountInfo : NSObject <CoreDAVAccountInfoProvider> {
	NSString *_scheme;	// 4 = 0x4
	NSString *_host;	// 8 = 0x8
	NSString *_serverRoot;	// 12 = 0xc
	int _port;	// 16 = 0x10
	NSString *_user;	// 20 = 0x14
	NSString *_password;	// 24 = 0x18
	NSData *_identityPersist;	// 28 = 0x1c
	NSURL *_principalURL;	// 32 = 0x20
	NSString *_accountID;	// 36 = 0x24
	NSDictionary *_serverHeaders;	// 40 = 0x28
	NSSet *_serverComplianceClasses;	// 44 = 0x2c
	NSString *_userAgentHeader;	// 48 = 0x30
	BOOL _shouldFailAllTasks;	// 52 = 0x34
	BOOL _started;	// 53 = 0x35
	BOOL _success;	// 54 = 0x36
	NSError *_error;	// 56 = 0x38
	id<CoreDAVAccountInfoProvider> _backingAccountInfoProvider;	// 60 = 0x3c
}
@property(retain) NSString *accountID;	// G=0x31c37e09; S=0x31c37e1d; @synthesize=_accountID
@property(retain) id<CoreDAVAccountInfoProvider> backingAccountInfoProvider;	// G=0x31c37e61; S=0x31c37e75; @synthesize=_backingAccountInfoProvider
@property(retain) NSError *error;	// G=0x31c37ed9; S=0x31c37eed; @synthesize=_error
@property(retain) NSString *host;	// G=0x31c37c99; S=0x31c37cad; @synthesize=_host
@property(retain) NSData *identityPersist;	// G=0x31c37d99; S=0x31c37dad; @synthesize=_identityPersist
@property(retain) NSString *password;	// G=0x31c37d61; S=0x31c37d75; @synthesize=_password
@property(assign) int port;	// G=0x31c37cd1; S=0x31c37ce1; @synthesize=_port
@property(retain) NSURL *principalURL;	// G=0x31c37dd1; S=0x31c37de5; @synthesize=_principalURL
@property(retain) NSString *scheme;	// G=0x31c37c61; S=0x31c37c75; @synthesize=_scheme
@property(retain) NSSet *serverComplianceClasses;	// G=0x31c37f49; S=0x31c37f5d; @synthesize=_serverComplianceClasses
@property(retain) NSDictionary *serverHeaders;	// G=0x31c37f11; S=0x31c37f25; @synthesize=_serverHeaders
@property(retain) NSString *serverRoot;	// G=0x31c37cf1; S=0x31c37d05; @synthesize=_serverRoot
@property(assign) BOOL shouldFailAllTasks;	// G=0x31c37e41; S=0x31c37e51; @synthesize=_shouldFailAllTasks
@property(assign) BOOL started;	// G=0x31c37e99; S=0x31c37ea9; @synthesize=_started
@property(assign) BOOL success;	// G=0x31c37eb9; S=0x31c37ec9; @synthesize=_success
@property(retain) NSString *user;	// G=0x31c37d29; S=0x31c37d3d; @synthesize=_user
@property(retain) NSString *userAgentHeader;	// G=0x31c37f81; S=0x31c37f95; @synthesize=_userAgentHeader
- (id)initWithAccountInfoProvider:(id)accountInfoProvider;	// 0x31c371b5
// declared property getter: - (id)accountID;	// 0x31c37e09
- (id)additionalHeaderValues;	// 0x31c3776d
// declared property getter: - (id)backingAccountInfoProvider;	// 0x31c37e61
- (CFURLStorageSessionRef)copyStorageSession;	// 0x31c37bd1
- (void)dealloc;	// 0x31c37331
- (id)description;	// 0x31c3746d
// declared property getter: - (id)error;	// 0x31c37ed9
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)space;	// 0x31c378fd
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)space withConnection:(id)connection;	// 0x31c37a21
- (BOOL)handleCertificateError:(id)error;	// 0x31c3787d
- (BOOL)handleShouldUseCredentialStorage;	// 0x31c37ad9
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x31c377b5
- (BOOL)handleTrustChallenge:(id)challenge withConnection:(id)connection;	// 0x31c3780d
// declared property getter: - (id)host;	// 0x31c37c99
// declared property getter: - (id)identityPersist;	// 0x31c37d99
// declared property getter: - (id)password;	// 0x31c37d61
// declared property getter: - (int)port;	// 0x31c37cd1
// declared property getter: - (id)principalURL;	// 0x31c37dd1
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)completionBlock;	// 0x31c37745
// declared property getter: - (id)scheme;	// 0x31c37c61
// declared property getter: - (id)serverComplianceClasses;	// 0x31c37f49
// declared property getter: - (id)serverHeaders;	// 0x31c37f11
// declared property getter: - (id)serverRoot;	// 0x31c37cf1
// declared property setter: - (void)setAccountID:(id)anId;	// 0x31c37e1d
// declared property setter: - (void)setBackingAccountInfoProvider:(id)provider;	// 0x31c37e75
// declared property setter: - (void)setError:(id)error;	// 0x31c37eed
// declared property setter: - (void)setHost:(id)host;	// 0x31c37cad
// declared property setter: - (void)setIdentityPersist:(id)persist;	// 0x31c37dad
// declared property setter: - (void)setPassword:(id)password;	// 0x31c37d75
// declared property setter: - (void)setPort:(int)port;	// 0x31c37ce1
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x31c37de5
// declared property setter: - (void)setScheme:(id)scheme;	// 0x31c37c75
// declared property setter: - (void)setServerComplianceClasses:(id)classes;	// 0x31c37f5d
// declared property setter: - (void)setServerHeaders:(id)headers;	// 0x31c37f25
// declared property setter: - (void)setServerRoot:(id)root;	// 0x31c37d05
// declared property setter: - (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x31c37e51
// declared property setter: - (void)setStarted:(BOOL)started;	// 0x31c37ea9
// declared property setter: - (void)setSuccess:(BOOL)success;	// 0x31c37ec9
// declared property setter: - (void)setUser:(id)user;	// 0x31c37d3d
// declared property setter: - (void)setUserAgentHeader:(id)header;	// 0x31c37f95
// declared property getter: - (BOOL)shouldFailAllTasks;	// 0x31c37e41
- (BOOL)shouldHandleHTTPCookiesForURL:(id)url;	// 0x31c37b21
- (BOOL)shouldRetryUnauthorizedConnection:(id)connection;	// 0x31c378a5
- (BOOL)shouldSendClientInfoHeaderForURL:(id)url;	// 0x31c37b79
- (BOOL)shouldTurnModalOnBadPassword;	// 0x31c378a1
- (BOOL)shouldUseOpportunisticSockets;	// 0x31c37c19
// declared property getter: - (BOOL)started;	// 0x31c37e99
// declared property getter: - (BOOL)success;	// 0x31c37eb9
- (id)url;	// 0x31c37675
// declared property getter: - (id)user;	// 0x31c37d29
// declared property getter: - (id)userAgentHeader;	// 0x31c37f81
@end

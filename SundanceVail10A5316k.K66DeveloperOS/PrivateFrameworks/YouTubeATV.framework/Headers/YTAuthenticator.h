/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;
@protocol YTAuthenticatorDelegate;

@interface YTAuthenticator : NSObject {
	id<YTAuthenticatorDelegate> _delegate;	// 4 = 0x4
	NSMutableArray *_deferredRequests;	// 8 = 0x8
	int _accountAuthState;	// 12 = 0xc
	int _deviceAuthState;	// 16 = 0x10
}
+ (id)sharedAuthenticator;	// 0x35e6cb55
- (id)init;	// 0x35e6cb9d
- (void)_addAccountAuthenticationObserers;	// 0x35e6cf59
- (void)_addDeferredRequest:(id)request accountAuthRequired:(BOOL)required;	// 0x35e6cc5d
- (void)_addDeviceAuthenticationObserers;	// 0x35e6cd6d
- (void)_completeAuthenticationForDeferredRequests;	// 0x35e6d2f5
- (void)_didAuthenticateAccount:(id)account;	// 0x35e6d06d
- (void)_didAuthenticateDevice:(id)device;	// 0x35e6ce81
- (void)_failedToAuthenticateAccount:(id)authenticateAccount;	// 0x35e6d0d1
- (void)_failedToAuthenticateDevice:(id)authenticateDevice;	// 0x35e6cec1
- (void)_removeAccountAuthenticationObservers;	// 0x35e6cff1
- (void)_removeDefferredRequests;	// 0x35e6d4e1
- (void)_removeDeviceAuthenticationObservers;	// 0x35e6ce05
- (void)addAuthenticationHeadersToRequest:(id)request accountAuthRequired:(BOOL)required;	// 0x35e6d501
- (BOOL)cachedCredentialsValid;	// 0x35e6d791
- (void)clearAccountInfo;	// 0x35e6d6ed
- (void)dealloc;	// 0x35e6cc01
- (void)invalidateToken;	// 0x35e6d69d
- (BOOL)isAccountAuthenticated;	// 0x35e6d7f5
- (BOOL)isWaitingForAuthentication;	// 0x35e6d7c5
- (BOOL)loadStoredCredentials;	// 0x35e6d80d
- (void)setAccount:(id)account password:(id)password;	// 0x35e6d169
- (void)setDelegate:(id)delegate;	// 0x35e6cc4d
- (void)userCancelledAccountAuthentication;	// 0x35e6d1c9
@end

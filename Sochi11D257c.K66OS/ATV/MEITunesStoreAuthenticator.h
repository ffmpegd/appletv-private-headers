/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRUserPasswordAuthenticator.h"

@class NSString, BRStateMachine;

__attribute__((visibility("hidden")))
@interface MEITunesStoreAuthenticator : BRUserPasswordAuthenticator {
	unsigned char _currentAttempts;	// 12 = 0xc
	unsigned char _currentUnknownCancelations;	// 13 = 0xd
	BOOL _oneClick;	// 14 = 0xe
	BRStateMachine *_stateMachine;	// 16 = 0x10
	NSString *_password;	// 20 = 0x14
	unsigned _scope;	// 24 = 0x18
}
@property(retain) NSString *password;	// G=0x2f289; S=0x2f1b9; converted property
@property(assign, nonatomic) unsigned scope;	// G=0x2f2a1; S=0x2f2b1; @synthesize=_scope
+ (void)upgradeAccount:(id)account coder:(id)coder;	// 0x2d1f1
- (id)initWithAccount:(id)account;	// 0x2d3a1
- (void).cxx_destruct;	// 0x2f2c1
- (void)_cancelAuthenticationWithCode:(int)code;	// 0x2fa45
- (void)_handleAuthenticationAttemptDidCompleteWithAccount:(id)_handleAuthenticationAttempt error:(id)error;	// 0x2f6d9
- (BOOL)_isAuthorizing;	// 0x2dd4d
- (void)_login;	// 0x2f3d5
- (void)_logout;	// 0x2f939
- (id)_makeAuthenticationController;	// 0x2dc55
- (void)_registerStateMachineBlocks;	// 0x2dff9
- (unsigned)_scopeToSet;	// 0x2f2f5
- (void)_sendAuthenticationRequest;	// 0x2f325
- (void)dealloc;	// 0x2d505
// converted property getter: - (id)password;	// 0x2f289
- (BOOL)promptsForExistingAccount;	// 0x2f29d
- (BOOL)requiresAuthentication;	// 0x2d9a1
- (BOOL)requiresPassword:(id *)password;	// 0x2dac9
- (BOOL)requiresSpeedTestDisclosureAgreement;	// 0x2d72d
- (BOOL)requiresUser:(id *)user;	// 0x2d869
// declared property getter: - (unsigned)scope;	// 0x2f2a1
- (void)setOneClick:(BOOL)click;	// 0x2d859
// converted property setter: - (void)setPassword:(id)password;	// 0x2f1b9
// declared property setter: - (void)setScope:(unsigned)scope;	// 0x2f2b1
- (BOOL)shouldOfferOneClickAuthorization;	// 0x2d779
- (BOOL)shouldResetPasswordOnAuthenticationError:(id)error;	// 0x2dec1
- (id)storeServicesAccount;	// 0x2d651
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class SSAuthenticationContext, SignInResponse;

__attribute__((visibility("hidden")))
@interface SignInPromptOperation : ISOperation {
@private
	SSAuthenticationContext *_authenticationContext;	// 60 = 0x3c
	SignInResponse *_response;	// 64 = 0x40
	id _authFailureBlock;	// 68 = 0x44
	id _authSuccessBlock;	// 72 = 0x48
}
@property(readonly, assign) SSAuthenticationContext *authenticationContext;	// G=0x33375651; 
@property(readonly, assign) SignInResponse *signInResponse;	// G=0x333756b1; 
- (id)initWithAuthenticationContext:(id)authenticationContext;	// 0x33375575
- (id)_activeUserName;	// 0x33375f05
- (void)_authenticateWithSuccess:(id)success withFailure:(id)failure;	// 0x33375861
- (void)_authenticationFailed:(id)failed;	// 0x33375d6d
- (void)_authenticationStatusChanged:(id)changed;	// 0x33375cd5
- (void)_callAuthFailureBlocks;	// 0x333757b9
- (void)_callAuthSuccessBlocks;	// 0x33375711
- (id)_copyResponseByPromptingForCredentials:(id *)credentials;	// 0x33375f89
- (BOOL)_isAuthNotificationForMe:(id)me;	// 0x33375ba1
- (id)_newCreateAccountDialog;	// 0x33376399
- (id)_newSignInDialog;	// 0x33376635
- (id)_passwordTextField;	// 0x3337693d
- (void)_setSignInResponse:(id)response;	// 0x33376a29
- (void)_setSignInResponseType:(int)responseType;	// 0x33376a91
- (id)_userNameTextField;	// 0x33376b05
// declared property getter: - (id)authenticationContext;	// 0x33375651
- (void)dealloc;	// 0x333755c9
- (void)run;	// 0x33375da1
// declared property getter: - (id)signInResponse;	// 0x333756b1
@end

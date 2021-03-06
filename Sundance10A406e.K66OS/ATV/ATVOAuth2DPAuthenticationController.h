/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRAuthenticationController.h"

@class NSTimer, BRAlertControl, BRWaitPromptControl;

__attribute__((visibility("hidden")))
@interface ATVOAuth2DPAuthenticationController : BRAuthenticationController {
	BRWaitPromptControl *_waitPrompt;	// 100 = 0x64
	BRAlertControl *_alertControl;	// 104 = 0x68
	NSTimer *_promptTimer;	// 108 = 0x6c
	NSTimer *_retryTimer;	// 112 = 0x70
	double _retryInterval;	// 116 = 0x74
}
- (id)initWithAuthenticator:(id)authenticator resources:(id)resources;	// 0xcb8cd
- (void)_authenticate;	// 0xcc2f1
- (void)_promptUserWithUserCode:(id)userCode verificationURL:(id)url;	// 0xcbda9
- (void)_retryTimerHandler:(id)handler;	// 0xcc2b9
- (BOOL)_shouldAttemptAuthenticationAgainWithErrorMessage:(id)errorMessage;	// 0xcbfc1
- (BOOL)_shouldRetryAuthentication;	// 0xcbf71
- (void)_showPrompt:(id)prompt;	// 0xcc16d
- (void)authenticateAtInterval:(double)interval userCode:(id)code verificationURL:(id)url;	// 0xcbbd9
- (void)authenticationCancelled:(id)cancelled;	// 0xcba1d
- (void)authenticationFailed:(id)failed;	// 0xcba75
- (void)authenticationSucceeded:(BOOL)succeeded;	// 0xcb9c5
- (void)slowDown;	// 0xcbca9
- (void)wasPopped;	// 0xcbd2d
- (void)wasPushed;	// 0xcbcc9
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"

@class BRAuthenticator;

__attribute__((visibility("hidden")))
@interface BRAuthenticationController : BRController {
	BOOL _userCancelled;	// 100 = 0x64
	BRAuthenticator *_authenticator;	// 104 = 0x68
	id _resources;	// 108 = 0x6c
	BRController *_authenticatingController;	// 112 = 0x70
	BOOL _shouldPopWhenPushed;	// 116 = 0x74
}
@property(retain) BRController *authenticatingController;	// G=0x290dad; S=0x290dc1; @synthesize=_authenticatingController
@property(readonly, assign) BRAuthenticator *authenticator;	// G=0x290d85; @synthesize=_authenticator
@property(readonly, assign) id resources;	// G=0x290d99; @synthesize=_resources
@property(assign, nonatomic) BOOL shouldPopWhenPushed;	// G=0x290dd1; S=0x290de1; @synthesize=_shouldPopWhenPushed
@property(assign, nonatomic) BOOL userCancelled;	// G=0x290d65; S=0x290d75; @synthesize=_userCancelled
+ (id)poppingController;	// 0x2909b9
- (id)initWithAuthenticator:(id)authenticator resources:(id)resources;	// 0x290a19
// declared property getter: - (id)authenticatingController;	// 0x290dad
- (void)authenticationCancelled:(id)cancelled;	// 0x290be5
- (void)authenticationFailed:(id)failed;	// 0x290c25
- (void)authenticationRequiresTOCAcceptance;	// 0x290c65
- (void)authenticationSucceeded:(BOOL)succeeded;	// 0x290b7d
// declared property getter: - (id)authenticator;	// 0x290d85
- (void)dealloc;	// 0x290b05
// declared property getter: - (id)resources;	// 0x290d99
// declared property setter: - (void)setAuthenticatingController:(id)controller;	// 0x290dc1
// declared property setter: - (void)setShouldPopWhenPushed:(BOOL)popWhenPushed;	// 0x290de1
// declared property setter: - (void)setUserCancelled:(BOOL)cancelled;	// 0x290d75
// declared property getter: - (BOOL)shouldPopWhenPushed;	// 0x290dd1
- (BOOL)showsHeader;	// 0x290d61
// declared property getter: - (BOOL)userCancelled;	// 0x290d65
- (void)wasPopped;	// 0x290d0d
- (void)wasPushed;	// 0x290c69
@end

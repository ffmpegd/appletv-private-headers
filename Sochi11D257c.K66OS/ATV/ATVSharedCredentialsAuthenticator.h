/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRUserPasswordAuthenticator.h"


__attribute__((visibility("hidden")))
@interface ATVSharedCredentialsAuthenticator : BRUserPasswordAuthenticator {
	BOOL _usingSharedCredentials;	// 12 = 0xc
	BOOL _setSharedCredentialsIsEnabled;	// 13 = 0xd
	BRUserPasswordAuthenticator *_sharedAuthenticator;	// 16 = 0x10
}
@property(assign) BOOL setSharedCredentialsIsEnabled;	// G=0x1b620d; S=0x1b6225; @synthesize=_setSharedCredentialsIsEnabled
@property(retain) BRUserPasswordAuthenticator *sharedAuthenticator;	// G=0x1b61b9; S=0x1b61cd; @synthesize=_sharedAuthenticator
@property(assign) BOOL usingSharedCredentials;	// G=0x1b61dd; S=0x1b61f5; @synthesize=_usingSharedCredentials
- (id)initWithAccount:(id)account sharedAuthenticator:(id)authenticator;	// 0x1b5ced
- (void)_handleAuthenticationCancelledWithError:(id)error;	// 0x1b6171
- (void)_handleAuthenticationFailedWithError:(id)error;	// 0x1b6129
- (void)_handleAuthenticationSucceeded;	// 0x1b60e5
- (BOOL)canSetSharedCredentials;	// 0x1b5ea1
- (BOOL)canUseSharedCredentials:(id *)credentials;	// 0x1b5d81
- (void)dealloc;	// 0x1b5d35
- (BOOL)requiresPassword:(id *)password;	// 0x1b6009
- (BOOL)requiresUser:(id *)user;	// 0x1b5f91
// declared property setter: - (void)setSetSharedCredentialsIsEnabled:(BOOL)enabled;	// 0x1b6225
// declared property setter: - (void)setSharedAuthenticator:(id)authenticator;	// 0x1b61cd
- (void)setSharedCredentials;	// 0x1b5f01
// declared property getter: - (BOOL)setSharedCredentialsIsEnabled;	// 0x1b620d
// declared property setter: - (void)setUsingSharedCredentials:(BOOL)credentials;	// 0x1b61f5
// declared property getter: - (id)sharedAuthenticator;	// 0x1b61b9
- (void)useSharedCredentials;	// 0x1b5e11
// declared property getter: - (BOOL)usingSharedCredentials;	// 0x1b61dd
@end


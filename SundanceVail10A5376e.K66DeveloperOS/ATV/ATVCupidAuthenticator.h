/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSharedCredentialsAuthenticator.h"

@class AAAccount, NSString;

__attribute__((visibility("hidden")))
@interface ATVCupidAuthenticator : ATVSharedCredentialsAuthenticator {
	AAAccount *_authenticatingAppleAccount;	// 12 = 0xc
}
@property(readonly, assign) AAAccount *appleAccount;	// G=0xec991; 
@property(readonly, assign) NSString *basePath;	// G=0xec935; 
- (void)_authCompletionHandler:(BOOL)handler error:(id)error callbackType:(int)type;	// 0xeca51
- (id)_makeAuthenticationController;	// 0xec655
- (void)_sendAuthenticationRequest;	// 0xec6cd
// declared property getter: - (id)appleAccount;	// 0xec991
// declared property getter: - (id)basePath;	// 0xec935
- (void)dealloc;	// 0xec609
- (BOOL)requiresPassword:(id *)password;	// 0xec9b9
@end


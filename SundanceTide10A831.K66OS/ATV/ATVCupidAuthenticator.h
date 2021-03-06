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
@property(readonly, assign) AAAccount *appleAccount;	// G=0xf63f9; 
@property(readonly, assign) NSString *basePath;	// G=0xf639d; 
- (void)_authCompletionHandler:(BOOL)handler error:(id)error callbackType:(int)type;	// 0xf64b9
- (void)_handleTOCAgreed:(id)agreed;	// 0xf6c15
- (void)_loadTOCWithCompletionHandler:(id)completionHandler;	// 0xf6a39
- (id)_makeAuthenticationController;	// 0xf60bd
- (void)_sendAuthenticationRequest;	// 0xf6135
// declared property getter: - (id)appleAccount;	// 0xf63f9
// declared property getter: - (id)basePath;	// 0xf639d
- (void)dealloc;	// 0xf6071
- (BOOL)requiresPassword:(id *)password;	// 0xf6421
@end


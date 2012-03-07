/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRAuthenticatorDelegate.h"

@class BRAuthenticator;

@interface BRAuthenticationManager : NSObject <BRAuthenticatorDelegate> {
@private
	id _authenticatorCreation;	// 4 = 0x4
	BRAuthenticator *_authenticator;	// 8 = 0x8
}
@property(readonly, retain) BRAuthenticator *authenticator;	// G=0x34271375; converted property
@property(retain) id preferredAccount;	// G=0x342711b5; S=0x342711b9; converted property
+ (id)managerForAccountType:(id)accountType;	// 0x3427194d
+ (void)registerManager:(id)manager forAccountType:(id)accountType;	// 0x34271839
- (id)initWithAuthenticatorCreation:(id)authenticatorCreation;	// 0x342710bd
- (void)_authenticationControllerDidCancel:(id)_authenticationController;	// 0x342717f1
- (void)_checkAuthenticator:(id *)authenticator forAccount:(id)account scope:(unsigned)scope;	// 0x34271a45
- (id)_selectAccount;	// 0x34271719
- (id)_selectAuthenticatorWithAccount:(id)account scope:(unsigned)scope;	// 0x34271761
- (void)autenticationSucceededForAuthenticator:(id)authenticator accountChanged:(BOOL)changed;	// 0x34271531
- (id)authenticationControllerForScope:(unsigned)scope;	// 0x342713b5
// converted property getter: - (id)authenticator;	// 0x34271375
- (void)dealloc;	// 0x34271111
// converted property getter: - (id)preferredAccount;	// 0x342711b5
- (void)reauthenticationFailedForAuthenticator:(id)authenticator error:(id)error;	// 0x3427169d
// converted property setter: - (void)setPreferredAccount:(id)account;	// 0x342711b9
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRAccountType, BRAuthenticator;

__attribute__((visibility("hidden")))
@interface BRAuthenticationManager : XXUnknownSuperclass {
	BOOL _isChangingAccounts;	// 4 = 0x4
	BRAccountType *_accountType;	// 8 = 0x8
	BRAuthenticator *__authenticator;	// 12 = 0xc
	id __authenticatorCreation;	// 16 = 0x10
}
@property(retain, nonatomic) BRAuthenticator *_authenticator;	// G=0x3e5c09; S=0x3e5c19; @synthesize=__authenticator
@property(copy, nonatomic) id _authenticatorCreation;	// G=0x3e5c29; S=0x3e5c3d; @synthesize=__authenticatorCreation
@property(retain, nonatomic) BRAccountType *accountType;	// G=0x3e5be9; S=0x3e5bf9; @synthesize=_accountType
+ (id)managerForAccountType:(id)accountType;	// 0x3e611d
+ (void)registerManager:(id)manager;	// 0x3e5fe5
- (id)initWithAccountType:(id)accountType authenticatorCreation:(id)creation;	// 0x3e5815
- (void)_accountManagerPreferredAccountEstablished:(id)established;	// 0x3e5cb5
- (void)_accountManagerPreferredAccountRemoved:(id)removed;	// 0x3e5ce5
- (void)_autenticationSucceededForAuthenticator:(id)authenticator accountChanged:(BOOL)changed;	// 0x3e5a8d
- (void)_authenticationCancelledForAuthenticator:(id)authenticator;	// 0x3e5b5d
- (void)_authenticationFailedForAuthenticator:(id)authenticator;	// 0x3e5b25
- (void)_authenticationFinalizedForAuthenticator:(id)authenticator;	// 0x3e5b95
// declared property getter: - (id)_authenticator;	// 0x3e5c09
// declared property getter: - (id)_authenticatorCreation;	// 0x3e5c29
- (void)_changeCurrentAccountWithAccount:(id)account;	// 0x3e5d15
- (void)_handlePreferredAccountChange:(id)change;	// 0x3e5c4d
- (id)_selectAuthenticatorWithPreferredAccount:(id)preferredAccount;	// 0x3e5dc1
- (void)_sendNotificationWithActivity:(int)activity;	// 0x3e5f51
// declared property getter: - (id)accountType;	// 0x3e5be9
- (id)authenticatorWithAccount:(id)account;	// 0x3e5a7d
- (id)authenticatorWithNewAccount;	// 0x3e5a4d
- (id)currentAccount;	// 0x3e5a29
- (void)dealloc;	// 0x3e5935
- (void)removeCurrentAccount;	// 0x3e5a39
// declared property setter: - (void)setAccountType:(id)type;	// 0x3e5bf9
// declared property setter: - (void)set_authenticator:(id)authenticator;	// 0x3e5c19
// declared property setter: - (void)set_authenticatorCreation:(id)creation;	// 0x3e5c3d
@end

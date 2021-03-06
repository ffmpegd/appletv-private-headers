/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRUserPasswordAccount.h"

@class AAAccount, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVCupidAccount : BRUserPasswordAccount {
	AAAccount *_appleAccount;	// 40 = 0x28
	NSDictionary *_manifest;	// 44 = 0x2c
	BOOL _forceAuthentication;	// 48 = 0x30
	BOOL _authenticatedAfterBoot;	// 49 = 0x31
}
@property(retain) AAAccount *appleAccount;	// G=0xf04fd; S=0xf0511; @synthesize=_appleAccount
@property(assign, nonatomic) BOOL authenticatedAfterBoot;	// G=0xf0551; S=0xf0561; @synthesize=_authenticatedAfterBoot
@property(assign, nonatomic) BOOL forceAuthentication;	// G=0xf0531; S=0xf0541; @synthesize=_forceAuthentication
@property(retain, nonatomic) NSDictionary *manifest;	// G=0xf0521; S=0xf014d; @synthesize=_manifest
- (id)initWithCoder:(id)coder;	// 0xeff7d
- (void)_readProtectedInfo:(id)info;	// 0xf039d
- (void)_resetSession;	// 0xf04a5
- (void)_writeProtectedInfo:(id)info;	// 0xf02d5
// declared property getter: - (id)appleAccount;	// 0xf04fd
// declared property getter: - (BOOL)authenticatedAfterBoot;	// 0xf0551
- (void)dealloc;	// 0xf0051
- (void)encodeWithCoder:(id)coder;	// 0xeffe5
// declared property getter: - (BOOL)forceAuthentication;	// 0xf0531
- (BOOL)isAuthenticated;	// 0xf019d
// declared property getter: - (id)manifest;	// 0xf0521
// declared property setter: - (void)setAppleAccount:(id)account;	// 0xf0511
// declared property setter: - (void)setAuthenticatedAfterBoot:(BOOL)boot;	// 0xf0561
// declared property setter: - (void)setForceAuthentication:(BOOL)authentication;	// 0xf0541
// declared property setter: - (void)setManifest:(id)manifest;	// 0xf014d
- (void)setPassword:(id)password;	// 0xf00fd
- (id)type;	// 0xf00e1
- (void)willBeDeleted;	// 0xf01fd
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AppleAccount-Structs.h"
#import <NSObject.h> // Unknown library

@class NSOperationQueue, NSString, NSDate, AASigningSession, AAAccount;

@interface AASetupAssistantService : NSObject {
	NSOperationQueue *_requesterQueue;	// 4 = 0x4
	NSString *_appleID;	// 8 = 0x8
	NSString *_password;	// 12 = 0xc
	NSString *_emailChoice;	// 16 = 0x10
	AAAccount *_account;	// 20 = 0x14
	OpaqueCFHTTPCookieStorage *_cookieStorage;	// 24 = 0x18
	AASigningSession *_signingSession;	// 28 = 0x1c
	NSDate *_signingSessionCreationDate;	// 32 = 0x20
}
@property(copy, nonatomic) NSString *appleID;	// G=0x33c59039; S=0x33c5904d; @synthesize=_appleID
@property(copy, nonatomic) NSString *emailChoice;	// G=0x33c59081; S=0x33c59095; @synthesize=_emailChoice
@property(copy, nonatomic) NSString *password;	// G=0x33c5905d; S=0x33c59071; @synthesize=_password
+ (void)resetURLConfiguration;	// 0x33c565d9
+ (id)urlConfiguration;	// 0x33c56389
- (id)init;	// 0x33c565e9
- (id)initWithAccount:(id)account;	// 0x33c566f9
- (id)initWithAppleID:(id)appleID password:(id)password;	// 0x33c56661
- (void).cxx_destruct;	// 0x33c590a5
- (id)_signingSession;	// 0x33c58e41
// declared property getter: - (id)appleID;	// 0x33c59039
- (void)authenticateWithHandler:(id)handler;	// 0x33c56a05
- (void)createAppleIDWithParameters:(id)parameters handler:(id)handler;	// 0x33c56dfd
- (void)dealloc;	// 0x33c5679d
- (void)downloadURLConfiguration:(id)configuration;	// 0x33c56825
// declared property getter: - (id)emailChoice;	// 0x33c59081
- (void)fetchDelegateTokensWithAccountParameters:(id)accountParameters delegateHints:(id)hints handler:(id)handler;	// 0x33c581e5
// declared property getter: - (id)password;	// 0x33c5905d
// declared property setter: - (void)setAppleID:(id)anId;	// 0x33c5904d
- (void)setCookieStorage:(OpaqueCFHTTPCookieStorage *)storage;	// 0x33c567e1
// declared property setter: - (void)setEmailChoice:(id)choice;	// 0x33c59095
// declared property setter: - (void)setPassword:(id)password;	// 0x33c59071
- (void)setupDelegateAccountsWithParameters:(id)parameters handler:(id)handler;	// 0x33c57b55
- (void)updateAppleIDWithParameters:(id)parameters handler:(id)handler;	// 0x33c574a9
- (void)upgradeiCloudTermsIfNecessaryWithHandler:(id)handler;	// 0x33c58c65
@end

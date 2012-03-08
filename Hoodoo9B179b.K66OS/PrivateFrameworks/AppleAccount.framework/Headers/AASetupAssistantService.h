/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <NSObject.h> // Unknown library

@class NSString, AASigningSession, NSOperationQueue;

@interface AASetupAssistantService : NSObject {
	NSOperationQueue *_requesterQueue;	// 4 = 0x4
	NSString *_appleID;	// 8 = 0x8
	NSString *_password;	// 12 = 0xc
	NSString *_emailChoice;	// 16 = 0x10
	AASigningSession *_signingSession;	// 20 = 0x14
}
@property(copy, nonatomic) NSString *appleID;	// G=0x342e1f1d; S=0x342e1f2d; @synthesize=_appleID
@property(copy, nonatomic) NSString *emailChoice;	// G=0x342e1f85; S=0x342e1f95; @synthesize=_emailChoice
@property(copy, nonatomic) NSString *password;	// G=0x342e1f51; S=0x342e1f61; @synthesize=_password
+ (void)resetURLConfiguration;	// 0x342e0b75
+ (id)urlConfiguration;	// 0x342e0965
- (id)init;	// 0x342e0b85
- (id)initWithAppleID:(id)appleID password:(id)password;	// 0x342e0be9
- (id)_signingSession;	// 0x342e1e59
// declared property getter: - (id)appleID;	// 0x342e1f1d
- (void)authenticateWithHandler:(id)handler;	// 0x342e0e55
- (void)createAppleIDWithParameters:(id)parameters handler:(id)handler;	// 0x342e1165
- (void)dealloc;	// 0x342e0c49
- (void)downloadURLConfiguration:(id)configuration;	// 0x342e0cd1
// declared property getter: - (id)emailChoice;	// 0x342e1f85
// declared property getter: - (id)password;	// 0x342e1f51
// declared property setter: - (void)setAppleID:(id)anId;	// 0x342e1f2d
// declared property setter: - (void)setEmailChoice:(id)choice;	// 0x342e1f95
// declared property setter: - (void)setPassword:(id)password;	// 0x342e1f61
- (void)setupDelegateAccountsWithParameters:(id)parameters handler:(id)handler;	// 0x342e19dd
- (void)updateAppleIDWithParameters:(id)parameters handler:(id)handler;	// 0x342e15a1
@end

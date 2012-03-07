/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AAResponse.h"

@class NSString, NSDictionary;

@interface AASetupAssistantConfigResponse : AAResponse {
	NSDictionary *_urls;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSString *authenticateURL;	// G=0x36f71cb9; 
@property(readonly, assign, nonatomic) NSString *checkValidityURL;	// G=0x36f71d69; 
@property(readonly, assign, nonatomic) NSString *createAppleIDURL;	// G=0x36f71ce5; 
@property(readonly, assign, nonatomic) NSString *createDelegateAccountsURL;	// G=0x36f71d3d; 
@property(readonly, assign, nonatomic) NSString *existingAppleIDTermsUIURL;	// G=0x36f71dc1; 
@property(readonly, assign, nonatomic) NSString *iForgotURL;	// G=0x36f71d95; 
@property(readonly, assign, nonatomic) BOOL setupAssistantServerEnabled;	// G=0x36f71ded; 
@property(readonly, assign, nonatomic) NSString *signingSessionCertURL;	// G=0x36f71c35; 
@property(readonly, assign, nonatomic) NSString *signingSessionURL;	// G=0x36f71c61; 
@property(readonly, assign, nonatomic) NSString *updateAppleIDURL;	// G=0x36f71d11; 
@property(readonly, assign, nonatomic) NSString *xmlUI;	// G=0x36f71c8d; 
- (id)initWithHTTPResponse:(id)httpresponse data:(id)data;	// 0x36f71ab5
// declared property getter: - (id)authenticateURL;	// 0x36f71cb9
// declared property getter: - (id)checkValidityURL;	// 0x36f71d69
// declared property getter: - (id)createAppleIDURL;	// 0x36f71ce5
// declared property getter: - (id)createDelegateAccountsURL;	// 0x36f71d3d
// declared property getter: - (id)existingAppleIDTermsUIURL;	// 0x36f71dc1
// declared property getter: - (id)iForgotURL;	// 0x36f71d95
// declared property getter: - (BOOL)setupAssistantServerEnabled;	// 0x36f71ded
// declared property getter: - (id)signingSessionCertURL;	// 0x36f71c35
// declared property getter: - (id)signingSessionURL;	// 0x36f71c61
// declared property getter: - (id)updateAppleIDURL;	// 0x36f71d11
// declared property getter: - (id)xmlUI;	// 0x36f71c8d
@end


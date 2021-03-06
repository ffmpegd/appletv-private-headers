/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "NSMutableCopying.h"
#import </libobjc.A.h>
#import "SSXPCCoding.h"
#import "NSCopying.h"

@class NSDictionary, NSNumber, NSArray, NSString;

@interface SSAuthenticationContext : NSObject <SSXPCCoding, NSCopying, NSMutableCopying> {
	NSString *_accountName;	// 4 = 0x4
	BOOL _accountNameEditable;	// 8 = 0x8
	int _accountScope;	// 12 = 0xc
	BOOL _allowsRetry;	// 16 = 0x10
	BOOL _canCreateNewAccount;	// 17 = 0x11
	BOOL _canSetActiveAccount;	// 18 = 0x12
	NSString *_clientIdentifierHeader;	// 20 = 0x14
	BOOL _demoAccount;	// 24 = 0x18
	NSDictionary *_httpHeaders;	// 28 = 0x1c
	NSString *_initialPassword;	// 32 = 0x20
	BOOL _persistsAcrossDeviceLock;	// 36 = 0x24
	NSString *_preferredITunesStoreClient;	// 40 = 0x28
	int _promptStyle;	// 44 = 0x2c
	NSDictionary *_requestParameters;	// 48 = 0x30
	NSNumber *_requiredUniqueIdentifier;	// 52 = 0x34
	BOOL _shouldCreateNewSession;	// 56 = 0x38
	BOOL _shouldFollowAccountButtons;	// 57 = 0x39
	BOOL _shouldIgnoreProtocol;	// 58 = 0x3a
	BOOL _shouldSuppressDialogs;	// 59 = 0x3b
	NSDictionary *_signupRequestParameters;	// 60 = 0x3c
	int _tokenType;	// 64 = 0x40
	NSArray *_userAgentComponents;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) NSDictionary *HTTPHeaders;	// G=0x327ff1fd; @synthesize=_httpHeaders
@property(readonly, assign, nonatomic) NSString *accountName;	// G=0x327ff181; @synthesize=_accountName
@property(readonly, assign, nonatomic, getter=isAccountNameEditable) BOOL accountNameEditable;	// G=0x327fef2d; @synthesize=_accountNameEditable
@property(readonly, assign) int accountScope;	// G=0x327ff195; @synthesize=_accountScope
@property(readonly, assign, nonatomic) BOOL allowsRetry;	// G=0x327ff1a9; @synthesize=_allowsRetry
@property(readonly, assign, nonatomic) BOOL canCreateNewAccount;	// G=0x327ff1b9; @synthesize=_canCreateNewAccount
@property(readonly, assign, nonatomic) BOOL canSetActiveAccount;	// G=0x327ff1c9; @synthesize=_canSetActiveAccount
@property(readonly, assign, nonatomic) NSString *clientIdentifierHeader;	// G=0x327ff1d9; @synthesize=_clientIdentifierHeader
@property(readonly, assign, nonatomic, getter=isDemoAccount) BOOL demoAccount;	// G=0x327ff1ed; @synthesize=_demoAccount
@property(readonly, assign, nonatomic) NSString *initialPassword;	// G=0x327ff211; @synthesize=_initialPassword
@property(readonly, assign, nonatomic) BOOL persistsAcrossDeviceLock;	// G=0x327ff225; @synthesize=_persistsAcrossDeviceLock
@property(readonly, assign, nonatomic) NSString *preferredITunesStoreClient;	// G=0x327ff235; @synthesize=_preferredITunesStoreClient
@property(readonly, assign, nonatomic) int promptStyle;	// G=0x327ff249; @synthesize=_promptStyle
@property(readonly, assign, nonatomic) NSDictionary *requestParameters;	// G=0x327ff259; @synthesize=_requestParameters
@property(readonly, assign, nonatomic) NSNumber *requiredUniqueIdentifier;	// G=0x327ff26d; @synthesize=_requiredUniqueIdentifier
@property(readonly, assign, nonatomic) BOOL shouldCreateNewSession;	// G=0x327ff27d; @synthesize=_shouldCreateNewSession
@property(readonly, assign, nonatomic) BOOL shouldFollowAccountButtons;	// G=0x327ff28d; @synthesize=_shouldFollowAccountButtons
@property(readonly, assign, nonatomic) BOOL shouldIgnoreProtocol;	// G=0x327ff29d; @synthesize=_shouldIgnoreProtocol
@property(readonly, assign, nonatomic) BOOL shouldSuppressDialogs;	// G=0x327ff2ad; @synthesize=_shouldSuppressDialogs
@property(readonly, assign, nonatomic) NSDictionary *signupRequestParameters;	// G=0x327ff2bd; @synthesize=_signupRequestParameters
@property(readonly, assign, nonatomic) int tokenType;	// G=0x327ff2d1; @synthesize=_tokenType
@property(readonly, assign, nonatomic) NSArray *userAgentComponents;	// G=0x327ff2e1; @synthesize=_userAgentComponents
+ (id)contextForSignIn;	// 0x327fe6d5
- (id)init;	// 0x327fe3fd
- (id)initWithAccount:(id)account;	// 0x327fe40d
- (id)initWithAccountIdentifier:(id)accountIdentifier;	// 0x327fe515
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x327fea49
// declared property getter: - (id)HTTPHeaders;	// 0x327ff1fd
- (BOOL)_allowCreateAccount;	// 0x327fef6d
- (void)_copyIvarsToCopy:(id)copy withZone:(NSZone *)zone;	// 0x327fefb5
- (id)_initSSAuthenticationContext;	// 0x327fe37d
// declared property getter: - (id)accountName;	// 0x327ff181
// declared property getter: - (int)accountScope;	// 0x327ff195
// declared property getter: - (BOOL)allowsRetry;	// 0x327ff1a9
// declared property getter: - (BOOL)canCreateNewAccount;	// 0x327ff1b9
// declared property getter: - (BOOL)canSetActiveAccount;	// 0x327ff1c9
// declared property getter: - (id)clientIdentifierHeader;	// 0x327ff1d9
- (id)copyWithZone:(NSZone *)zone;	// 0x327fede1
- (id)copyXPCEncoding;	// 0x327fe761
- (void)dealloc;	// 0x327fe5e5
- (id)description;	// 0x327fee89
// declared property getter: - (id)initialPassword;	// 0x327ff211
// declared property getter: - (BOOL)isAccountNameEditable;	// 0x327fef2d
// declared property getter: - (BOOL)isDemoAccount;	// 0x327ff1ed
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x327fee35
// declared property getter: - (BOOL)persistsAcrossDeviceLock;	// 0x327ff225
// declared property getter: - (id)preferredITunesStoreClient;	// 0x327ff235
// declared property getter: - (int)promptStyle;	// 0x327ff249
// declared property getter: - (id)requestParameters;	// 0x327ff259
// declared property getter: - (id)requiredUniqueIdentifier;	// 0x327ff26d
// declared property getter: - (BOOL)shouldCreateNewSession;	// 0x327ff27d
// declared property getter: - (BOOL)shouldFollowAccountButtons;	// 0x327ff28d
// declared property getter: - (BOOL)shouldIgnoreProtocol;	// 0x327ff29d
// declared property getter: - (BOOL)shouldSuppressDialogs;	// 0x327ff2ad
// declared property getter: - (id)signupRequestParameters;	// 0x327ff2bd
// declared property getter: - (int)tokenType;	// 0x327ff2d1
// declared property getter: - (id)userAgentComponents;	// 0x327ff2e1
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"
#import "SSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSDictionary, NSArray, NSNumber, NSString;

@interface SSAuthenticationContext : NSObject <SSCoding, NSCopying, NSMutableCopying> {
@private
	NSString *_accountName;	// 4 = 0x4
	BOOL _accountNameEditable;	// 8 = 0x8
	int _accountScope;	// 12 = 0xc
	BOOL _canCreateNewAccount;	// 16 = 0x10
	NSString *_clientIdentifierHeader;	// 20 = 0x14
	BOOL _demoAccount;	// 24 = 0x18
	NSDictionary *_httpHeaders;	// 28 = 0x1c
	BOOL _ignoresTokenExpiration;	// 32 = 0x20
	NSString *_preferredITunesStoreClient;	// 36 = 0x24
	int _promptStyle;	// 40 = 0x28
	NSDictionary *_requestParameters;	// 44 = 0x2c
	NSNumber *_requiredUniqueIdentifier;	// 48 = 0x30
	BOOL _shouldFollowAccountButtons;	// 52 = 0x34
	BOOL _shouldIgnoreProtocol;	// 53 = 0x35
	NSDictionary *_signupRequestParameters;	// 56 = 0x38
	int _tokenType;	// 60 = 0x3c
	NSArray *_userAgentComponents;	// 64 = 0x40
}
@property(readonly, assign, nonatomic) NSDictionary *HTTPHeaders;	// G=0x324ded41; @synthesize=_httpHeaders
@property(readonly, assign, nonatomic) NSString *accountName;	// G=0x324decf1; @synthesize=_accountName
@property(readonly, assign, nonatomic, getter=isAccountNameEditable) BOOL accountNameEditable;	// G=0x324deb11; @synthesize=_accountNameEditable
@property(readonly, assign) int accountScope;	// G=0x324ded01; @synthesize=_accountScope
@property(readonly, assign, nonatomic) BOOL canCreateNewAccount;	// G=0x324ded11; @synthesize=_canCreateNewAccount
@property(readonly, assign, nonatomic) NSString *clientIdentifierHeader;	// G=0x324ded21; @synthesize=_clientIdentifierHeader
@property(readonly, assign, nonatomic, getter=isDemoAccount) BOOL demoAccount;	// G=0x324ded31; @synthesize=_demoAccount
@property(readonly, assign, nonatomic) NSString *preferredITunesStoreClient;	// G=0x324ded51; @synthesize=_preferredITunesStoreClient
@property(readonly, assign, nonatomic) int promptStyle;	// G=0x324ded61; @synthesize=_promptStyle
@property(readonly, assign, nonatomic) NSDictionary *requestParameters;	// G=0x324ded71; @synthesize=_requestParameters
@property(readonly, assign, nonatomic) NSNumber *requiredUniqueIdentifier;	// G=0x324ded81; @synthesize=_requiredUniqueIdentifier
@property(readonly, assign, nonatomic) BOOL shouldFollowAccountButtons;	// G=0x324ded91; @synthesize=_shouldFollowAccountButtons
@property(readonly, assign, nonatomic) BOOL shouldIgnoreProtocol;	// G=0x324deda1; @synthesize=_shouldIgnoreProtocol
@property(readonly, assign, nonatomic) NSDictionary *signupRequestParameters;	// G=0x324dedb1; @synthesize=_signupRequestParameters
@property(readonly, assign, nonatomic) int tokenType;	// G=0x324dedc1; @synthesize=_tokenType
@property(readonly, assign, nonatomic) NSArray *userAgentComponents;	// G=0x324dedd1; @synthesize=_userAgentComponents
+ (id)contextForSignIn;	// 0x324de3a5
- (id)init;	// 0x324de0f5
- (id)initWithAccount:(id)account;	// 0x324de105
- (id)initWithAccountIdentifier:(id)accountIdentifier;	// 0x324de205
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x324de6d1
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x324de989
// declared property getter: - (id)HTTPHeaders;	// 0x324ded41
- (void)_copyIvarsToCopy:(id)copy withZone:(NSZone *)zone;	// 0x324deb51
- (id)_initSSAuthenticationContext;	// 0x324de0a9
// declared property getter: - (id)accountName;	// 0x324decf1
// declared property getter: - (int)accountScope;	// 0x324ded01
// declared property getter: - (BOOL)canCreateNewAccount;	// 0x324ded11
// declared property getter: - (id)clientIdentifierHeader;	// 0x324ded21
- (id)copyPropertyListEncoding;	// 0x324de42d
- (id)copyWithZone:(NSZone *)zone;	// 0x324de9c5
- (void *)copyXPCEncoding;	// 0x324de69d
- (void)dealloc;	// 0x324de2cd
- (id)description;	// 0x324dea6d
// declared property getter: - (BOOL)isAccountNameEditable;	// 0x324deb11
// declared property getter: - (BOOL)isDemoAccount;	// 0x324ded31
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x324dea19
// declared property getter: - (id)preferredITunesStoreClient;	// 0x324ded51
// declared property getter: - (int)promptStyle;	// 0x324ded61
// declared property getter: - (id)requestParameters;	// 0x324ded71
// declared property getter: - (id)requiredUniqueIdentifier;	// 0x324ded81
// declared property getter: - (BOOL)shouldFollowAccountButtons;	// 0x324ded91
// declared property getter: - (BOOL)shouldIgnoreProtocol;	// 0x324deda1
// declared property getter: - (id)signupRequestParameters;	// 0x324dedb1
// declared property getter: - (int)tokenType;	// 0x324dedc1
// declared property getter: - (id)userAgentComponents;	// 0x324dedd1
@end


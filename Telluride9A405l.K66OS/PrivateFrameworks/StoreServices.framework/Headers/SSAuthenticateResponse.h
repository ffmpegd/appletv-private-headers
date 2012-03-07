/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSCoding.h"
#import <NSObject.h> // Unknown library

@class SSAccount, NSDictionary;

@interface SSAuthenticateResponse : NSObject <SSCoding> {
@private
	SSAccount *_authenticatedAccount;	// 4 = 0x4
	NSDictionary *_responseDictionary;	// 8 = 0x8
	int _responseType;	// 12 = 0xc
}
@property(assign, nonatomic) int authenticateResponseType;	// G=0x3650e9bd; S=0x3650e9cd; @synthesize=_responseType
@property(retain, nonatomic) SSAccount *authenticatedAccount;	// G=0x3650e989; S=0x3650e999; @synthesize=_authenticatedAccount
@property(copy, nonatomic) NSDictionary *responseDictionary;	// G=0x3650e9dd; S=0x3650e9ed; @synthesize=_responseDictionary
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x3650e84d
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x3650e94d
// declared property getter: - (int)authenticateResponseType;	// 0x3650e9bd
// declared property getter: - (id)authenticatedAccount;	// 0x3650e989
- (id)copyPropertyListEncoding;	// 0x3650e759
- (void *)copyXPCEncoding;	// 0x3650e819
- (void)dealloc;	// 0x3650e6f9
// declared property getter: - (id)responseDictionary;	// 0x3650e9dd
// declared property setter: - (void)setAuthenticateResponseType:(int)type;	// 0x3650e9cd
// declared property setter: - (void)setAuthenticatedAccount:(id)account;	// 0x3650e999
// declared property setter: - (void)setResponseDictionary:(id)dictionary;	// 0x3650e9ed
@end


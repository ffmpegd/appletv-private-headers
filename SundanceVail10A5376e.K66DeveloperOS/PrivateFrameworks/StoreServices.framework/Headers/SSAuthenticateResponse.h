/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSError, SSAccount;

@interface SSAuthenticateResponse : NSObject <SSXPCCoding> {
	SSAccount *_authenticatedAccount;	// 4 = 0x4
	NSError *_error;	// 8 = 0x8
	NSDictionary *_responseDictionary;	// 12 = 0xc
	int _responseType;	// 16 = 0x10
}
@property(assign, nonatomic) int authenticateResponseType;	// G=0x32cc0b11; S=0x32cc0b21; @synthesize=_responseType
@property(retain, nonatomic) SSAccount *authenticatedAccount;	// G=0x32cc0af1; S=0x32cc0b01; @synthesize=_authenticatedAccount
@property(readonly, assign, nonatomic) NSError *error;	// G=0x32cc0b31; @synthesize=_error
@property(copy, nonatomic) NSDictionary *responseDictionary;	// G=0x32cc0b41; S=0x32cc0b55; @synthesize=_responseDictionary
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x32cc094d
- (void)_setError:(id)error;	// 0x32cc0865
// declared property getter: - (int)authenticateResponseType;	// 0x32cc0b11
// declared property getter: - (id)authenticatedAccount;	// 0x32cc0af1
- (id)copyXPCEncoding;	// 0x32cc08a9
- (void)dealloc;	// 0x32cc07ed
// declared property getter: - (id)error;	// 0x32cc0b31
// declared property getter: - (id)responseDictionary;	// 0x32cc0b41
// declared property setter: - (void)setAuthenticateResponseType:(int)type;	// 0x32cc0b21
// declared property setter: - (void)setAuthenticatedAccount:(id)account;	// 0x32cc0b01
// declared property setter: - (void)setResponseDictionary:(id)dictionary;	// 0x32cc0b55
@end

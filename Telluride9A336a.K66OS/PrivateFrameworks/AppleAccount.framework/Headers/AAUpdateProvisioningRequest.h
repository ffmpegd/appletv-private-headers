/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class AAAccount;

@interface AAUpdateProvisioningRequest : AARequest {
	AAAccount *_account;	// 12 = 0xc
}
@property(retain, nonatomic) AAAccount *account;	// G=0x3389d50d; S=0x3389d51d; @synthesize=_account
+ (Class)responseClass;	// 0x3389d0b5
- (id)initWithAccount:(id)account;	// 0x3389d0d1
- (id)initWithURLString:(id)urlstring account:(id)account;	// 0x3389d119
// declared property getter: - (id)account;	// 0x3389d50d
- (void)dealloc;	// 0x3389d179
// declared property setter: - (void)setAccount:(id)account;	// 0x3389d51d
- (id)urlCredential;	// 0x3389d1c5
- (id)urlRequest;	// 0x3389d285
- (id)urlString;	// 0x3389d23d
@end


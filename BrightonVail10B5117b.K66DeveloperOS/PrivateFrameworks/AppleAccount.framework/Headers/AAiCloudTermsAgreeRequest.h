/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class AAAccount;

@interface AAiCloudTermsAgreeRequest : AARequest {
	AAAccount *_account;	// 16 = 0x10
}
@property(retain, nonatomic) AAAccount *account;	// G=0x3362105d; S=0x3362106d; @synthesize=_account
- (id)initWithURLString:(id)urlstring account:(id)account;	// 0x33620b45
- (void).cxx_destruct;	// 0x33621095
// declared property getter: - (id)account;	// 0x3362105d
// declared property setter: - (void)setAccount:(id)account;	// 0x3362106d
- (id)urlRequest;	// 0x33620bb9
@end

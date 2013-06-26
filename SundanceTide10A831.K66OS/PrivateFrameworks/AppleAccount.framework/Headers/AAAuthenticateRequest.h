/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class NSString, AAAccount;

@interface AAAuthenticateRequest : AARequest {
	NSString *_username;	// 16 = 0x10
	NSString *_password;	// 20 = 0x14
	AAAccount *_account;	// 24 = 0x18
}
@property(copy, nonatomic) AAAccount *account;	// G=0x35ae65e5; S=0x35ae65f9; @synthesize=_account
@property(copy, nonatomic) NSString *password;	// G=0x35ae65c1; S=0x35ae65d5; @synthesize=_password
@property(copy, nonatomic) NSString *username;	// G=0x35ae659d; S=0x35ae65b1; @synthesize=_username
+ (Class)responseClass;	// 0x35ae5f91
- (id)initWithAccount:(id)account;	// 0x35ae5fad
- (id)initWithURLString:(id)urlstring username:(id)username password:(id)password;	// 0x35ae6091
- (id)initWithUsername:(id)username password:(id)password;	// 0x35ae600d
- (void).cxx_destruct;	// 0x35ae6609
// declared property getter: - (id)account;	// 0x35ae65e5
// declared property getter: - (id)password;	// 0x35ae65c1
// declared property setter: - (void)setAccount:(id)account;	// 0x35ae65f9
// declared property setter: - (void)setPassword:(id)password;	// 0x35ae65d5
// declared property setter: - (void)setUsername:(id)username;	// 0x35ae65b1
- (id)urlCredential;	// 0x35ae61c5
- (id)urlRequest;	// 0x35ae6211
- (id)urlString;	// 0x35ae6151
// declared property getter: - (id)username;	// 0x35ae659d
@end

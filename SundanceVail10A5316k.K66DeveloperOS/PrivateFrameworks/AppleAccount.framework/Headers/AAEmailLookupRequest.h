/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class AAAccount, NSArray;

@interface AAEmailLookupRequest : AARequest {
	AAAccount *_account;	// 16 = 0x10
	NSArray *_emailAddresses;	// 20 = 0x14
}
@property(retain, nonatomic) AAAccount *account;	// G=0x37272ec5; S=0x37272ed5; @synthesize=_account
@property(retain, nonatomic) NSArray *emailAddresses;	// G=0x37272efd; S=0x37272f0d; @synthesize=_emailAddresses
+ (Class)responseClass;	// 0x37272605
- (id)initWithAccount:(id)account emailAddresses:(id)addresses;	// 0x37272621
- (id)initWithURLString:(id)urlstring account:(id)account emailAddresses:(id)addresses;	// 0x372726a5
- (void).cxx_destruct;	// 0x37272f35
// declared property getter: - (id)account;	// 0x37272ec5
// declared property getter: - (id)emailAddresses;	// 0x37272efd
// declared property setter: - (void)setAccount:(id)account;	// 0x37272ed5
// declared property setter: - (void)setEmailAddresses:(id)addresses;	// 0x37272f0d
- (id)urlCredential;	// 0x37272755
- (id)urlRequest;	// 0x3727288d
- (id)urlString;	// 0x37272819
@end


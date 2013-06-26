/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSConnectionConfiguration.h"

@class NSString, NSURL, SSAccount, NSDictionary;

@interface HSMutableConnectionConfiguration : HSConnectionConfiguration {
}
@property(retain, nonatomic) SSAccount *account;	// G=0x356190cd; S=0x35619261; 
@property(copy, nonatomic) NSURL *baseURL;	// G=0x35619105; S=0x356192a5; 
@property(copy, nonatomic) NSString *buildIdentifier;	// G=0x35619131; S=0x356192e9; 
@property(copy, nonatomic) NSDictionary *cookieHeaders;	// G=0x356191a1; S=0x35619371; 
@property(copy, nonatomic) NSString *purchaseClientIdentifier;	// G=0x35619169; S=0x3561932d; 
@property(assign, nonatomic) long long requestReason;	// G=0x35619249; S=0x3561943d; 
@property(copy, nonatomic) NSDictionary *urlBag;	// G=0x356191d9; S=0x356193b5; 
@property(copy, nonatomic) NSString *userAgent;	// G=0x35619211; S=0x356193f9; 
// declared property getter: - (id)account;	// 0x356190cd
// declared property getter: - (id)baseURL;	// 0x35619105
// declared property getter: - (id)buildIdentifier;	// 0x35619131
// declared property getter: - (id)cookieHeaders;	// 0x356191a1
// declared property getter: - (id)purchaseClientIdentifier;	// 0x35619169
// declared property getter: - (long long)requestReason;	// 0x35619249
// declared property setter: - (void)setAccount:(id)account;	// 0x35619261
// declared property setter: - (void)setBaseURL:(id)url;	// 0x356192a5
// declared property setter: - (void)setBuildIdentifier:(id)identifier;	// 0x356192e9
// declared property setter: - (void)setCookieHeaders:(id)headers;	// 0x35619371
// declared property setter: - (void)setPurchaseClientIdentifier:(id)identifier;	// 0x3561932d
// declared property setter: - (void)setRequestReason:(long long)reason;	// 0x3561943d
// declared property setter: - (void)setUrlBag:(id)bag;	// 0x356193b5
// declared property setter: - (void)setUserAgent:(id)agent;	// 0x356193f9
// declared property getter: - (id)urlBag;	// 0x356191d9
// declared property getter: - (id)userAgent;	// 0x35619211
@end

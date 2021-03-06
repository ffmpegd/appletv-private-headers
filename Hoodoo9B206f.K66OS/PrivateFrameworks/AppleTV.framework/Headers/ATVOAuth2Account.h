/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRAccount.h"

@class NSString;

@interface ATVOAuth2Account : BRAccount {
@private
	NSString *_refreshToken;	// 36 = 0x24
}
@property(retain) NSString *accessToken;	// G=0x367a8ce1; S=0x367a8cc5; @dynamic
@property(retain) NSString *refreshToken;	// G=0x367a8ddd; S=0x367a8df1; @synthesize=_refreshToken
- (void)_readProtectedInfo:(id)info;	// 0x367a8d51
- (void)_writeProtectedInfo:(id)info;	// 0x367a8cfd
// declared property getter: - (id)accessToken;	// 0x367a8ce1
- (void)dealloc;	// 0x367a8c79
- (BOOL)isAuthenticated;	// 0x367a8da1
// declared property getter: - (id)refreshToken;	// 0x367a8ddd
// declared property setter: - (void)setAccessToken:(id)token;	// 0x367a8cc5
// declared property setter: - (void)setRefreshToken:(id)token;	// 0x367a8df1
@end


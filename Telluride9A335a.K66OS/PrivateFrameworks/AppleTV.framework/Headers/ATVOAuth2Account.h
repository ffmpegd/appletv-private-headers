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
@property(retain) NSString *accessToken;	// G=0x342f0a45; S=0x342f0a29; @dynamic
@property(retain) NSString *refreshToken;	// G=0x342f0b41; S=0x342f0b55; @synthesize=_refreshToken
- (void)_readProtectedInfo:(id)info;	// 0x342f0ab5
- (void)_writeProtectedInfo:(id)info;	// 0x342f0a61
// declared property getter: - (id)accessToken;	// 0x342f0a45
- (void)dealloc;	// 0x342f09dd
- (BOOL)isAuthenticated;	// 0x342f0b05
// declared property getter: - (id)refreshToken;	// 0x342f0b41
// declared property setter: - (void)setAccessToken:(id)token;	// 0x342f0a29
// declared property setter: - (void)setRefreshToken:(id)token;	// 0x342f0b55
@end


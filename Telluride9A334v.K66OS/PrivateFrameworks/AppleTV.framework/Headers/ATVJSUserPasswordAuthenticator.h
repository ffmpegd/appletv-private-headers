/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRUserPasswordAuthenticator.h"

@class ATVFeedMerchant;

__attribute__((visibility("hidden")))
@interface ATVJSUserPasswordAuthenticator : BRUserPasswordAuthenticator {
@private
	ATVFeedMerchant *_merchant;	// 44 = 0x2c
}
- (id)initWithAccount:(id)account scope:(unsigned)scope merchant:(id)merchant;	// 0x331a5461
- (void)_sendAuthenticationRequest;	// 0x331a5549
- (void)authenticationFinished:(id)finished;	// 0x331a5685
- (void)dealloc;	// 0x331a54cd
@end


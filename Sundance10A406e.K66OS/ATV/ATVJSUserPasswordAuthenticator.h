/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRUserPasswordAuthenticator.h"

@class ATVFeedMerchant;

__attribute__((visibility("hidden")))
@interface ATVJSUserPasswordAuthenticator : BRUserPasswordAuthenticator {
	ATVFeedMerchant *_merchant;	// 12 = 0xc
}
- (id)initWithAccount:(id)account merchant:(id)merchant;	// 0x17bc79
- (void)_sendAuthenticationRequest;	// 0x17bd65
- (void)authenticationFinished:(id)finished;	// 0x17be99
- (void)dealloc;	// 0x17bce9
@end


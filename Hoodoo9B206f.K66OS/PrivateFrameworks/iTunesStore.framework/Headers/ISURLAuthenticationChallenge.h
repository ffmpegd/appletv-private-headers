/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISAuthenticationChallenge.h"

@class NSURLAuthenticationChallenge;

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge {
	NSURLAuthenticationChallenge *_challenge;	// 12 = 0xc
}
- (id)initWithAuthenticationChallenge:(id)authenticationChallenge;	// 0x3010c299
- (void)cancelAuthentication;	// 0x3010c471
- (void)dealloc;	// 0x3010c41d
- (int)failureCount;	// 0x3010c4ad
- (BOOL)hasPassword;	// 0x3010c4cd
- (id)password;	// 0x3010c501
- (id)sender;	// 0x3010c539
- (void)useCredential:(id)credential;	// 0x3010c591
- (id)user;	// 0x3010c559
@end

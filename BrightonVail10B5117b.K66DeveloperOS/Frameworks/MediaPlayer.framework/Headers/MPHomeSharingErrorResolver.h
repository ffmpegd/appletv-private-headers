/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "SSAuthorizationRequestDelegate.h"
#import "MPAVErrorResolver.h"

@class NSError, SSAuthorizationRequest, MPHomeSharingML3DataProvider, NSURL, NSData;

@interface MPHomeSharingErrorResolver : MPAVErrorResolver <SSAuthorizationRequestDelegate> {
	unsigned long long _accountID;	// 8 = 0x8
	MPHomeSharingML3DataProvider *_dataProvider;	// 16 = 0x10
	NSError *_error;	// 20 = 0x14
	NSURL *_keybagURL;	// 24 = 0x18
	SSAuthorizationRequest *_request;	// 28 = 0x1c
	NSData *_tokenData;	// 32 = 0x20
}
@property(retain, nonatomic) MPHomeSharingML3DataProvider *dataProvider;	// G=0x31e0bacd; S=0x31e0badd; @synthesize=_dataProvider
- (id)initWithTokenData:(id)tokenData forAccountID:(unsigned long long)accountID keybagURL:(id)url;	// 0x31e0b22d
- (BOOL)_errorIsFairPlayError:(id)error;	// 0x31e0b9e1
- (void)authorizationRequest:(id)request didReceiveResponse:(id)response;	// 0x31e0b4f1
// declared property getter: - (id)dataProvider;	// 0x31e0bacd
- (void)dealloc;	// 0x31e0b2f9
- (void)request:(id)request didFailWithError:(id)error;	// 0x31e0b925
- (void)requestDidFinish:(id)request;	// 0x31e0b9a1
- (void)resolveError:(id)error;	// 0x31e0b3bd
// declared property setter: - (void)setDataProvider:(id)provider;	// 0x31e0badd
@end


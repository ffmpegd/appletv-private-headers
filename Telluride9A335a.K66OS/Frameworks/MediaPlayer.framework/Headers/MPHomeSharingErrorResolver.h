/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAVErrorResolver.h"
#import "SSAuthorizationRequestDelegate.h"

@class MPHomeSharingML3DataProvider, NSData, NSError, SSAuthorizationRequest;

@interface MPHomeSharingErrorResolver : MPAVErrorResolver <SSAuthorizationRequestDelegate> {
@private
	unsigned long long _accountID;	// 8 = 0x8
	MPHomeSharingML3DataProvider *_dataProvider;	// 16 = 0x10
	NSError *_error;	// 20 = 0x14
	SSAuthorizationRequest *_request;	// 24 = 0x18
	NSData *_tokenData;	// 28 = 0x1c
}
@property(retain, nonatomic) MPHomeSharingML3DataProvider *dataProvider;	// G=0x30198885; S=0x30198895; @synthesize=_dataProvider
- (id)initWithTokenData:(id)tokenData forAccountID:(unsigned long long)accountID;	// 0x30198181
- (BOOL)_errorIsFairPlayError:(id)error;	// 0x30198799
- (void)authorizationRequest:(id)request didReceiveResponse:(id)response;	// 0x301983e5
// declared property getter: - (id)dataProvider;	// 0x30198885
- (void)dealloc;	// 0x3019822d
- (void)request:(id)request didFailWithError:(id)error;	// 0x301986d5
- (void)requestDidFinish:(id)request;	// 0x30198755
- (void)resolveError:(id)error;	// 0x301982e1
// declared property setter: - (void)setDataProvider:(id)provider;	// 0x30198895
@end


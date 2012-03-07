/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "SSAuthenticateRequestDelegate.h"
#import "ISOperation.h"

@class SSAuthenticateRequest, SSAuthenticationContext, NSNumber;

__attribute__((visibility("hidden")))
@interface ISStoreAuthenticateOperation : ISOperation <SSAuthenticateRequestDelegate> {
@private
	NSNumber *_authenticatedDSID;	// 60 = 0x3c
	SSAuthenticateRequest *_request;	// 64 = 0x40
}
@property(readonly, assign) SSAuthenticationContext *authenticationContext;	// G=0x34332e49; 
- (id)initWithAuthenticationContext:(id)authenticationContext;	// 0x34332d25
- (id)_authenticatedDSID;	// 0x34333235
- (void)_setAuthenticatedDSID:(id)dsid;	// 0x34333295
- (void)authenticateRequest:(id)request didReceiveResponse:(id)response;	// 0x34332f51
- (id)authenticatedAccountDSID;	// 0x34332e99
// declared property getter: - (id)authenticationContext;	// 0x34332e49
- (void)dealloc;	// 0x34332dd1
- (void)request:(id)request didFailWithError:(id)error;	// 0x343331cd
- (void)run;	// 0x34332edd
- (id)uniqueKey;	// 0x34332ee1
@end


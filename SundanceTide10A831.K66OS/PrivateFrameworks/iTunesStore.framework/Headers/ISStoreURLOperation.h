/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISURLOperation.h"

@class NSNumber;
@protocol ISStoreURLOperationDelegate;

@interface ISStoreURLOperation : ISURLOperation {
	NSNumber *_authenticatedDSID;	// 104 = 0x68
	BOOL _canSendGUIDParameter;	// 108 = 0x6c
	BOOL _needsAuthentication;	// 109 = 0x6d
	BOOL _needsURLBag;	// 110 = 0x6e
	BOOL _shouldSendXTokenHeader;	// 111 = 0x6f
	BOOL _urlKnownToBeTrusted;	// 112 = 0x70
	BOOL _useUserSpecificURLBag;	// 113 = 0x71
}
@property(retain) NSNumber *authenticatedDSID;	// G=0x31427c21; S=0x31427c35; @synthesize=_authenticatedDSID
@property(assign) BOOL canSendGUIDParameter;	// G=0x31425fc9; S=0x31426005; 
@property(assign) id<ISStoreURLOperationDelegate> delegate;	// @dynamic
@property(assign) BOOL needsAuthentication;	// G=0x31427c45; S=0x31427c5d; @synthesize=_needsAuthentication
@property(assign) BOOL needsURLBag;	// G=0x31427c75; S=0x31427c8d; @synthesize=_needsURLBag
@property(assign) BOOL shouldSendXTokenHeader;	// G=0x31426085; S=0x31426045; 
@property(assign) BOOL urlKnownToBeTrusted;	// G=0x31427ca5; S=0x31427cbd; @synthesize=_urlKnownToBeTrusted
@property(assign) BOOL useUserSpecificURLBag;	// G=0x31427cd5; S=0x31427ced; @synthesize=_useUserSpecificURLBag
+ (void)_addITunesStoreHeadersToRequest:(id)request withBagContext:(id)bagContext accountIdentifier:(id)identifier;	// 0x31426a45
+ (id)_restrictionsHeaderValue;	// 0x31426f55
+ (void)addITunesStoreHeadersToRequest:(id)request withAccountIdentifier:(id)accountIdentifier;	// 0x31425b11
+ (void)handleITunesStoreResponseHeaders:(id)headers withAccountIdentifier:(id)accountIdentifier;	// 0x31425b59
+ (id)itemPingOperationWithIdentifier:(unsigned long long)identifier urlBagKey:(id)key;	// 0x31425c9d
+ (id)pingOperationWithUrl:(id)url;	// 0x31425e35
+ (id)propertyListOperationWithURLBagKey:(id)urlbagKey;	// 0x31425ee9
- (id)init;	// 0x31425a75
- (id)_account;	// 0x31427281
- (void)_addStandardQueryParametersForURL:(id)url;	// 0x314272e9
- (BOOL)_authenticateReturningError:(id *)error promptAlways:(BOOL)always;	// 0x31427561
- (BOOL)_canSendTokenToURL:(id)url;	// 0x31427655
- (id)_copyAuthenticationContext;	// 0x31426105
- (id)_copyURLBagContext;	// 0x314276b9
- (BOOL)_isErrorTokenError:(id)error;	// 0x31427801
- (void)_runURLOperation;	// 0x31427879
- (void)_setStoreFrontIdentifier:(id)identifier isTransient:(BOOL)transient;	// 0x31426949
- (id)_urlFromURLBagForRequestProperties:(id)requestProperties inBagContext:(id)bagContext;	// 0x31427bbd
- (id)authenticatedAccountDSID;	// 0x314260c1
// declared property getter: - (id)authenticatedDSID;	// 0x31427c21
// declared property getter: - (BOOL)canSendGUIDParameter;	// 0x31425fc9
- (void)dealloc;	// 0x31425ac1
- (BOOL)handleRedirectFromDataProvider:(id)dataProvider error:(id *)error;	// 0x31426271
- (void)handleResponse:(id)response;	// 0x31426451
// declared property getter: - (BOOL)needsAuthentication;	// 0x31427c45
// declared property getter: - (BOOL)needsURLBag;	// 0x31427c75
- (id)newRequestWithURL:(id)url;	// 0x314264d5
- (void)run;	// 0x31426659
// declared property setter: - (void)setAuthenticatedDSID:(id)dsid;	// 0x31427c35
// declared property setter: - (void)setCanSendGUIDParameter:(BOOL)parameter;	// 0x31426005
// declared property setter: - (void)setNeedsAuthentication:(BOOL)authentication;	// 0x31427c5d
// declared property setter: - (void)setNeedsURLBag:(BOOL)bag;	// 0x31427c8d
// declared property setter: - (void)setShouldSendXTokenHeader:(BOOL)sendXTokenHeader;	// 0x31426045
// declared property setter: - (void)setUrlKnownToBeTrusted:(BOOL)beTrusted;	// 0x31427cbd
// declared property setter: - (void)setUseUserSpecificURLBag:(BOOL)bag;	// 0x31427ced
- (BOOL)shouldFollowRedirectWithRequest:(id)request returningError:(id *)error;	// 0x31426859
// declared property getter: - (BOOL)shouldSendXTokenHeader;	// 0x31426085
// declared property getter: - (BOOL)urlKnownToBeTrusted;	// 0x31427ca5
// declared property getter: - (BOOL)useUserSpecificURLBag;	// 0x31427cd5
@end

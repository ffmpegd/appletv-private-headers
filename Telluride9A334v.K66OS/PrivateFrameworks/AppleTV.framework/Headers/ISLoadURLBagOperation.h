/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"
#import "ISStoreURLOperationDelegate.h"

@class SSURLBagContext;

__attribute__((visibility("hidden")))
@interface ISLoadURLBagOperation : ISOperation <ISStoreURLOperationDelegate> {
@private
	SSURLBagContext *_context;	// 60 = 0x3c
}
@property(readonly, assign) SSURLBagContext *context;	// G=0x33356855; @synthesize=_context
- (id)init;	// 0x33355acd
- (id)initWithBagContext:(id)bagContext;	// 0x33355b41
- (void)_addHeadersToRequestProperties:(id)requestProperties;	// 0x33356209
- (id)_copyBootstrapURLs;	// 0x33356325
- (id)_copyProductionBootstrapURLs;	// 0x33356371
- (id)_copySandboxBootstrapURLs;	// 0x333564d1
- (void)_loadConfigurationFromURLBag:(id)urlbag;	// 0x33355e39
- (void)_loadURLBagFromURL:(id)url;	// 0x33356601
// declared property getter: - (id)context;	// 0x33356855
- (void)dealloc;	// 0x33355b95
- (void)operation:(id)operation finishedWithOutput:(id)output;	// 0x33355e3d
- (BOOL)operation:(id)operation shouldSetStoreFrontID:(id)anId;	// 0x33356115
- (void)operation:(id)operation willSendRequest:(id)request;	// 0x33356151
- (void)run;	// 0x33355be9
- (id)uniqueKey;	// 0x33355de9
@end


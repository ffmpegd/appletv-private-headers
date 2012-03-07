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
@property(readonly, assign) SSURLBagContext *context;	// G=0x33bdb855; @synthesize=_context
- (id)init;	// 0x33bdaacd
- (id)initWithBagContext:(id)bagContext;	// 0x33bdab41
- (void)_addHeadersToRequestProperties:(id)requestProperties;	// 0x33bdb209
- (id)_copyBootstrapURLs;	// 0x33bdb325
- (id)_copyProductionBootstrapURLs;	// 0x33bdb371
- (id)_copySandboxBootstrapURLs;	// 0x33bdb4d1
- (void)_loadConfigurationFromURLBag:(id)urlbag;	// 0x33bdae39
- (void)_loadURLBagFromURL:(id)url;	// 0x33bdb601
// declared property getter: - (id)context;	// 0x33bdb855
- (void)dealloc;	// 0x33bdab95
- (void)operation:(id)operation finishedWithOutput:(id)output;	// 0x33bdae3d
- (BOOL)operation:(id)operation shouldSetStoreFrontID:(id)anId;	// 0x33bdb115
- (void)operation:(id)operation willSendRequest:(id)request;	// 0x33bdb151
- (void)run;	// 0x33bdabe9
- (id)uniqueKey;	// 0x33bdade9
@end


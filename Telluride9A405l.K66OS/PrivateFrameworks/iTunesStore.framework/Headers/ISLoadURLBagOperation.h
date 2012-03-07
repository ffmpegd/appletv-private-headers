/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"
#import "ISStoreURLOperationDelegate.h"

@class SSURLBagContext;

@interface ISLoadURLBagOperation : ISOperation <ISStoreURLOperationDelegate> {
	SSURLBagContext *_context;	// 60 = 0x3c
}
@property(readonly, assign) SSURLBagContext *context;	// G=0x33da7311; @synthesize=_context
- (id)init;	// 0x33da641d
- (id)initWithBagContext:(id)bagContext;	// 0x33da6491
- (void)_addHeadersToRequestProperties:(id)requestProperties;	// 0x33da6cc5
- (id)_copyBootstrapURLs;	// 0x33da6de1
- (id)_copyProductionBootstrapURLs;	// 0x33da6e2d
- (id)_copySandboxBootstrapURLs;	// 0x33da6f8d
- (void)_loadConfigurationFromURLBag:(id)urlbag;	// 0x33da6789
- (void)_loadURLBagFromURL:(id)url;	// 0x33da70bd
// declared property getter: - (id)context;	// 0x33da7311
- (void)dealloc;	// 0x33da64e5
- (void)operation:(id)operation finishedWithOutput:(id)output;	// 0x33da68f9
- (BOOL)operation:(id)operation shouldSetStoreFrontID:(id)anId;	// 0x33da6bd1
- (void)operation:(id)operation willSendRequest:(id)request;	// 0x33da6c0d
- (void)run;	// 0x33da6539
- (id)uniqueKey;	// 0x33da6739
@end


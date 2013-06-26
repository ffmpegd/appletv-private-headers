/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSecureKeyLoaderDelegate.h"
#import "AVAssetResourceLoaderDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVSecureKeyLoader;

__attribute__((visibility("hidden")))
@interface ATVSecureKeyDeliveryCoordinator : XXUnknownSuperclass <ATVSecureKeyLoaderDelegate, AVAssetResourceLoaderDelegate> {
	ATVSecureKeyLoader *_secureKeyLoader;	// 4 = 0x4
}
@property(retain, nonatomic) ATVSecureKeyLoader *secureKeyLoader;	// G=0x219451; S=0x219461; @synthesize=_secureKeyLoader
- (id)init;	// 0x21942d
- (id)initWithSecureKeyLoader:(id)secureKeyLoader;	// 0x218f19
- (void).cxx_destruct;	// 0x219489
- (BOOL)_isSecureKeyDeliveryRequest:(id)request;	// 0x218fd5
- (BOOL)resourceLoader:(id)loader shouldWaitForLoadingOfRequestedResource:(id)requestedResource;	// 0x21905d
// declared property getter: - (id)secureKeyLoader;	// 0x219451
- (void)secureKeyLoader:(id)loader didFailWithError:(id)error forRequest:(id)request;	// 0x219401
- (void)secureKeyLoader:(id)loader didLoadCertificateData:(id)data forRequest:(id)request;	// 0x21918d
- (void)secureKeyLoader:(id)loader didLoadContentIdentifierData:(id)data forRequest:(id)request;	// 0x219261
- (void)secureKeyLoader:(id)loader didLoadKeyResponseData:(id)data forRequest:(id)request;	// 0x219365
// declared property setter: - (void)setSecureKeyLoader:(id)loader;	// 0x219461
@end

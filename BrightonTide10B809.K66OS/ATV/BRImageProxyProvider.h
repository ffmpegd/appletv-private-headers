/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRImageProxyProvider : XXUnknownSuperclass <BRProvider> {
	NSArray *_images;	// 4 = 0x4
}
+ (id)providerWithAssets:(id)assets;	// 0x2b1d2d
+ (id)providerWithImageProxies:(id)imageProxies;	// 0x2b1c99
- (id)initWithAssets:(id)assets;	// 0x2b1d69
- (id)initWithImageProxies:(id)imageProxies;	// 0x2b1cd5
- (id)controlFactory;	// 0x2b1e0d
- (id)dataAtIndex:(long)index;	// 0x2b1e31
- (long)dataCount;	// 0x2b1e11
- (void)dealloc;	// 0x2b1dc1
- (id)hashForDataAtIndex:(long)index;	// 0x2b1ed1
- (id)imageProxies;	// 0x2b1f81
@end

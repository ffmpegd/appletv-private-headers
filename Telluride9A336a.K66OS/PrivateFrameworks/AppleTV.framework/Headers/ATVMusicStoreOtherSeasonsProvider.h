/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class ATVMusicStoreOtherSeasonsControlFactory, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreOtherSeasonsProvider : NSObject <BRProvider> {
@private
	NSDictionary *_catalogItem;	// 4 = 0x4
	ATVMusicStoreOtherSeasonsControlFactory *_factory;	// 8 = 0x8
}
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x33989bed
- (id)initWithCatalogItem:(id)catalogItem;	// 0x33989c29
- (id)controlFactory;	// 0x33989da5
- (id)dataAtIndex:(long)index;	// 0x33989d0d
- (long)dataCount;	// 0x33989d1d
- (void)dealloc;	// 0x33989cad
- (id)hashForDataAtIndex:(long)index;	// 0x33989db5
@end


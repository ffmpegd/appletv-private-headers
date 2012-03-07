/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class ATVSedonaCatalogItem;

__attribute__((visibility("hidden")))
@interface ATVSedonaQueueListItemProvider : NSObject <BRProvider> {
@private
	ATVSedonaCatalogItem *_catalogItem;	// 4 = 0x4
}
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x339cf991
- (id)init;	// 0x339cf9cd
- (id)initWithCatalogItem:(id)catalogItem;	// 0x339cf9e5
- (id)controlFactory;	// 0x339cfafd
- (id)dataAtIndex:(long)index;	// 0x339cfad5
- (long)dataCount;	// 0x339cfae5
- (void)dealloc;	// 0x339cfa39
- (id)hashForDataAtIndex:(long)index;	// 0x339cfa85
@end


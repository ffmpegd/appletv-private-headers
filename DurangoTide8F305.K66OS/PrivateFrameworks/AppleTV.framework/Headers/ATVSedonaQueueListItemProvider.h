/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRProvider.h"

@class ATVSedonaCatalogItem;

__attribute__((visibility("hidden")))
@interface ATVSedonaQueueListItemProvider : NSObject <BRProvider> {
@private
	ATVSedonaCatalogItem *_catalogItem;	// 4 = 0x4
}
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x30793aed
- (id)init;	// 0x30793ad5
- (id)initWithCatalogItem:(id)catalogItem;	// 0x30793b69
- (id)controlFactory;	// 0x30793a6d
- (id)dataAtIndex:(long)index;	// 0x30793a49
- (long)dataCount;	// 0x30793a59
- (void)dealloc;	// 0x30793b21
- (id)hashForDataAtIndex:(long)index;	// 0x30793a8d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVSedonaItemProvider : NSObject <BRProvider> {
@private
	NSMutableDictionary *_catalogItem;	// 4 = 0x4
	NSMutableArray *_items;	// 8 = 0x8
	BOOL _reverseOrder;	// 12 = 0xc
}
@property(assign, getter=isOrderReversed) BOOL orderReversed;	// G=0x339c58bd; S=0x339c5861; converted property
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x339c5755
- (id)initWithCatalogItem:(id)catalogItem;	// 0x339c5791
- (void)_augmentCollectionItem:(id)item atIndex:(long)index;	// 0x339c5a31
- (id)controlFactory;	// 0x339c58cd
- (id)dataAtIndex:(long)index;	// 0x339c5909
- (long)dataCount;	// 0x339c58e9
- (void)dealloc;	// 0x339c5815
- (id)hashForDataAtIndex:(long)index;	// 0x339c59ad
// converted property getter: - (BOOL)isOrderReversed;	// 0x339c58bd
// converted property setter: - (void)setOrderReversed:(BOOL)reversed;	// 0x339c5861
@end


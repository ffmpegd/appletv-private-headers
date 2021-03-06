/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreMoreInfoProvider : XXUnknownSuperclass <BRProvider> {
	NSDictionary *_catalogItem;	// 4 = 0x4
	NSMutableArray *_items;	// 8 = 0x8
}
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x1d1155
- (id)initWithCatalogItem:(id)catalogItem;	// 0x1d1191
- (id)_flattenMoreInfoSection:(id)section;	// 0x1d1441
- (void)_loadMoreInfoData;	// 0x1d1371
- (void)_loadMoreInfoFromURL:(id)url;	// 0x1d1551
- (void)_supplementalResponseReceived:(id)received;	// 0x1d1695
- (id)controlFactory;	// 0x1d1311
- (id)dataAtIndex:(long)index;	// 0x1d134d
- (long)dataCount;	// 0x1d132d
- (void)dealloc;	// 0x1d1281
- (id)hashForDataAtIndex:(long)index;	// 0x1d136d
@end


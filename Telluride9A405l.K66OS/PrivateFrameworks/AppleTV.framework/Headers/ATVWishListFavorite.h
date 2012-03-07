/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVStoreFavorite.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVWishListFavorite : ATVStoreFavorite {
@private
	NSString *_adamID;	// 64 = 0x40
}
- (id)initWithDictionary:(id)dictionary;	// 0x35cbefd5
- (BOOL)_setupWithCatalogItem:(id)catalogItem;	// 0x35cbedad
- (void)dealloc;	// 0x35cbf049
- (void)encodeWithDictionary:(id)dictionary;	// 0x35cbf095
- (id)itemID;	// 0x35cbf0f1
- (void)remove;	// 0x35cbf175
- (BOOL)removeUponAcquisition;	// 0x35cbf101
- (void)save;	// 0x35cbf105
@end


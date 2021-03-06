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
- (id)initWithDictionary:(id)dictionary;	// 0x33688ddd
- (BOOL)_setupWithCatalogItem:(id)catalogItem;	// 0x33688aa1
- (void)dealloc;	// 0x33688d95
- (void)encodeWithDictionary:(id)dictionary;	// 0x33688d41
- (id)itemID;	// 0x33688a8d
- (void)remove;	// 0x33688c79
- (BOOL)removeUponAcquisition;	// 0x33688a9d
- (void)save;	// 0x33688cdd
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControlHeightFactory.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "BRControlFactory.h"


__attribute__((visibility("hidden")))
@interface ATVFavoritesControlFactory : XXUnknownSuperclass <BRControlFactory, BRControlHeightFactory> {
}
+ (id)factory;	// 0x11f115
- (id)_collectionTypeForFavorite:(id)favorite;	// 0x11f84d
- (id)_menuItemForFavoriteItem:(id)favoriteItem currentControl:(id)control requestedBy:(id)by;	// 0x11f351
- (id)_placeholderImageForFavorite:(id)favorite;	// 0x11f7c1
- (id)_previewForFavoriteItem:(id)favoriteItem currentControl:(id)control requestedBy:(id)by;	// 0x11f571
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x11f14d
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x11f22d
@end

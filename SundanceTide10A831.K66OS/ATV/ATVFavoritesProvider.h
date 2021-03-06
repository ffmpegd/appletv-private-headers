/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRProvider.h"

@class NSArray, ATVFavoritesControlFactory;

__attribute__((visibility("hidden")))
@interface ATVFavoritesProvider : XXUnknownSuperclass <BRProvider> {
	NSArray *_favorites;	// 4 = 0x4
	ATVFavoritesControlFactory *_factory;	// 8 = 0x8
}
+ (id)provider;	// 0x1447ad
+ (id)providerWithFavorites:(id)favorites;	// 0x144889
+ (id)providerWithItemType:(int)itemType;	// 0x144819
- (id)initWithFavorites:(id)favorites;	// 0x1448c5
- (void)_favoritesChanged:(id)changed;	// 0x144a89
- (id)controlFactory;	// 0x144a75
- (id)dataAtIndex:(long)index;	// 0x144a35
- (long)dataCount;	// 0x144a55
- (void)dealloc;	// 0x1449a5
- (id)hashForDataAtIndex:(long)index;	// 0x144a85
@end


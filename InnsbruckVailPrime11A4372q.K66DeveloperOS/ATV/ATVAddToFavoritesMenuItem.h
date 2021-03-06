/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuItem.h"

@class ATVFavorite, ATVMerchant;

__attribute__((visibility("hidden")))
@interface ATVAddToFavoritesMenuItem : BRMenuItem {
	ATVMerchant *_merchant;	// 188 = 0xbc
	ATVFavorite *_favorite;	// 192 = 0xc0
}
@property(retain, nonatomic) ATVFavorite *favorite;	// G=0xdded1; S=0xddee1; @synthesize=_favorite
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0xddeb1; S=0xddec1; @synthesize=_merchant
- (void)_toggle;	// 0xddf4d
- (void)_update;	// 0xddef1
- (BOOL)brEventAction:(id)action;	// 0xdde51
- (void)controlWasActivated;	// 0xdde11
- (void)dealloc;	// 0xdddad
// declared property getter: - (id)favorite;	// 0xdded1
// declared property getter: - (id)merchant;	// 0xddeb1
// declared property setter: - (void)setFavorite:(id)favorite;	// 0xddee1
// declared property setter: - (void)setMerchant:(id)merchant;	// 0xddec1
@end


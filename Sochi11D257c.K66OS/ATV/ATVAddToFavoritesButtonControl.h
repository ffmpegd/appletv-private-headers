/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRButtonControl.h"

@class ATVFavorite, ATVMerchant;

__attribute__((visibility("hidden")))
@interface ATVAddToFavoritesButtonControl : BRButtonControl {
	ATVMerchant *_merchant;	// 144 = 0x90
	ATVFavorite *_favorite;	// 148 = 0x94
}
@property(retain, nonatomic) ATVFavorite *favorite;	// G=0xf23d1; S=0xf23e1; @synthesize=_favorite
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0xf23b1; S=0xf23c1; @synthesize=_merchant
- (id)init;	// 0xf21fd
- (void)_toggle;	// 0xf24c1
- (void)_update;	// 0xf23f1
- (BOOL)brEventAction:(id)action;	// 0xf2351
- (void)controlWasActivated;	// 0xf2311
- (void)dealloc;	// 0xf22ad
// declared property getter: - (id)favorite;	// 0xf23d1
// declared property getter: - (id)merchant;	// 0xf23b1
// declared property setter: - (void)setFavorite:(id)favorite;	// 0xf23e1
// declared property setter: - (void)setMerchant:(id)merchant;	// 0xf23c1
@end


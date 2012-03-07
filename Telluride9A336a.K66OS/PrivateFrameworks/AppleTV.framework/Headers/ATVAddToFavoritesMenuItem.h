/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRMenuItem.h"

@class ATVMerchant, ATVFavorite;

__attribute__((visibility("hidden")))
@interface ATVAddToFavoritesMenuItem : BRMenuItem {
@private
	ATVMerchant *_merchant;	// 144 = 0x90
	ATVFavorite *_favorite;	// 148 = 0x94
}
@property(retain, nonatomic) ATVFavorite *favorite;	// G=0x33b7d741; S=0x33b7d751; @synthesize=_favorite
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x33b7d70d; S=0x33b7d71d; @synthesize=_merchant
- (void)_toggle;	// 0x33b7d7d1
- (void)_update;	// 0x33b7d775
- (BOOL)brEventAction:(id)action;	// 0x33b7d6ad
- (void)controlWasActivated;	// 0x33b7d66d
- (void)dealloc;	// 0x33b7d60d
// declared property getter: - (id)favorite;	// 0x33b7d741
// declared property getter: - (id)merchant;	// 0x33b7d70d
// declared property setter: - (void)setFavorite:(id)favorite;	// 0x33b7d751
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x33b7d71d
@end


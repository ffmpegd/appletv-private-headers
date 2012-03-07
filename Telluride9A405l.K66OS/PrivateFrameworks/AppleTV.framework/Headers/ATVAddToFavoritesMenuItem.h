/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMenuItem.h"
#import "AppleTV-Structs.h"

@class ATVFavorite, ATVMerchant;

__attribute__((visibility("hidden")))
@interface ATVAddToFavoritesMenuItem : BRMenuItem {
@private
	ATVMerchant *_merchant;	// 144 = 0x90
	ATVFavorite *_favorite;	// 148 = 0x94
}
@property(retain, nonatomic) ATVFavorite *favorite;	// G=0x35eeec0d; S=0x35eeec1d; @synthesize=_favorite
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x35eeebd9; S=0x35eeebe9; @synthesize=_merchant
- (void)_toggle;	// 0x35eeec9d
- (void)_update;	// 0x35eeec41
- (BOOL)brEventAction:(id)action;	// 0x35eeeb79
- (void)controlWasActivated;	// 0x35eeeb39
- (void)dealloc;	// 0x35eeead9
// declared property getter: - (id)favorite;	// 0x35eeec0d
// declared property getter: - (id)merchant;	// 0x35eeebd9
// declared property setter: - (void)setFavorite:(id)favorite;	// 0x35eeec1d
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x35eeebe9
@end

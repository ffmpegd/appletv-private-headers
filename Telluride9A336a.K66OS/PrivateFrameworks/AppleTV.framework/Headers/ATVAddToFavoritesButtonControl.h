/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRButtonControl.h"

@class ATVMerchant, ATVFavorite;

__attribute__((visibility("hidden")))
@interface ATVAddToFavoritesButtonControl : BRButtonControl {
@private
	ATVMerchant *_merchant;	// 96 = 0x60
	ATVFavorite *_favorite;	// 100 = 0x64
}
@property(retain, nonatomic) ATVFavorite *favorite;	// G=0x33bc09ed; S=0x33bc09fd; @synthesize=_favorite
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x33bc09b9; S=0x33bc09c9; @synthesize=_merchant
- (id)init;	// 0x33bc0809
- (void)_toggle;	// 0x33bc0b29
- (void)_update;	// 0x33bc0a21
- (BOOL)brEventAction:(id)action;	// 0x33bc0959
- (void)controlWasActivated;	// 0x33bc0919
- (void)dealloc;	// 0x33bc08b9
// declared property getter: - (id)favorite;	// 0x33bc09ed
// declared property getter: - (id)merchant;	// 0x33bc09b9
// declared property setter: - (void)setFavorite:(id)favorite;	// 0x33bc09fd
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x33bc09c9
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRViewController.h"

@class BRMerchant;

__attribute__((visibility("hidden")))
@interface SettingsParentalPhotoStreamController : BRViewController {
	BRMerchant *_merchant;	// 104 = 0x68
}
- (id)initWithMerchant:(id)merchant;	// 0x402be1
- (void).cxx_destruct;	// 0x4032e9
- (void)dealloc;	// 0x402d71
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x4030ed
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x402db5
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x4030e1
@end

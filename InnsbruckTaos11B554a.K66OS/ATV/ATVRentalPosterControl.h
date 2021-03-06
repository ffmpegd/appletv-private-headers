/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRPosterControl.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface ATVRentalPosterControl : BRPosterControl {
	NSTimer *_expiryTextTimer;	// 288 = 0x120
}
+ (id)posterForMediaItem:(id)mediaItem;	// 0x20a239
- (id)initWithMediaItem:(id)mediaItem;	// 0x20a2c1
- (void)_expiryTextTimerFired:(id)fired;	// 0x20a9fd
- (void)_itemCacheStateChanged:(id)changed;	// 0x20aa61
- (void)_rentalItemPropertySet:(id)set;	// 0x20ab05
- (void)_startExpiryTextTimer;	// 0x20a94d
- (void)_stopExpiryTextTimer;	// 0x20a9d1
- (void)_updateTitleStrings;	// 0x20a6e9
- (id)accessibilityLabel;	// 0x20ab15
- (BOOL)brEventAction:(id)action;	// 0x20a611
- (void)controlWasActivated;	// 0x20a511
- (void)controlWasDeactivated;	// 0x20a551
- (void)controlWasFocused;	// 0x20a591
- (void)controlWasUnfocused;	// 0x20a5d1
- (void)dealloc;	// 0x20a4b5
- (id)randomNavigationLabel;	// 0x20a6b1
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRPosterControl.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface ATVRentalPosterControl : BRPosterControl {
@private
	NSTimer *_expiryTextTimer;	// 236 = 0xec
}
+ (id)posterForMediaItem:(ATVMediaItemRef)mediaItem;	// 0x35d3aec1
- (id)initWithMediaItem:(ATVMediaItemRef)mediaItem;	// 0x35d3af5d
- (void)_expiryTextTimerFired:(id)fired;	// 0x35d3b681
- (void)_itemCacheStateChanged:(id)changed;	// 0x35d3b6e1
- (void)_rentalItemPropertySet:(id)set;	// 0x35d3b785
- (void)_startExpiryTextTimer;	// 0x35d3b5cd
- (void)_stopExpiryTextTimer;	// 0x35d3b651
- (void)_updateTitleStrings;	// 0x35d3b351
- (id)accessibilityLabel;	// 0x35d3b795
- (BOOL)brEventAction:(id)action;	// 0x35d3b2b1
- (void)controlWasActivated;	// 0x35d3b1b1
- (void)controlWasDeactivated;	// 0x35d3b1f1
- (void)controlWasFocused;	// 0x35d3b231
- (void)controlWasUnfocused;	// 0x35d3b271
- (void)dealloc;	// 0x35d3b155
@end


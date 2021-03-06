/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import </libobjc.A.h>

@class NSMutableDictionary;

@interface PSNavBarSpinnerManager : NSObject {
	NSMutableDictionary *_savedRightItems;	// 4 = 0x4
	NSMutableDictionary *_savedLeftItems;	// 8 = 0x8
	NSMutableDictionary *_navigationItems;	// 12 = 0xc
}
+ (id)sharedSpinnerManager;	// 0x3245f17d
- (id)init;	// 0x3245f059
- (void)dealloc;	// 0x3245f105
- (void)startAnimatingInNavItem:(id)navItem forIdentifier:(id)identifier;	// 0x3245f3ed
- (void)startAnimatingInNavItem:(id)navItem forIdentifier:(id)identifier hideBackButton:(BOOL)button;	// 0x3245f1c5
- (void)stopAnimatingForIdentifier:(id)identifier;	// 0x3245f411
@end


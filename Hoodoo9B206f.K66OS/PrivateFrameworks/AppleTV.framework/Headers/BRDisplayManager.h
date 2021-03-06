/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSMutableArray, NSTimer, CADisplay, NSString;

@interface BRDisplayManager : BRSingleton {
@private
	CADisplay *_display;	// 4 = 0x4
	int _modeChangeFailureCount;	// 8 = 0x8
	NSTimer *_modeChangeFailureRetryTimer;	// 12 = 0xc
	BOOL _computingAllModes;	// 16 = 0x10
	BOOL _settingCurrentMode;	// 17 = 0x11
	NSMutableArray *_nonVirtualModes;	// 20 = 0x14
	NSMutableArray *_virtualModes;	// 24 = 0x18
	NSString *_displayIDMatchingModes;	// 28 = 0x1c
}
+ (void)setSingleton:(id)singleton;	// 0x3672e989
+ (id)singleton;	// 0x3672e979
- (id)init;	// 0x3672e7b5
- (void)_availableModesDidChange;	// 0x3672f95d
- (void)_clearUserPreferredModeForCurrentDisplay;	// 0x36730f0d
- (void)_computeAllModesForDisplay;	// 0x36730509
- (BOOL)_currentModeIsValid;	// 0x3672fac1
- (void)_displayModeDidChange;	// 0x3672f7d5
- (BOOL)_setCurrentMode:(id)mode;	// 0x3672fb19
- (void)_setDisplay:(id)display;	// 0x3672f70d
- (void)_setDisplayToDefaultColorMode;	// 0x36730331
- (void)_setDisplayToDefaultMode;	// 0x3672fe69
- (id)_uniqueDisplayID;	// 0x367303f1
- (id)_userPreferredModeForCurrentDisplay;	// 0x36730a31
- (id)_windowServerDisplay;	// 0x36730449
- (id)allPotentialModes;	// 0x3672f3b1
- (int)colorMode;	// 0x3672f0f9
- (id)currentMode;	// 0x3672eef9
- (BOOL)currentModeIsAuto;	// 0x3672efe9
- (void)dealloc;	// 0x3672e8d1
- (BOOL)displayModeSupported:(id)supported;	// 0x3672f4f9
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3672f551
- (BOOL)setColorMode:(int)mode;	// 0x3672f189
- (BOOL)setCurrentModeToAuto;	// 0x3672f091
- (BOOL)setUserPreferredMode:(id)mode;	// 0x3672eb25
- (id)stringForDisplayMode:(id)displayMode;	// 0x3672ea59
- (id)uiStringForDisplayMode:(id)displayMode;	// 0x3672e999
@end


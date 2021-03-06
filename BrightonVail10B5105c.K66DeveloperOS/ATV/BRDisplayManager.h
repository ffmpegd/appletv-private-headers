/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class CADisplay, NSTimer, NSString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRDisplayManager : BRSingleton {
	CADisplay *_display;	// 4 = 0x4
	int _modeChangeFailureCount;	// 8 = 0x8
	NSTimer *_modeChangeFailureRetryTimer;	// 12 = 0xc
	BOOL _computingAllModes;	// 16 = 0x10
	BOOL _availableModesChangedDuringModeComputation;	// 17 = 0x11
	BOOL _settingCurrentMode;	// 18 = 0x12
	NSMutableArray *_nonVirtualModes;	// 20 = 0x14
	NSMutableArray *_virtualModes;	// 24 = 0x18
	NSString *_displayIDMatchingModes;	// 28 = 0x1c
}
+ (void)setSingleton:(id)singleton;	// 0x366c05
+ (id)singleton;	// 0x366bf5
- (id)init;	// 0x366a11
- (void)_availableModesDidChange;	// 0x367c11
- (void)_clearUserPreferredModeForCurrentDisplay;	// 0x369291
- (void)_computeAllModesForDisplay;	// 0x368731
- (BOOL)_currentModeIsValid;	// 0x367d95
- (void)_displayModeDidChange;	// 0x367b35
- (void)_recordDisplaySettingsForAggd;	// 0x3693d9
- (BOOL)_setCurrentMode:(id)mode;	// 0x367df1
- (void)_setDisplay:(id)display;	// 0x367a79
- (void)_setDisplayToDefaultColorMode;	// 0x368611
- (void)_setDisplayToDefaultMode;	// 0x368119
- (id)_uniqueDisplayID;	// 0x3686d5
- (id)_userPreferredModeForCurrentDisplay;	// 0x368d8d
- (id)allPotentialModes;	// 0x3676dd
- (int)colorMode;	// 0x3673c9
- (id)currentMode;	// 0x3671c9
- (BOOL)currentModeIsAuto;	// 0x3672b9
- (void)dealloc;	// 0x366b49
- (BOOL)displayModeSupported:(id)supported;	// 0x367825
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x367879
- (BOOL)setColorMode:(int)mode;	// 0x36745d
- (BOOL)setCurrentModeToAuto;	// 0x367361
- (BOOL)setUserPreferredMode:(id)mode;	// 0x366ddd
- (id)stringForDisplayMode:(id)displayMode;	// 0x366d11
- (id)uiStringForDisplayMode:(id)displayMode;	// 0x366c15
@end


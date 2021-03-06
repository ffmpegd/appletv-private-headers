/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRApplicationDelegate.h"
#import "ATVMainMenuControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIWindow, UIViewController, BRController, LTController, NSMutableArray;

__attribute__((visibility("hidden")))
@interface LTAppDelegate : XXUnknownSuperclass <ATVMainMenuControllerDelegate, BRApplicationDelegate> {
	LTController *_controller;	// 4 = 0x4
	NSMutableArray *_ignorePlayPauseEventsQueue;	// 8 = 0x8
	BOOL _shouldShowWhatsNew;	// 12 = 0xc
	BRController *_waitingForMainMenuController;	// 16 = 0x10
	UIWindow *_window;	// 20 = 0x14
	UIViewController *_rootViewController;	// 24 = 0x18
}
@property(retain, nonatomic) UIViewController *rootViewController;	// G=0xfcf5; S=0xfd05; @synthesize=_rootViewController
@property(retain, nonatomic) UIWindow *window;	// G=0xfcbd; S=0xfccd; @synthesize=_window
- (void).cxx_destruct;	// 0xfd2d
- (void)_adjustScreenSaverPreferences;	// 0x144a5
- (BOOL)_checkExpirationDate;	// 0x14741
- (void)_checkForFileSystemUpgrade;	// 0x1275d
- (void)_checkNetworkTime;	// 0x14149
- (void)_determineIfWhatsNewShouldBeShown;	// 0x14925
- (void)_dismissWaitingForMainMenuController;	// 0x107dd
- (void)_installMainMenu;	// 0x108bd
- (void)_lowMemoryNotification:(id)notification;	// 0x14d41
- (void)_musicStoreNotification:(id)notification;	// 0x14e05
- (void)_performObliterationIfNeeded;	// 0x13efd
- (BOOL)_performRestoreAfterFileSystemUpgradeIfNeeded;	// 0x125d5
- (void)_postMediaHostBootstrap;	// 0x10ce1
- (void)_preserveDataBeforeFileSystemUpgrade;	// 0x133b5
- (void)_profileListChangedNotification:(id)notification;	// 0x152a5
- (void)_profileQueuedForInstallation:(id)installation;	// 0x150f1
- (void)_registerAccessibilitySettings;	// 0x14475
- (void)_registerAccountTypes;	// 0x11675
- (void)_registerAirTunesPlayer;	// 0x11bb1
- (void)_registerParentalControls;	// 0x11cd9
- (void)_restorePreservedDataAfterFileSystemUpgrade;	// 0x13841
- (void)_setupLogging;	// 0x1051d
- (void)_showWhatsNewIfNeeded;	// 0x12489
- (void)_startNormalApplicationDidFinishLaunching;	// 0xfd9d
- (void)_timeChangeNotification:(id)notification;	// 0x14ef1
- (void)_timeZoneNotifcation:(id)notifcation;	// 0x150b1
- (void)applicationDidFinishLaunching:(id)application;	// 0xeef9
- (void)completeNormalApplicationDidFinishLaunching;	// 0xf2c9
- (void)dealloc;	// 0xf135
- (void)didUpdateAvailableAppliancesForMainMenu:(id)mainMenu;	// 0x10c79
- (BOOL)ignorePlayPauseEvents;	// 0xf945
- (void)registerIgnorePlayPause:(BOOL)pause forClient:(id)client;	// 0xfa41
// declared property getter: - (id)rootViewController;	// 0xfcf5
// declared property setter: - (void)setRootViewController:(id)controller;	// 0xfd05
// declared property setter: - (void)setWindow:(id)window;	// 0xfccd
- (void)unregisterIgnorePlayPauseForClient:(id)client;	// 0xfbad
// declared property getter: - (id)window;	// 0xfcbd
@end


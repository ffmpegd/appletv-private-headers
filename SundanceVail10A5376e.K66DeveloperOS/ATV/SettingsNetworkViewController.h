/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVAPNetworkSelectionDelegate.h"
#import "BRViewController.h"

@class BRIPConfiguration, BRMediaMenuView, SettingsMetadataView, NSTimer;

__attribute__((visibility("hidden")))
@interface SettingsNetworkViewController : BRViewController <ATVAPNetworkSelectionDelegate> {
	int _controllerState;	// 104 = 0x68
	BRIPConfiguration *_ipConfig;	// 108 = 0x6c
	BRMediaMenuView *_mediaMenuView;	// 112 = 0x70
	SettingsMetadataView *_infoView;	// 116 = 0x74
	NSTimer *_updateTimer;	// 120 = 0x78
	BOOL _forWireless;	// 124 = 0x7c
	BOOL _showSpeedTest;	// 125 = 0x7d
}
- (id)init;	// 0x89161
- (void).cxx_destruct;	// 0x8997d
- (void)_commissionNetworkUpdateTimer;	// 0x8aba5
- (id)_configFailedStateItemForRow:(long)row;	// 0x89c5d
- (void)_configFailedStateSelectItemForRow:(long)row;	// 0x89e71
- (void)_configureEthernet;	// 0x8a111
- (void)_configureFailedMenuTextForReason:(int)reason withNetworkNamed:(id)networkNamed withMenu:(id)menu;	// 0x8addd
- (void)_configureSelectionFinishedStateMenu:(id)menu forInterface:(int)interface;	// 0x8ac61
- (void)_configureWiFi;	// 0x8a099
- (void)_decommissionNetworkUpdateTimer;	// 0x8ac2d
- (void)_doNetworkDownloadSpeedTest;	// 0x8a025
- (void)_networkChanged:(id)changed;	// 0x8aac5
- (id)_networkMenuStateItemForList:(id)list atIndexPath:(id)indexPath;	// 0x899d9
- (void)_networkMenuStateSelectItemForRow:(long)row;	// 0x89d25
- (id)_selectionFinishedStateItemForRow:(long)row;	// 0x89bc9
- (void)_selectionFinishedStateSelectItem;	// 0x89e05
- (void)_swapToAPNetworkMenu;	// 0x89fad
- (void)_swapToTCPIPConfig;	// 0x89ef9
- (void)_updateNetworkChangeText;	// 0x8a8dd
- (void)_updateNetworkInfo:(id)info;	// 0x8a1ad
- (void)_updateNetworkSummary;	// 0x8a2d1
- (id)accessibilityScreenContent;	// 0x8b159
- (void)dealloc;	// 0x893f5
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x89739
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x896c9
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x895d5
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x89689
- (void)network:(id)network wasSelected:(BOOL)selected;	// 0x89769
- (void)wasBuried;	// 0x89519
- (void)wasExhumed;	// 0x89559
- (void)wasPopped;	// 0x894d9
- (void)wasPushed;	// 0x89461
@end


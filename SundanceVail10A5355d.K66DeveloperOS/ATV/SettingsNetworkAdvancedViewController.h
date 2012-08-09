/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVDottedQuadEntryDelegate.h"
#import "ATVTCPIPConfigDelegate.h"
#import "BRViewController.h"

@class BRIPConfiguration, NSTimer, NSString, ATVDottedQuadEntryController;

__attribute__((visibility("hidden")))
@interface SettingsNetworkAdvancedViewController : BRViewController <ATVDottedQuadEntryDelegate, ATVTCPIPConfigDelegate> {
	ATVDottedQuadEntryController *_ipController;	// 100 = 0x64
	ATVDottedQuadEntryController *_maskController;	// 104 = 0x68
	ATVDottedQuadEntryController *_routerController;	// 108 = 0x6c
	ATVDottedQuadEntryController *_dnsController;	// 112 = 0x70
	NSString *_address;	// 116 = 0x74
	NSString *_subnetMask;	// 120 = 0x78
	NSString *_router;	// 124 = 0x7c
	NSString *_dns;	// 128 = 0x80
	BRIPConfiguration *_ipConfig;	// 132 = 0x84
	BOOL _forWireless;	// 136 = 0x88
	BOOL _usesDHCP;	// 137 = 0x89
	BOOL _usesManualDNS;	// 138 = 0x8a
	BOOL _showForgetNetwork;	// 139 = 0x8b
	BOOL _isForgettingNetwork;	// 140 = 0x8c
	BOOL _userHasSetManualDNS;	// 141 = 0x8d
	BOOL _contentDirty;	// 142 = 0x8e
	NSTimer *_updateTimer;	// 144 = 0x90
}
- (id)initForWireless:(BOOL)wireless;	// 0x3aa6e5
- (void).cxx_destruct;	// 0x3abb15
- (void)_commissionNetworkUpdateTimer;	// 0x3aac2d
- (void)_configureAutoDNS;	// 0x3ab68d
- (void)_configureDNS;	// 0x3ac57d
- (void)_configureIP;	// 0x3ac05d
- (void)_configureRouter;	// 0x3ac3b9
- (void)_configureSubnet;	// 0x3ac205
- (void)_decommissionNetworkUpdateTimer;	// 0x3aacb1
- (void)_exitErrorDialogWithAnyPress;	// 0x3aabed
- (void)_forgetNetwork;	// 0x3abf91
- (void)_networkChanged:(id)changed;	// 0x3aaf91
- (void)_networkStateWillChange:(id)_networkState;	// 0x3aace5
- (void)_readCurrentConfiguration;	// 0x3abbe9
- (void)_reloadMenuItems;	// 0x3abf39
- (void)_saveCurrentConfigurationShowingProgress:(BOOL)progress;	// 0x3abd5d
- (void)configurationComplete:(BOOL)complete forInterface:(int)interface;	// 0x3aaac1
- (void)configureDHCP;	// 0x3ab605
- (void)dealloc;	// 0x3aaa41
- (void)entryComplete:(id)complete;	// 0x3ab9ad
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x3ab739
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x3ab881
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x3ab141
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x3ab5d1
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x3ab599
- (long)numberOfSectionsInList:(id)list;	// 0x3ab581
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SettingsAboutViewController.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SettingsMetadataView, BRIPConfiguration, NSTimer;

@interface SettingsAboutViewController : XXUnknownSuperclass {
	SettingsMetadataView *_infoView;	// 64 = 0x40
	BRIPConfiguration *_ipConfig;	// 68 = 0x44
	int _versionType;	// 72 = 0x48
	int _wifiDetailsType;	// 76 = 0x4c
	NSTimer *_updateTimer;	// 80 = 0x50
}
- (id)init;	// 0xb3cd
- (BOOL)brEventAction:(id)action;	// 0xb135
- (void)dealloc;	// 0xb349
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xb121
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xac5d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xac6d
- (void)wasBuried;	// 0xb25d
- (void)wasExhumed;	// 0xb1e9
- (void)wasPopped;	// 0xb299
- (void)wasPushed;	// 0xb2d5
@end

@interface SettingsAboutViewController (Private)
- (void)_commissionNetworkUpdateTimer;	// 0xafa9
- (void)_configureAboutControl;	// 0xb721
- (void)_decommissionNetworkUpdateTimer;	// 0xaf7d
- (void)_networkChanged:(id)changed;	// 0xb00d
- (void)_toggleVersion;	// 0xb691
- (void)_toggleWiFiDetails;	// 0xb5f5
- (void)_updateNetworkInfo:(id)info;	// 0xb0c5
- (id)_versionLabelString;	// 0xaf19
- (id)_versionValueString;	// 0xadc9
- (id)_wifiDetailsLabelString;	// 0xad55
- (id)_wifiDetailsValueString;	// 0xac71
@end


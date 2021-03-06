/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"


__attribute__((visibility("hidden")))
@interface SettingsRemoteControlController : BRViewController {
}
+ (void)initialize;	// 0xa6fb1
- (id)init;	// 0xa7201
- (void)_configure3rdPartyRemotePairingMenuItem:(id)item forRow:(long)row;	// 0xa84f1
- (void)_configureAppleRemotePairingMenuItem:(id)item;	// 0xa8221
- (void)_configureMenuItemForMultiSectionDisplay:(id)multiSectionDisplay forSection:(long)section forRow:(long)row;	// 0xa81a5
- (void)_configureMenuItemForSingleSectionDisplay:(id)singleSectionDisplay forRow:(long)row;	// 0xa80f9
- (void)_configurePairedRemoteMenuItem:(id)item forRow:(long)row;	// 0xa82dd
- (void)_handle3rdPartyRemoteSettingSelectedAtRow:(long)row;	// 0xa91f9
- (void)_handleAppleRemoteSettingSelected;	// 0xa861d
- (void)_handlePairedRemoteSettingSelectedAtRow:(long)row;	// 0xa8cf1
- (void)_handleRemoteAppItemSelected;	// 0xa8855
- (id)_instructionsForPairedRemoteAtRow:(long)row;	// 0xa8acd
- (void)_learnRemoteOptionSelected:(id)selected;	// 0xa96cd
- (void)_openingMessageOptionSelected:(id)selected;	// 0xa9601
- (void)_pairingUpdate:(id)update;	// 0xa7f7d
- (void)_removePairedRemoteDialogOptionSelected:(id)selected;	// 0xa90a1
- (BOOL)_showOtherRemotesSectionDivider;	// 0xa7fd5
- (BOOL)_showPairableRemotes;	// 0xa8041
- (void)dealloc;	// 0xa7445
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0xa78ad
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xa7e95
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xa7531
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xa7651
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0xa77c5
- (long)numberOfSectionsInList:(id)list;	// 0xa7609
- (void)wasExhumed;	// 0xa74b1
@end


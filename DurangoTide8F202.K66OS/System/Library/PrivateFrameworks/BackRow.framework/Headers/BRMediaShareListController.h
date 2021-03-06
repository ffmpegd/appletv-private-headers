/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRMediaMenuController.h"
#import "BRMenuListItemProvider.h"

@class NSArray, NSDictionary;

@interface BRMediaShareListController : BRMediaMenuController <BRMenuListItemProvider> {
@private
	Class _mediaControllerClass;	// 136 = 0x88
	BRController *_noMediaErrorController;	// 140 = 0x8c
	BRController *_mountingController;	// 144 = 0x90
	NSDictionary *_selectedHostInfo;	// 148 = 0x94
	BOOL _isMounting;	// 152 = 0x98
	BOOL _isUnmounting;	// 153 = 0x99
	BOOL _hostDisconnected;	// 154 = 0x9a
	NSArray *_hostInfos;	// 156 = 0x9c
}
- (id)init;	// 0x32934465
- (void)_addNotifications;	// 0x32933a51
- (void)_checkMountStatus:(id)status;	// 0x32934565
- (void)_currentMediaHostRemoved:(id)removed;	// 0x32934981
- (id)_hostForHostInfoIndex:(long)hostInfoIndex;	// 0x329337e9
- (id)_hostInfos;	// 0x32933851
- (BOOL)_isHostValid:(id)valid;	// 0x32933cf1
- (void)_mediaHostsChanged:(id)changed;	// 0x32933acd
- (void)_mountHost:(id)host;	// 0x32933e19
- (void)_networkChanged:(id)changed;	// 0x32933aa5
- (void)_removeNotifications;	// 0x32933a09
- (long)_rowForTitle:(id)title;	// 0x32933689
- (id)_selectedHost;	// 0x329337b9
- (void)_unmountStreamingHostsExcludingHost:(id)host;	// 0x32933d29
- (void)_updateHostInfos;	// 0x32933771
- (id)_waitControllerForHost:(id)host;	// 0x32933935
- (id)_wirelessPreviewController;	// 0x329336e9
- (void)controlWasActivated;	// 0x32934305
- (void)controlWasDeactivated;	// 0x32934165
- (void)dealloc;	// 0x329343bd
- (float)heightForRow:(long)row;	// 0x32933655
- (long)itemCount;	// 0x32933ff1
- (id)itemForRow:(long)row;	// 0x32934015
- (void)itemSelected:(long)selected;	// 0x32934351
- (id)previewControlForItem:(long)item;	// 0x329343a9
- (BOOL)rowSelectable:(long)selectable;	// 0x32933659
- (void)setMediaControllerClass:(Class)aClass errorController:(id)controller;	// 0x329340e5
- (id)titleForRow:(long)row;	// 0x32933fcd
- (void)wasExhumed;	// 0x329341a1
- (void)wasPopped;	// 0x3293365d
- (void)wasPushed;	// 0x32934245
@end


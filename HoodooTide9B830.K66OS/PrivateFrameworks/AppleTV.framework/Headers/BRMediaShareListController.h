/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRMenuListItemProvider.h"
#import "BRMediaMenuController.h"

@class NSDictionary, NSArray;

@interface BRMediaShareListController : BRMediaMenuController <BRMenuListItemProvider> {
@private
	Class _mediaControllerClass;	// 160 = 0xa0
	BRController *_noMediaErrorController;	// 164 = 0xa4
	BRController *_mountingController;	// 168 = 0xa8
	NSDictionary *_selectedHostInfo;	// 172 = 0xac
	BOOL _isMounting;	// 176 = 0xb0
	BOOL _isUnmounting;	// 177 = 0xb1
	BOOL _hostDisconnected;	// 178 = 0xb2
	NSArray *_hostInfos;	// 180 = 0xb4
}
- (id)init;	// 0x32a4c8a5
- (void)_addNotifications;	// 0x32a4d92d
- (void)_checkMountStatus:(id)status;	// 0x32a4d0d9
- (void)_currentMediaHostRemoved:(id)removed;	// 0x32a4d8d5
- (id)_hostForHostInfoIndex:(long)hostInfoIndex;	// 0x32a4dbcd
- (id)_hostInfos;	// 0x32a4dacd
- (BOOL)_isHostValid:(id)valid;	// 0x32a4d619
- (void)_mediaHostsChanged:(id)changed;	// 0x32a4d659
- (void)_mountHost:(id)host;	// 0x32a4cef9
- (void)_networkChanged:(id)changed;	// 0x32a4d8a5
- (void)_removeNotifications;	// 0x32a4d989
- (long)_rowForTitle:(id)title;	// 0x32a4dd5d
- (id)_selectedHost;	// 0x32a4dc39
- (void)_unmountStreamingHostsExcludingHost:(id)host;	// 0x32a4d515
- (void)_updateHostInfos;	// 0x32a4dc71
- (id)_waitControllerForHost:(id)host;	// 0x32a4d9d5
- (id)_wirelessPreviewController;	// 0x32a4dcc1
- (void)controlWasActivated;	// 0x32a4caf1
- (void)controlWasDeactivated;	// 0x32a4ccfd
- (void)dealloc;	// 0x32a4c9c1
- (float)heightForRow:(long)row;	// 0x32a4cef1
- (long)itemCount;	// 0x32a4cea1
- (id)itemForRow:(long)row;	// 0x32a4cdb9
- (void)itemSelected:(long)selected;	// 0x32a4ca89
- (id)previewControlForItem:(long)item;	// 0x32a4ca79
- (BOOL)rowSelectable:(long)selectable;	// 0x32a4cef5
- (void)setMediaControllerClass:(Class)aClass errorController:(id)controller;	// 0x32a4cd3d
- (id)titleForRow:(long)row;	// 0x32a4cec9
- (void)wasExhumed;	// 0x32a4cc1d
- (void)wasPopped;	// 0x32a4ccd1
- (void)wasPushed;	// 0x32a4cb45
@end


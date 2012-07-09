/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class SettingsAlbumArtworkConnectorController, NSArray;

__attribute__((visibility("hidden")))
@interface SettingsChooseAlbumArtworkController : BRViewController {
	NSArray *_servers;	// 100 = 0x64
	SettingsAlbumArtworkConnectorController *_connectionController;	// 104 = 0x68
}
- (id)init;	// 0xb63d5
- (void).cxx_destruct;	// 0xb71f5
- (void)_dataServersChanged:(id)changed;	// 0xb7181
- (void)_handleSelectionWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0xb6f1d
- (void)_handleSelectionWithDataServer:(id)dataServer dataClientType:(unsigned long)type;	// 0xb6fc1
- (id)_servers;	// 0xb6cf9
- (void)dealloc;	// 0xb6541
- (void)handleHomeSharingSelectionWithServer:(id)server;	// 0xb70fd
- (void)handleiTunesMatchSelection;	// 0xb7071
- (BOOL)isITunesMatchAvailable;	// 0xb6d75
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0xb6b59
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xb6c2d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xb6725
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xb6a3d
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0xb6ab9
- (long)numberOfSectionsInList:(id)list;	// 0xb6a39
- (void)wasExhumed;	// 0xb65ad
@end

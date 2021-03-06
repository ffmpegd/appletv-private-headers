/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MusicController.h"

@class BRControl, NSString, NSArray;

__attribute__((visibility("hidden")))
@interface MusicMainController : MusicController {
	BRControl *_allSongsPreview;	// 164 = 0xa4
	BOOL _displayNowPlaying;	// 168 = 0xa8
	BOOL _displayUpNext;	// 169 = 0xa9
	NSArray *_controllerMenuItems;	// 172 = 0xac
	NSString *_textEntryClient;	// 176 = 0xb0
}
@property(retain, nonatomic) NSArray *controllerMenuItems;	// G=0x1cf385; S=0x1cf395; @synthesize=_controllerMenuItems
@property(retain, nonatomic) NSString *textEntryClient;	// G=0x1cf3a5; S=0x1cf3b5; @synthesize=_textEntryClient
+ (void)initialize;	// 0x1ce365
- (id)_indexPathForTitleKey:(id)titleKey;	// 0x1cf479
- (unsigned)_menuItemForRow:(unsigned)row;	// 0x1cf3c5
- (id)_menuItemTitleKeyForIndexPath:(id)indexPath;	// 0x1cf3fd
- (void)_networkStateChanged:(id)changed;	// 0x1cf761
- (void)_playerStateChanged:(id)changed;	// 0x1cf719
- (void)_updateHeaderItems;	// 0x1cf5c1
- (void)controlWasActivated;	// 0x1ce539
// declared property getter: - (id)controllerMenuItems;	// 0x1cf385
- (void)dealloc;	// 0x1ce495
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x1ce90d
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x1cf0d9
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x1cebfd
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x1ce901
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x1ce8b5
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x1cefd9
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x1cefc5
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x1ce745
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x1ce829
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x1ce879
- (id)newPlayQueryForIndexPath:(id)indexPath;	// 0x1cf1ad
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x1cefed
- (long)numberOfSectionsInList:(id)list;	// 0x1ce825
- (void)playQueryComplete:(id)complete;	// 0x1cf281
// declared property setter: - (void)setControllerMenuItems:(id)items;	// 0x1cf395
// declared property setter: - (void)setTextEntryClient:(id)client;	// 0x1cf3b5
// declared property getter: - (id)textEntryClient;	// 0x1cf3a5
- (void)wasPopped;	// 0x1ce6d9
- (void)wasPushed;	// 0x1ce5d9
@end


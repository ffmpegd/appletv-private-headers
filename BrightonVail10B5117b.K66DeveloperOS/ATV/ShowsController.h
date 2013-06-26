/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTabControlDelegate.h"
#import "VideoController.h"

@class NSMutableArray, NSNumber, NSString, NSArray, ATVDataType;

__attribute__((visibility("hidden")))
@interface ShowsController : VideoController <BRTabControlDelegate> {
	ATVDataType *_mediaType;	// 172 = 0xac
	NSArray *_tvShowsSortedByShowName;	// 176 = 0xb0
	unsigned long _currentTab;	// 180 = 0xb4
	NSMutableArray *_unwatchedItemsByShow;	// 184 = 0xb8
	NSMutableArray *_itemsByShow;	// 188 = 0xbc
	NSNumber *_showID;	// 192 = 0xc0
	NSString *_showName;	// 196 = 0xc4
	BOOL _unwatchedShows;	// 200 = 0xc8
	NSMutableArray *_showItems;	// 204 = 0xcc
	BOOL _playAllItems;	// 208 = 0xd0
}
+ (id)controllerForATVMediaType:(id)atvmediaType collection:(id)collection dataClient:(id)client dataClientType:(unsigned long)type playAllItems:(BOOL)items;	// 0x8ad3d
+ (id)showsControllerForCollection:(id)collection mediaType:(id)type playAllItems:(BOOL)items dataClient:(id)client dataClientType:(unsigned long)type5;	// 0x8aebd
+ (id)showsControllerForShowWithID:(id)anId name:(id)name unwatched:(BOOL)unwatched mediaType:(id)type dataClient:(id)client dataClientType:(unsigned long)type6;	// 0x8b079
- (id)initWithMediaType:(id)mediaType dataClient:(id)client dataClientType:(unsigned long)type;	// 0x8b1fd
- (id)initWithShowID:(id)showID name:(id)name unwatched:(BOOL)unwatched mediaType:(id)type dataClient:(id)client dataClientType:(unsigned long)type6;	// 0x8b105
- (id)initWithShowsCollection:(id)showsCollection mediaType:(id)type playAllItems:(BOOL)items dataClient:(id)client dataClientType:(unsigned long)type5;	// 0x8af39
- (void).cxx_destruct;	// 0x8bdf1
- (id)_currentItems;	// 0x8e5dd
- (id)_getDictionary:(id)dictionary showID:(id)anId;	// 0x8e4a9
- (id)_getUnwatchedItemsByShow:(BOOL)show;	// 0x8e865
- (id)_initWithMediaType:(id)mediaType dataClient:(id)client dataClientType:(unsigned long)type;	// 0x8add9
- (BOOL)_isValidTab:(int)tab;	// 0x8e499
- (long)_lastUnwatchedMediaItemRowIndex;	// 0x8d091
- (void)_mediaItemPropertySet:(id)set;	// 0x8eccd
- (id)_menuItemForEpisode:(id)episode;	// 0x8dba5
- (id)_menuItemForShow:(id)show;	// 0x8dfb1
- (id)_tabItemPreferenceKey;	// 0x8e1f1
- (id)_titleKey;	// 0x8e26d
- (void)_updateDisplayPlaylists;	// 0x8daf5
- (void)_updatePreviewForRow:(int)row inData:(id)data;	// 0x8d199
- (id)currentItems;	// 0x8b6c5
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x8e2e9
- (BOOL)dataQueryComplete:(id)complete;	// 0x8b889
- (void)dealloc;	// 0x8b59d
- (id)defaultIndexPathToSelect;	// 0x8b9a9
- (id)errorForNoContent;	// 0x8ba0d
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x8c211
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x8c8fd
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x8c325
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x8c1dd
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x8c17d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x8bf35
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x8be8d
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x8bee5
- (id)newDataQuery;	// 0x8b7c5
- (id)newDataQueryWithoutSort;	// 0x8ccad
- (id)newPreDataQuery;	// 0x8b6d5
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x8bacd
- (long)numberOfSectionsInList:(id)list;	// 0x8be89
- (BOOL)preDataQueryComplete:(id)complete;	// 0x8b795
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x8bbc5
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x8bd95
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x8bded
- (id)typeaheadPropertyName;	// 0x8e3d5
- (void)wasPopped;	// 0x8b609
@end

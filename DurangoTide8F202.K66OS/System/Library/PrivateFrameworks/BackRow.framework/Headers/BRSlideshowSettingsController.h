/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRViewController.h"
#import "BackRow-Structs.h"

@class BRMarimbaMenuView, NSArray, NSMutableArray, NSTimer;

@interface BRSlideshowSettingsController : BRViewController {
@private
	BRMarimbaMenuView *_marimbaMenuView;	// 64 = 0x40
	NSMutableArray *_menuHistory;	// 68 = 0x44
	NSArray *_musicServers;	// 72 = 0x48
	NSArray *_musicPlaylists;	// 76 = 0x4c
	ATVDataServerRef _defaultMusicServer;	// 80 = 0x50
	ATVMediaQueryRef _playlistsQuery;	// 84 = 0x54
	NSTimer *_randomThemeSwappingTimer;	// 88 = 0x58
	int _currentMenuType;	// 92 = 0x5c
	int _previousSelectionIndex;	// 96 = 0x60
	BOOL _ignoreFocusMessages;	// 100 = 0x64
	BOOL _initialMenuSwitchInProgress;	// 101 = 0x65
	BOOL _playlistQueryInProgress;	// 102 = 0x66
	BOOL _updateDefaultMusicMenuAfterPlaylistQueryCompletes;	// 103 = 0x67
	BOOL _memoryWarningAlreadyReceived;	// 104 = 0x68
}
+ (id)randomTransitionIDs;	// 0x329947b9
+ (id)randomlySelectedSlideshowThemeIdentifier;	// 0x32994ac1
+ (id)slideshowIdentifierForTitle:(id)title;	// 0x32994b45
+ (id)slideshowThemeTitles;	// 0x32994c19
+ (id)slideshowTransitionTitles;	// 0x32994a31
+ (id)timePerSlideValues;	// 0x32994709
+ (id)transitionIdentifierForTitle:(id)title;	// 0x329949c5
- (id)init;	// 0x329946f1
- (id)initWithMediaCollection:(id)mediaCollection;	// 0x32994dd9
- (id)_allSharedComputers;	// 0x32993819
- (id)_currentPlaylistName;	// 0x32995d31
- (ATVDataClientRef)_dataClient;	// 0x32996aa5
- (void)_dataClientStatusChanged:(id)changed;	// 0x329968b9
- (int)_indexOfStringItem:(id)stringItem inArray:(id *)array itemCount:(int)count;	// 0x329944a1
- (void)_initiatePlaylistsQuery;	// 0x3299678d
- (void)_lowMemoryNotification:(id)notification;	// 0x32993eed
- (void)_mainSettingsMenuList:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x32993955
- (void)_mainSettingsMenuList:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x3299525d
- (id)_mainSettingsMenuList:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x32993b15
- (long)_mainSettingsMenuList:(id)list numberOfRowsInSection:(long)section;	// 0x32993ad1
- (id)_mainSettingsMenuList:(id)list sectionHeaderForSection:(long)section;	// 0x32996335
- (long)_mainSettingsMenuNumberOfSectionsInList:(id)list;	// 0x3299373d
- (void)_musicLibraryMenuList:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x32993755
- (void)_musicLibraryMenuList:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x32996519
- (id)_musicLibraryMenuList:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x32996381
- (long)_musicLibraryMenuList:(id)list numberOfRowsInSection:(long)section;	// 0x32993869
- (id)_musicLibraryMenuList:(id)list sectionHeaderForSection:(long)section;	// 0x32995eb1
- (long)_musicLibraryMenuNumberOfSectionsInList:(id)list;	// 0x32993751
- (void)_playlistMenuList:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x32993759
- (void)_playlistMenuList:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x3299561d
- (id)_playlistMenuList:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x32995ba5
- (long)_playlistMenuList:(id)list numberOfRowsInSection:(long)section;	// 0x329937ad
- (id)_playlistMenuList:(id)list sectionHeaderForSection:(long)section;	// 0x32995e65
- (long)_playlistMenuNumberOfSectionsInList:(id)list;	// 0x329937dd
- (void)_playlistsQueryComplete;	// 0x32996ae5
- (void)_returnToPreviousMenu;	// 0x32993fb1
- (void)_runPlaylistsQuery;	// 0x32996991
- (void)_setPlaylistsQuery:(ATVMediaQueryRef)query;	// 0x329964e1
- (void)_swapSlideshowTheme:(id)theme;	// 0x32993911
- (void)_switchToMenuType:(int)menuType rememberCurrentMenu:(BOOL)menu;	// 0x32994215
- (void)_themeDetailsMenuList:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x32993899
- (void)_themeDetailsMenuList:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x32995085
- (id)_themeDetailsMenuList:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x329961ad
- (long)_themeDetailsMenuList:(id)list numberOfRowsInSection:(long)section;	// 0x32993745
- (id)_themeDetailsMenuList:(id)list sectionHeaderForSection:(long)section;	// 0x32996161
- (long)_themeDetailsMenuNumberOfSectionsInList:(id)list;	// 0x32993741
- (void)_toggleTimePerSlide;	// 0x32995efd
- (void)_updateListFocusOnMenuSwitch;	// 0x32995845
- (BOOL)brEventAction:(id)action;	// 0x32994cf5
- (void)dealloc;	// 0x32994fa1
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x32994531
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x329944e5
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x32993735
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x3299457d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x329946a1
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x32994601
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x329945b1
- (long)numberOfSectionsInList:(id)list;	// 0x32994651
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRViewController.h"

@class NSTimer, NSArray, BRMediaMenuView;

__attribute__((visibility("hidden")))
@interface ATVMusicController : BRViewController {
	BRMediaMenuView *_mediaMenuView;	// 104 = 0x68
	NSArray *_unvalidatedRootMenus;	// 108 = 0x6c
	BOOL _waitPromptShowing;	// 112 = 0x70
	NSTimer *_waitPromptTimer;	// 116 = 0x74
	NSArray *_rootMenus;	// 120 = 0x78
}
@property(readonly, retain) BRMediaMenuView *mediaMenuView;	// G=0x3be6f5; converted property
@property(retain, nonatomic) NSArray *rootMenus;	// G=0x3bfd4d; S=0x3bfd5d; @synthesize=_rootMenus
+ (void)initialize;	// 0x3be5d9
- (id)init;	// 0x3be709
- (void).cxx_destruct;	// 0x3bfd85
- (void)_favoriteAdded:(id)added;	// 0x3bfc95
- (void)_favoriteRemoved:(id)removed;	// 0x3bfcf1
- (id)_favorites;	// 0x3bf989
- (id)_favoritesArtwork;	// 0x3bf9dd
- (void)_reload;	// 0x3bf8d9
- (void)_showWaitPrompt;	// 0x3bf521
- (void)_storeMenuLoaded:(id)loaded;	// 0x3bf649
- (void)_updateRootMenus;	// 0x3bf361
- (id)_validatedRootMenus:(id)menus;	// 0x3bf135
- (void)_waitForStore;	// 0x3bf465
- (void)dealloc;	// 0x3be909
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x3bec09
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x3bed81
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x3beaad
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x3bebe9
// converted property getter: - (id)mediaMenuView;	// 0x3be6f5
// declared property getter: - (id)rootMenus;	// 0x3bfd4d
// declared property setter: - (void)setRootMenus:(id)menus;	// 0x3bfd5d
- (void)wasPushed;	// 0x3be9d5
@end

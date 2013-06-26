/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRViewController.h"

@class NSIndexPath, NSString, NSArray;

__attribute__((visibility("hidden")))
@interface MusicUpNextController : BRViewController {
	NSArray *_queuedAssets;	// 104 = 0x68
	unsigned _manualQueueCount;	// 108 = 0x6c
	BOOL _editMode;	// 112 = 0x70
	NSIndexPath *_refreshIndexPath;	// 116 = 0x74
	NSString *_clientID;	// 120 = 0x78
}
@property(copy) NSString *clientID;	// G=0x3f885d; S=0x3f8871; @synthesize=_clientID
@property(copy) NSIndexPath *refreshIndexPath;	// G=0x3f8839; S=0x3f884d; @synthesize=_refreshIndexPath
- (id)init;	// 0x3f6221
- (void).cxx_destruct;	// 0x3f8881
- (void)_addCurrentSelectionToQueue;	// 0x3f86c5
- (unsigned)_currentlySelectedIndex;	// 0x3f8781
- (void)_deleteCurrentSelection;	// 0x3f7f71
- (void)_enterEditMode;	// 0x3f82f1
- (void)_exitEditMode;	// 0x3f837d
- (void)_handleContextMenuSelection:(id)selection;	// 0x3f8409
- (void)_loadData;	// 0x3f79ad
- (void)_mediaChanged:(id)changed;	// 0x3f7d51
- (void)_moveCurrentSelection:(int)selection;	// 0x3f7de9
- (void)_moveCurrentSelectionDown;	// 0x3f7dad
- (void)_moveCurrentSelectionUp;	// 0x3f7d71
- (void)_nope;	// 0x3f8071
- (void)_playCurrentSelectionNext;	// 0x3f8635
- (void)_playCurrentSelectionNow;	// 0x3f8589
- (void)_promoteCurrentSelectionToManualQueue;	// 0x3f8091
- (void)_purge;	// 0x3f8751
- (void)_queueChanged:(id)changed;	// 0x3f7905
- (void)_redraw;	// 0x3f7ba5
- (void)_refresh;	// 0x3f7a05
- (void)_refreshWithSelectedIndexPath:(id)selectedIndexPath;	// 0x3f7ad1
- (void)_removeCurrentSelection;	// 0x3f8531
- (SEL)_selectorForDirection:(int)direction;	// 0x3f81f9
- (BOOL)brEventAction:(id)action;	// 0x3f6d21
// declared property getter: - (id)clientID;	// 0x3f885d
- (void)controlWasActivated;	// 0x3f6a69
- (void)controlWasDeactivated;	// 0x3f6c19
- (void)dealloc;	// 0x3f63d5
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x3f771d
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x3f76ad
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x3f76e1
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x3f76a1
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x3f6e45
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x3f73f1
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x3f74b9
- (long)numberOfSectionsInList:(id)list;	// 0x3f7665
- (id)providersForContextMenu;	// 0x3f6441
// declared property getter: - (id)refreshIndexPath;	// 0x3f8839
// declared property setter: - (void)setClientID:(id)anId;	// 0x3f8871
// declared property setter: - (void)setRefreshIndexPath:(id)path;	// 0x3f884d
@end

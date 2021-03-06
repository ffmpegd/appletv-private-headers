/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCatalogApplianceController.h"

@class BRMediaShelfView, BRListControl, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreMoreInfoController : ATVCatalogApplianceController {
	NSDictionary *_catalogItem;	// 136 = 0x88
	BRListControl *_list;	// 140 = 0x8c
	BOOL _localListContentSelected;	// 144 = 0x90
	BRMediaShelfView *_actionShelfControl;	// 148 = 0x94
	long _lastSelectedIndex;	// 152 = 0x98
}
- (id)initWithCatalogItem:(id)catalogItem;	// 0x1d16d9
- (id)_coverArtControl;	// 0x1d2919
- (void)_focusedActionChanged:(id)changed;	// 0x1d2255
- (id)_grid;	// 0x1d2b05
- (void)_handleWindowMaxBoundsChanged;	// 0x1d1b71
- (void)_listSelectionChanged:(id)changed;	// 0x1d1fc9
- (void)_loadList;	// 0x1d1bb1
- (void)_loadMoreInfoItemContentFromURL:(id)url;	// 0x1d2c39
- (void)_loadMoreInfoItemContentFromURLString:(id)urlstring;	// 0x1d2bf9
- (void)_moreInfoItemContentFeedReceived:(id)received;	// 0x1d2db9
- (BOOL)_selectionIsTopmostSelectable;	// 0x1d1e91
- (id)_summaryControl;	// 0x1d2341
- (id)_summaryControlForItem:(id)item;	// 0x1d2359
- (id)accessibilityScreenContent;	// 0x1d1b45
- (void)addControls;	// 0x1d30d1
- (BOOL)brEventAction:(id)action;	// 0x1d1941
- (void)controlWasActivated;	// 0x1d17e9
- (void)controlWasDeactivated;	// 0x1d18a5
- (void)dealloc;	// 0x1d1745
- (void)layoutSubcontrols;	// 0x1d1a5d
- (void)refreshDirtyPage;	// 0x1d31b9
- (BOOL)shouldAllowControllerContent;	// 0x1d30cd
- (id)transitionType;	// 0x1d1a4d
- (void)updateContent:(id)content;	// 0x1d3175
- (void)willEnterCompleteState;	// 0x1d30a1
@end


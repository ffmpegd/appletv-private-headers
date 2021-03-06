/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRGridView.h"

@class ListViewAnimationDelegate, NSTimer, BRBlueGlowSelectionLozengeLayer;

@interface BRListView : BRGridView {
@private
	BRBlueGlowSelectionLozengeLayer *_cursor;	// 180 = 0xb4
	ListViewAnimationDelegate *_animationDelegate;	// 184 = 0xb8
	NSTimer *_pokeTimer;	// 188 = 0xbc
	NSTimer *_delayTimer;	// 192 = 0xc0
	NSTimer *_repeatTimer;	// 196 = 0xc4
	double _repeatStart;	// 200 = 0xc8
	double _repeatAccumulator;	// 208 = 0xd0
	long _scrollSelection;	// 216 = 0xd8
	long _savedSelection;	// 220 = 0xdc
	BOOL _turboEngaged;	// 224 = 0xe0
	BOOL _movingDown;	// 225 = 0xe1
	BOOL _selectionEntered;	// 226 = 0xe2
}
@property(retain) BRBlueGlowSelectionLozengeLayer *cursor;	// G=0x33a96345; S=0x33a960d9; converted property
@property(assign) BOOL lastItemCentered;	// G=0x33a964f1; S=0x33a964ed; converted property
- (id)init;	// 0x33a95b85
- (long)_backwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x33a97601
- (double)_calculateRepeatRate;	// 0x33a980d9
- (unsigned)_countOfHeadersInRange:(NSRange)range;	// 0x33a971b5
- (long)_dataIndexFromGridIndex:(long)gridIndex;	// 0x33a986cd
- (id)_dataIndexPathFromGridIndex:(long)gridIndex sectionIndex:(long *)index;	// 0x33a985c1
- (void)_ensureSelectionFocusable;	// 0x33a97595
- (void)_enterCurrentSelection;	// 0x33a9814d
- (long)_forwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x33a97681
- (long)_gridIndexForDataIndex:(long)dataIndex;	// 0x33a98795
- (long)_gridIndexForDataIndexPath:(id)dataIndexPath;	// 0x33a9885d
- (void)_leaveCurrentSelection;	// 0x33a981f1
- (void)_listScrollingCompleted:(id)completed;	// 0x33a9856d
- (void)_listScrollingInitiated:(id)initiated;	// 0x33a98519
- (void)_performScrollInitiationActivities;	// 0x33a984f5
- (void)_performScrollTerminationActivities;	// 0x33a98515
- (void)_pokeTimerFired:(id)fired;	// 0x33a98095
- (void)_postSelectionFinalizedNotification;	// 0x33a9822d
- (void)_repeatDownTimerFired:(id)fired;	// 0x33a97df5
- (void)_repeatUpTimerFired:(id)fired;	// 0x33a97f45
- (void)_restoreCurrentSelectionIndex;	// 0x33a983f5
- (void)_saveCurrentSelectionIndex;	// 0x33a983d5
- (BOOL)_scrollDown:(id)down;	// 0x33a974b1
- (BOOL)_scrollUp:(id)up;	// 0x33a973cd
- (void)_setNewScrollIndex:(long)index;	// 0x33a97705
- (void)_slowToStopRepeatTimerMovingDown:(BOOL)stopRepeatTimerMovingDown;	// 0x33a97ba1
- (void)_startDownwardAutoScroll:(id)scroll;	// 0x33a97911
- (void)_startRepeatTimerMovingDown:(BOOL)down;	// 0x33a9783d
- (void)_startUpwardAutoScroll:(id)scroll;	// 0x33a97a59
- (void)_stopRepeatTimer;	// 0x33a97d81
- (void)_updateScrollPosition;	// 0x33a97725
- (void)_updateWidgetFrame;	// 0x33a98231
- (void)_updateWidgetFrameForWidget:(id)widget withItemFrame:(CGRect)itemFrame;	// 0x33a98311
- (id)accessibilityControls;	// 0x33a970b9
- (id)accessibilityLabel;	// 0x33a96f91
- (BOOL)brEventAction:(id)action;	// 0x33a95d21
- (void)controlWasFocused;	// 0x33a96535
- (void)controlWasUnfocused;	// 0x33a96595
- (unsigned)countOfCells;	// 0x33a970d5
// converted property getter: - (id)cursor;	// 0x33a96345
- (void)dealloc;	// 0x33a95c7d
- (void)didFocusItemAtIndex:(long)index;	// 0x33a96d15
- (BOOL)didPlayItemAtIndex:(long)index;	// 0x33a96edd
- (BOOL)didSelectItemAtIndex:(long)index;	// 0x33a96e65
- (void)didUnFocusItemAtIndex:(long)index;	// 0x33a96df5
- (float)heightForItemAtIndex:(long)index;	// 0x33a96ac9
- (long)indexForItemID:(id)itemID;	// 0x33a96a59
- (unsigned)indexInCellsOfObject:(id)object;	// 0x33a972b1
- (BOOL)isAccessibilityElement;	// 0x33a97025
- (id)itemAtIndex:(long)index;	// 0x33a96949
- (id)itemIDAtIndex:(long)index;	// 0x33a969e5
// converted property getter: - (BOOL)lastItemCentered;	// 0x33a964f1
- (void)layoutSubcontrols;	// 0x33a96609
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x33a96f7d
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x33a96f8d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x33a96f89
- (void)list:(id)list didUnFocusItemAtIndexPath:(id)indexPath;	// 0x33a96f85
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x33a96f71
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x33a96f6d
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x33a96f69
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x33a96f65
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x33a96f55
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x33a96f5d
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x33a96f61
- (void)list:(id)list willDisplayItemAtIndexPath:(id)indexPath;	// 0x33a96f75
- (id)list:(id)list willFocusItemAtIndexPath:(id)indexPath;	// 0x33a96f79
- (void)list:(id)list willUnFocusItemAtIndexPath:(id)indexPath;	// 0x33a96f81
- (float)listHeightToMaximum:(float)maximum;	// 0x33a96479
- (long)numberOfSectionsInList:(id)list;	// 0x33a96f59
- (id)objectInCellsAtIndex:(unsigned)index;	// 0x33a97339
- (void)populateDataCache:(id)cache;	// 0x33a96751
- (void)reload;	// 0x33a95ff1
- (void)selectItemAtIndex:(long)index;	// 0x33a96915
- (void)selectRowAtIndexPath:(id)indexPath;	// 0x33a96365
- (long)selectedIndex;	// 0x33a96905
- (id)selectedIndexPath;	// 0x33a96459
- (long)selection;	// 0x33a96355
// converted property setter: - (void)setCursor:(id)cursor;	// 0x33a960d9
// converted property setter: - (void)setLastItemCentered:(BOOL)centered;	// 0x33a964ed
- (id)visibleRowAtIndexPath:(id)indexPath;	// 0x33a964f5
- (id)visibleRowsAndRange:(NSRange *)range;	// 0x33a96525
- (void)willDisplayItemAtIndex:(long)index;	// 0x33a96c0d
- (long)willFocusItemAtIndex:(long)index;	// 0x33a96c8d
- (void)willUnFocusItemAtIndex:(long)index;	// 0x33a96d85
@end


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
@property(retain) BRBlueGlowSelectionLozengeLayer *cursor;	// G=0x33211345; S=0x332110d9; converted property
@property(assign) BOOL lastItemCentered;	// G=0x332114f1; S=0x332114ed; converted property
- (id)init;	// 0x33210b85
- (long)_backwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x33212601
- (double)_calculateRepeatRate;	// 0x332130d9
- (unsigned)_countOfHeadersInRange:(NSRange)range;	// 0x332121b5
- (long)_dataIndexFromGridIndex:(long)gridIndex;	// 0x332136cd
- (id)_dataIndexPathFromGridIndex:(long)gridIndex sectionIndex:(long *)index;	// 0x332135c1
- (void)_ensureSelectionFocusable;	// 0x33212595
- (void)_enterCurrentSelection;	// 0x3321314d
- (long)_forwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x33212681
- (long)_gridIndexForDataIndex:(long)dataIndex;	// 0x33213795
- (long)_gridIndexForDataIndexPath:(id)dataIndexPath;	// 0x3321385d
- (void)_leaveCurrentSelection;	// 0x332131f1
- (void)_listScrollingCompleted:(id)completed;	// 0x3321356d
- (void)_listScrollingInitiated:(id)initiated;	// 0x33213519
- (void)_performScrollInitiationActivities;	// 0x332134f5
- (void)_performScrollTerminationActivities;	// 0x33213515
- (void)_pokeTimerFired:(id)fired;	// 0x33213095
- (void)_postSelectionFinalizedNotification;	// 0x3321322d
- (void)_repeatDownTimerFired:(id)fired;	// 0x33212df5
- (void)_repeatUpTimerFired:(id)fired;	// 0x33212f45
- (void)_restoreCurrentSelectionIndex;	// 0x332133f5
- (void)_saveCurrentSelectionIndex;	// 0x332133d5
- (BOOL)_scrollDown:(id)down;	// 0x332124b1
- (BOOL)_scrollUp:(id)up;	// 0x332123cd
- (void)_setNewScrollIndex:(long)index;	// 0x33212705
- (void)_slowToStopRepeatTimerMovingDown:(BOOL)stopRepeatTimerMovingDown;	// 0x33212ba1
- (void)_startDownwardAutoScroll:(id)scroll;	// 0x33212911
- (void)_startRepeatTimerMovingDown:(BOOL)down;	// 0x3321283d
- (void)_startUpwardAutoScroll:(id)scroll;	// 0x33212a59
- (void)_stopRepeatTimer;	// 0x33212d81
- (void)_updateScrollPosition;	// 0x33212725
- (void)_updateWidgetFrame;	// 0x33213231
- (void)_updateWidgetFrameForWidget:(id)widget withItemFrame:(CGRect)itemFrame;	// 0x33213311
- (id)accessibilityControls;	// 0x332120b9
- (id)accessibilityLabel;	// 0x33211f91
- (BOOL)brEventAction:(id)action;	// 0x33210d21
- (void)controlWasFocused;	// 0x33211535
- (void)controlWasUnfocused;	// 0x33211595
- (unsigned)countOfCells;	// 0x332120d5
// converted property getter: - (id)cursor;	// 0x33211345
- (void)dealloc;	// 0x33210c7d
- (void)didFocusItemAtIndex:(long)index;	// 0x33211d15
- (BOOL)didPlayItemAtIndex:(long)index;	// 0x33211edd
- (BOOL)didSelectItemAtIndex:(long)index;	// 0x33211e65
- (void)didUnFocusItemAtIndex:(long)index;	// 0x33211df5
- (float)heightForItemAtIndex:(long)index;	// 0x33211ac9
- (long)indexForItemID:(id)itemID;	// 0x33211a59
- (unsigned)indexInCellsOfObject:(id)object;	// 0x332122b1
- (BOOL)isAccessibilityElement;	// 0x33212025
- (id)itemAtIndex:(long)index;	// 0x33211949
- (id)itemIDAtIndex:(long)index;	// 0x332119e5
// converted property getter: - (BOOL)lastItemCentered;	// 0x332114f1
- (void)layoutSubcontrols;	// 0x33211609
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x33211f7d
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x33211f8d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x33211f89
- (void)list:(id)list didUnFocusItemAtIndexPath:(id)indexPath;	// 0x33211f85
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x33211f71
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x33211f6d
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x33211f69
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x33211f65
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x33211f55
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x33211f5d
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x33211f61
- (void)list:(id)list willDisplayItemAtIndexPath:(id)indexPath;	// 0x33211f75
- (id)list:(id)list willFocusItemAtIndexPath:(id)indexPath;	// 0x33211f79
- (void)list:(id)list willUnFocusItemAtIndexPath:(id)indexPath;	// 0x33211f81
- (float)listHeightToMaximum:(float)maximum;	// 0x33211479
- (long)numberOfSectionsInList:(id)list;	// 0x33211f59
- (id)objectInCellsAtIndex:(unsigned)index;	// 0x33212339
- (void)populateDataCache:(id)cache;	// 0x33211751
- (void)reload;	// 0x33210ff1
- (void)selectItemAtIndex:(long)index;	// 0x33211915
- (void)selectRowAtIndexPath:(id)indexPath;	// 0x33211365
- (long)selectedIndex;	// 0x33211905
- (id)selectedIndexPath;	// 0x33211459
- (long)selection;	// 0x33211355
// converted property setter: - (void)setCursor:(id)cursor;	// 0x332110d9
// converted property setter: - (void)setLastItemCentered:(BOOL)centered;	// 0x332114ed
- (id)visibleRowAtIndexPath:(id)indexPath;	// 0x332114f5
- (id)visibleRowsAndRange:(NSRange *)range;	// 0x33211525
- (void)willDisplayItemAtIndex:(long)index;	// 0x33211c0d
- (long)willFocusItemAtIndex:(long)index;	// 0x33211c8d
- (void)willUnFocusItemAtIndex:(long)index;	// 0x33211d85
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class NSMutableArray, NSIndexPath, NSTimer, NSDictionary;

@interface BRMediaShelfView : BRControl {
@private
	id _dataSource;	// 44 = 0x2c
	id _delegate;	// 48 = 0x30
	NSDictionary *_controlActions;	// 52 = 0x34
	NSDictionary *_titleActions;	// 56 = 0x38
	BOOL _centered;	// 60 = 0x3c
	BOOL _scrollable;	// 61 = 0x3d
	NSIndexPath *_lastFocusedIndexPath;	// 64 = 0x40
	BOOL _restoresFocus;	// 68 = 0x44
	NSRange _flatRange;	// 72 = 0x48
	CATransform3D _leftTransform;	// 80 = 0x50
	CATransform3D _rightTransform;	// 144 = 0x90
	NSMutableArray *_cells;	// 208 = 0xd0
	NSMutableArray *_titles;	// 212 = 0xd4
	NSTimer *_scrollTimer;	// 216 = 0xd8
	BOOL _scrolling;	// 220 = 0xdc
	int _collapsedState;	// 224 = 0xe0
	BOOL _ordered;	// 228 = 0xe4
	BOOL _needToReloadDataOnActivate;	// 229 = 0xe5
}
@property(assign) BOOL centered;	// G=0x32989801; S=0x3298b07d; converted property
@property(assign) int collapsedState;	// G=0x32989831; S=0x3298a959; converted property
@property(retain) id dataSource;	// G=0x329897c1; S=0x3298b161; converted property
@property(assign) id delegate;	// G=0x329897e1; S=0x329897d1; converted property
@property(retain) id focusedIndexPath;	// G=0x3298ac49; S=0x3298aa21; converted property
@property(assign) BOOL ordered;	// G=0x32989811; S=0x3298b055; converted property
@property(assign) BOOL restoresFocus;	// G=0x32989821; S=0x3298a995; converted property
@property(assign) BOOL scrollable;	// G=0x329897f1; S=0x3298b0a5; converted property
- (id)init;	// 0x3298b3a9
- (long)_columnCount;	// 0x3298a811
- (id)_controlActions;	// 0x32989f15
- (float)_coverflowMargin;	// 0x3298a721
- (id)_currentCellAtIndex:(int)index;	// 0x3298a515
- (NSRange)_dividedRangeForRange:(NSRange)range andDirection:(int)direction;	// 0x3298bdd9
- (unsigned)_dividerCountInRange:(NSRange)range;	// 0x32989ed5
- (unsigned)_firstScrollableIndex;	// 0x32989841
- (void)_focusChanged:(id)changed;	// 0x3298a44d
- (float)_horizontalGap;	// 0x3298a7c1
- (long)_indexFromIndexPath:(id)indexPath;	// 0x32989ae5
- (id)_indexPathFromIndex:(long)index sectionIndex:(long *)index2;	// 0x329899e9
- (BOOL)_isDividerAtIndex:(long)index;	// 0x32989e49
- (unsigned)_lastScrollableIndex;	// 0x3298b99d
- (void)_layoutShelfContents;	// 0x3298bf99
- (BOOL)_leftButtonEvent;	// 0x3298a2e1
- (void)_loadControlAtIndex:(int)index;	// 0x3298a64d
- (id)_newControlAtIndex:(int)index;	// 0x3298a559
- (unsigned)_nextFocusableIndexInDirection:(int)direction;	// 0x3298a391
- (void)_purgeControlAtIndex:(int)index;	// 0x3298a461
- (void)_purgeControls;	// 0x3298a839
- (void)_refillShelf;	// 0x3298b6d5
- (void)_reloadTitles;	// 0x32989d2d
- (void)_removeSectionHeaderTitleControls;	// 0x32989b85
- (void)_restoreLastSelection;	// 0x3298a0e9
- (BOOL)_rightButtonEvent;	// 0x3298a339
- (void)_saveCurrentSelection;	// 0x3298a125
- (BOOL)_scrollInDirection:(int)direction;	// 0x3298b9d9
- (BOOL)_scrollIndexToVisible:(long)visible;	// 0x3298bda5
- (BOOL)_scrollLeft;	// 0x3298a2ad
- (BOOL)_scrollRight;	// 0x3298a2c9
- (long)_sectionIndexForIndex:(long)index;	// 0x32989935
- (void)_setDimness:(float)dimness forLayer:(id)layer;	// 0x3298b5b1
- (id)_titleActions;	// 0x32989c1d
- (void)_updateFocusAcceptanceAtIndex:(int)index;	// 0x3298befd
- (void)_updateSublayerTransform;	// 0x3298a1b1
- (int)_visibleFlowCellCount;	// 0x32989851
- (NSRange)_visibleRange;	// 0x3298bd39
- (id)accessibilityLabel;	// 0x32989881
- (BOOL)brEventAction:(id)action;	// 0x3298acc5
- (int)cellCount;	// 0x3298a8a1
// converted property getter: - (BOOL)centered;	// 0x32989801
// converted property getter: - (int)collapsedState;	// 0x32989831
- (void)controlWasActivated;	// 0x3298b255
- (void)controlWasFocused;	// 0x3298b29d
- (long)dataCount;	// 0x3298b0e1
// converted property getter: - (id)dataSource;	// 0x329897c1
- (void)dealloc;	// 0x3298b2f1
// converted property getter: - (id)delegate;	// 0x329897e1
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x3298a8c1
// converted property getter: - (id)focusedIndexPath;	// 0x3298ac49
- (int)indexOfCell:(id)cell;	// 0x3298a881
- (id)initialFocus;	// 0x32989855
- (void)layoutSubcontrols;	// 0x3298b4d9
// converted property getter: - (BOOL)ordered;	// 0x32989811
- (void)reloadData;	// 0x3298b201
// converted property getter: - (BOOL)restoresFocus;	// 0x32989821
// converted property getter: - (BOOL)scrollable;	// 0x329897f1
- (id)selectedControl;	// 0x3298a981
// converted property setter: - (void)setCentered:(BOOL)centered;	// 0x3298b07d
// converted property setter: - (void)setCollapsedState:(int)state;	// 0x3298a959
// converted property setter: - (void)setDataSource:(id)source;	// 0x3298b161
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x329897d1
// converted property setter: - (void)setFocusedIndexPath:(id)path;	// 0x3298aa21
// converted property setter: - (void)setOrdered:(BOOL)ordered;	// 0x3298b055
// converted property setter: - (void)setRestoresFocus:(BOOL)focus;	// 0x3298a995
// converted property setter: - (void)setScrollable:(BOOL)scrollable;	// 0x3298b0a5
- (void)visibleScrollRectChanged;	// 0x3298a085
@end

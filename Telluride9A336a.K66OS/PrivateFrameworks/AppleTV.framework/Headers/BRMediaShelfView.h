/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRContainerViewCell.h"
#import "BRControl.h"

@class NSMutableArray, NSTimer, NSDictionary;

@interface BRMediaShelfView : BRControl <BRContainerViewCell> {
@private
	id _dataSource;	// 48 = 0x30
	id _delegate;	// 52 = 0x34
	NSDictionary *_controlActions;	// 56 = 0x38
	NSDictionary *_titleActions;	// 60 = 0x3c
	BOOL _centered;	// 64 = 0x40
	BOOL _scrollable;	// 65 = 0x41
	NSRange _flatRange;	// 68 = 0x44
	CATransform3D _leftTransform;	// 76 = 0x4c
	CATransform3D _rightTransform;	// 140 = 0x8c
	NSMutableArray *_cells;	// 204 = 0xcc
	NSMutableArray *_titles;	// 208 = 0xd0
	NSTimer *_scrollTimer;	// 212 = 0xd4
	BOOL _scrolling;	// 216 = 0xd8
	int _collapsedState;	// 220 = 0xdc
	BOOL _ordered;	// 224 = 0xe0
	BOOL _needToReloadDataOnActivate;	// 225 = 0xe1
	long _numberOfItems;	// 228 = 0xe4
	NSRange _refillVisibleRange;	// 232 = 0xe8
	BOOL _restoreLastFocus;	// 240 = 0xf0
	NSTimer *_forceDisplayTimer;	// 244 = 0xf4
	id _loadCompletionBlock;	// 248 = 0xf8
	BOOL _okToLoad;	// 252 = 0xfc
	BOOL _displayComplete;	// 253 = 0xfd
	BOOL _explicitlyAcceptsFocus;	// 254 = 0xfe
	long _columnCount;	// 256 = 0x100
	float _horizontalGap;	// 260 = 0x104
	float _coverflowMargin;	// 264 = 0x108
}
@property(assign) BOOL centered;	// G=0x33a4ec35; S=0x33a4ec05; converted property
@property(assign) int collapsedState;	// G=0x33a4f1e1; S=0x33a4f1b5; converted property
@property(assign, nonatomic) long columnCount;	// G=0x33a4f975; S=0x33a4e94d; @synthesize=_columnCount
@property(assign, nonatomic) float coverflowMargin;	// G=0x33a4f995; S=0x33a4f9a5; @synthesize=_coverflowMargin
@property(retain) id dataSource;	// G=0x33a4eaf5; S=0x33a4ea41; converted property
@property(assign) id delegate;	// G=0x33a4eb15; S=0x33a4eb05; converted property
@property(retain) id focusedIndexPath;	// G=0x33a4f019; S=0x33a4f0a5; converted property
@property(assign, nonatomic) float horizontalGap;	// G=0x33a4f985; S=0x33a4e981; @synthesize=_horizontalGap
@property(assign) BOOL ordered;	// G=0x33a4ec75; S=0x33a4ec45; converted property
@property(assign) BOOL scrollable;	// G=0x33a4ebf5; S=0x33a4ebb1; converted property
- (id)init;	// 0x33a4e4d5
- (long)_columnCount;	// 0x33a4fa95
- (id)_controlActions;	// 0x33a516ad
- (id)_controlsInRange:(NSRange)range oldRange:(NSRange)range2;	// 0x33a51cd5
- (float)_coverflowMargin;	// 0x33a4fb65
- (id)_createControlAtIndex:(int)index;	// 0x33a51a55
- (id)_createControlsInRange:(NSRange)range;	// 0x33a51e35
- (void)_displayCellsForce:(BOOL)force;	// 0x33a522a1
- (NSRange)_dividedRangeForRange:(NSRange)range andDirection:(int)direction;	// 0x33a524b9
- (unsigned)_dividerCountInRange:(NSRange)range;	// 0x33a525dd
- (unsigned)_firstScrollableIndex;	// 0x33a4fcdd
- (void)_focusChanged:(id)changed;	// 0x33a4fc1d
- (void)_forceDisplayTimerFired:(id)fired;	// 0x33a52485
- (float)_horizontalGap;	// 0x33a4faf1
- (long)_indexFromIndexPath:(id)indexPath;	// 0x33a52a95
- (id)_indexPathFromIndex:(long)index sectionIndex:(long *)index2;	// 0x33a52b49
- (BOOL)_isDividerAtIndex:(long)index;	// 0x33a52629
- (unsigned)_lastScrollableIndex;	// 0x33a4fc9d
- (void)_layoutShelfContents;	// 0x33a50285
- (BOOL)_leftButtonEvent;	// 0x33a4fdc5
- (void)_loadControlWithStartIndex:(long)startIndex start:(BOOL)start;	// 0x33a51f7d
- (void)_loadControlsInRange:(NSRange)range;	// 0x33a51ed9
- (unsigned)_nextFocusableIndexInDirection:(int)direction;	// 0x33a4fced
- (long)_numberOfItems;	// 0x33a529a5
- (void)_purgeControls;	// 0x33a4fa41
- (void)_refillShelf;	// 0x33a4f9b5
- (void)_reloadTitles;	// 0x33a526c9
- (void)_removeSectionHeaderTitleControls;	// 0x33a52901
- (BOOL)_rightButtonEvent;	// 0x33a4fd65
- (BOOL)_scrollInDirection:(int)direction;	// 0x33a4fe25
- (BOOL)_scrollIndexToVisible:(long)visible;	// 0x33a50251
- (BOOL)_scrollLeft;	// 0x33a50039
- (BOOL)_scrollRight;	// 0x33a50021
- (long)_sectionIndexForIndex:(long)index;	// 0x33a52c65
- (id)_setControlRange:(NSRange)range oldRange:(NSRange)range2;	// 0x33a51add
- (void)_setDimness:(float)dimness forLayer:(id)layer;	// 0x33a51571
- (void)_setFlatRange:(NSRange)range delayedLayout:(BOOL)layout;	// 0x33a518f5
- (void)_stopForceDisplayTimer;	// 0x33a52449
- (id)_titleActions;	// 0x33a527e5
- (id)_updateFlatRangeForScrollDirection:(int)scrollDirection;	// 0x33a51841
- (void)_updateSublayerTransform;	// 0x33a50139
- (NSRange)_visibleRange;	// 0x33a50055
- (id)accessibilityControls;	// 0x33a4f371
- (id)accessibilityLabel;	// 0x33a52d19
- (BOOL)brEventAction:(id)action;	// 0x33a4ec85
- (void)cancelContainerViewLoad;	// 0x33a4f6b5
// converted property getter: - (BOOL)centered;	// 0x33a4ec35
// converted property getter: - (int)collapsedState;	// 0x33a4f1e1
// declared property getter: - (long)columnCount;	// 0x33a4f975
- (void)controlWasActivated;	// 0x33a4e761
- (void)controlWasDeactivated;	// 0x33a4e81d
- (unsigned)countOfCells;	// 0x33a4f38d
// declared property getter: - (float)coverflowMargin;	// 0x33a4f995
- (long)dataCount;	// 0x33a4eb25
// converted property getter: - (id)dataSource;	// 0x33a4eaf5
- (void)dealloc;	// 0x33a4e649
// converted property getter: - (id)delegate;	// 0x33a4eb15
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x33a4f2d1
// converted property getter: - (id)focusedIndexPath;	// 0x33a4f019
// declared property getter: - (float)horizontalGap;	// 0x33a4f985
- (unsigned)indexInCellsOfObject:(id)object;	// 0x33a4f415
- (void)layoutSubcontrols;	// 0x33a4f1f1
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x33a4f611
- (id)objectInCellsAtIndex:(unsigned)index;	// 0x33a4f501
// converted property getter: - (BOOL)ordered;	// 0x33a4ec75
- (void)reloadData;	// 0x33a4e9bd
- (BOOL)restorePersistentSavedSelection;	// 0x33a4f709
// converted property getter: - (BOOL)scrollable;	// 0x33a4ebf5
- (void)scrollingCompleted;	// 0x33a4f5c5
- (id)selectedControl;	// 0x33a4f1a5
- (void)setAcceptsFocus:(BOOL)focus;	// 0x33a4e715
// converted property setter: - (void)setCentered:(BOOL)centered;	// 0x33a4ec05
// converted property setter: - (void)setCollapsedState:(int)state;	// 0x33a4f1b5
// declared property setter: - (void)setColumnCount:(long)count;	// 0x33a4e94d
// declared property setter: - (void)setCoverflowMargin:(float)margin;	// 0x33a4f9a5
// converted property setter: - (void)setDataSource:(id)source;	// 0x33a4ea41
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x33a4eb05
// converted property setter: - (void)setFocusedIndexPath:(id)path;	// 0x33a4f0a5
// declared property setter: - (void)setHorizontalGap:(float)gap;	// 0x33a4e981
- (void)setIgnoreLoadAndDisplayOnDemand;	// 0x33a4f6e5
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(BOOL)animations;	// 0x33a4f6f9
// converted property setter: - (void)setOrdered:(BOOL)ordered;	// 0x33a4ec45
- (void)setReadyToDisplay;	// 0x33a4f6e1
// converted property setter: - (void)setScrollable:(BOOL)scrollable;	// 0x33a4ebb1
- (void)updatePersistentSavedSelection;	// 0x33a4f849
- (void)visibleScrollRectChanged;	// 0x33a4f55d
@end


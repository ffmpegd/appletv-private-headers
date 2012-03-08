/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"
#import "BRContainerViewCell.h"

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
@property(assign) BOOL centered;	// G=0x3303620d; S=0x330361dd; converted property
@property(assign) int collapsedState;	// G=0x330367b9; S=0x3303678d; converted property
@property(assign, nonatomic) long columnCount;	// G=0x33036f4d; S=0x33035f25; @synthesize=_columnCount
@property(assign, nonatomic) float coverflowMargin;	// G=0x33036f6d; S=0x33036f7d; @synthesize=_coverflowMargin
@property(retain) id dataSource;	// G=0x330360cd; S=0x33036019; converted property
@property(assign) id delegate;	// G=0x330360ed; S=0x330360dd; converted property
@property(retain) id focusedIndexPath;	// G=0x330365f1; S=0x3303667d; converted property
@property(assign, nonatomic) float horizontalGap;	// G=0x33036f5d; S=0x33035f59; @synthesize=_horizontalGap
@property(assign) BOOL ordered;	// G=0x3303624d; S=0x3303621d; converted property
@property(assign) BOOL scrollable;	// G=0x330361cd; S=0x33036189; converted property
- (id)init;	// 0x33035aad
- (long)_columnCount;	// 0x3303706d
- (id)_controlActions;	// 0x33038c85
- (id)_controlsInRange:(NSRange)range oldRange:(NSRange)range2;	// 0x330392ad
- (float)_coverflowMargin;	// 0x3303713d
- (id)_createControlAtIndex:(int)index;	// 0x3303902d
- (id)_createControlsInRange:(NSRange)range;	// 0x3303940d
- (void)_displayCellsForce:(BOOL)force;	// 0x33039879
- (NSRange)_dividedRangeForRange:(NSRange)range andDirection:(int)direction;	// 0x33039a91
- (unsigned)_dividerCountInRange:(NSRange)range;	// 0x33039bb5
- (unsigned)_firstScrollableIndex;	// 0x330372b5
- (void)_focusChanged:(id)changed;	// 0x330371f5
- (void)_forceDisplayTimerFired:(id)fired;	// 0x33039a5d
- (float)_horizontalGap;	// 0x330370c9
- (long)_indexFromIndexPath:(id)indexPath;	// 0x3303a06d
- (id)_indexPathFromIndex:(long)index sectionIndex:(long *)index2;	// 0x3303a121
- (BOOL)_isDividerAtIndex:(long)index;	// 0x33039c01
- (unsigned)_lastScrollableIndex;	// 0x33037275
- (void)_layoutShelfContents;	// 0x3303785d
- (BOOL)_leftButtonEvent;	// 0x3303739d
- (void)_loadControlWithStartIndex:(long)startIndex start:(BOOL)start;	// 0x33039555
- (void)_loadControlsInRange:(NSRange)range;	// 0x330394b1
- (unsigned)_nextFocusableIndexInDirection:(int)direction;	// 0x330372c5
- (long)_numberOfItems;	// 0x33039f7d
- (void)_purgeControls;	// 0x33037019
- (void)_refillShelf;	// 0x33036f8d
- (void)_reloadTitles;	// 0x33039ca1
- (void)_removeSectionHeaderTitleControls;	// 0x33039ed9
- (BOOL)_rightButtonEvent;	// 0x3303733d
- (BOOL)_scrollInDirection:(int)direction;	// 0x330373fd
- (BOOL)_scrollIndexToVisible:(long)visible;	// 0x33037829
- (BOOL)_scrollLeft;	// 0x33037611
- (BOOL)_scrollRight;	// 0x330375f9
- (long)_sectionIndexForIndex:(long)index;	// 0x3303a23d
- (id)_setControlRange:(NSRange)range oldRange:(NSRange)range2;	// 0x330390b5
- (void)_setDimness:(float)dimness forLayer:(id)layer;	// 0x33038b49
- (void)_setFlatRange:(NSRange)range delayedLayout:(BOOL)layout;	// 0x33038ecd
- (void)_stopForceDisplayTimer;	// 0x33039a21
- (id)_titleActions;	// 0x33039dbd
- (id)_updateFlatRangeForScrollDirection:(int)scrollDirection;	// 0x33038e19
- (void)_updateSublayerTransform;	// 0x33037711
- (NSRange)_visibleRange;	// 0x3303762d
- (id)accessibilityControls;	// 0x33036949
- (id)accessibilityLabel;	// 0x3303a2f1
- (BOOL)brEventAction:(id)action;	// 0x3303625d
- (void)cancelContainerViewLoad;	// 0x33036c8d
// converted property getter: - (BOOL)centered;	// 0x3303620d
// converted property getter: - (int)collapsedState;	// 0x330367b9
// declared property getter: - (long)columnCount;	// 0x33036f4d
- (void)controlWasActivated;	// 0x33035d39
- (void)controlWasDeactivated;	// 0x33035df5
- (unsigned)countOfCells;	// 0x33036965
// declared property getter: - (float)coverflowMargin;	// 0x33036f6d
- (long)dataCount;	// 0x330360fd
// converted property getter: - (id)dataSource;	// 0x330360cd
- (void)dealloc;	// 0x33035c21
// converted property getter: - (id)delegate;	// 0x330360ed
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x330368a9
// converted property getter: - (id)focusedIndexPath;	// 0x330365f1
// declared property getter: - (float)horizontalGap;	// 0x33036f5d
- (unsigned)indexInCellsOfObject:(id)object;	// 0x330369ed
- (void)layoutSubcontrols;	// 0x330367c9
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x33036be9
- (id)objectInCellsAtIndex:(unsigned)index;	// 0x33036ad9
// converted property getter: - (BOOL)ordered;	// 0x3303624d
- (void)reloadData;	// 0x33035f95
- (BOOL)restorePersistentSavedSelection;	// 0x33036ce1
// converted property getter: - (BOOL)scrollable;	// 0x330361cd
- (void)scrollingCompleted;	// 0x33036b9d
- (id)selectedControl;	// 0x3303677d
- (void)setAcceptsFocus:(BOOL)focus;	// 0x33035ced
// converted property setter: - (void)setCentered:(BOOL)centered;	// 0x330361dd
// converted property setter: - (void)setCollapsedState:(int)state;	// 0x3303678d
// declared property setter: - (void)setColumnCount:(long)count;	// 0x33035f25
// declared property setter: - (void)setCoverflowMargin:(float)margin;	// 0x33036f7d
// converted property setter: - (void)setDataSource:(id)source;	// 0x33036019
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x330360dd
// converted property setter: - (void)setFocusedIndexPath:(id)path;	// 0x3303667d
// declared property setter: - (void)setHorizontalGap:(float)gap;	// 0x33035f59
- (void)setIgnoreLoadAndDisplayOnDemand;	// 0x33036cbd
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(BOOL)animations;	// 0x33036cd1
// converted property setter: - (void)setOrdered:(BOOL)ordered;	// 0x3303621d
- (void)setReadyToDisplay;	// 0x33036cb9
// converted property setter: - (void)setScrollable:(BOOL)scrollable;	// 0x33036189
- (void)updatePersistentSavedSelection;	// 0x33036e21
- (void)visibleScrollRectChanged;	// 0x33036b35
@end

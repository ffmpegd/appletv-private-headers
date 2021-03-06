/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class ListAnimationDelegate, BRSelectionLozengeLayer, BRScrollControl, NSTimer, NSArray, BRGridControl;

__attribute__((visibility("hidden")))
@interface BRListControl : BRControl {
	NSArray *_providers;	// 84 = 0x54
	BRSelectionLozengeLayer *_topWidget;	// 88 = 0x58
	BRSelectionLozengeLayer *_bottomWidget;	// 92 = 0x5c
	BRScrollControl *_scroller;	// 96 = 0x60
	BRGridControl *_list;	// 100 = 0x64
	ListAnimationDelegate *_animationDelegate;	// 104 = 0x68
	NSTimer *_pokeTimer;	// 108 = 0x6c
	NSTimer *_delayTimer;	// 112 = 0x70
	NSTimer *_repeatTimer;	// 116 = 0x74
	double _repeatStart;	// 120 = 0x78
	double _repeatAccumulator;	// 128 = 0x80
	long _scrollSelection;	// 136 = 0x88
	long _savedSelection;	// 140 = 0x8c
	int _style;	// 144 = 0x90
	BOOL _handlingProviderChange;	// 148 = 0x94
	BOOL _showsDividers;	// 149 = 0x95
	BOOL _firstDividerVisible;	// 150 = 0x96
	BOOL _showBackingLayer;	// 151 = 0x97
	BOOL _selectionEntered;	// 152 = 0x98
	BOOL _widgetHidden;	// 153 = 0x99
	BOOL _needsUpdate;	// 154 = 0x9a
	BOOL _turboEngaged;	// 155 = 0x9b
	BOOL _movingDown;	// 156 = 0x9c
}
@property(retain) id datasource;	// G=0x2cb155; S=0x2cb0d1; converted property
@property(assign) BOOL displaysSelectionWidget;	// G=0x2cae59; S=0x2cad9d; converted property
@property(assign) BOOL firstDividerVisible;	// G=0x2cad25; S=0x2cacf9; converted property
@property(assign) BOOL lastItemCentered;	// G=0x2ca67d; S=0x2ca5c9; converted property
@property(retain) NSArray *providers;	// G=0x2c9fe5; S=0x2c9f95; converted property
@property(readonly, assign) BRScrollControl *scrollControl;	// G=0x2cac85; @synthesize=_scroller
@property(assign) long selection;	// G=0x2ca44d; S=0x2ca359; converted property
@property(assign) int selectionLozengeStyle;	// G=0x2ca349; S=0x2ca089; converted property
@property(assign) BOOL showsDividers;	// G=0x2cace9; S=0x2cac99; converted property
@property(assign) BOOL showsWidgetBackingLayer;	// G=0x2ca5b9; S=0x2ca555; converted property
- (id)init;	// 0x2c9911
- (long)_backwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x2cb9e1
- (double)_calculateRepeatRate;	// 0x2cca51
- (long)_dataIndexFromScrollIndex:(long)scrollIndex;	// 0x2cbee9
- (void)_ensureSelectionFocusable;	// 0x2cb975
- (void)_enterCurrentSelection;	// 0x2ccc21
- (id)_findDividerProviderForProvider:(id)provider;	// 0x2cbe4d
- (long)_forwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x2cba81
- (void)_gridDataUpdated:(id)updated;	// 0x2cb1cd
- (void)_gridDataWillBeUpdated:(id)_gridData;	// 0x2cb185
- (void)_hideFirstDividerInDividedProviders:(id)dividedProviders;	// 0x2cbbed
- (void)_leaveCurrentSelection;	// 0x2ccd09
- (id)_legacyProvider;	// 0x2cbde9
- (void)_listScrollingCompleted:(id)completed;	// 0x2cc1a5
- (void)_listScrollingInitiated:(id)initiated;	// 0x2cc185
- (float)_maxWidgetBottomGlowHeight;	// 0x2cd1d9
- (float)_maxWidgetEdgeGlowWidth;	// 0x2cd231
- (float)_maxWidgetTopGlowHeight;	// 0x2cd181
- (void)_performScrollInitiationActivities;	// 0x2cc0dd
- (void)_performScrollTerminationActivities;	// 0x2cc141
- (void)_pokeTimerFired:(id)fired;	// 0x2cca09
- (void)_postSelectionFinalizedNotification;	// 0x2cccbd
- (void)_refillList;	// 0x2cbb1d
- (void)_repeatDownTimerFired:(id)fired;	// 0x2cc789
- (void)_repeatUpTimerFired:(id)fired;	// 0x2cc8c9
- (void)_restoreCurrentSelectionIndex;	// 0x2ccb01
- (void)_restorePersistentSavedSelection;	// 0x2cb495
- (void)_saveCurrentSelectionIndex;	// 0x2ccac9
- (BOOL)_scrollDown:(id)down;	// 0x2cb895
- (long)_scrollIndexForDataIndex:(long)dataIndex;	// 0x2cbfd9
- (BOOL)_scrollUp:(id)up;	// 0x2cb7b5
- (void)_setNewScrollIndex:(long)index;	// 0x2cbb81
- (void)_slowToStopRepeatTimerMovingDown:(BOOL)stopRepeatTimerMovingDown;	// 0x2cc521
- (void)_startDownwardAutoScroll:(id)scroll;	// 0x2cc2a1
- (void)_startRepeatTimerMovingDown:(BOOL)down;	// 0x2cc1c5
- (void)_startUpwardAutoScroll:(id)scroll;	// 0x2cc3e1
- (void)_stopRepeatTimer;	// 0x2cc715
- (void)_updateGrid;	// 0x2cb345
- (void)_updatePersistentSavedSelection;	// 0x2cb6b1
- (void)_updateProviders;	// 0x2cbc8d
- (void)_updateScrollPosition;	// 0x2ccd49
- (void)_updateWidgetFrame;	// 0x2ccedd
- (void)_updateWidgetFrameForWidget:(id)widget withItemFrame:(CGRect)itemFrame;	// 0x2cd081
- (id)accessibilityLabel;	// 0x2cad65
- (void)addDividerAtIndex:(long)index withLabel:(id)label;	// 0x2cae71
- (BOOL)brEventAction:(id)action;	// 0x2c9c69
- (void)clearSavedSelection;	// 0x2ca991
- (void)controlWasActivated;	// 0x2ca6ad
- (void)controlWasDeactivated;	// 0x2ca715
- (void)controlWasFocused;	// 0x2ca769
- (void)controlWasUnfocused;	// 0x2ca7e1
- (long)dataCount;	// 0x2c9ff5
// converted property getter: - (id)datasource;	// 0x2cb155
- (void)dealloc;	// 0x2c9b61
// converted property getter: - (BOOL)displaysSelectionWidget;	// 0x2cae59
// converted property getter: - (BOOL)firstDividerVisible;	// 0x2cad25
// converted property getter: - (BOOL)lastItemCentered;	// 0x2ca67d
- (void)layoutSubcontrols;	// 0x2caa1d
- (float)listHeightToMaximum:(float)maximum;	// 0x2ca4cd
- (id)providerForDataAtIndex:(long)index providerIndex:(long *)index2;	// 0x2ca039
// converted property getter: - (id)providers;	// 0x2c9fe5
- (void)reload;	// 0x2cafcd
- (void)removeDividerAtIndex:(long)index;	// 0x2caef1
- (void)removeDividers;	// 0x2caf61
// declared property getter: - (id)scrollControl;	// 0x2cac85
- (id)selectedObject;	// 0x2ca46d
// converted property getter: - (long)selection;	// 0x2ca44d
// converted property getter: - (int)selectionLozengeStyle;	// 0x2ca349
- (void)setBottomMargin:(float)margin;	// 0x2ca9dd
// converted property setter: - (void)setDatasource:(id)datasource;	// 0x2cb0d1
// converted property setter: - (void)setDisplaysSelectionWidget:(BOOL)widget;	// 0x2cad9d
// converted property setter: - (void)setFirstDividerVisible:(BOOL)visible;	// 0x2cacf9
// converted property setter: - (void)setLastItemCentered:(BOOL)centered;	// 0x2ca5c9
- (void)setName:(id)name forProvider:(id)provider;	// 0x2cad35
- (void)setProvider:(id)provider;	// 0x2c9f55
// converted property setter: - (void)setProviders:(id)providers;	// 0x2c9f95
// converted property setter: - (void)setSelection:(long)selection;	// 0x2ca359
// converted property setter: - (void)setSelectionLozengeStyle:(int)style;	// 0x2ca089
// converted property setter: - (void)setShowsDividers:(BOOL)dividers;	// 0x2cac99
// converted property setter: - (void)setShowsWidgetBackingLayer:(BOOL)layer;	// 0x2ca555
- (void)setTopMargin:(float)margin;	// 0x2ca9fd
// converted property getter: - (BOOL)showsDividers;	// 0x2cace9
// converted property getter: - (BOOL)showsWidgetBackingLayer;	// 0x2ca5b9
- (void)updateSavedSelection;	// 0x2ca9cd
- (id)visibleRowsAndRange:(NSRange *)range;	// 0x2ca86d
@end


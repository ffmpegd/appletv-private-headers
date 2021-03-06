/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class ListAnimationDelegate, BRSelectionLozengeLayer, NSTimer, BRScrollControl, NSArray, BRGridControl;

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
@property(retain) id datasource;	// G=0x33a85d; S=0x33a7c9; converted property
@property(assign) BOOL displaysSelectionWidget;	// G=0x33a505; S=0x33a42d; converted property
@property(assign) BOOL firstDividerVisible;	// G=0x33a365; S=0x33a339; converted property
@property(assign) BOOL lastItemCentered;	// G=0x339bb1; S=0x339af1; converted property
@property(retain) NSArray *providers;	// G=0x339499; S=0x339461; converted property
@property(readonly, assign) BRScrollControl *scrollControl;	// G=0x33a1fd; @synthesize=_scroller
@property(assign) long selection;	// G=0x339959; S=0x339859; converted property
@property(assign) int selectionLozengeStyle;	// G=0x339849; S=0x339571; converted property
@property(assign) BOOL showsDividers;	// G=0x33a329; S=0x33a2d1; converted property
@property(assign) BOOL showsWidgetBackingLayer;	// G=0x339ae1; S=0x339a7d; converted property
- (id)init;	// 0x338dfd
- (void).cxx_destruct;	// 0x33a211
- (long)_backwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x33b2d1
- (double)_calculateRepeatRate;	// 0x33c5d9
- (long)_dataIndexFromScrollIndex:(long)scrollIndex;	// 0x33b921
- (void)_ensureSelectionFocusable;	// 0x33b265
- (void)_enterCurrentSelection;	// 0x33c7b5
- (id)_findDividerProviderForProvider:(id)provider;	// 0x33b811
- (long)_forwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x33b371
- (void)_gridDataUpdated:(id)updated;	// 0x33a8f1
- (void)_gridDataWillBeUpdated:(id)_gridData;	// 0x33a8a9
- (void)_hideFirstDividerInDividedProviders:(id)dividedProviders;	// 0x33b4ed
- (void)_leaveCurrentSelection;	// 0x33c8ad
- (id)_legacyProvider;	// 0x33b785
- (void)_listScrollingCompleted:(id)completed;	// 0x33bc95
- (void)_listScrollingInitiated:(id)initiated;	// 0x33bc75
- (float)_maxWidgetBottomGlowHeight;	// 0x33cda1
- (float)_maxWidgetEdgeGlowWidth;	// 0x33cdf9
- (float)_maxWidgetTopGlowHeight;	// 0x33cd49
- (void)_performScrollInitiationActivities;	// 0x33bbad
- (void)_performScrollTerminationActivities;	// 0x33bc21
- (void)_pokeTimerFired:(id)fired;	// 0x33c581
- (void)_postSelectionFinalizedNotification;	// 0x33c851
- (void)_refillList;	// 0x33b40d
- (void)_repeatDownTimerFired:(id)fired;	// 0x33c2e1
- (void)_repeatUpTimerFired:(id)fired;	// 0x33c431
- (void)_restoreCurrentSelectionIndex;	// 0x33c689
- (void)_restorePersistentSavedSelection;	// 0x33ac3d
- (void)_saveCurrentSelectionIndex;	// 0x33c651
- (BOOL)_scrollDown:(id)down;	// 0x33b111
- (long)_scrollIndexForDataIndex:(long)dataIndex;	// 0x33ba55
- (BOOL)_scrollUp:(id)up;	// 0x33b015
- (void)_setNewScrollIndex:(long)index;	// 0x33b471
- (BOOL)_shouldEatUnhandledDirectionalEvent:(id)event;	// 0x33b20d
- (void)_slowToStopRepeatTimerMovingDown:(BOOL)stopRepeatTimerMovingDown;	// 0x33c061
- (void)_startDownwardAutoScroll:(id)scroll;	// 0x33bda1
- (void)_startRepeatTimerMovingDown:(BOOL)down;	// 0x33bcb5
- (void)_startUpwardAutoScroll:(id)scroll;	// 0x33bf01
- (void)_stopRepeatTimer;	// 0x33c25d
- (void)_updateGrid;	// 0x33aaad
- (void)_updatePersistentSavedSelection;	// 0x33aed5
- (void)_updateProviders;	// 0x33b5b9
- (void)_updateScrollPosition;	// 0x33c8ed
- (void)_updateWidgetFrame;	// 0x33ca89
- (void)_updateWidgetFrameForWidget:(id)widget withItemFrame:(CGRect)itemFrame;	// 0x33cc21
- (id)accessibilityLabel;	// 0x33a3c5
- (void)addDividerAtIndex:(long)index withLabel:(id)label;	// 0x33a51d
- (BOOL)brEventAction:(id)action;	// 0x33912d
- (void)clearSavedSelection;	// 0x339ee1
- (void)controlWasActivated;	// 0x339be1
- (void)controlWasDeactivated;	// 0x339c49
- (void)controlWasFocused;	// 0x339c9d
- (void)controlWasUnfocused;	// 0x339d15
- (long)dataCount;	// 0x3394ad
// converted property getter: - (id)datasource;	// 0x33a85d
- (void)dealloc;	// 0x339081
// converted property getter: - (BOOL)displaysSelectionWidget;	// 0x33a505
// converted property getter: - (BOOL)firstDividerVisible;	// 0x33a365
// converted property getter: - (BOOL)lastItemCentered;	// 0x339bb1
- (void)layoutSubcontrols;	// 0x339f79
- (float)listHeightToMaximum:(float)maximum;	// 0x3399f5
- (id)providerForDataAtIndex:(long)index providerIndex:(long *)index2;	// 0x339505
// converted property getter: - (id)providers;	// 0x339499
- (void)reload;	// 0x33a699
- (void)removeDividerAtIndex:(long)index;	// 0x33a5ad
- (void)removeDividers;	// 0x33a625
// declared property getter: - (id)scrollControl;	// 0x33a1fd
- (id)selectedObject;	// 0x339979
// converted property getter: - (long)selection;	// 0x339959
// converted property getter: - (int)selectionLozengeStyle;	// 0x339849
- (void)setBottomMargin:(float)margin;	// 0x339f39
// converted property setter: - (void)setDatasource:(id)datasource;	// 0x33a7c9
// converted property setter: - (void)setDisplaysSelectionWidget:(BOOL)widget;	// 0x33a42d
// converted property setter: - (void)setFirstDividerVisible:(BOOL)visible;	// 0x33a339
// converted property setter: - (void)setLastItemCentered:(BOOL)centered;	// 0x339af1
- (void)setName:(id)name forProvider:(id)provider;	// 0x33a375
- (void)setProvider:(id)provider;	// 0x339415
// converted property setter: - (void)setProviders:(id)providers;	// 0x339461
// converted property setter: - (void)setSelection:(long)selection;	// 0x339859
// converted property setter: - (void)setSelectionLozengeStyle:(int)style;	// 0x339571
// converted property setter: - (void)setShowsDividers:(BOOL)dividers;	// 0x33a2d1
// converted property setter: - (void)setShowsWidgetBackingLayer:(BOOL)layer;	// 0x339a7d
- (void)setTopMargin:(float)margin;	// 0x339f59
// converted property getter: - (BOOL)showsDividers;	// 0x33a329
// converted property getter: - (BOOL)showsWidgetBackingLayer;	// 0x339ae1
- (void)updateSavedSelection;	// 0x339f29
- (id)visibleRowsAndRange:(NSRange *)range;	// 0x339da1
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class ListAnimationDelegate, NSTimer, NSArray, BRSelectionLozengeLayer, BRScrollControl, BRGridControl;

@interface BRListControl : BRControl {
@private
	NSArray *_providers;	// 48 = 0x30
	BRSelectionLozengeLayer *_topWidget;	// 52 = 0x34
	BRSelectionLozengeLayer *_bottomWidget;	// 56 = 0x38
	BRScrollControl *_scroller;	// 60 = 0x3c
	BRGridControl *_list;	// 64 = 0x40
	ListAnimationDelegate *_animationDelegate;	// 68 = 0x44
	NSTimer *_pokeTimer;	// 72 = 0x48
	NSTimer *_delayTimer;	// 76 = 0x4c
	NSTimer *_repeatTimer;	// 80 = 0x50
	double _repeatStart;	// 84 = 0x54
	double _repeatAccumulator;	// 92 = 0x5c
	long _scrollSelection;	// 100 = 0x64
	long _savedSelection;	// 104 = 0x68
	int _style;	// 108 = 0x6c
	BOOL _handlingProviderChange;	// 112 = 0x70
	BOOL _showsDividers;	// 113 = 0x71
	BOOL _firstDividerVisible;	// 114 = 0x72
	BOOL _showBackingLayer;	// 115 = 0x73
	BOOL _selectionEntered;	// 116 = 0x74
	BOOL _widgetHidden;	// 117 = 0x75
	BOOL _needsUpdate;	// 118 = 0x76
	BOOL _turboEngaged;	// 119 = 0x77
	BOOL _movingDown;	// 120 = 0x78
}
@property(retain) id datasource;	// G=0x341ef9ad; S=0x341ef929; converted property
@property(assign) BOOL displaysSelectionWidget;	// G=0x341ef6b9; S=0x341ef601; converted property
@property(assign) BOOL firstDividerVisible;	// G=0x341ef589; S=0x341ef559; converted property
@property(assign) BOOL lastItemCentered;	// G=0x341eef09; S=0x341eee55; converted property
@property(retain) NSArray *providers;	// G=0x341ee86d; S=0x341ee819; converted property
@property(readonly, assign) BRScrollControl *scrollControl;	// G=0x341ef4f1; @synthesize=_scroller
@property(assign) long selection;	// G=0x341eecd5; S=0x341eebe1; converted property
@property(assign) int selectionLozengeStyle;	// G=0x341eebd1; S=0x341ee90d; converted property
@property(assign) BOOL showsDividers;	// G=0x341ef549; S=0x341ef501; converted property
@property(assign) BOOL showsWidgetBackingLayer;	// G=0x341eee45; S=0x341eede1; converted property
- (id)init;	// 0x341ee17d
- (long)_backwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x341f022d
- (double)_calculateRepeatRate;	// 0x341f1251
- (long)_dataIndexFromScrollIndex:(long)scrollIndex;	// 0x341f0701
- (void)_ensureSelectionFocusable;	// 0x341f01c1
- (void)_enterCurrentSelection;	// 0x341f141d
- (id)_findDividerProviderForProvider:(id)provider;	// 0x341f0665
- (long)_forwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x341f02c1
- (void)_gridDataUpdated:(id)updated;	// 0x341efa25
- (void)_gridDataWillBeUpdated:(id)_gridData;	// 0x341ef9dd
- (void)_hideFirstDividerInDividedProviders:(id)dividedProviders;	// 0x341f0421
- (void)_leaveCurrentSelection;	// 0x341f1509
- (id)_legacyProvider;	// 0x341f0601
- (void)_listScrollingCompleted:(id)completed;	// 0x341f0991
- (void)_listScrollingInitiated:(id)initiated;	// 0x341f0971
- (float)_maxWidgetBottomGlowHeight;	// 0x341f19b5
- (float)_maxWidgetEdgeGlowWidth;	// 0x341f1a15
- (float)_maxWidgetTopGlowHeight;	// 0x341f1955
- (void)_performScrollInitiationActivities;	// 0x341f08c9
- (void)_performScrollTerminationActivities;	// 0x341f092d
- (void)_pokeTimerFired:(id)fired;	// 0x341f120d
- (void)_postSelectionFinalizedNotification;	// 0x341f14bd
- (void)_refillList;	// 0x341f0355
- (void)_repeatDownTimerFired:(id)fired;	// 0x341f0f8d
- (void)_repeatUpTimerFired:(id)fired;	// 0x341f10cd
- (void)_restoreCurrentSelectionIndex;	// 0x341f12fd
- (void)_restorePersistentSavedSelection;	// 0x341efcf1
- (void)_saveCurrentSelectionIndex;	// 0x341f12c5
- (BOOL)_scrollDown:(id)down;	// 0x341f00e5
- (long)_scrollIndexForDataIndex:(long)dataIndex;	// 0x341f07e1
- (BOOL)_scrollUp:(id)up;	// 0x341f0009
- (void)_setNewScrollIndex:(long)index;	// 0x341f03b5
- (void)_slowToStopRepeatTimerMovingDown:(BOOL)stopRepeatTimerMovingDown;	// 0x341f0d15
- (void)_startDownwardAutoScroll:(id)scroll;	// 0x341f0a85
- (void)_startRepeatTimerMovingDown:(BOOL)down;	// 0x341f09b1
- (void)_startUpwardAutoScroll:(id)scroll;	// 0x341f0bcd
- (void)_stopRepeatTimer;	// 0x341f0f1d
- (void)_updateGrid;	// 0x341efba1
- (void)_updatePersistentSavedSelection;	// 0x341eff09
- (void)_updateProviders;	// 0x341f04a9
- (void)_updateScrollPosition;	// 0x341f154d
- (void)_updateWidgetFrame;	// 0x341f16d5
- (void)_updateWidgetFrameForWidget:(id)widget withItemFrame:(CGRect)itemFrame;	// 0x341f184d
- (id)accessibilityLabel;	// 0x341ef5c9
- (void)addDividerAtIndex:(long)index withLabel:(id)label;	// 0x341ef6d1
- (BOOL)brEventAction:(id)action;	// 0x341ee4ed
- (void)clearSavedSelection;	// 0x341ef211
- (void)controlWasActivated;	// 0x341eef39
- (void)controlWasDeactivated;	// 0x341eefa1
- (void)controlWasFocused;	// 0x341eeff5
- (void)controlWasUnfocused;	// 0x341ef06d
- (long)dataCount;	// 0x341ee87d
// converted property getter: - (id)datasource;	// 0x341ef9ad
- (void)dealloc;	// 0x341ee3e5
// converted property getter: - (BOOL)displaysSelectionWidget;	// 0x341ef6b9
// converted property getter: - (BOOL)firstDividerVisible;	// 0x341ef589
// converted property getter: - (BOOL)lastItemCentered;	// 0x341eef09
- (void)layoutSubcontrols;	// 0x341ef29d
- (float)listHeightToMaximum:(float)maximum;	// 0x341eed55
- (id)providerForDataAtIndex:(long)index providerIndex:(long *)index2;	// 0x341ee8c1
// converted property getter: - (id)providers;	// 0x341ee86d
- (void)reload;	// 0x341ef825
- (void)removeDividerAtIndex:(long)index;	// 0x341ef749
- (void)removeDividers;	// 0x341ef7b9
// declared property getter: - (id)scrollControl;	// 0x341ef4f1
- (id)selectedObject;	// 0x341eecf5
// converted property getter: - (long)selection;	// 0x341eecd5
// converted property getter: - (int)selectionLozengeStyle;	// 0x341eebd1
- (void)setBottomMargin:(float)margin;	// 0x341ef25d
// converted property setter: - (void)setDatasource:(id)datasource;	// 0x341ef929
// converted property setter: - (void)setDisplaysSelectionWidget:(BOOL)widget;	// 0x341ef601
// converted property setter: - (void)setFirstDividerVisible:(BOOL)visible;	// 0x341ef559
// converted property setter: - (void)setLastItemCentered:(BOOL)centered;	// 0x341eee55
- (void)setName:(id)name forProvider:(id)provider;	// 0x341ef599
- (void)setProvider:(id)provider;	// 0x341ee7d9
// converted property setter: - (void)setProviders:(id)providers;	// 0x341ee819
// converted property setter: - (void)setSelection:(long)selection;	// 0x341eebe1
// converted property setter: - (void)setSelectionLozengeStyle:(int)style;	// 0x341ee90d
// converted property setter: - (void)setShowsDividers:(BOOL)dividers;	// 0x341ef501
// converted property setter: - (void)setShowsWidgetBackingLayer:(BOOL)layer;	// 0x341eede1
- (void)setTopMargin:(float)margin;	// 0x341ef27d
// converted property getter: - (BOOL)showsDividers;	// 0x341ef549
// converted property getter: - (BOOL)showsWidgetBackingLayer;	// 0x341eee45
- (void)updateSavedSelection;	// 0x341ef24d
- (id)visibleRowsAndRange:(NSRange *)range;	// 0x341ef0f5
@end


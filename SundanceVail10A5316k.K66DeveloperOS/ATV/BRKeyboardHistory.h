/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRKeyboard.h"

@class NSArray, BRListView, BRContextMenuControl, BRScrollControl, BRBlueGlowSelectionLozengeLayer, BRKeyboardHistoryControl, BRWaitSpinnerControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardHistory : BRKeyboard {
	BRKeyboardHistoryControl *_keyboardHistoryControl;	// 48 = 0x30
	BRListView *_recentItemsList;	// 52 = 0x34
	BRBlueGlowSelectionLozengeLayer *_cursor;	// 56 = 0x38
	BRScrollControl *_scroller;	// 60 = 0x3c
	BRWaitSpinnerControl *_spinner;	// 64 = 0x40
	BRContextMenuControl *_contextMenu;	// 68 = 0x44
	NSArray *_textEntryHistoryClientsForDisplay;	// 72 = 0x48
	NSArray *_textEntryHistoryBehaviorsForDisplay;	// 76 = 0x4c
	int _textEntryStyle;	// 80 = 0x50
	float _preferredTextEntryWidth;	// 84 = 0x54
	float _preferredTextEntryHeight;	// 88 = 0x58
	CGRect _keyboardControlFrame;	// 92 = 0x5c
	float _textFieldBackgroundWidth;	// 108 = 0x6c
	float _textFieldBackgroundHeight;	// 112 = 0x70
	CGRect _textFieldBackgroundFrame;	// 116 = 0x74
	CGRect _textFieldFrame;	// 132 = 0x84
	CGRect _spinnerFrame;	// 148 = 0x94
	CGRect _textFieldLabelFrame;	// 164 = 0xa4
	CGRect _tabControlFrame;	// 180 = 0xb4
}
@property(readonly, assign) CGRect keyboardControlFrame;	// G=0x2e3085; converted property
@property(readonly, assign) CGRect spinnerFrame;	// G=0x2e3115; converted property
@property(readonly, assign) CGRect tabControlFrame;	// G=0x2e3139; converted property
@property(readonly, assign) CGRect textFieldBackgroundFrame;	// G=0x2e30cd; converted property
@property(readonly, assign) CGRect textFieldFrame;	// G=0x2e30f1; converted property
@property(readonly, assign) CGRect textFieldLabelFrame;	// G=0x2e30a9; converted property
- (id)initWithTextEntryStyle:(int)textEntryStyle;	// 0x2e21cd
- (void)_contextMenuCancelItemSelected:(id)selected;	// 0x2e3a25
- (int)_contextMenuDimOption;	// 0x2e38ed
- (id)_controlForContextMenuPositioning;	// 0x2e388d
- (id)_controlForContextMenuStart;	// 0x2e387d
- (id)_controlForData:(id)data;	// 0x2e3069
- (id)_controlToDim;	// 0x2e38dd
- (void)_dismissContextMenu;	// 0x2e3839
- (id)_filterRawKeyboardData:(id)data;	// 0x2e3055
- (id)_glyphDataForImage:(id)image;	// 0x2e3065
- (id)_glyphDataForStrings:(id)strings attributes:(id)attributes;	// 0x2e3061
- (id)_glyphDataForTextString:(id)textString attributes:(id)attributes;	// 0x2e305d
- (void)_handleContextMenuSelection:(id)selection;	// 0x2e38f1
- (id)_keyboardDataFileName;	// 0x2e3051
- (void)_listViewFocusChanged:(id)changed;	// 0x2e35d5
- (id)_mainKeyRowPlane;	// 0x2e3071
- (int)_numberOfMainKeyRows;	// 0x2e306d
- (float)_preferredTextEntryControlWidth;	// 0x2e3075
- (id)_processGlyphDataChunk:(id)chunk;	// 0x2e3059
- (id)_providersForContextMenu;	// 0x2e3631
- (void)_textEntryHistoryChanged:(id)changed;	// 0x2e35b5
- (id)customizeTextEntryControls:(id)controls;	// 0x2e28d9
- (id)customizedTextEntryFieldControls;	// 0x2e27d9
- (void)customizedTextFieldControlsWereRemoved;	// 0x2e28ad
- (void)dealloc;	// 0x2e2595
- (void)displayTextEntryHistoryForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x2e269d
- (BOOL)handleEvent:(id)event;	// 0x2e2cd1
- (id)keyboardControl;	// 0x2e2a11
// converted property getter: - (CGRect)keyboardControlFrame;	// 0x2e3085
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x2e3301
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2e3305
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x2e32f5
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x2e32f1
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x2e31c9
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2e3161
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x2e31c5
- (id)name;	// 0x2e2a05
- (long)numberOfSectionsInList:(id)list;	// 0x2e315d
- (id)popupKeyboardForKeyControl:(id)keyControl textEntryControl:(id)control;	// 0x2e2cb5
- (void)removeCustomizedTextEntryControls:(id)controls;	// 0x2e2971
- (BOOL)requiresTextFieldLabel;	// 0x2e2cb9
// converted property getter: - (CGRect)spinnerFrame;	// 0x2e3115
- (void)startSpinning;	// 0x2e2759
- (void)stopSpinning;	// 0x2e2799
- (id)switchToThisKeyboardIdentifier;	// 0x2e29dd
// converted property getter: - (CGRect)tabControlFrame;	// 0x2e3139
- (BOOL)textEntryControlShouldHandleMainKeysEvents;	// 0x2e2cb1
// converted property getter: - (CGRect)textFieldBackgroundFrame;	// 0x2e30cd
// converted property getter: - (CGRect)textFieldFrame;	// 0x2e30f1
// converted property getter: - (CGRect)textFieldLabelFrame;	// 0x2e30a9
@end


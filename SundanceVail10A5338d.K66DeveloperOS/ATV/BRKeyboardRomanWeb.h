/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRKeyboard.h"

@class BRButtonControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardRomanWeb : BRKeyboard {
	BRButtonControl *_previousButton;	// 48 = 0x30
	BRButtonControl *_nextButton;	// 52 = 0x34
	BRButtonControl *_autoFillButton;	// 56 = 0x38
	BRButtonControl *_clearButton;	// 60 = 0x3c
	BRImageControl *_rowDividerImageControl;	// 64 = 0x40
}
- (id)init;	// 0x2e4d45
- (void)_autoFillButtonClick:(id)click;	// 0x2e580d
- (void)_generateKeyEventWithCharacters:(id)characters;	// 0x2e56c1
- (id)_keyboardDataFileName;	// 0x2e4e99
- (float)_mainKeysVerticalSpacing;	// 0x2e56b9
- (void)_nextButtonClick:(id)click;	// 0x2e57c5
- (int)_numberOfMainKeyRows;	// 0x2e56b5
- (float)_preferredGlyphHeight:(id)height;	// 0x2e4ebd
- (float)_preferredGlyphWidth:(id)width;	// 0x2e4eb5
- (void)_prevousButtonClick:(id)click;	// 0x2e577d
- (BOOL)canShowLanguageSwitchButton;	// 0x2e56ad
- (BOOL)canWrapVertically;	// 0x2e55c9
- (id)customizeTextEntryControls:(id)controls;	// 0x2e4ec5
- (void)dealloc;	// 0x2e4da1
- (int)mapVisualIndex:(int)index toRow:(id)row;	// 0x2e4e51
- (id)name;	// 0x2e4e41
- (BOOL)popupKeyboardShouldBeRightAlignedForKey:(id)popupKeyboard;	// 0x2e55cd
- (void)removeCustomizedTextEntryControls:(id)controls;	// 0x2e54f9
- (BOOL)requiresTextFieldLabel;	// 0x2e56b1
@end


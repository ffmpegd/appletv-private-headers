/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRKeyboard.h"
#import "AppleTV-Structs.h"

@class BRWaitSpinnerControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardRomanSquare : BRKeyboard {
	BRWaitSpinnerControl *_spinner;	// 48 = 0x30
}
- (id)_keyboardDataFileName;	// 0x2d9769
- (float)_mainKeysVerticalSpacing;	// 0x2d9799
- (int)_numberOfMainKeyRows;	// 0x2d9795
- (float)_preferredGlyphHeight:(id)height;	// 0x2d978d
- (float)_preferredGlyphWidth:(id)width;	// 0x2d9785
- (id)_spinner;	// 0x2d9bbd
- (long)_startingIndexOfActionKeysInKeyRowData;	// 0x2d9bb9
- (id)actionDictionaryForKeyControl:(id)keyControl;	// 0x2d9675
- (id)attributesForTextFieldLabel;	// 0x2d964d
- (BOOL)canShowLanguageSwitchButton;	// 0x2d9671
- (id)customizedTextEntryFieldControls;	// 0x2d95cd
- (void)customizedTextFieldControlsWereRemoved;	// 0x2d9621
- (void)dealloc;	// 0x2d9501
- (CGRect)spinnerFrame;	// 0x2d9aa9
- (void)startSpinning;	// 0x2d954d
- (void)stopSpinning;	// 0x2d958d
- (CGRect)tabControlFrame;	// 0x2d996d
- (CGRect)textFieldFrame;	// 0x2d97a1
@end


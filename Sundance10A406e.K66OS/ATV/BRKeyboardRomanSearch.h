/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRKeyboardRomanLogIn.h"
#import "AppleTV-Structs.h"

@class BRWaitSpinnerControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardRomanSearch : BRKeyboardRomanLogIn {
	BRWaitSpinnerControl *_spinner;	// 52 = 0x34
}
- (float)_mainKeysHorizontalSpacing;	// 0x3050fd
- (float)_mainKeysVerticalSpacing;	// 0x3050f5
- (int)_numberOfMainKeyRows;	// 0x3050f1
- (float)_preferredTextEntryControlWidth;	// 0x305105
- (float)_verticalGapBetweenMainAndActionKeys;	// 0x305111
- (id)attributesForTextFieldLabel;	// 0x3050ad
- (id)customizedTextEntryFieldControls;	// 0x304fc1
- (void)customizedTextFieldControlsWereRemoved;	// 0x305081
- (void)dealloc;	// 0x304ef5
- (CGRect)keyboardControlFrame;	// 0x305119
- (id)name;	// 0x3050e1
- (BOOL)requiresTextFieldLabel;	// 0x3050ed
- (CGRect)spinnerFrame;	// 0x305221
- (void)startSpinning;	// 0x304f41
- (void)stopSpinning;	// 0x304f81
- (CGRect)tabControlFrame;	// 0x305331
- (CGRect)textFieldBackgroundFrame;	// 0x305169
- (CGRect)textFieldFrame;	// 0x305195
- (CGRect)textFieldLabelFrame;	// 0x30513d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRKeyboardRomanLogIn.h"

@class BRWaitSpinnerControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardRomanSearch : BRKeyboardRomanLogIn {
@private
	BRWaitSpinnerControl *_spinner;	// 52 = 0x34
}
- (float)_mainKeysHorizontalSpacing;	// 0x33ac995d
- (float)_mainKeysVerticalSpacing;	// 0x33ac9955
- (int)_numberOfMainKeyRows;	// 0x33ac9951
- (float)_preferredTextEntryControlWidth;	// 0x33ac9965
- (float)_verticalGapBetweenMainAndActionKeys;	// 0x33ac9971
- (id)attributesForTextFieldLabel;	// 0x33ac990d
- (id)customizedTextEntryFieldControls;	// 0x33ac9825
- (void)customizedTextFieldControlsWereRemoved;	// 0x33ac98e1
- (void)dealloc;	// 0x33ac9759
- (CGRect)keyboardControlFrame;	// 0x33ac9979
- (id)name;	// 0x33ac9941
- (BOOL)requiresTextFieldLabel;	// 0x33ac994d
- (CGRect)spinnerFrame;	// 0x33ac9a85
- (void)startSpinning;	// 0x33ac97a5
- (void)stopSpinning;	// 0x33ac97e5
- (CGRect)tabControlFrame;	// 0x33ac9b85
- (CGRect)textFieldBackgroundFrame;	// 0x33ac99c9
- (CGRect)textFieldFrame;	// 0x33ac99f5
- (CGRect)textFieldLabelFrame;	// 0x33ac999d
@end


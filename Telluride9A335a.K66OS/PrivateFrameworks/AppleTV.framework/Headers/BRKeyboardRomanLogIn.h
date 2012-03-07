/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRKeyboard.h"
#import "AppleTV-Structs.h"

@class BRControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardRomanLogIn : BRKeyboard {
@private
	BRControl *_sixthRow;	// 48 = 0x30
}
- (id)init;	// 0x34223b35
- (float)_actionKeysContainerSpacing;	// 0x34223c91
- (float)_actionKeysContainerWidth;	// 0x34223c89
- (id)_keyboardDataFileName;	// 0x34223c49
- (float)_mainKeysHorizontalSpacing;	// 0x34223c75
- (float)_mainKeysVerticalSpacing;	// 0x34223c6d
- (int)_numberOfMainKeyColumns;	// 0x34223c69
- (int)_numberOfMainKeyRows;	// 0x34223c65
- (id)_popupKeyboardDataFileName;	// 0x34223c3d
- (float)_preferredTextEntryControlWidth;	// 0x34223c7d
- (float)_verticalGapBetweenMainAndActionKeys;	// 0x34223c99
- (id)accessibilityLabel;	// 0x34223c15
- (void)dealloc;	// 0x34223b91
- (CGRect)keyboardControlFrame;	// 0x34223cb1
- (float)layoutGapBelowKeyboardControl;	// 0x34223ca1
- (float)layoutGapBelowTabControl;	// 0x34223ca9
- (id)name;	// 0x34223c09
- (int)numberOfKeyboardsForCurrentKeyboardType;	// 0x34223c05
- (id)switchToThisKeyboardIdentifier;	// 0x34223bdd
- (CGRect)tabControlFrame;	// 0x34223cd9
@end


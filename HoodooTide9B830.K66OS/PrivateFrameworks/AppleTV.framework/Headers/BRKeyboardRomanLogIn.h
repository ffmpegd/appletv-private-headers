/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRKeyboard.h"

@class BRControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardRomanLogIn : BRKeyboard {
@private
	BRControl *_sixthRow;	// 48 = 0x30
}
- (id)init;	// 0x32a15679
- (float)_actionKeysContainerSpacing;	// 0x32a157d5
- (float)_actionKeysContainerWidth;	// 0x32a157cd
- (id)_keyboardDataFileName;	// 0x32a1578d
- (float)_mainKeysHorizontalSpacing;	// 0x32a157b9
- (float)_mainKeysVerticalSpacing;	// 0x32a157b1
- (int)_numberOfMainKeyColumns;	// 0x32a157ad
- (int)_numberOfMainKeyRows;	// 0x32a157a9
- (id)_popupKeyboardDataFileName;	// 0x32a15781
- (float)_preferredTextEntryControlWidth;	// 0x32a157c1
- (float)_verticalGapBetweenMainAndActionKeys;	// 0x32a157dd
- (id)accessibilityLabel;	// 0x32a15759
- (void)dealloc;	// 0x32a156d5
- (CGRect)keyboardControlFrame;	// 0x32a157f5
- (float)layoutGapBelowKeyboardControl;	// 0x32a157e5
- (float)layoutGapBelowTabControl;	// 0x32a157ed
- (id)name;	// 0x32a1574d
- (int)numberOfKeyboardsForCurrentKeyboardType;	// 0x32a15749
- (id)switchToThisKeyboardIdentifier;	// 0x32a15721
- (CGRect)tabControlFrame;	// 0x32a1581d
@end

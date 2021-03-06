/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class BRTextControl, BRWaitPromptControl;

__attribute__((visibility("hidden")))
@interface LTNTPStartupController : BRController {
	BRWaitPromptControl *_promptAndSpinner;	// 100 = 0x64
	BRTextControl *_subtext;	// 104 = 0x68
}
- (id)init;	// 0x4ce7d1
- (void).cxx_destruct;	// 0x4cedd5
- (void)_checkForNetworkTimeAfterPosted;	// 0x4cee09
- (void)_networkChanged:(id)changed;	// 0x4cef61
- (void)_timeChangeNotification:(id)notification;	// 0x4ceec9
- (id)accessibilityLabel;	// 0x4ced59
- (BOOL)brEventAction:(id)action;	// 0x4cea99
- (void)dealloc;	// 0x4cea2d
- (BOOL)isAccessibilityElement;	// 0x4ced55
- (void)layoutSubcontrols;	// 0x4cec61
- (void)wasPopped;	// 0x4cec1d
- (void)wasPushed;	// 0x4ceb31
@end


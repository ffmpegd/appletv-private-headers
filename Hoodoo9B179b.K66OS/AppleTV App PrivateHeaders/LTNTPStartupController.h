/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "LTNTPStartupController.h"

@class BRWaitPromptControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface LTNTPStartupController : XXUnknownSuperclass {
	BRWaitPromptControl *_promptAndSpinner;	// 64 = 0x40
	BRTextControl *_subtext;	// 68 = 0x44
}
- (id)init;	// 0x572f1
- (void).cxx_destruct;	// 0x57979
- (id)accessibilityLabel;	// 0x57901
- (BOOL)brEventAction:(id)action;	// 0x57615
- (void)dealloc;	// 0x575a9
- (BOOL)isAccessibilityElement;	// 0x578fd
- (void)layoutSubcontrols;	// 0x577bd
- (void)wasPopped;	// 0x57779
- (void)wasPushed;	// 0x5768d
@end

@interface LTNTPStartupController (Private)
- (void)_checkForNetworkTimeAfterPosted;	// 0x579ad
- (void)_networkChanged:(id)changed;	// 0x57afd
- (void)_timeChangeNotification:(id)notification;	// 0x57a65
@end

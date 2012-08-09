/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UITableViewController;

__attribute__((visibility("hidden")))
@interface UITableViewControllerKeyboardSupport : NSObject {
	UITableViewController *_tableViewController;	// 4 = 0x4
	float _adjustmentForKeyboard;	// 8 = 0x8
	unsigned _viewIsDisappearing : 1;	// 12 = 0xc
	unsigned _registeredForNotifications : 1;	// 12 = 0xc
}
@property(assign, nonatomic) float adjustmentForKeyboard;	// G=0x33b25c75; S=0x33b639b1; @synthesize=_adjustmentForKeyboard
@property(assign, nonatomic) BOOL registeredForNotifications;	// G=0x33b25c31; S=0x33b25c45; 
@property(assign, nonatomic) BOOL viewIsDisappearing;	// G=0x33b6399d; S=0x33b25c5d; 
- (id)initWithTableViewController:(id)tableViewController;	// 0x33b25bf1
- (void)_keyboardDidChangeFrame:(id)_keyboard;	// 0x33c53195
- (void)_keyboardDidHide:(id)_keyboard;	// 0x33b6f0e1
- (void)_keyboardDidShow:(id)_keyboard;	// 0x33b63a41
- (void)_keyboardWillHide:(id)_keyboard;	// 0x33b63a95
- (void)_keyboardWillShow:(id)_keyboard;	// 0x33b63825
// declared property getter: - (float)adjustmentForKeyboard;	// 0x33b25c75
// declared property getter: - (BOOL)registeredForNotifications;	// 0x33b25c31
// declared property setter: - (void)setAdjustmentForKeyboard:(float)keyboard;	// 0x33b639b1
// declared property setter: - (void)setRegisteredForNotifications:(BOOL)notifications;	// 0x33b25c45
// declared property setter: - (void)setViewIsDisappearing:(BOOL)disappearing;	// 0x33b25c5d
// declared property getter: - (BOOL)viewIsDisappearing;	// 0x33b6399d
@end

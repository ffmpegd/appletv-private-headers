/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import "SBDeviceLockView.h"

@class SBDeviceLockKeypad;

@interface SBDeviceLockViewWithKeypad : SBDeviceLockView {
	SBDeviceLockKeypad *_keypad;	// 104 = 0x68
}
@property(assign) BOOL playsKeyboardClicks;	// G=0x330917bd; S=0x330917e1; converted property
@property(assign) BOOL showsEmergencyCallButton;	// G=0x33091801; S=0x33091825; converted property
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation showsEmergencyCall:(BOOL)call;	// 0x3309162d
- (void)dealloc;	// 0x330916d9
- (void)deviceLockEntryFieldTextDidChange:(id)deviceLockEntryFieldText;	// 0x33091845
- (id)keypadView;	// 0x33091725
- (void)phonePad:(id)pad keyDown:(BOOL)down;	// 0x330918cd
- (void)phonePad:(id)pad keyUp:(BOOL)up;	// 0x33091911
// converted property getter: - (BOOL)playsKeyboardClicks;	// 0x330917bd
- (void)setPasscode:(id)passcode;	// 0x33091735
// converted property setter: - (void)setPlaysKeyboardClicks:(BOOL)clicks;	// 0x330917e1
// converted property setter: - (void)setShowsEmergencyCallButton:(BOOL)button;	// 0x33091825
// converted property getter: - (BOOL)showsEmergencyCallButton;	// 0x33091801
@end

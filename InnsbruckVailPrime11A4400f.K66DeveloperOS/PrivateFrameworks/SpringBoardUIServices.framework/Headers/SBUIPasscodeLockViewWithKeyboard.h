/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import "SpringBoardUIServices-Structs.h"
#import "SBUIPasscodeEntryFieldDelegate.h"
#import "SBUIPasscodeLockViewBase.h"

@class SBPasscodeKeyboard, UILabel, SBUIAlphanumericPasscodeEntryField, SBUIRingViewLabelButton;

@interface SBUIPasscodeLockViewWithKeyboard : SBUIPasscodeLockViewBase <SBUIPasscodeEntryFieldDelegate> {
	SBPasscodeKeyboard *_keyboard;	// 140 = 0x8c
	SBUIAlphanumericPasscodeEntryField *_alphaEntryField;	// 144 = 0x90
	UILabel *_statusField;	// 148 = 0x94
	UIView *_statusFieldBackground;	// 152 = 0x98
	SBUIRingViewLabelButton *_emergencyCallButton;	// 156 = 0x9c
	UIView *_emergencyCallToTopFiller;	// 160 = 0xa0
	UIView *_emergencyCallLeftFiller;	// 164 = 0xa4
	UIView *_emergencyCallRightFiller;	// 168 = 0xa8
	UIView *_statusFieldToTopOrEmergencyCallBottomFiller;	// 172 = 0xac
	UIView *_entryFieldLeftFiller;	// 176 = 0xb0
	UIView *_entryFieldRightFiller;	// 180 = 0xb4
	UIView *_entryFieldToBottomFiller;	// 184 = 0xb8
	BOOL _wasMinimizedWhenAnimationStarted;	// 188 = 0xbc
	BOOL _previousKeyboardShowedInlineCandidates;	// 189 = 0xbd
	BOOL _disableAnimationsDuringMinMax;	// 190 = 0xbe
	BOOL _triedToMinMaxWhileRotating;	// 191 = 0xbf
	BOOL _isAnimating;	// 192 = 0xc0
}
@property(assign) float backgroundAlpha;	// G=0x32797059; S=0x327971cd; converted property
- (id)init;	// 0x32796859
- (void)_acceptOrCancelReturnKeyPress;	// 0x32797725
- (BOOL)_canMinMaxKeyboard;	// 0x327982f9
- (void)_geometryChanged:(id)changed;	// 0x32797585
- (void)_handleDidRotateNotification:(id)_handle;	// 0x32798905
- (void)_handleWillAnimateNotification:(id)_handle;	// 0x32798805
- (void)_handleWillRotateNotification:(id)_handle;	// 0x32798729
- (void)_hardwareReturnKeyPressed:(id)pressed;	// 0x327975a9
- (BOOL)_isMinimized;	// 0x327982fd
- (CGRect)_keyboardFrameForInterfaceOrientation:(int)interfaceOrientation;	// 0x32798579
- (float)_keyboardToEntryFieldOffset;	// 0x3279865d
- (void)_layoutForMinimizationState:(BOOL)minimizationState;	// 0x32797cc9
- (void)_maximize;	// 0x32798481
- (void)_minimize;	// 0x32798389
- (void)_notifyDelegatePasscodeCancelled;	// 0x32797659
- (void)_notifyDelegatePasscodeEntered;	// 0x327975b9
- (void)_notifyDelegateThatEmergencyCallButtonWasPressed;	// 0x32797609
- (void)_setMinimized:(BOOL)minimized;	// 0x32798349
- (float)_statusFieldHeight;	// 0x327986e5
- (void)_toggleForEmergencyCall;	// 0x32797781
- (void)_toggleForStatusField;	// 0x32797c81
// converted property getter: - (float)backgroundAlpha;	// 0x32797059
- (BOOL)becomeFirstResponder;	// 0x327973e1
- (void)dealloc;	// 0x32796f29
- (void)layoutSubviews;	// 0x32797381
- (id)passcode;	// 0x32797079
- (BOOL)passcodeEntryField:(id)field shouldInsertText:(id)text;	// 0x327976c9
- (void)passcodeEntryFieldDidAcceptEntry:(id)passcodeEntryField;	// 0x327976a9
- (void)passcodeEntryFieldDidCancelEntry:(id)passcodeEntryField;	// 0x327976b9
- (void)passcodeEntryFieldTextDidChange:(id)passcodeEntryFieldText;	// 0x327976cd
- (BOOL)resignFirstResponder;	// 0x3279751d
// converted property setter: - (void)setBackgroundAlpha:(float)alpha;	// 0x327971cd
- (void)setCustomBackgroundColor:(id)color;	// 0x32797099
- (void)setShowsEmergencyCallButton:(BOOL)button;	// 0x32797301
- (void)setShowsStatusField:(BOOL)field;	// 0x32797341
@end


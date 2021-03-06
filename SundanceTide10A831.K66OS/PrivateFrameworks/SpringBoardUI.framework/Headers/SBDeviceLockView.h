/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIView.h> // Unknown library

@class SBDeviceLockTitle, SBDeviceLockEntryField, NSString;

@interface SBDeviceLockView : UIView {
	int _style;	// 84 = 0x54
	int _interfaceOrientation;	// 88 = 0x58
	SBDeviceLockTitle *_statusView;	// 92 = 0x5c
	SBDeviceLockEntryField *_entryView;	// 96 = 0x60
	id _delegate;	// 100 = 0x64
}
@property(assign, nonatomic) id delegate;	// G=0x377a6559; S=0x377a6569; @synthesize=_delegate
@property(readonly, assign, nonatomic) UIView *entryView;	// G=0x377a61e1; 
@property(assign, nonatomic) int interfaceOrientation;	// G=0x377a6549; S=0x377a64c5; @synthesize=_interfaceOrientation
@property(readonly, assign, nonatomic, getter=isKeypadMinimized) BOOL keypadMinimized;	// G=0x377a636d; 
@property(readonly, assign, nonatomic) UIView *keypadView;	// G=0x377a61f1; 
@property(retain, nonatomic) NSString *passcode;	// G=0x377a62d9; S=0x377a62f9; 
@property(assign, nonatomic) BOOL playsKeyboardClicks;	// G=0x377a635d; S=0x377a6361; 
@property(assign, nonatomic, getter=isShowingEntryStatusWarning) BOOL showingEntryStatusWarning;	// G=0x377a6319; S=0x377a633d; 
@property(assign, nonatomic, getter=isShowingStatusWarning) BOOL showingStatusWarning;	// G=0x377a6275; S=0x377a6299; 
@property(assign, nonatomic) BOOL showsEmergencyCallButton;	// G=0x377a6365; S=0x377a6369; 
@property(retain, nonatomic) NSString *statusSubtitle;	// G=0x377a6235; S=0x377a6255; 
@property(retain, nonatomic) NSString *statusTitle;	// G=0x377a61f5; S=0x377a6215; 
@property(readonly, assign, nonatomic) UIView *statusView;	// G=0x377a61d1; 
@property(readonly, assign, nonatomic) int style;	// G=0x377a6539; @synthesize=_style
+ (int)defaultStyle;	// 0x377a5e09
+ (int)defaultStyleForSiri;	// 0x377a5de9
+ (int)defaultStyleForSiri:(BOOL)siri;	// 0x377a5d69
+ (double)deviceLockAnimationDuration;	// 0x377a5cf1
+ (id)newWithStyle:(int)style interfaceOrientation:(int)orientation showsEmergencyCall:(BOOL)call;	// 0x377a5e29
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation showsEmergencyCall:(BOOL)call;	// 0x377a5f71
- (void)animateToInterfaceInterfaceOrientation:(int)interfaceInterfaceOrientation;	// 0x377a6525
- (BOOL)becomeFirstResponder;	// 0x377a60b1
- (void)blinkStatusView;	// 0x377a62b9
- (BOOL)canBecomeFirstResponder;	// 0x377a608d
- (void)dealloc;	// 0x377a611d
// declared property getter: - (id)delegate;	// 0x377a6559
- (BOOL)deviceLockEntryField:(id)field shouldInsertText:(id)text;	// 0x377a6391
- (void)deviceLockEntryFieldDidAcceptEntry:(id)deviceLockEntryField;	// 0x377a6371
- (void)deviceLockEntryFieldDidCancelEntry:(id)deviceLockEntryField;	// 0x377a6381
- (void)deviceLockEntryFieldTextDidChange:(id)deviceLockEntryFieldText;	// 0x377a6395
- (void)didAnimateToInterfaceOrientation:(int)interfaceOrientation;	// 0x377a6535
// declared property getter: - (id)entryView;	// 0x377a61e1
// declared property getter: - (int)interfaceOrientation;	// 0x377a6549
- (BOOL)isFirstResponder;	// 0x377a60d5
// declared property getter: - (BOOL)isKeypadMinimized;	// 0x377a636d
// declared property getter: - (BOOL)isShowingEntryStatusWarning;	// 0x377a6319
// declared property getter: - (BOOL)isShowingStatusWarning;	// 0x377a6275
// declared property getter: - (id)keypadView;	// 0x377a61f1
- (void)notifyDelegateThatCancelButtonWasPressed;	// 0x377a6435
- (void)notifyDelegateThatEmergencyCallButtonWasPressed;	// 0x377a647d
- (void)notifyDelegateThatPasscodeDidChange;	// 0x377a63a5
- (void)notifyDelegateThatPasscodeWasEntered;	// 0x377a63ed
// declared property getter: - (id)passcode;	// 0x377a62d9
// declared property getter: - (BOOL)playsKeyboardClicks;	// 0x377a635d
- (BOOL)resignFirstResponder;	// 0x377a60f9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x377a6569
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x377a64c5
// declared property setter: - (void)setPasscode:(id)passcode;	// 0x377a62f9
// declared property setter: - (void)setPlaysKeyboardClicks:(BOOL)clicks;	// 0x377a6361
// declared property setter: - (void)setShowingEntryStatusWarning:(BOOL)warning;	// 0x377a633d
// declared property setter: - (void)setShowingStatusWarning:(BOOL)warning;	// 0x377a6299
// declared property setter: - (void)setShowsEmergencyCallButton:(BOOL)button;	// 0x377a6369
// declared property setter: - (void)setStatusSubtitle:(id)subtitle;	// 0x377a6255
// declared property setter: - (void)setStatusTitle:(id)title;	// 0x377a6215
- (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x377a6181
// declared property getter: - (BOOL)showsEmergencyCallButton;	// 0x377a6365
// declared property getter: - (id)statusSubtitle;	// 0x377a6235
// declared property getter: - (id)statusTitle;	// 0x377a61f5
// declared property getter: - (id)statusView;	// 0x377a61d1
// declared property getter: - (int)style;	// 0x377a6539
- (void)willAnimateToInterfaceOrientation:(int)interfaceOrientation;	// 0x377a6521
@end


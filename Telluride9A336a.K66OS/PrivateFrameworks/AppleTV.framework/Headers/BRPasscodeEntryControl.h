/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTextField.h"
#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRDeviceKeyboardMessage, BRPasscodeSelectionLayer;
@protocol BRTextFieldDelegate;

@interface BRPasscodeEntryControl : BRControl <BRTextField> {
@private
	BRPasscodeSelectionLayer *_passcodeLayer;	// 48 = 0x30
	unsigned _numDigits;	// 52 = 0x34
	BOOL _isUserEditable;	// 56 = 0x38
	CGSize _passcodeLayerSize;	// 60 = 0x3c
	BRDeviceKeyboardMessage *_deviceKeyboardMessage;	// 68 = 0x44
	id<BRTextFieldDelegate> _textFieldDelegate;	// 72 = 0x48
}
- (id)initWithNumDigits:(unsigned)numDigits userEditable:(BOOL)editable hideDigits:(BOOL)digits;	// 0x33ae5f85
- (void)_handlePlayPauseButton:(id)button;	// 0x33ae6969
- (void)_layoutUI;	// 0x33ae69d9
- (void)_shakeAnimationCompleted:(id)completed;	// 0x33ae64ed
- (id)accessibilityLabel;	// 0x33ae7031
- (id)accessibilityTraits;	// 0x33ae6fad
- (BOOL)brEventAction:(id)action;	// 0x33ae6545
- (void)controlWasFocused;	// 0x33ae6829
- (void)controlWasUnfocused;	// 0x33ae68ad
- (void)dealloc;	// 0x33ae60ed
- (void)deviceKeyboardClose;	// 0x33ae6a1d
- (void)deviceKeyboardMessageHandler:(id)handler;	// 0x33ae6bb9
- (void)deviceKeyboardUpdate:(BOOL)update;	// 0x33ae6a9d
- (BOOL)isAccessibilityElement;	// 0x33ae6fa9
- (CGSize)preferredSizeFromScreenSize:(CGSize)screenSize;	// 0x33ae617d
- (void)reset;	// 0x33ae624d
- (void)setDelegate:(id)delegate;	// 0x33ae621d
- (void)setFrame:(CGRect)frame;	// 0x33ae64fd
- (void)setInitialPasscode:(id)passcode;	// 0x33ae622d
- (void)setKeyboardTitle:(id)title;	// 0x33ae68ed
- (void)setString:(id)string;	// 0x33ae6949
- (void)shake;	// 0x33ae62ed
- (id)stringValue;	// 0x33ae6929
- (float)widthOfDigitsFromScreenSize:(CGSize)screenSize;	// 0x33ae61fd
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "UIKeyInput.h"
#import "PSPasscodeFieldDelegate.h"
#import "PSTableCell.h"

@class PSPasscodeField;
@protocol KeychainSyncPasscodeFieldDelegate;

@interface PasscodeFieldCell : PSTableCell <UIKeyInput, PSPasscodeFieldDelegate> {
	PSPasscodeField *_passcodeField;	// 416 = 0x1a0
	id<KeychainSyncPasscodeFieldDelegate> _delegate;	// 420 = 0x1a4
}
@property(assign, nonatomic) int autocapitalizationType;
@property(assign, nonatomic) int autocorrectionType;
@property(assign, nonatomic) id<KeychainSyncPasscodeFieldDelegate> delegate;	// G=0x324a3fd9; S=0x324a3fe9; @synthesize=_delegate
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
@property(assign, nonatomic) int keyboardAppearance;
@property(assign, nonatomic) int keyboardType;	// G=0x324a3ecd; 
@property(retain) id passcodeText;	// G=0x324a3e35; S=0x324a3e15; converted property
@property(assign, nonatomic) int returnKeyType;
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(assign, nonatomic) int spellCheckingType;
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier specifier:(id)specifier;	// 0x324a3cb5
- (void)_setSecureTextEntry:(BOOL)entry;	// 0x324a3dc1
- (void)dealloc;	// 0x324a3d75
// declared property getter: - (id)delegate;	// 0x324a3fd9
- (void)deleteBackward;	// 0x324a3ead
- (BOOL)hasText;	// 0x324a3e55
- (void)insertText:(id)text;	// 0x324a3e8d
// declared property getter: - (int)keyboardType;	// 0x324a3ecd
- (void)layoutSubviews;	// 0x324a3ed1
- (void)passcodeField:(id)field enteredPasscode:(id)passcode;	// 0x324a3de1
// converted property getter: - (id)passcodeText;	// 0x324a3e35
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x324a3fe9
// converted property setter: - (void)setPasscodeText:(id)text;	// 0x324a3e15
@end

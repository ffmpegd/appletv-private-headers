/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIView.h> // Unknown library
#import "SpringBoardUI-Structs.h"

@class NSString, UIPasscodeField, UITextInputTraits, UIImageView;

@interface SBDeviceLockEntryField : UIView {
	int _style;	// 84 = 0x54
	int _interfaceOrientation;	// 88 = 0x58
	UIPasscodeField *_passcodeField;	// 92 = 0x5c
	UITextInputTraits *_textInputTraits;	// 96 = 0x60
	CFCharacterSetRef _numericTrimmingSet;	// 100 = 0x64
	UIImageView *_shadowView;	// 104 = 0x68
	BOOL _highlighted;	// 108 = 0x6c
	id _delegate;	// 112 = 0x70
}
@property(assign, nonatomic) id delegate;	// G=0x37088a05; S=0x37088a15; @synthesize=_delegate
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x37088609; S=0x37088619; 
@property(assign, nonatomic) int interfaceOrientation;	// G=0x370889f5; S=0x37088299; @synthesize=_interfaceOrientation
@property(assign, nonatomic, getter=isOkayButtonEnabled) BOOL okayButtonEnabled;	// G=0x37088365; S=0x3708838d; 
@property(readonly, retain) UIPasscodeField *passcodeField;	// G=0x37087ba1; converted property
@property(copy, nonatomic) NSString *stringValue;	// G=0x3708833d; S=0x37088311; 
@property(readonly, retain) UITextInputTraits *textInputTraits;	// G=0x37088431; converted property
+ (id)topShadowImage;	// 0x37087429
- (id)initWithStyle:(int)style interfaceOrientation:(int)orientation;	// 0x37087451
- (id)_backgroundImage;	// 0x37087ccd
- (CGSize)_fieldSizeForCurrentDevice;	// 0x37087bb1
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x3708875d
- (void)_layoutForCurrentDevice;	// 0x37087e89
- (void)appendString:(id)string;	// 0x370883b9
- (BOOL)becomeFirstResponder;	// 0x37087a7d
- (BOOL)canBecomeFirstResponder;	// 0x37087a45
- (void)dealloc;	// 0x370879b9
// declared property getter: - (id)delegate;	// 0x37088a05
- (void)deleteLastCharacter;	// 0x37088409
// declared property getter: - (int)interfaceOrientation;	// 0x370889f5
- (BOOL)isFirstResponder;	// 0x37087ae1
// declared property getter: - (BOOL)isHighlighted;	// 0x37088609
// declared property getter: - (BOOL)isOkayButtonEnabled;	// 0x37088365
- (id)methodSignatureForSelector:(SEL)selector;	// 0x370889a5
// converted property getter: - (id)passcodeField;	// 0x37087ba1
- (BOOL)passcodeField:(id)field shouldInsertText:(id)text;	// 0x370884c5
- (void)passcodeFieldDidAcceptEntry:(id)passcodeField;	// 0x37088519
- (void)passcodeFieldTextDidChange:(id)passcodeFieldText;	// 0x3708847d
- (BOOL)resignFirstResponder;	// 0x37087b41
- (BOOL)respondsToSelector:(SEL)selector;	// 0x37088945
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x37088a15
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x37088619
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x37088299
// declared property setter: - (void)setOkayButtonEnabled:(BOOL)enabled;	// 0x3708838d
// declared property setter: - (void)setStringValue:(id)value;	// 0x37088311
// declared property getter: - (id)stringValue;	// 0x3708833d
// converted property getter: - (id)textInputTraits;	// 0x37088431
@end


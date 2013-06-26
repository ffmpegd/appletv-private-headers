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
@property(assign, nonatomic) id delegate;	// G=0x3547d9c5; S=0x3547d9d5; @synthesize=_delegate
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x3547d5c9; S=0x3547d5d9; 
@property(assign, nonatomic) int interfaceOrientation;	// G=0x3547d9b5; S=0x3547d259; @synthesize=_interfaceOrientation
@property(assign, nonatomic, getter=isOkayButtonEnabled) BOOL okayButtonEnabled;	// G=0x3547d325; S=0x3547d34d; 
@property(readonly, retain) UIPasscodeField *passcodeField;	// G=0x3547cb61; converted property
@property(copy, nonatomic) NSString *stringValue;	// G=0x3547d2fd; S=0x3547d2d1; 
@property(readonly, retain) UITextInputTraits *textInputTraits;	// G=0x3547d3f1; converted property
+ (id)topShadowImage;	// 0x3547c3e9
- (id)initWithStyle:(int)style interfaceOrientation:(int)orientation;	// 0x3547c411
- (id)_backgroundImage;	// 0x3547cc8d
- (CGSize)_fieldSizeForCurrentDevice;	// 0x3547cb71
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x3547d71d
- (void)_layoutForCurrentDevice;	// 0x3547ce49
- (void)appendString:(id)string;	// 0x3547d379
- (BOOL)becomeFirstResponder;	// 0x3547ca3d
- (BOOL)canBecomeFirstResponder;	// 0x3547ca05
- (void)dealloc;	// 0x3547c979
// declared property getter: - (id)delegate;	// 0x3547d9c5
- (void)deleteLastCharacter;	// 0x3547d3c9
// declared property getter: - (int)interfaceOrientation;	// 0x3547d9b5
- (BOOL)isFirstResponder;	// 0x3547caa1
// declared property getter: - (BOOL)isHighlighted;	// 0x3547d5c9
// declared property getter: - (BOOL)isOkayButtonEnabled;	// 0x3547d325
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3547d965
// converted property getter: - (id)passcodeField;	// 0x3547cb61
- (BOOL)passcodeField:(id)field shouldInsertText:(id)text;	// 0x3547d485
- (void)passcodeFieldDidAcceptEntry:(id)passcodeField;	// 0x3547d4d9
- (void)passcodeFieldTextDidChange:(id)passcodeFieldText;	// 0x3547d43d
- (BOOL)resignFirstResponder;	// 0x3547cb01
- (BOOL)respondsToSelector:(SEL)selector;	// 0x3547d905
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3547d9d5
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x3547d5d9
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x3547d259
// declared property setter: - (void)setOkayButtonEnabled:(BOOL)enabled;	// 0x3547d34d
// declared property setter: - (void)setStringValue:(id)value;	// 0x3547d2d1
// declared property getter: - (id)stringValue;	// 0x3547d2fd
// converted property getter: - (id)textInputTraits;	// 0x3547d3f1
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "BRTextField.h"
#import "AppleTV-Structs.h"

@class NSMutableString, NSDictionary, NSTimer, BRMarqueeTextControl;

__attribute__((visibility("hidden")))
@interface BRTextFieldControl : BRControl <BRTextField> {
	id _delegate;	// 80 = 0x50
	id _characterDelegate;	// 84 = 0x54
	BRMarqueeTextControl *_displayString;	// 88 = 0x58
	NSMutableString *_clearString;	// 92 = 0x5c
	NSDictionary *_savedAttributes;	// 96 = 0x60
	BOOL _useSecureText;	// 100 = 0x64
	BOOL _processingDeleteChar;	// 101 = 0x65
	BOOL _showCursor;	// 102 = 0x66
	BOOL _cursorVisible;	// 103 = 0x67
	int _textLengthLimit;	// 104 = 0x68
	NSTimer *_textObscureTimer;	// 108 = 0x6c
	NSTimer *_cursorBlinkTimer;	// 112 = 0x70
}
@property(assign) id characterDelegate;	// G=0x2e7465; S=0x2e7475; converted property
@property(assign) id delegate;	// G=0x2e7445; S=0x2e7455; converted property
@property(assign) BOOL showCursor;	// G=0x2e7485; S=0x2e7495; converted property
@property(retain) id textAttributes;	// G=0x2e75d9; S=0x2e75e9; converted property
@property(assign) int textLengthLimit;	// G=0x2e75b9; S=0x2e75c9; converted property
@property(assign) BOOL useSecureText;	// G=0x2e7571; S=0x2e7581; converted property
- (id)init;	// 0x2e7245
- (void)_blinkCursorTimerFired:(id)fired;	// 0x2e822d
- (id)_secureTextFromClearText;	// 0x2e7fb5
- (void)_secureTextObscureTimerFired:(id)fired;	// 0x2e8195
- (void)_startSecureTextObscureTimer;	// 0x2e80c5
- (void)_stopBlinkCursorTimer;	// 0x2e81f9
- (void)_stopSecureTextObscureTimer;	// 0x2e8165
- (id)accessibilityTraitsList;	// 0x2e78d9
- (id)accessibilityValue;	// 0x2e78b9
- (BOOL)brKeyEvent:(id)event;	// 0x2e79d9
// converted property getter: - (id)characterDelegate;	// 0x2e7465
- (void)controlWasDeactivated;	// 0x2e7405
- (void)dealloc;	// 0x2e737d
// converted property getter: - (id)delegate;	// 0x2e7445
- (float)maxScrollPosition;	// 0x2e7879
- (BOOL)needsScrollingInBounds:(CGRect)bounds;	// 0x2e7849
// converted property setter: - (void)setCharacterDelegate:(id)delegate;	// 0x2e7475
- (void)setClearString:(id)string;	// 0x2e7721
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x2e7455
- (void)setDisplayString:(id)string;	// 0x2e766d
- (void)setScrollPosition:(float)position;	// 0x2e7899
// converted property setter: - (void)setShowCursor:(BOOL)cursor;	// 0x2e7495
- (void)setString:(id)string;	// 0x2e7975
// converted property setter: - (void)setTextAttributes:(id)attributes;	// 0x2e75e9
// converted property setter: - (void)setTextLengthLimit:(int)limit;	// 0x2e75c9
// converted property setter: - (void)setUseSecureText:(BOOL)text;	// 0x2e7581
// converted property getter: - (BOOL)showCursor;	// 0x2e7485
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2e7779
- (id)stringValue;	// 0x2e793d
// converted property getter: - (id)textAttributes;	// 0x2e75d9
// converted property getter: - (int)textLengthLimit;	// 0x2e75b9
// converted property getter: - (BOOL)useSecureText;	// 0x2e7571
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRTextField.h"
#import "BRControl.h"

@class NSString, NSTimer, NSDictionary, BRMarqueeTextControl, NSMutableString;

__attribute__((visibility("hidden")))
@interface BRTextFieldControl : BRControl <BRTextField> {
	id _delegate;	// 84 = 0x54
	id _characterDelegate;	// 88 = 0x58
	BRMarqueeTextControl *_displayString;	// 92 = 0x5c
	NSMutableString *_clearString;	// 96 = 0x60
	NSDictionary *_savedAttributes;	// 100 = 0x64
	BOOL _useSecureText;	// 104 = 0x68
	BOOL _processingDeleteChar;	// 105 = 0x69
	BOOL _showCursor;	// 106 = 0x6a
	int _textLengthLimit;	// 108 = 0x6c
	NSTimer *_textObscureTimer;	// 112 = 0x70
	BOOL _drawCursorSymbolNow;	// 116 = 0x74
	NSString *_displayStringToSet;	// 120 = 0x78
	NSTimer *__enhancedCursorBlinkTimer;	// 124 = 0x7c
}
@property(assign, nonatomic, setter=_setEnhancedCursorBlinkTimer:) NSTimer *_enhancedCursorBlinkTimer;	// G=0x322bad; S=0x322aa1; @synthesize=__enhancedCursorBlinkTimer
@property(assign) id characterDelegate;	// G=0x321f45; S=0x321f55; converted property
@property(assign) id delegate;	// G=0x321f25; S=0x321f35; converted property
@property(retain, nonatomic) NSString *displayStringToSet;	// G=0x322b8d; S=0x322b9d; @synthesize=_displayStringToSet
@property(assign, nonatomic) BOOL drawCursorSymbolNow;	// G=0x322b6d; S=0x322b7d; @synthesize=_drawCursorSymbolNow
@property(assign) BOOL showCursor;	// G=0x321f65; S=0x321f75; converted property
@property(retain) id textAttributes;	// G=0x322091; S=0x3220a1; converted property
@property(assign) int textLengthLimit;	// G=0x322071; S=0x322081; converted property
@property(assign) BOOL useSecureText;	// G=0x322029; S=0x322039; converted property
- (id)init;	// 0x321a4d
- (void)_enhancedBlinkCursorTimerFired:(id)fired;	// 0x322e01
// declared property getter: - (id)_enhancedCursorBlinkTimer;	// 0x322bad
- (id)_secureTextFromClearText;	// 0x322bbd
- (void)_secureTextObscureTimerFired:(id)fired;	// 0x322d9d
// declared property setter: - (void)_setEnhancedCursorBlinkTimer:(id)timer;	// 0x322aa1
- (void)_startSecureTextObscureTimer;	// 0x322ccd
- (void)_stopSecureTextObscureTimer;	// 0x322d6d
- (id)accessibilityTraitsList;	// 0x322365
- (id)accessibilityValue;	// 0x322345
- (BOOL)brKeyEvent:(id)event;	// 0x322465
// converted property getter: - (id)characterDelegate;	// 0x321f45
- (void)controlWasDeactivated;	// 0x321ee1
- (void)dealloc;	// 0x321b85
// converted property getter: - (id)delegate;	// 0x321f25
- (id)description;	// 0x322ae5
// declared property getter: - (id)displayStringToSet;	// 0x322b8d
// declared property getter: - (BOOL)drawCursorSymbolNow;	// 0x322b6d
- (void)drawRect:(CGRect)rect;	// 0x321c35
- (float)maxScrollPosition;	// 0x322305
- (BOOL)needsScrollingInBounds:(CGRect)bounds;	// 0x3222d5
// converted property setter: - (void)setCharacterDelegate:(id)delegate;	// 0x321f55
- (void)setClearString:(id)string;	// 0x322175
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x321f35
- (void)setDisplayString:(id)string;	// 0x322125
// declared property setter: - (void)setDisplayStringToSet:(id)set;	// 0x322b9d
// declared property setter: - (void)setDrawCursorSymbolNow:(BOOL)now;	// 0x322b7d
- (void)setScrollPosition:(float)position;	// 0x322325
// converted property setter: - (void)setShowCursor:(BOOL)cursor;	// 0x321f75
- (void)setString:(id)string;	// 0x322401
// converted property setter: - (void)setTextAttributes:(id)attributes;	// 0x3220a1
// converted property setter: - (void)setTextLengthLimit:(int)limit;	// 0x322081
// converted property setter: - (void)setUseSecureText:(BOOL)text;	// 0x322039
// converted property getter: - (BOOL)showCursor;	// 0x321f65
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3221cd
- (id)stringValue;	// 0x3223c9
// converted property getter: - (id)textAttributes;	// 0x322091
// converted property getter: - (int)textLengthLimit;	// 0x322071
// converted property getter: - (BOOL)useSecureText;	// 0x322029
@end

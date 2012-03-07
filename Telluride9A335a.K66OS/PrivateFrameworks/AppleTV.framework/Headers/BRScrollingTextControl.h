/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSAttributedString, BRScrollingTextBoxControl, NSString, BRHeaderControl, BRPanelControl;

@interface BRScrollingTextControl : BRControl {
@private
	BRHeaderControl *_header;	// 48 = 0x30
	BRScrollingTextBoxControl *_textBox;	// 52 = 0x34
	BRPanelControl *_buttonGrid;	// 56 = 0x38
	NSAttributedString *_attributedString;	// 60 = 0x3c
	long _selectedIndex;	// 64 = 0x40
	NSString *_dialogIdentifier;	// 68 = 0x44
}
@property(retain) NSAttributedString *attributedString;	// G=0x3421299d; S=0x34212961; converted property
+ (id)controlWithTitle:(id)title documentPath:(id)path firstButton:(id)button secondButton:(id)button4 thirdButton:(id)button5 defaultFocus:(int)focus;	// 0x34212569
+ (id)controlWithTitle:(id)title text:(id)text firstButton:(id)button secondButton:(id)button4 thirdButton:(id)button5 defaultFocus:(int)focus;	// 0x34212491
+ (int)postControlAsDialogWithTitle:(id)title text:(id)text;	// 0x34212275
+ (int)postControlAsDialogWithTitle:(id)title text:(id)text firstButton:(id)button secondButton:(id)button4 thirdButton:(id)button5 defaultFocus:(int)focus;	// 0x342122d5
- (id)init;	// 0x34212641
- (id)_dialogIdentifier;	// 0x34213031
- (id)_paragraphTextAttributes;	// 0x34213041
- (long)_selectedIndex;	// 0x34212fe1
- (void)_setDialogIdentifier:(id)identifier;	// 0x34212ff1
- (void)_setSelectedIndexWithControl:(id)control;	// 0x34212f99
- (id)accessibilityLabel;	// 0x34212f59
- (id)accessibilityScreenContent;	// 0x34212f79
- (void)addButtonWithTitle:(id)title isDefaultFocus:(BOOL)focus;	// 0x34212ab9
// converted property getter: - (id)attributedString;	// 0x3421299d
- (BOOL)brEventAction:(id)action;	// 0x34212b91
- (void)dealloc;	// 0x34212811
- (BOOL)isAccessibilityElement;	// 0x34212f55
- (void)layoutSubcontrols;	// 0x34212c8d
// converted property setter: - (void)setAttributedString:(id)string;	// 0x34212961
- (void)setDocumentPath:(id)path;	// 0x342129ad
- (void)setDocumentPath:(id)path encoding:(unsigned)encoding;	// 0x342129c1
- (void)setSelectionHandler:(id)handler;	// 0x34212c29
- (void)setText:(id)text;	// 0x342128d5
- (void)setTitle:(id)title;	// 0x34212899
@end


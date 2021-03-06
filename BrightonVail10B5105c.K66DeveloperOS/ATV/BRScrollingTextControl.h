/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRHeaderControl, BRPanelControl, NSAttributedString, BRScrollingTextBoxControl, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface BRScrollingTextControl : BRControl {
	BRHeaderControl *_header;	// 84 = 0x54
	BRScrollingTextBoxControl *_textBox;	// 88 = 0x58
	BRPanelControl *_buttonGrid;	// 92 = 0x5c
	NSAttributedString *_attributedString;	// 96 = 0x60
	long _selectedIndex;	// 100 = 0x64
	NSString *_dialogIdentifier;	// 104 = 0x68
}
@property(retain) NSAttributedString *attributedString;	// G=0x2fee09; S=0x2fedcd; converted property
@property(readonly, assign, nonatomic) NSArray *buttons;	// G=0x2fef25; @dynamic
+ (id)controlWithTitle:(id)title documentPath:(id)path firstButton:(id)button secondButton:(id)button4 thirdButton:(id)button5 defaultFocus:(int)focus;	// 0x2fe975
+ (id)controlWithTitle:(id)title text:(id)text firstButton:(id)button secondButton:(id)button4 thirdButton:(id)button5 defaultFocus:(int)focus;	// 0x2fe889
+ (int)postControlAsDialogWithTitle:(id)title text:(id)text;	// 0x2fe645
+ (int)postControlAsDialogWithTitle:(id)title text:(id)text firstButton:(id)button secondButton:(id)button4 thirdButton:(id)button5 defaultFocus:(int)focus modalIdentifier:(id)identifier;	// 0x2fe6a9
- (id)init;	// 0x2fea61
- (id)_dialogIdentifier;	// 0x2ff4dd
- (id)_paragraphTextAttributes;	// 0x2ff4ed
- (long)_selectedIndex;	// 0x2ff491
- (void)_setDialogIdentifier:(id)identifier;	// 0x2ff4a1
- (void)_setSelectedIndexWithControl:(id)control;	// 0x2ff449
- (id)accessibilityLabel;	// 0x2ff409
- (id)accessibilityScreenContent;	// 0x2ff429
- (void)addButtonWithTitle:(id)title isDefaultFocus:(BOOL)focus;	// 0x2fef45
// converted property getter: - (id)attributedString;	// 0x2fee09
- (BOOL)brEventAction:(id)action;	// 0x2ff019
// declared property getter: - (id)buttons;	// 0x2fef25
- (void)dealloc;	// 0x2fec1d
- (BOOL)isAccessibilityElement;	// 0x2ff405
- (void)layoutSubcontrols;	// 0x2ff119
// converted property setter: - (void)setAttributedString:(id)string;	// 0x2fedcd
- (void)setDocumentPath:(id)path;	// 0x2fee19
- (void)setDocumentPath:(id)path encoding:(unsigned)encoding;	// 0x2fee2d
- (void)setSelectionHandler:(id)handler;	// 0x2ff0b1
- (void)setText:(id)text;	// 0x2fed45
- (void)setTitle:(id)title;	// 0x2feca9
@end


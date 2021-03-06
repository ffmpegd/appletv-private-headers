/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PINView.h"
#import "Preferences-Structs.h"
#import "UITableViewDataSource.h"

@class UITableViewCell, UITableView, UITextField;

@interface AlphanumericPINView : PINView <UITableViewDataSource> {
	UITextField *_passcodeField;	// 108 = 0x6c
	UITableViewCell *_cell;	// 112 = 0x70
	UITableView *_table;	// 116 = 0x74
}
@property(retain) id stringValue;	// G=0x32f1d489; S=0x32f1d6e5; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x32f1cd7d
- (void)appendString:(id)string;	// 0x32f1d72d
- (BOOL)becomeFirstResponder;	// 0x32f1d69d
- (BOOL)canBecomeFirstResponder;	// 0x32f1d679
- (void)dealloc;	// 0x32f1d3e5
- (void)deleteLastCharacter;	// 0x32f1d815
- (void)hidePasscodeField:(BOOL)field;	// 0x32f1d545
- (BOOL)isFirstResponder;	// 0x32f1d655
- (BOOL)keyboardInputChanged:(id)changed;	// 0x32f1d349
- (void)layoutSubviews;	// 0x32f1d0bd
- (void)okButtonPressed:(id)pressed;	// 0x32f1d4a9
- (BOOL)resignFirstResponder;	// 0x32f1d6c1
- (void)setBlocked:(BOOL)blocked;	// 0x32f1d30d
// converted property setter: - (void)setStringValue:(id)value;	// 0x32f1d6e5
- (void)showError:(id)error animate:(BOOL)animate;	// 0x32f1d3b5
// converted property getter: - (id)stringValue;	// 0x32f1d489
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x32f1d2fd
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x32f1d2f9
- (BOOL)textFieldShouldReturn:(id)textField;	// 0x32f1d89d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "UITextViewDelegate.h"
#import "PSTableCell.h"

@class PSTextView;

@interface PSTextViewTableCell : PSTableCell <UITextViewDelegate> {
	PSTextView *_textView;	// 364 = 0x16c
}
@property(retain, nonatomic) PSTextView *textView;	// G=0x32f2b0f5; S=0x32f2b105; 
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier specifier:(id)specifier;	// 0x32f2aa49
- (void)_adjustTextView:(id)view updateTable:(BOOL)table withSpecifier:(id)specifier;	// 0x32f2adb9
- (BOOL)becomeFirstResponder;	// 0x32f2b089
- (BOOL)canBecomeFirstResponder;	// 0x32f2b0ad
- (void)cellRemovedFromView;	// 0x32f2accd
- (void)dealloc;	// 0x32f2ac25
- (void)drawTitleInRect:(CGRect)rect selected:(BOOL)selected;	// 0x32f2b1a9
- (void)layoutSubviews;	// 0x32f2ad4d
- (BOOL)resignFirstResponder;	// 0x32f2b0d1
// declared property setter: - (void)setTextView:(id)view;	// 0x32f2b105
- (void)setValue:(id)value;	// 0x32f2ac71
// declared property getter: - (id)textView;	// 0x32f2b0f5
- (void)textViewDidChange:(id)textView;	// 0x32f2acbd
- (void)textViewDidEndEditing:(id)textView;	// 0x32f2aff5
- (UIEdgeInsets)textViewInsets;	// 0x32f2b199
@end


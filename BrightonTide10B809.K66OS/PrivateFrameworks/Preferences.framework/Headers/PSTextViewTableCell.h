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
@property(retain, nonatomic) PSTextView *textView;	// G=0x353050b5; S=0x353050c5; 
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier specifier:(id)specifier;	// 0x35304a09
- (void)_adjustTextView:(id)view updateTable:(BOOL)table withSpecifier:(id)specifier;	// 0x35304d79
- (BOOL)becomeFirstResponder;	// 0x35305049
- (BOOL)canBecomeFirstResponder;	// 0x3530506d
- (void)cellRemovedFromView;	// 0x35304c8d
- (void)dealloc;	// 0x35304be5
- (void)drawTitleInRect:(CGRect)rect selected:(BOOL)selected;	// 0x35305169
- (void)layoutSubviews;	// 0x35304d0d
- (BOOL)resignFirstResponder;	// 0x35305091
// declared property setter: - (void)setTextView:(id)view;	// 0x353050c5
- (void)setValue:(id)value;	// 0x35304c31
// declared property getter: - (id)textView;	// 0x353050b5
- (void)textViewDidChange:(id)textView;	// 0x35304c7d
- (void)textViewDidEndEditing:(id)textView;	// 0x35304fb5
- (UIEdgeInsets)textViewInsets;	// 0x35305159
@end

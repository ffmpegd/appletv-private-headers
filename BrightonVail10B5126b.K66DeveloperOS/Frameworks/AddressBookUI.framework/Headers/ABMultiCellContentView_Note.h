/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABMultiCellContentView.h"
#import "ABSwellTextViewDelegate.h"

@class ABSwellTextView;

@interface ABMultiCellContentView_Note : ABMultiCellContentView <ABSwellTextViewDelegate> {
	ABSwellTextView *_textView;	// 180 = 0xb4
}
+ (id)labelTextForPropertyGroup:(id)propertyGroup info:(id)info styleProvider:(id)provider;	// 0x309543cd
+ (CGSize)layoutSubviewsForView:(id)view usingSize:(CGSize)size propertyGroup:(id)group info:(id)info styleProvider:(id)provider whenEditing:(BOOL)editing;	// 0x309543e1
+ (void)setupTextView:(id)view withStyleProvider:(id)styleProvider whenEditing:(BOOL)editing;	// 0x30954175
+ (id)swellTextViewForReuse;	// 0x30954119
- (BOOL)canBeginEditingAnytime;	// 0x30955015
- (void)dealloc;	// 0x30954995
- (CGRect)focusRectForView:(id)view;	// 0x30954ea5
- (CGRect)frameForLabel;	// 0x309541f9
- (void)reload;	// 0x309549e5
- (void)reloadFromModel;	// 0x30954cf1
- (void)setAbCellStyle:(int)style;	// 0x3095511d
- (void)setLabelText:(id)text;	// 0x30954c85
- (BOOL)shouldUseTwoLineLabels;	// 0x309541d1
- (void)swellTextView:(id)view didChangeSize:(CGSize)size;	// 0x309550a5
- (void)swellTextViewDidBeginEditing:(id)swellTextView;	// 0x30955095
- (void)swellTextViewDidEndEditing:(id)swellTextView;	// 0x30955085
- (BOOL)swellTextViewShouldBeginEditing:(id)swellTextView;	// 0x30955055
- (BOOL)swellTextViewShouldEndEditing:(id)swellTextView;	// 0x3095506d
- (void)swellTextViewTextDidChange:(id)swellTextViewText;	// 0x30955019
- (BOOL)tabToNextResponder:(BOOL)nextResponder fromView:(id)view;	// 0x30954fc1
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30954c25
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30954c55
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30954bd9
- (void)updateSubviewsForNewStateAnimated:(BOOL)newStateAnimated;	// 0x30954db1
- (id)viewForFirstResponder;	// 0x30955005
@end

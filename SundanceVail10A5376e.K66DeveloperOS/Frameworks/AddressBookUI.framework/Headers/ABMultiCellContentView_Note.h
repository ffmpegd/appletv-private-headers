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
+ (id)labelTextForPropertyGroup:(id)propertyGroup info:(id)info styleProvider:(id)provider;	// 0x31007455
+ (CGSize)layoutSubviewsForView:(id)view usingSize:(CGSize)size propertyGroup:(id)group info:(id)info styleProvider:(id)provider whenEditing:(BOOL)editing;	// 0x31007469
+ (void)setupTextView:(id)view withStyleProvider:(id)styleProvider whenEditing:(BOOL)editing;	// 0x310071fd
+ (id)swellTextViewForReuse;	// 0x310071a1
- (BOOL)canBeginEditingAnytime;	// 0x3100809d
- (void)dealloc;	// 0x31007a1d
- (CGRect)focusRectForView:(id)view;	// 0x31007f2d
- (CGRect)frameForLabel;	// 0x31007281
- (void)reload;	// 0x31007a6d
- (void)reloadFromModel;	// 0x31007d79
- (void)setAbCellStyle:(int)style;	// 0x310081a5
- (void)setLabelText:(id)text;	// 0x31007d0d
- (BOOL)shouldUseTwoLineLabels;	// 0x31007259
- (void)swellTextView:(id)view didChangeSize:(CGSize)size;	// 0x3100812d
- (void)swellTextViewDidBeginEditing:(id)swellTextView;	// 0x3100811d
- (void)swellTextViewDidEndEditing:(id)swellTextView;	// 0x3100810d
- (BOOL)swellTextViewShouldBeginEditing:(id)swellTextView;	// 0x310080dd
- (BOOL)swellTextViewShouldEndEditing:(id)swellTextView;	// 0x310080f5
- (void)swellTextViewTextDidChange:(id)swellTextViewText;	// 0x310080a1
- (BOOL)tabToNextResponder:(BOOL)nextResponder fromView:(id)view;	// 0x31008049
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x31007cad
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x31007cdd
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x31007c61
- (void)updateSubviewsForNewStateAnimated:(BOOL)newStateAnimated;	// 0x31007e39
- (id)viewForFirstResponder;	// 0x3100808d
@end


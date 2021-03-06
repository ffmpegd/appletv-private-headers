/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPickerView.h"
#import "UIWebFormControl.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class DOMHTMLSelectElement, NSArray;
@protocol UIWebSelectedItemPrivate;

__attribute__((visibility("hidden")))
@interface UIWebSelectPicker : UIPickerView <UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate> {
@private
	DOMHTMLSelectElement *_selectionNode;	// 84 = 0x54
	NSArray *_cachedItems;	// 88 = 0x58
	id<UIWebSelectedItemPrivate> _singleSelectionItem;	// 92 = 0x5c
	unsigned _singleSelectionIndex;	// 96 = 0x60
	float _fontSize;	// 100 = 0x64
	float _maximumTextWidth;	// 104 = 0x68
	int _textAlignment;	// 108 = 0x6c
	float _layoutWidth;	// 112 = 0x70
}
@property(retain, nonatomic) NSArray *_cachedItems;	// G=0x30235bc1; S=0x30235bd1; @synthesize
@property(retain, nonatomic) DOMHTMLSelectElement *_selectionNode;	// G=0x30235b8d; S=0x30235b9d; @synthesize
@property(retain, nonatomic) id<UIWebSelectedItemPrivate> _singleSelectionItem;	// G=0x30235bf5; S=0x30235c05; @synthesize
- (id)initWithDOMHTMLSelectElement:(id)domhtmlselectElement cachedItems:(id)items singleSelectionItem:(id)item singleSelectionIndex:(unsigned)index multipleSelection:(BOOL)selection;	// 0x30235335
// declared property getter: - (id)_cachedItems;	// 0x30235bc1
// declared property getter: - (id)_selectionNode;	// 0x30235b8d
// declared property getter: - (id)_singleSelectionItem;	// 0x30235bf5
- (void)controlBeginEditing;	// 0x302355b9
- (id)controlView;	// 0x302355b5
- (void)dealloc;	// 0x30235521
- (void)layoutSubviews;	// 0x302355bd
- (int)numberOfComponentsInPickerView:(id)pickerView;	// 0x30235a99
- (int)pickerView:(id)view numberOfRowsInComponent:(int)component;	// 0x30235a9d
- (void)pickerView:(id)view row:(int)row column:(int)column checked:(BOOL)checked;	// 0x30235abd
- (id)pickerView:(id)view viewForRow:(int)row forComponent:(int)component reusingView:(id)view4;	// 0x302356ed
// declared property setter: - (void)set_cachedItems:(id)items;	// 0x30235bd1
// declared property setter: - (void)set_selectionNode:(id)node;	// 0x30235b9d
// declared property setter: - (void)set_singleSelectionItem:(id)item;	// 0x30235c05
@end


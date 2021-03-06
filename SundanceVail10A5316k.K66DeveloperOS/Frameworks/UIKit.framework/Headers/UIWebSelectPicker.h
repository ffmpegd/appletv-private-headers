/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"
#import "UIKit-Structs.h"
#import "UIPickerView.h"
#import "UIWebFormControl.h"

@class NSArray, DOMHTMLSelectElement;
@protocol UIWebSelectedItemPrivate;

__attribute__((visibility("hidden")))
@interface UIWebSelectPicker : UIPickerView <UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate> {
@private
	DOMHTMLSelectElement *_selectionNode;	// 120 = 0x78
	NSArray *_cachedItems;	// 124 = 0x7c
	id<UIWebSelectedItemPrivate> _singleSelectionItem;	// 128 = 0x80
	unsigned _singleSelectionIndex;	// 132 = 0x84
	float _fontSize;	// 136 = 0x88
	float _maximumTextWidth;	// 140 = 0x8c
	int _textAlignment;	// 144 = 0x90
	float _layoutWidth;	// 148 = 0x94
}
@property(retain, nonatomic) NSArray *_cachedItems;	// G=0x30297205; S=0x30297215; @synthesize
@property(retain, nonatomic) DOMHTMLSelectElement *_selectionNode;	// G=0x302971e5; S=0x302971f5; @synthesize
@property(retain, nonatomic) id<UIWebSelectedItemPrivate> _singleSelectionItem;	// G=0x30297225; S=0x30297235; @synthesize
- (id)initWithDOMHTMLSelectElement:(id)domhtmlselectElement cachedItems:(id)items singleSelectionItem:(id)item singleSelectionIndex:(unsigned)index multipleSelection:(BOOL)selection;	// 0x30296895
// declared property getter: - (id)_cachedItems;	// 0x30297205
- (int)_itemIndexForRowIndex:(int)rowIndex;	// 0x30297031
// declared property getter: - (id)_selectionNode;	// 0x302971e5
// declared property getter: - (id)_singleSelectionItem;	// 0x30297225
- (void)controlBeginEditing;	// 0x30296b0d
- (id)controlView;	// 0x30296b09
- (void)dealloc;	// 0x30296a75
- (void)layoutSubviews;	// 0x30296b11
- (int)numberOfComponentsInPickerView:(id)pickerView;	// 0x3029700d
- (int)pickerView:(id)view numberOfRowsInComponent:(int)component;	// 0x30297011
- (void)pickerView:(id)view row:(int)row column:(int)column checked:(BOOL)checked;	// 0x302970a1
- (id)pickerView:(id)view viewForRow:(int)row forComponent:(int)component reusingView:(id)view4;	// 0x30296c3d
// declared property setter: - (void)set_cachedItems:(id)items;	// 0x30297215
// declared property setter: - (void)set_selectionNode:(id)node;	// 0x302971f5
// declared property setter: - (void)set_singleSelectionItem:(id)item;	// 0x30297235
@end


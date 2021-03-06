/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import <UIViewController.h> // Unknown library

@class UIDatePicker;
@protocol ABDatePickerViewControllerDismissDelegate;

@interface ABDatePickerViewController : UIViewController {
	void *_context;	// 184 = 0xb8
	UIDatePicker *_datePicker;	// 188 = 0xbc
	id<ABDatePickerViewControllerDismissDelegate> _dismissDelegate;	// 192 = 0xc0
}
@property(assign, nonatomic) void *context;	// G=0x370c227d; S=0x370c228d; @synthesize=_context
@property(retain, nonatomic) UIDatePicker *datePicker;	// G=0x370c229d; S=0x370c22ad; @synthesize=_datePicker
@property(assign, nonatomic) id<ABDatePickerViewControllerDismissDelegate> dismissDelegate;	// G=0x370c22bd; S=0x370c22cd; @synthesize=_dismissDelegate
+ (CGSize)datePickerSize;	// 0x370c2101
- (float)ab_heightToFitForViewInPopoverView;	// 0x370c2161
// declared property getter: - (void *)context;	// 0x370c227d
// declared property getter: - (id)datePicker;	// 0x370c229d
- (void)dealloc;	// 0x370c2115
// declared property getter: - (id)dismissDelegate;	// 0x370c22bd
- (void)loadView;	// 0x370c223d
// declared property setter: - (void)setContext:(void *)context;	// 0x370c228d
// declared property setter: - (void)setDatePicker:(id)picker;	// 0x370c22ad
// declared property setter: - (void)setDismissDelegate:(id)delegate;	// 0x370c22cd
- (void)viewDidLoad;	// 0x370c21a1
- (void)viewWillDisappear:(BOOL)view;	// 0x370c225d
@end


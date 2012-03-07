/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIViewController.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class UITableView, UIPrintRangePickerView, UIPrintPanelViewController, UILabel;

__attribute__((visibility("hidden")))
@interface UIPrintRangeViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate, UITableViewDataSource, UITableViewDelegate> {
@private
	UIPrintPanelViewController *_printPanelViewController;	// 156 = 0x9c
	int _pageCount;	// 160 = 0xa0
	NSRange _pageRange;	// 164 = 0xa4
	UIPrintRangePickerView *_fromPicker;	// 172 = 0xac
	UIPrintRangePickerView *_toPicker;	// 176 = 0xb0
	UILabel *_toLabel;	// 180 = 0xb4
	UITableView *_tableView;	// 184 = 0xb8
	float _pickerWidth;	// 188 = 0xbc
}
- (id)initWithPrintPanelViewController:(id)printPanelViewController;	// 0x33ce2bf1
- (void)dealloc;	// 0x33ce2d31
- (void)loadView;	// 0x33ce2da5
- (int)numberOfComponentsInPickerView:(id)pickerView;	// 0x33ce37f9
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x33ce3421
- (void)pickerView:(id)view didSelectRow:(int)row inComponent:(int)component;	// 0x33ce3aa1
- (int)pickerView:(id)view numberOfRowsInComponent:(int)component;	// 0x33ce37fd
- (float)pickerView:(id)view rowHeightForComponent:(int)component;	// 0x33ce3935
- (id)pickerView:(id)view viewForRow:(int)row forComponent:(int)component reusingView:(id)view4;	// 0x33ce393d
- (float)pickerView:(id)view widthForComponent:(int)component;	// 0x33ce380d
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x33ce33fd
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x33ce3429
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x33ce3721
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x33ce3425
- (void)viewDidDisappear:(BOOL)view;	// 0x33ce3395
- (void)viewWillAppear:(BOOL)view;	// 0x33ce32dd
@end


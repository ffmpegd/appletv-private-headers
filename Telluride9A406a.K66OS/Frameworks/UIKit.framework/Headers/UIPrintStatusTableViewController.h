/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewController.h"

@class UIButton, PKJob, NSDateFormatter;

__attribute__((visibility("hidden")))
@interface UIPrintStatusTableViewController : UITableViewController {
@private
	PKJob *_printJob;	// 172 = 0xac
	UIButton *_cancelButton;	// 176 = 0xb0
	NSDateFormatter *_sentFormatter;	// 180 = 0xb4
}
- (id)initWithJob:(id)job;	// 0x359d5911
- (void)cancelPrinting;	// 0x359d5e89
- (void)dealloc;	// 0x359d59e5
- (void)loadView;	// 0x359d5ccd
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x359d6155
- (void)popToJobsView;	// 0x359d5e3d
- (void)setupCancelButton;	// 0x359d5af9
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x359d5a89
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x359d623d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x359d6159
- (void)updateCancelButton;	// 0x359d5dd9
- (void)updateJobInfo;	// 0x359d60b1
- (void)viewWillAppear:(BOOL)view;	// 0x359d5f49
- (void)viewWillDisappear:(BOOL)view;	// 0x359d6011
@end


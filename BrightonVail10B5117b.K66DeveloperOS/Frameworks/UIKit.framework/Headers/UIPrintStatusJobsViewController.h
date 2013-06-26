/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewController.h"

@class NSArray, UIPrintingMessageView;

__attribute__((visibility("hidden")))
@interface UIPrintStatusJobsViewController : UITableViewController {
	NSArray *_jobs;	// 212 = 0xd4
	BOOL _autoPush;	// 216 = 0xd8
	UIPrintingMessageView *_noJobsView;	// 220 = 0xdc
}
- (id)init;	// 0x33004239
- (CGSize)contentSizeForViewInPopover;	// 0x330043b1
- (void)dealloc;	// 0x330042ad
- (void)handleJobListDidChange;	// 0x33004e01
- (void)loadView;	// 0x3300433d
- (void)pushJob:(id)job animated:(BOOL)animated;	// 0x330043c5
- (void)pushSingleJobAnimated:(BOOL)animated;	// 0x33004491
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x330050f9
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x33005181
- (void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;	// 0x330052b1
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x3300525d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x33005161
- (void)updateForJobCountChange;	// 0x330044d5
- (void)updateJobInfo:(id)info;	// 0x33004909
- (void)updateTableViewCell:(id)cell withJob:(id)job;	// 0x33004755
- (void)viewWillAppear:(BOOL)view;	// 0x33004f8d
- (void)viewWillDisappear:(BOOL)view;	// 0x33005089
- (id)visibleJobs;	// 0x3300463d
- (void)willReappear;	// 0x33004f25
@end

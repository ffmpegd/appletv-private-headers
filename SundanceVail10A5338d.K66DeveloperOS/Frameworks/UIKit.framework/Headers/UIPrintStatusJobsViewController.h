/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITableViewController.h"
#import "UIKit-Structs.h"

@class UIPrintingMessageView, NSArray;

__attribute__((visibility("hidden")))
@interface UIPrintStatusJobsViewController : UITableViewController {
	NSArray *_jobs;	// 200 = 0xc8
	BOOL _autoPush;	// 204 = 0xcc
	UIPrintingMessageView *_noJobsView;	// 208 = 0xd0
}
- (id)init;	// 0x30f659a1
- (CGSize)contentSizeForViewInPopover;	// 0x30f65b19
- (void)dealloc;	// 0x30f65a15
- (void)handleJobListDidChange;	// 0x30f66569
- (void)loadView;	// 0x30f65aa5
- (void)pushJob:(id)job animated:(BOOL)animated;	// 0x30f65b2d
- (void)pushSingleJobAnimated:(BOOL)animated;	// 0x30f65bf9
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x30f66861
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x30f668e9
- (void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;	// 0x30f66a19
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x30f669c5
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x30f668c9
- (void)updateForJobCountChange;	// 0x30f65c3d
- (void)updateJobInfo:(id)info;	// 0x30f66071
- (void)updateTableViewCell:(id)cell withJob:(id)job;	// 0x30f65ebd
- (void)viewWillAppear:(BOOL)view;	// 0x30f666f5
- (void)viewWillDisappear:(BOOL)view;	// 0x30f667f1
- (id)visibleJobs;	// 0x30f65da5
- (void)willReappear;	// 0x30f6668d
@end


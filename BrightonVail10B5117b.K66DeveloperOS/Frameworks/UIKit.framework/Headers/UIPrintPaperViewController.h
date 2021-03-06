/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewController.h"

@class UIPrintPanelViewController;

__attribute__((visibility("hidden")))
@interface UIPrintPaperViewController : UITableViewController {
	UIPrintPanelViewController *_printPanelViewController;	// 212 = 0xd4
}
- (id)initWithPrintPanelViewController:(id)printPanelViewController;	// 0x3302b899
- (void)adjustPopoverSize;	// 0x3302b97d
- (void)dealloc;	// 0x3302b90d
- (void)loadView;	// 0x3302bb61
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x3302bba1
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x3302b939
- (unsigned)supportedInterfaceOrientations;	// 0x3302b95d
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x3302bbdd
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x3302bde1
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x3302bba5
@end


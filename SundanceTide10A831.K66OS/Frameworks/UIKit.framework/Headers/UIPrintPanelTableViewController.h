/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewController.h"

@class UIPrintPanelViewController, UIButton;

__attribute__((visibility("hidden")))
@interface UIPrintPanelTableViewController : UITableViewController {
	UIPrintPanelViewController *_printPanelViewController;	// 212 = 0xd4
	UIButton *_printButton;	// 216 = 0xd8
	int _rangeRow;	// 220 = 0xdc
	int _copiesRow;	// 224 = 0xe0
	int _duplexRow;	// 228 = 0xe4
	int _paperRow;	// 232 = 0xe8
	BOOL _contactingPrinter;	// 236 = 0xec
}
- (id)initWithPrintPanelViewController:(id)printPanelViewController;	// 0x31f43a45
- (void)_setupPrintButtons;	// 0x31f44e09
- (void)_update:(BOOL)update;	// 0x31f44f8d
- (void)_updateSize;	// 0x31f450b1
- (void)clearPrintPanelViewController;	// 0x31f43ecd
- (void)dealloc;	// 0x31f43acd
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x31f440e1
- (void)setShowContactingPrinter:(BOOL)printer;	// 0x31f43d59
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x31f4409d
- (void)showCancelButton;	// 0x31f43b39
- (void)showContacting;	// 0x31f43bc9
- (unsigned)supportedInterfaceOrientations;	// 0x31f440c1
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x31f441c1
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x31f44d05
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x31f440e5
- (void)updateCopies:(id)copies;	// 0x31f44bed
- (void)updateDuplex:(id)duplex;	// 0x31f44cc9
- (void)updatePageRange:(NSRange)range;	// 0x31f44ba1
- (void)viewDidDisappear:(BOOL)view;	// 0x31f44035
- (void)viewDidLoad;	// 0x31f43ee1
- (void)viewDidUnload;	// 0x31f43f6d
- (void)viewWillAppear:(BOOL)view;	// 0x31f43fbd
@end

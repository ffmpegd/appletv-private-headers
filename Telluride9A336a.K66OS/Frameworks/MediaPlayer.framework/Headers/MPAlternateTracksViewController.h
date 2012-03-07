/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "UITableViewDataSource.h"
#import "MPAbstractAlternateTracksViewController.h"
#import "UITableViewDelegate.h"

@class UITextLabel, UITableView, UIProgressIndicator, UINavigationBar, UIView;

@interface MPAlternateTracksViewController : MPAbstractAlternateTracksViewController <UITableViewDataSource, UITableViewDelegate> {
	UIView *_backgroundView;	// 212 = 0xd4
	UINavigationBar *_navigationBar;	// 216 = 0xd8
	UITableView *_table;	// 220 = 0xdc
	UIProgressIndicator *_progressIndicator;	// 224 = 0xe0
	UITextLabel *_loadingLabel;	// 228 = 0xe4
}
- (void)_cancelButtonAction:(id)action;	// 0x35b58ddd
- (void)_doneButtonAction:(id)action;	// 0x35b58e2d
- (void)_exitAnimated:(BOOL)animated;	// 0x35b59b61
- (void)_setCell:(id)cell isChecked:(BOOL)checked;	// 0x35b59b81
- (void)addLoadingUI;	// 0x35b59615
- (void)dealloc;	// 0x35b582a1
- (void)didChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x35b58391
- (void)loadView;	// 0x35b586a5
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x35b58e5d
- (void)reloadData;	// 0x35b595d1
- (void)removeLoadingUI;	// 0x35b59b11
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x35b58ea9
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x35b59149
- (float)tableView:(id)view heightForHeaderInSection:(int)section;	// 0x35b5926d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x35b59275
- (id)tableView:(id)view viewForHeaderInSection:(int)section;	// 0x35b592a1
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x35b59571
- (void)viewDidUnload;	// 0x35b58d21
- (void)viewWillAppear:(BOOL)view;	// 0x35b58631
- (void)willChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x35b58419
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "UITableViewDelegate.h"
#import "MediaPlayer-Structs.h"
#import "MPAbstractAlternateTracksViewController.h"
#import "UITableViewDataSource.h"

@class UINavigationBar, UITextLabel, UITableView, UIProgressIndicator, UIView;

@interface MPAlternateTracksViewController : MPAbstractAlternateTracksViewController <UITableViewDataSource, UITableViewDelegate> {
	UIView *_backgroundView;	// 252 = 0xfc
	UINavigationBar *_navigationBar;	// 256 = 0x100
	UITableView *_table;	// 260 = 0x104
	UIProgressIndicator *_progressIndicator;	// 264 = 0x108
	UITextLabel *_loadingLabel;	// 268 = 0x10c
}
- (void)_cancelButtonAction:(id)action;	// 0x35cd5719
- (void)_doneButtonAction:(id)action;	// 0x35cd575d
- (void)_exitAnimated:(BOOL)animated;	// 0x35cd6431
- (void)_setCell:(id)cell isChecked:(BOOL)checked;	// 0x35cd6451
- (void)addLoadingUI;	// 0x35cd5f0d
- (void)dealloc;	// 0x35cd4d5d
- (void)didChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x35cd4e45
- (void)loadView;	// 0x35cd5151
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x35cd578d
- (void)reloadData;	// 0x35cd5ec9
- (void)removeLoadingUI;	// 0x35cd63e1
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x35cd57d9
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x35cd5a65
- (float)tableView:(id)view heightForHeaderInSection:(int)section;	// 0x35cd5b89
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x35cd5b91
- (id)tableView:(id)view viewForHeaderInSection:(int)section;	// 0x35cd5bbd
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x35cd5e69
- (void)viewWillAppear:(BOOL)view;	// 0x35cd50dd
- (void)willChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x35cd4ecd
@end

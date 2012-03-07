/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "MPAbstractAlternateTracksViewController.h"

@class UITableView;

@interface MPPadAlternateTracksViewController : MPAbstractAlternateTracksViewController <UITableViewDataSource, UITableViewDelegate> {
@private
	UITableView *_tableView;	// 212 = 0xd4
}
- (id)init;	// 0x35bafe01
- (id)initWithPlayer:(id)player;	// 0x35bafd2d
- (void)dealloc;	// 0x35bafe7d
- (void)loadView;	// 0x35bafef5
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x35bb0055
- (void)reloadData;	// 0x35bb0419
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x35bb00cd
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x35bb02ad
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x35bb00a1
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x35bb021d
- (void)viewDidUnload;	// 0x35baffd5
@end

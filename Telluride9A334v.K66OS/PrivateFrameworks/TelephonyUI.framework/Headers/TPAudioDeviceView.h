/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIView.h> // Unknown library
#import "TelephonyUI-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"

@class UITableView;

@interface TPAudioDeviceView : UIView <UITableViewDelegate, UITableViewDataSource> {
	UITableView *_deviceTableView;	// 48 = 0x30
	UIView *_topBGView;	// 52 = 0x34
	UIView *_bottomBGView;	// 56 = 0x38
	UIView *_buttonView;	// 60 = 0x3c
	UIView *_tableView;	// 64 = 0x40
	UIView *_subbedView;	// 68 = 0x44
	id _delegate;	// 72 = 0x48
	BOOL _subbedOutTable;	// 76 = 0x4c
}
- (id)_activeImage;	// 0x31a6540d
- (CGRect)_frameForNumButtons:(int)numButtons;	// 0x31a65229
- (CGRect)_frameForTable;	// 0x31a65199
- (id)_muteButtonForFrame:(CGRect)frame;	// 0x31a64eb9
- (id)_muteImage;	// 0x31a653b1
- (id)_selectedImage;	// 0x31a654e5
- (void)_setupButtons;	// 0x31a64add
- (void)_setupSurroundingTableViews;	// 0x31a641f5
- (void)_setupTable;	// 0x31a64415
- (id)_tableFooterImage;	// 0x31a652f9
- (id)_tableHeaderImage;	// 0x31a65355
- (void)_takedownButtons;	// 0x31a63a91
- (void)_takedownTable;	// 0x31a63c0d
- (id)_unselectedImage;	// 0x31a65469
- (void)buttonPressed:(id)pressed;	// 0x31a63ad1
- (void)dealloc;	// 0x31a64119
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x31a65561
- (void)muteButtonPressed:(id)pressed;	// 0x31a63b25
- (void)reloadData;	// 0x31a63f69
- (void)selectRow:(int)row;	// 0x31a64031
- (void)setActiveRow:(int)row;	// 0x31a63e21
- (void)setDelegate:(id)delegate;	// 0x31a63a81
- (void)showTable;	// 0x31a63ba5
- (void)suboutTable;	// 0x31a649e1
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x31a63c6d
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x31a63d75
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x31a63c4d
@end


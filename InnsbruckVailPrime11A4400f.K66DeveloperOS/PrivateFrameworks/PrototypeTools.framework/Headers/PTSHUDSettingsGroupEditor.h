/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import <UIKit/UITableViewController.h>
#import "UINavigationControllerDelegate.h"

@class _UISettingsGroup, PTSHUDSettingsDetailViewController, NSString, UIView;

@interface PTSHUDSettingsGroupEditor : UITableViewController <UINavigationControllerDelegate> {
	_UISettingsGroup *_group;	// 320 = 0x140
	UIView *_detailsView;	// 324 = 0x144
	NSString *_archiveFilename;	// 328 = 0x148
	PTSHUDSettingsDetailViewController *_detailViewController;	// 332 = 0x14c
}
@property(copy, nonatomic) NSString *archiveFilename;	// G=0x3259fd35; S=0x3259fd49; @synthesize=_archiveFilename
@property(retain, nonatomic) PTSHUDSettingsDetailViewController *detailViewController;	// G=0x3259fd59; S=0x3259fd69; @synthesize=_detailViewController
@property(retain, nonatomic) UIView *detailsView;	// G=0x3259fcfd; S=0x3259fd0d; @synthesize=_detailsView
@property(retain, nonatomic) _UISettingsGroup *group;	// G=0x3259fced; S=0x3259f305; @synthesize=_group
- (id)initWithStyle:(int)style;	// 0x3259f2d9
- (void).cxx_destruct;	// 0x3259fd91
// declared property getter: - (id)archiveFilename;	// 0x3259fd35
// declared property getter: - (id)detailViewController;	// 0x3259fd59
// declared property getter: - (id)detailsView;	// 0x3259fcfd
- (void)done:(id)done;	// 0x3259f569
- (void)edit:(id)edit;	// 0x3259f631
// declared property getter: - (id)group;	// 0x3259fced
- (void)navigationController:(id)controller didShowViewController:(id)controller2 animated:(BOOL)animated;	// 0x3259fbcd
- (void)navigationController:(id)controller willShowViewController:(id)controller2 animated:(BOOL)animated;	// 0x3259fc41
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x3259f6a5
- (void)saveGroup;	// 0x3259f35d
// declared property setter: - (void)setArchiveFilename:(id)filename;	// 0x3259fd49
// declared property setter: - (void)setDetailViewController:(id)controller;	// 0x3259fd69
// declared property setter: - (void)setDetailsView:(id)view;	// 0x3259fd0d
// declared property setter: - (void)setGroup:(id)group;	// 0x3259f305
- (BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;	// 0x3259f879
- (BOOL)tableView:(id)view canMoveRowAtIndexPath:(id)indexPath;	// 0x3259f9f1
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x3259f6e5
- (void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;	// 0x3259f87d
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x3259f9f5
- (void)tableView:(id)view moveRowAtIndexPath:(id)indexPath toIndexPath:(id)indexPath3;	// 0x3259f94d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x3259f6a9
- (void)viewDidLoad;	// 0x3259f459
@end

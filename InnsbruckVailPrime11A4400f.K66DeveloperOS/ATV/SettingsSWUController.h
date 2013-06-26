/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"


__attribute__((visibility("hidden")))
@interface SettingsSWUController : BRViewController {
	BOOL _showingCancelDialog;	// 104 = 0x68
	float _updateDownloadPercentage;	// 108 = 0x6c
}
@property(assign, nonatomic) BOOL showingCancelDialog;	// G=0x24568d; S=0x24569d; @synthesize=_showingCancelDialog
@property(assign, nonatomic) float updateDownloadPercentage;	// G=0x24566d; S=0x24567d; @synthesize=_updateDownloadPercentage
- (id)init;	// 0x244da9
- (id)_mediaMenuView;	// 0x2456ad
- (void)_reloadList;	// 0x2456bd
- (void)_seedSoftwareUpdateSettingSelected;	// 0x245715
- (void)_showHideProgressUI;	// 0x245751
- (void)_softwareUpdate:(BOOL)update;	// 0x245939
- (void)_updateApplyFailed:(id)failed;	// 0x245e05
- (void)_updateCheckFinished:(id)finished;	// 0x245c1d
- (void)_updateCheckStarted:(id)started;	// 0x245b91
- (void)_updateDownloadFinished:(id)finished;	// 0x245d51
- (void)_updateDownloadStarted:(id)started;	// 0x245d09
- (void)_updateProgress:(id)progress;	// 0x245e75
- (void)dealloc;	// 0x245045
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x245459
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2455c5
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x245155
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x245455
// declared property setter: - (void)setShowingCancelDialog:(BOOL)dialog;	// 0x24569d
// declared property setter: - (void)setUpdateDownloadPercentage:(float)percentage;	// 0x24567d
// declared property getter: - (BOOL)showingCancelDialog;	// 0x24568d
// declared property getter: - (float)updateDownloadPercentage;	// 0x24566d
@end

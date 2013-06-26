/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSViewController.h"
#import "Preferences-Structs.h"

@class PSEditingPane;

@interface PSDetailController : PSViewController {
	PSEditingPane *_pane;	// 208 = 0xd0
}
@property(assign, nonatomic) PSEditingPane *pane;	// G=0x352e7549; S=0x352e7495; 
- (void)dealloc;	// 0x352e71dd
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x352e7475
- (void)loadView;	// 0x352e70e9
// declared property getter: - (id)pane;	// 0x352e7549
- (CGRect)paneFrame;	// 0x352e723d
- (void)saveChanges;	// 0x352e77b1
// declared property setter: - (void)setPane:(id)pane;	// 0x352e7495
- (void)statusBarWillAnimateByHeight:(float)statusBar;	// 0x352e78b1
- (void)suspend;	// 0x352e7839
- (void)viewDidAppear:(BOOL)view;	// 0x352e7765
- (void)viewDidUnload;	// 0x352e7179
- (void)viewWillAppear:(BOOL)view;	// 0x352e7559
- (void)viewWillDisappear:(BOOL)view;	// 0x352e7849
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x352e7371
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x352e7311
@end

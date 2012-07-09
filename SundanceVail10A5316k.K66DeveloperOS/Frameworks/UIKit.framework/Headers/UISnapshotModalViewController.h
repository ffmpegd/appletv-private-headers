/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class UINavigationController;

__attribute__((visibility("hidden")))
@interface UISnapshotModalViewController : UIViewController {
@private
	int _interfaceOrientation;	// 180 = 0xb4
	UIViewController *_disappearingViewController;	// 184 = 0xb8
	UINavigationController *_parentController;	// 188 = 0xbc
}
@property(retain, nonatomic) UIViewController *disappearingViewController;	// G=0x3026732d; S=0x30267195; @synthesize=_disappearingViewController
- (id)initWithInterfaceOrientation:(int)interfaceOrientation;	// 0x30267109
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x30267315
- (void)dealloc;	// 0x30267149
// declared property getter: - (id)disappearingViewController;	// 0x3026732d
// declared property setter: - (void)setDisappearingViewController:(id)controller;	// 0x30267195
- (void)viewDidDisappear:(BOOL)view;	// 0x302672a5
- (void)viewWillDisappear:(BOOL)view;	// 0x302671f5
@end

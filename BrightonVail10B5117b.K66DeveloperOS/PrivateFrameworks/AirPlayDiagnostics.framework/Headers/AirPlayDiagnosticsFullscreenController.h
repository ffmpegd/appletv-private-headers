/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirPlayDiagnostics.framework/AirPlayDiagnostics
 */

#import <UIViewController.h> // Unknown library
#import "UIAlertViewDelegate.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class UINavigationController;
@protocol AirPlayDiagnosticsFullscreenControllerDelegate;

@interface AirPlayDiagnosticsFullscreenController : UIViewController <UIAlertViewDelegate, MFMailComposeViewControllerDelegate, UINavigationControllerDelegate> {
	UINavigationController *_navController;	// 196 = 0xc4
	id<AirPlayDiagnosticsFullscreenControllerDelegate> _delegate;	// 200 = 0xc8
}
@property(assign, nonatomic) id<AirPlayDiagnosticsFullscreenControllerDelegate> delegate;	// G=0x33597bc9; S=0x33597bd9; @synthesize=_delegate
@property(retain, nonatomic) UINavigationController *navController;	// G=0x33597ba9; S=0x33597bb9; @synthesize=_navController
- (id)init;	// 0x33597405
- (void)initNavigationControllerWith:(id)with;	// 0x3359748d
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x335977ad
- (void)cancelReport;	// 0x335976d1
- (void)checkLogSettings;	// 0x33597775
- (void)cleanupNavigationController;	// 0x3359766d
- (void)dealloc;	// 0x33597709
// declared property getter: - (id)delegate;	// 0x33597bc9
- (BOOL)hasCorrectAirPlayLogSettings;	// 0x33597849
- (void)invalidate;	// 0x3359765d
- (void)mailComposeController:(id)controller didFinishWithResult:(int)result error:(id)error;	// 0x335979f9
// declared property getter: - (id)navController;	// 0x33597ba9
- (void)navigationController:(id)controller didShowViewController:(id)controller2 animated:(BOOL)animated;	// 0x335979c1
- (void)seekApprovalForAirPlayLogSettings;	// 0x335978b1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33597bd9
// declared property setter: - (void)setNavController:(id)controller;	// 0x33597bb9
- (void)startReport;	// 0x33597699
- (void)updateAirPlayLogSettings;	// 0x3359792d
@end


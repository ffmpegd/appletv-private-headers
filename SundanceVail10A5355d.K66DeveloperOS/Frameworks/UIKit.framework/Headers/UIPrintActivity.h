/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIActivity.h"

@class UIViewController;

@interface UIPrintActivity : UIActivity {
	UIViewController *_wrapperViewController;	// 8 = 0x8
}
@property(retain) UIViewController *wrapperViewController;	// G=0x33e37641; S=0x33e37655; @synthesize=_wrapperViewController
- (id)_activityImage;	// 0x33e369b5
- (id)_embeddedActivityViewController;	// 0x33e37265
- (void)activityDidFinish:(BOOL)activity;	// 0x33e375ed
- (id)activityTitle;	// 0x33e36a31
- (id)activityType;	// 0x33e369a5
- (BOOL)canPerformWithActivityItems:(id)activityItems;	// 0x33e36a4d
- (void)cancelPrintOptions;	// 0x33e375bd
- (void)dealloc;	// 0x33e36961
- (void)performActivity;	// 0x33e37451
- (void)prepareWithActivityItems:(id)activityItems;	// 0x33e36bed
- (id)printInteractionController;	// 0x33e375d1
- (id)printInteractionControllerParentViewController:(id)controller;	// 0x33e37631
// declared property setter: - (void)setWrapperViewController:(id)controller;	// 0x33e37655
// declared property getter: - (id)wrapperViewController;	// 0x33e37641
@end


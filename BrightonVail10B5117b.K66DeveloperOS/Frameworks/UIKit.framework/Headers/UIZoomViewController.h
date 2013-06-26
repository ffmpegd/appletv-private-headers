/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class UIButton, UIWindow;

__attribute__((visibility("hidden")))
@interface UIZoomViewController : UIViewController {
	UIWindow *_window;	// 196 = 0xc4
	UIButton *_zoomButton;	// 200 = 0xc8
}
@property(readonly, assign, nonatomic) UIWindow *window;	// G=0x32f9fb05; @synthesize=_window
- (id)init;	// 0x32f9ec9d
- (void)_applicationDidFinishLaunching:(id)_application;	// 0x32f9f901
- (void)_changeZoom:(id)zoom;	// 0x32f9eec5
- (void)_getRotationContentSettings:(XXStruct_tXAZTC *)settings forWindow:(id)window;	// 0x32f9fab1
- (void)_setupPositioningAndRotationForInterfaceOrientation:(int)interfaceOrientation offscreen:(BOOL)offscreen;	// 0x32f9efd1
- (void)_suspendAnimationStarted:(id)started;	// 0x32f9f9d9
- (void)_updateZoomButtonTitle;	// 0x32f9ef71
- (void)_zoomOrientationAnimationFinished:(id)finished finished:(BOOL)finished2 context:(void *)context;	// 0x32f9f7cd
- (void)_zoomOrientationChange:(id)change;	// 0x32f9f629
- (id)_zoomText:(BOOL)text;	// 0x32f9ee95
- (void)dealloc;	// 0x32f9edd9
- (BOOL)isClassicControlWindow:(id)window;	// 0x32f9ee7d
- (void)loadView;	// 0x32f9f1b1
- (id)screen;	// 0x32f9fac9
// declared property getter: - (id)window;	// 0x32f9fb05
@end

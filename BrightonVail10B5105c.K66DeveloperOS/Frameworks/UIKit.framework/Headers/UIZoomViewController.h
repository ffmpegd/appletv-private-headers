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
@property(readonly, assign, nonatomic) UIWindow *window;	// G=0x34853a75; @synthesize=_window
- (id)init;	// 0x34852c0d
- (void)_applicationDidFinishLaunching:(id)_application;	// 0x34853871
- (void)_changeZoom:(id)zoom;	// 0x34852e35
- (void)_getRotationContentSettings:(XXStruct_tXAZTC *)settings forWindow:(id)window;	// 0x34853a21
- (void)_setupPositioningAndRotationForInterfaceOrientation:(int)interfaceOrientation offscreen:(BOOL)offscreen;	// 0x34852f41
- (void)_suspendAnimationStarted:(id)started;	// 0x34853949
- (void)_updateZoomButtonTitle;	// 0x34852ee1
- (void)_zoomOrientationAnimationFinished:(id)finished finished:(BOOL)finished2 context:(void *)context;	// 0x3485373d
- (void)_zoomOrientationChange:(id)change;	// 0x34853599
- (id)_zoomText:(BOOL)text;	// 0x34852e05
- (void)dealloc;	// 0x34852d49
- (BOOL)isClassicControlWindow:(id)window;	// 0x34852ded
- (void)loadView;	// 0x34853121
- (id)screen;	// 0x34853a39
// declared property getter: - (id)window;	// 0x34853a75
@end


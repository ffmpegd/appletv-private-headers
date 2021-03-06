/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIAlertView.h"


__attribute__((visibility("hidden")))
@interface _UIUserNotificationAlertView : UIAlertView {
	CFUserNotificationRef _userNotification;	// 256 = 0x100
	CFRunLoopSourceRef _userNotificationRunLoopSource;	// 260 = 0x104
	BOOL _runsModal;	// 264 = 0x108
	BOOL _runningModal;	// 265 = 0x109
	id _strongDelegate;	// 268 = 0x10c
}
@property(assign) BOOL runsModal;	// G=0x2f8f5e01; S=0x2f8f5e11; converted property
+ (void)initialize;	// 0x2f8f5d9d
- (void)_cancelUserNotification;	// 0x2f8f69a9
- (int)addButtonWithTitle:(id)title;	// 0x2f8f6729
- (void)cancelAlertView;	// 0x2f8f6919
- (void)dealloc;	// 0x2f8f6b11
- (void)dismissWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;	// 0x2f8f6a61
- (BOOL)isVisible;	// 0x2f8f66c5
// converted property getter: - (BOOL)runsModal;	// 0x2f8f5e01
- (void)setHostedWindow:(id)window;	// 0x2f8f67a5
- (void)setRemoteViewController:(id)controller;	// 0x2f8f685d
// converted property setter: - (void)setRunsModal:(BOOL)modal;	// 0x2f8f5e11
- (void)show;	// 0x2f8f5e21
- (id)textFieldAtIndex:(int)index;	// 0x2f8f66dd
@end


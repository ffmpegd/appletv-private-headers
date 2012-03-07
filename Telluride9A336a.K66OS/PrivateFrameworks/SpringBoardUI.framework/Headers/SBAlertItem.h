/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <NSObject.h> // Unknown library
#import "UIAlertViewDelegate.h"

@class UIAlertView;

@interface SBAlertItem : NSObject <UIAlertViewDelegate> {
	UIAlertView *_alertSheet;	// 4 = 0x4
	BOOL _orderOverSBAlert;	// 8 = 0x8
	BOOL _preventLockOver;	// 9 = 0x9
	BOOL _didEverActivate;	// 10 = 0xa
	BOOL _ignoreIfAlreadyDisplaying;	// 11 = 0xb
	BOOL _didPlayPresentationSound;	// 12 = 0xc
	BOOL _allowInSetup;	// 13 = 0xd
	BOOL _pendInSetupIfNotAllowed;	// 14 = 0xe
}
@property(readonly, retain) UIAlertView *alertSheet;	// G=0x30a0c599; converted property
@property(assign, nonatomic) BOOL allowInSetup;	// G=0x30a0c321; S=0x30a0c331; @synthesize=_allowInSetup
@property(readonly, assign) BOOL didPlayPresentationSound;	// G=0x30a0c281; converted property
@property(assign, nonatomic) BOOL ignoreIfAlreadyDisplaying;	// G=0x30a0c341; S=0x30a0c351; @synthesize=_ignoreIfAlreadyDisplaying
@property(assign, nonatomic) BOOL pendInSetupIfNotAllowed;	// G=0x30a0c301; S=0x30a0c311; @synthesize=_pendInSetupIfNotAllowed
@property(assign) BOOL preventLockOver;	// G=0x30a0c2b9; S=0x30a0c45d; converted property
+ (id)_alertItemsController;	// 0x30a0c6b5
+ (void)activateAlertItem:(id)item;	// 0x30a0c56d
- (id)init;	// 0x30a0c659
- (void)_playPresentationSound;	// 0x30a0c291
- (id)alertItemNotificationDate;	// 0x30a0c2e9
- (id)alertItemNotificationSender;	// 0x30a0c2ed
- (int)alertItemNotificationType;	// 0x30a0c2e5
- (int)alertPriority;	// 0x30a0c2fd
// converted property getter: - (id)alertSheet;	// 0x30a0c599
- (Class)alertSheetClass;	// 0x30a0c361
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x30a0c55d
- (BOOL)allowAutoUnlock;	// 0x30a0c261
// declared property getter: - (BOOL)allowInSetup;	// 0x30a0c321
- (BOOL)allowMenuButtonDismissal;	// 0x30a0c25d
- (double)autoDismissInterval;	// 0x30a0c2a1
- (void)buttonDismissed;	// 0x30a0c4f5
- (void)cleanPreviousConfiguration;	// 0x30a0c3c1
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;	// 0x30a0c295
- (void)dealloc;	// 0x30a0c6dd
- (void)didActivate;	// 0x30a0c2c9
- (void)didDeactivateForReason:(int)reason;	// 0x30a0c2dd
- (void)didFailToActivate;	// 0x30a0c2d5
// converted property getter: - (BOOL)didPlayPresentationSound;	// 0x30a0c281
- (void)dismiss;	// 0x30a0c509
- (void)dismiss:(int)dismiss;	// 0x30a0c51d
- (BOOL)dismissOnLock;	// 0x30a0c279
- (BOOL)dismissOnModalDisplayActivation;	// 0x30a0c27d
- (BOOL)forcesModalAlertAppearance;	// 0x30a0c2f1
// declared property getter: - (BOOL)ignoreIfAlreadyDisplaying;	// 0x30a0c341
- (id)lockLabel;	// 0x30a0c299
- (float)lockLabelFontSize;	// 0x30a0c405
- (void)noteVolumeOrLockPressed;	// 0x30a0c2e1
// declared property getter: - (BOOL)pendInSetupIfNotAllowed;	// 0x30a0c301
- (void)performUnlockAction;	// 0x30a0c2b5
- (void)playPresentationSound;	// 0x30a0c37d
// converted property getter: - (BOOL)preventLockOver;	// 0x30a0c2b9
- (BOOL)reappearsAfterLock;	// 0x30a0c2f5
- (BOOL)reappearsAfterUnlock;	// 0x30a0c2f9
- (void)screenWillUndim;	// 0x30a0c2d1
// declared property setter: - (void)setAllowInSetup:(BOOL)setup;	// 0x30a0c331
// declared property setter: - (void)setIgnoreIfAlreadyDisplaying:(BOOL)displaying;	// 0x30a0c351
- (void)setOrderOverSBAlert:(BOOL)alert;	// 0x30a0c421
// declared property setter: - (void)setPendInSetupIfNotAllowed:(BOOL)setupIfNotAllowed;	// 0x30a0c311
// converted property setter: - (void)setPreventLockOver:(BOOL)over;	// 0x30a0c45d
- (id)shortLockLabel;	// 0x30a0c29d
- (BOOL)shouldShowInEmergencyCall;	// 0x30a0c269
- (BOOL)shouldShowInLockScreen;	// 0x30a0c265
- (BOOL)togglesMediaControls;	// 0x30a0c275
- (BOOL)undimsScreen;	// 0x30a0c26d
- (BOOL)unlocksScreen;	// 0x30a0c271
- (void)willActivate;	// 0x30a0c4a1
- (void)willDeactivateForReason:(int)reason;	// 0x30a0c2d9
- (void)willRelockForButtonPress:(BOOL)buttonPress;	// 0x30a0c2cd
@end


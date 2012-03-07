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
@property(readonly, retain) UIAlertView *alertSheet;	// G=0x34325599; converted property
@property(assign, nonatomic) BOOL allowInSetup;	// G=0x34325321; S=0x34325331; @synthesize=_allowInSetup
@property(readonly, assign) BOOL didPlayPresentationSound;	// G=0x34325281; converted property
@property(assign, nonatomic) BOOL ignoreIfAlreadyDisplaying;	// G=0x34325341; S=0x34325351; @synthesize=_ignoreIfAlreadyDisplaying
@property(assign, nonatomic) BOOL pendInSetupIfNotAllowed;	// G=0x34325301; S=0x34325311; @synthesize=_pendInSetupIfNotAllowed
@property(assign) BOOL preventLockOver;	// G=0x343252b9; S=0x3432545d; converted property
+ (id)_alertItemsController;	// 0x343256b5
+ (void)activateAlertItem:(id)item;	// 0x3432556d
- (id)init;	// 0x34325659
- (void)_playPresentationSound;	// 0x34325291
- (id)alertItemNotificationDate;	// 0x343252e9
- (id)alertItemNotificationSender;	// 0x343252ed
- (int)alertItemNotificationType;	// 0x343252e5
- (int)alertPriority;	// 0x343252fd
// converted property getter: - (id)alertSheet;	// 0x34325599
- (Class)alertSheetClass;	// 0x34325361
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x3432555d
- (BOOL)allowAutoUnlock;	// 0x34325261
// declared property getter: - (BOOL)allowInSetup;	// 0x34325321
- (BOOL)allowMenuButtonDismissal;	// 0x3432525d
- (double)autoDismissInterval;	// 0x343252a1
- (void)buttonDismissed;	// 0x343254f5
- (void)cleanPreviousConfiguration;	// 0x343253c1
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;	// 0x34325295
- (void)dealloc;	// 0x343256dd
- (void)didActivate;	// 0x343252c9
- (void)didDeactivateForReason:(int)reason;	// 0x343252dd
- (void)didFailToActivate;	// 0x343252d5
// converted property getter: - (BOOL)didPlayPresentationSound;	// 0x34325281
- (void)dismiss;	// 0x34325509
- (void)dismiss:(int)dismiss;	// 0x3432551d
- (BOOL)dismissOnLock;	// 0x34325279
- (BOOL)dismissOnModalDisplayActivation;	// 0x3432527d
- (BOOL)forcesModalAlertAppearance;	// 0x343252f1
// declared property getter: - (BOOL)ignoreIfAlreadyDisplaying;	// 0x34325341
- (id)lockLabel;	// 0x34325299
- (float)lockLabelFontSize;	// 0x34325405
- (void)noteVolumeOrLockPressed;	// 0x343252e1
// declared property getter: - (BOOL)pendInSetupIfNotAllowed;	// 0x34325301
- (void)performUnlockAction;	// 0x343252b5
- (void)playPresentationSound;	// 0x3432537d
// converted property getter: - (BOOL)preventLockOver;	// 0x343252b9
- (BOOL)reappearsAfterLock;	// 0x343252f5
- (BOOL)reappearsAfterUnlock;	// 0x343252f9
- (void)screenWillUndim;	// 0x343252d1
// declared property setter: - (void)setAllowInSetup:(BOOL)setup;	// 0x34325331
// declared property setter: - (void)setIgnoreIfAlreadyDisplaying:(BOOL)displaying;	// 0x34325351
- (void)setOrderOverSBAlert:(BOOL)alert;	// 0x34325421
// declared property setter: - (void)setPendInSetupIfNotAllowed:(BOOL)setupIfNotAllowed;	// 0x34325311
// converted property setter: - (void)setPreventLockOver:(BOOL)over;	// 0x3432545d
- (id)shortLockLabel;	// 0x3432529d
- (BOOL)shouldShowInEmergencyCall;	// 0x34325269
- (BOOL)shouldShowInLockScreen;	// 0x34325265
- (BOOL)togglesMediaControls;	// 0x34325275
- (BOOL)undimsScreen;	// 0x3432526d
- (BOOL)unlocksScreen;	// 0x34325271
- (void)willActivate;	// 0x343254a1
- (void)willDeactivateForReason:(int)reason;	// 0x343252d9
- (void)willRelockForButtonPress:(BOOL)buttonPress;	// 0x343252cd
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"
#import "iTunesStore-Structs.h"

@class ISDialogButton, NSArray, ISDialog;
@protocol ISDialogOperationDelegate;

@interface ISDialogOperation : ISOperation {
	ISDialog *_dialog;	// 60 = 0x3c
	BOOL _performDefaultActions;	// 64 = 0x40
	ISDialogButton *_selectedButton;	// 68 = 0x44
	NSArray *_textFieldValues;	// 72 = 0x48
	id _userNotification;	// 76 = 0x4c
}
@property(assign) id<ISDialogOperationDelegate> delegate;	// @dynamic
@property(retain) ISDialog *dialog;	// G=0x30f14f39; S=0x30f14f4d; @synthesize=_dialog
@property(assign) BOOL performDefaultActions;	// G=0x30f14f71; S=0x30f14f81; @synthesize=_performDefaultActions
@property(retain) ISDialogButton *selectedButton;	// G=0x30f14f91; S=0x30f14fa5; @synthesize=_selectedButton
@property(readonly, assign) NSArray *textFieldValues;	// G=0x30f14619; 
@property(retain) id userNotification;	// G=0x30f14fc9; S=0x30f14fdd; @synthesize=_userNotification
+ (id)operationWithDialog:(id)dialog;	// 0x30f14331
+ (id)operationWithError:(id)error;	// 0x30f14395
- (id)init;	// 0x30f1424d
- (void)_handleResponseForNotification:(CFUserNotificationRef)notification responseFlags:(unsigned long)flags;	// 0x30f148d9
- (void)_run;	// 0x30f14959
- (void)_showUserNotification:(id)notification;	// 0x30f14d8d
- (void)_waitForUserNotificationResponse:(CFUserNotificationRef)userNotificationResponse;	// 0x30f14ec1
- (void)cancel;	// 0x30f14679
- (void)dealloc;	// 0x30f1428d
// declared property getter: - (id)dialog;	// 0x30f14f39
- (void)handleButtonSelected:(int)selected withResponseDictionary:(id)responseDictionary;	// 0x30f143f9
// declared property getter: - (BOOL)performDefaultActions;	// 0x30f14f71
- (void)run;	// 0x30f146c1
// declared property getter: - (id)selectedButton;	// 0x30f14f91
// declared property setter: - (void)setDialog:(id)dialog;	// 0x30f14f4d
// declared property setter: - (void)setPerformDefaultActions:(BOOL)actions;	// 0x30f14f81
// declared property setter: - (void)setSelectedButton:(id)button;	// 0x30f14fa5
// declared property setter: - (void)setUserNotification:(id)notification;	// 0x30f14fdd
// declared property getter: - (id)textFieldValues;	// 0x30f14619
// declared property getter: - (id)userNotification;	// 0x30f14fc9
@end

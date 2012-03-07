/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class BRTextControl, BRHeaderControl, NSString, BRPairingPinControl;

@interface BRPairingController : BRController {
@private
	BRHeaderControl *_header;	// 80 = 0x50
	BRPairingPinControl *_pinControl;	// 84 = 0x54
	BRTextControl *_requirementText;	// 88 = 0x58
	NSString *_startNotificationName;	// 92 = 0x5c
	NSString *_stopNotificationName;	// 96 = 0x60
	BOOL _pairingHappenedWhileBuried;	// 100 = 0x64
}
+ (id)iTunesPairingControllerForChangingSyncHost;	// 0x35ecf0ed
+ (id)iTunesPairingControllerForInitialSync;	// 0x35ecee7d
+ (id)iTunesPairingControllerForStreaming;	// 0x35ecf295
+ (id)iTunesPairingControllerForSync;	// 0x35ecefb5
- (CGRect)_centeredMenuHeaderFrameForMasterFrame:(CGRect)masterFrame;	// 0x35ecffd5
- (id)_generatePairingPINWithNumDigits:(int)numDigits;	// 0x35ecfdad
- (id)_initWithType:(int)type;	// 0x35ecfa89
- (void)_setCancelText:(id)text;	// 0x35ecfcd5
- (void)_setPrimaryInfoText:(id)text;	// 0x35ecfc4d
- (void)_setRequirementsText:(id)text;	// 0x35ecfd61
- (void)_setStartNotificationName:(id)name;	// 0x35ecff55
- (void)_setStopNotificationName:(id)name;	// 0x35ecff95
- (void)_setTitle:(id)title;	// 0x35ecfc2d
- (void)_syncStatusChangedNotification:(id)notification;	// 0x35ecfe45
- (id)accessibilityLabel;	// 0x35ed0041
- (BOOL)brEventAction:(id)action;	// 0x35ecf6b1
- (void)dealloc;	// 0x35ecf3cd
- (void)layoutSubcontrols;	// 0x35ecf77d
- (void)wasExhumed;	// 0x35ecf63d
- (void)wasPopped;	// 0x35ecf54d
- (void)wasPushed;	// 0x35ecf499
@end


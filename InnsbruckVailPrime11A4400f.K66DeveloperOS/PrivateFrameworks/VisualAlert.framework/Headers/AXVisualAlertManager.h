/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

#import </libobjc.A.h>

@class NSArray, AXNotificationHandler, AXTimer, NSDictionary;
@protocol AXCameraTorchManager;

@interface AXVisualAlertManager : NSObject {
	unsigned _alertTypes;	// 4 = 0x4
	id<AXCameraTorchManager> _cameraTorchManager;	// 8 = 0x8
	AXTimer *_timer;	// 12 = 0xc
	AXTimer *_torchForceShutdownTimer;	// 16 = 0x10
	NSDictionary *_patterns;	// 20 = 0x14
	NSDictionary *_activePattern;	// 24 = 0x18
	unsigned _activePatternCursor;	// 28 = 0x1c
	BOOL _shouldRepeatPattern;	// 32 = 0x20
	NSDictionary *_patternToUseForVisualAlertAfterCaptureSessionStopsRunning;	// 36 = 0x24
	NSArray *_notificationHandlers;	// 40 = 0x28
	AXNotificationHandler *_deviceLockStateChangedNotificationHandler;	// 44 = 0x2c
	BOOL _torchDeviceOpen;	// 48 = 0x30
	BOOL _torchDeviceOn;	// 49 = 0x31
	BOOL _isDeviceLocked;	// 50 = 0x32
	BOOL _isQuietModeEnabled;	// 51 = 0x33
	BOOL _captureSessionRunning;	// 52 = 0x34
	BOOL _conferenceCallRinging;	// 53 = 0x35
	BOOL _skipAutomaticStopOnUserInteraction;	// 54 = 0x36
	unsigned _typeToUseForVisualAlertAfterCaptureSessionStopsRunning;	// 56 = 0x38
}
@property(retain, nonatomic, setter=_setActivePattern:) NSDictionary *_activePattern;	// G=0x32e275d1; S=0x32e275e1; @synthesize
@property(readonly, assign, nonatomic) NSDictionary *_patterns;	// G=0x32e25789; 
@property(assign, nonatomic, getter=_isTorchDeviceOn, setter=_setTorchDeviceOn:) BOOL _torchDeviceOn;	// G=0x32e27621; S=0x32e2567d; @synthesize
@property(assign, nonatomic, getter=_isTorchDeviceOpen, setter=_setTorchDeviceOpen:) BOOL _torchDeviceOpen;	// G=0x32e27611; S=0x32e25591; @synthesize
@property(assign, nonatomic, setter=_setTypeToUseForVisualAlertAfterCaptureSessionStopsRunning:) unsigned _typeToUseForVisualAlertAfterCaptureSessionStopsRunning;	// G=0x32e275f1; S=0x32e27601; @synthesize
+ (void)initialize;	// 0x32e25285
+ (id)sharedVisualAlertManager;	// 0x32e258c9
- (id)init;	// 0x32e253ed
// declared property getter: - (id)_activePattern;	// 0x32e275d1
- (BOOL)_axHasConferenceCameraTorchManager;	// 0x32e27529
- (BOOL)_axShouldHandleVisualAlertsForConferenceCallsInConferenceFramework;	// 0x32e275a1
- (void)_beginVisualAlertForType:(unsigned)type repeat:(BOOL)repeat;	// 0x32e26265
- (void)_beginVisualAlertForType:(unsigned)type repeat:(BOOL)repeat skipAutomaticStopOnUserInteraction:(BOOL)interaction;	// 0x32e26289
- (void)_endVisualAlert;	// 0x32e26595
- (void)_handleBeginVisualAlertForAlarmWithSound:(BOOL)sound;	// 0x32e26929
- (void)_handleBeginVisualAlertForIncomingCall;	// 0x32e2682d
- (void)_handleBeginVisualAlertForIncomingConferenceCall;	// 0x32e26869
- (void)_handleCaptureSessionDidStartRunning;	// 0x32e26b91
- (void)_handleCaptureSessionDidStopRunning;	// 0x32e26ba5
- (void)_handleDeviceWasLocked;	// 0x32e26b15
- (void)_handleDeviceWasUnlocked;	// 0x32e26b29
- (void)_handleEndVisualAlertForAlarm;	// 0x32e2695d
- (void)_handleEndVisualAlertForIncomingCall;	// 0x32e26859
- (void)_handleEndVisualAlertForIncomingConferenceCall;	// 0x32e268d9
- (void)_handleFaceTimeCallRinging;	// 0x32e26a95
- (void)_handleLockButtonPressed;	// 0x32e26ae1
- (void)_handleQuietModeWasDisabled;	// 0x32e26b7d
- (void)_handleQuietModeWasEnabled;	// 0x32e26b5d
- (void)_handleSecondaryVisualAlertManagerDidStart;	// 0x32e26a15
- (void)_handleVisualAlertForExternalApplication;	// 0x32e269b1
- (void)_handleVisualAlertForIncomingMessage;	// 0x32e269e9
- (void)_handleVisualAlertForRegularNotification;	// 0x32e26985
- (void)_handleVolumeChanged;	// 0x32e26b05
- (void)_insertCustomLogicForSystemWideServer;	// 0x32e26c61
// declared property getter: - (BOOL)_isTorchDeviceOn;	// 0x32e27621
// declared property getter: - (BOOL)_isTorchDeviceOpen;	// 0x32e27611
- (id)_normalizedStrobePatternForOriginalPattern:(id)originalPattern;	// 0x32e27289
// declared property getter: - (id)_patterns;	// 0x32e25789
- (void)_processNextVisualAlertComponent;	// 0x32e26651
// declared property setter: - (void)_setActivePattern:(id)pattern;	// 0x32e275e1
// declared property setter: - (void)_setTorchDeviceOn:(BOOL)on;	// 0x32e2567d
// declared property setter: - (void)_setTorchDeviceOpen:(BOOL)open;	// 0x32e25591
// declared property setter: - (void)_setTypeToUseForVisualAlertAfterCaptureSessionStopsRunning:(unsigned)visualAlertAfterCaptureSessionStopsRunning;	// 0x32e27601
- (void)_startForAlertTypes:(unsigned)alertTypes cameraTorchManager:(id)manager;	// 0x32e258d9
- (void)_stop;	// 0x32e2608d
// declared property getter: - (unsigned)_typeToUseForVisualAlertAfterCaptureSessionStopsRunning;	// 0x32e275f1
- (void)dealloc;	// 0x32e254f5
- (id)description;	// 0x32e2583d
- (void)startForAlertTypes:(unsigned)alertTypes cameraTorchManager:(id)manager;	// 0x32e26151
- (void)stop;	// 0x32e261f9
@end

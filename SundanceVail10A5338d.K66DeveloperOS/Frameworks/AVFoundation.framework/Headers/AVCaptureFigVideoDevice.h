/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "MCProfileConnectionObserver.h"
#import "AVCaptureDevice.h"

@class NSDictionary, NSMutableArray, AVWeakReference;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AVCaptureFigVideoDevice : AVCaptureDevice <MCProfileConnectionObserver> {
	NSDictionary *_deviceProperties;	// 8 = 0x8
	int _focusMode;	// 12 = 0xc
	CGPoint _focusPointOfInterest;	// 16 = 0x10
	int _focusInFlightCount;	// 24 = 0x18
	BOOL _adjustingFocus;	// 28 = 0x1c
	int _exposureMode;	// 32 = 0x20
	XXStruct_pwHToB _exposureDuration;	// 36 = 0x24
	float _exposureGain;	// 60 = 0x3c
	BOOL _manualExposureSupportEnabled;	// 64 = 0x40
	float _autoExposureBias;	// 68 = 0x44
	CGPoint _exposurePointOfInterest;	// 72 = 0x48
	BOOL _adjustingExposure;	// 80 = 0x50
	int _wbMode;	// 84 = 0x54
	float _whiteBalanceTemperature;	// 88 = 0x58
	BOOL _adjustingWB;	// 92 = 0x5c
	BOOL _automaticallyAdjustsImageControlMode;	// 93 = 0x5d
	int _imageControlMode;	// 96 = 0x60
	int _pendingImageControlMode;	// 100 = 0x64
	int _flashMode;	// 104 = 0x68
	BOOL _flashActive;	// 108 = 0x6c
	BOOL _flashAvailable;	// 109 = 0x6d
	int _torchMode;	// 112 = 0x70
	BOOL _torchActive;	// 116 = 0x74
	float _torchLevel;	// 120 = 0x78
	BOOL _torchAvailable;	// 124 = 0x7c
	NSObject<OS_dispatch_queue> *_torchAppsSerialQueue;	// 128 = 0x80
	NSObject<OS_dispatch_source> *_torchAppsKillTimer;	// 132 = 0x84
	OpaqueFigRecorder *_recorderForTorchApps;	// 136 = 0x88
	BOOL _isConnected;	// 140 = 0x8c
	BOOL _subjectMonitoringEnabled;	// 141 = 0x8d
	BOOL _faceDetectionDrivenImageProcessingEnabled;	// 142 = 0x8e
	CGRect _faceRectangle;	// 144 = 0x90
	int _faceRectangleAngle;	// 160 = 0xa0
	BOOL _faceDetectionMetadataEnabled;	// 164 = 0xa4
	BOOL _automaticallyEnablesLowLightBoostWhenAvailable;	// 165 = 0xa5
	BOOL _lowLightBoostEnabled;	// 166 = 0xa6
	float _saturation;	// 168 = 0xa8
	float _contrast;	// 172 = 0xac
	NSMutableArray *_formats;	// 176 = 0xb0
	AVWeakReference *_weakReference;	// 180 = 0xb4
}
@property(readonly, assign, getter=isAdjustingExposure) BOOL adjustingExposure;	// G=0x31790a75; converted property
@property(readonly, assign, getter=isAdjustingFocus) BOOL adjustingFocus;	// G=0x3178fff1; converted property
@property(assign) float autoExposureBias;	// G=0x3179080d; S=0x31790875; converted property
@property(assign) BOOL automaticallyAdjustsImageControlMode;	// G=0x31792579; S=0x31792589; converted property
@property(assign) BOOL automaticallyEnablesLowLightBoostWhenAvailable;	// G=0x3179376d; S=0x3179377d; converted property
@property(assign) float contrast;	// G=0x317934b1; S=0x31793519; converted property
@property(assign) XXStruct_pwHToB exposureDuration;	// G=0x3179060d; S=0x31790641; converted property
@property(assign) float exposureGain;	// G=0x31790715; S=0x31790725; converted property
@property(assign) int exposureMode;	// G=0x31790379; S=0x31790389; converted property
@property(assign) CGPoint exposurePointOfInterest;	// G=0x3179099d; S=0x317909b5; converted property
@property(assign, getter=isFaceDetectionDebugMetadataReportingEnabled) BOOL faceDetectionDebugMetadataReportingEnabled;	// G=0x31793081; S=0x31792ee9; converted property
@property(assign, getter=isFaceDetectionDrivenImageProcessingEnabled) BOOL faceDetectionDrivenImageProcessingEnabled;	// G=0x31792b45; S=0x31792c91; converted property
@property(readonly, assign) CGRect faceRectangle;	// G=0x31792e39; converted property
@property(readonly, assign) int faceRectangleAngle;	// G=0x31792ed9; converted property
@property(readonly, assign, getter=isFlashActive) BOOL flashActive;	// G=0x31790fc5; converted property
@property(readonly, assign, getter=isFlashAvailable) BOOL flashAvailable;	// G=0x31791235; converted property
@property(assign) int flashMode;	// G=0x31791225; S=0x31791271; converted property
@property(assign) int focusMode;	// G=0x3178fd5d; S=0x3178fd6d; converted property
@property(assign) CGPoint focusPointOfInterest;	// G=0x3178ff19; S=0x3178ff31; converted property
@property(readonly, retain) NSMutableArray *formats;	// G=0x3178ee21; converted property
@property(assign) int imageControlMode;	// G=0x317926d5; S=0x317927c5; converted property
@property(readonly, assign) BOOL isConnected;	// G=0x3178f009; converted property
@property(readonly, assign, getter=isLowLightBoostEnabled) BOOL lowLightBoostEnabled;	// G=0x3179375d; converted property
@property(assign, getter=isManualExposureSupportEnabled) BOOL manualExposureSupportEnabled;	// G=0x317907ed; S=0x317907fd; converted property
@property(assign) float saturation;	// G=0x31793361; S=0x317933c9; converted property
@property(assign, getter=isSubjectAreaChangeMonitoringEnabled) BOOL subjectAreaChangeMonitoringEnabled;	// G=0x317923a1; S=0x31792449; converted property
@property(readonly, assign, getter=isTorchActive) BOOL torchActive;	// G=0x317913b9; converted property
@property(readonly, assign, getter=isTorchAvailable) BOOL torchAvailable;	// G=0x3179147d; converted property
@property(readonly, assign) float torchLevel;	// G=0x317913fd; converted property
@property(assign) int torchMode;	// G=0x31791afd; S=0x31791b0d; converted property
@property(assign) int whiteBalanceMode;	// G=0x31790c51; S=0x31790c61; converted property
@property(assign) float whiteBalanceTemperature;	// G=0x31790e35; S=0x31790e9d; converted property
+ (BOOL)_cameraAccessIsEnabled;	// 0x3178e6c1
+ (id)_devices;	// 0x3178e525
+ (void)initialize;	// 0x3178e501
- (id)init;	// 0x3178ea55
- (id)initWithProperties:(id)properties;	// 0x3178e70d
- (void)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x31793125
- (void)_applyPendingPropertiesToRecorder;	// 0x3178f059
- (OpaqueFigRecorder *)_createFigRecorderForTorchApps;	// 0x317920fd
- (id)_createTorchAppsKillTimer;	// 0x317915cd
- (BOOL)_faceDetectionDebugMetadataReportingEnabled;	// 0x31793091
- (BOOL)_faceDetectionDrivenImageProcessingEnabled;	// 0x31792d91
- (int)_flashMode;	// 0x31791079
- (float)_floatValueForRecorderProperty:(CFStringRef)recorderProperty;	// 0x31793219
- (void)_restoreColorProperties;	// 0x31793605
- (void)_sessionDidStart;	// 0x3178f7c5
- (void)_sessionWillStart;	// 0x3178f725
- (void)_setAdjustingExposure:(BOOL)exposure;	// 0x31790011
- (void)_setAdjustingFocus:(BOOL)focus;	// 0x31790001
- (void)_setAdjustingWhiteBalance:(BOOL)balance;	// 0x31790a95
- (BOOL)_setAutoExposureBias:(float)bias;	// 0x31790851
- (BOOL)_setContrast:(float)contrast;	// 0x317934f5
- (BOOL)_setExposureWithMode:(int)mode pointOfInterest:(id)interest;	// 0x317900b5
- (BOOL)_setFaceDetectionDebugMetadataReportingEnabled:(BOOL)enabled;	// 0x31792fe9
- (BOOL)_setFaceDetectionDrivenImageProcessingEnabled:(BOOL)enabled;	// 0x31792b55
- (void)_setFlashActive:(BOOL)active;	// 0x31791045
- (BOOL)_setFlashMode:(int)mode;	// 0x3179114d
- (BOOL)_setFloatValue:(float)value forRecorderProperty:(CFStringRef)recorderProperty;	// 0x317932d1
- (BOOL)_setFocusWithMode:(int)mode pointOfInterest:(id)interest;	// 0x3178f9b9
- (BOOL)_setImageControlMode:(int)mode;	// 0x317926e5
- (BOOL)_setSaturation:(float)saturation;	// 0x317933a5
- (BOOL)_setSubjectAreaChangeMonitoringEnabled:(BOOL)enabled;	// 0x317923b1
- (void)_setTorchActive:(BOOL)active;	// 0x317913c9
- (long)_setTorchMode:(int)mode withLevel:(float)level;	// 0x3179179d
- (BOOL)_setWhiteBalanceMode:(int)mode;	// 0x31790bb9
- (BOOL)_setWhiteBalanceTemperature:(float)temperature;	// 0x31790e79
- (BOOL)_subjectAreaChangeMonitoringEnabled;	// 0x317924d5
- (void)_teardownFigRecorderForTorchApps;	// 0x3179229d
- (void)_teardownTorchAppsKillTimer;	// 0x31791735
- (int)_torchMode;	// 0x317914b9
- (void)_updateFlashAndTorchAvailability;	// 0x31791db9
- (void)_updateImageControlMode;	// 0x31792945
- (int)_whiteBalanceMode;	// 0x31790b15
// converted property getter: - (float)autoExposureBias;	// 0x3179080d
// converted property getter: - (BOOL)automaticallyAdjustsImageControlMode;	// 0x31792579
// converted property getter: - (BOOL)automaticallyEnablesLowLightBoostWhenAvailable;	// 0x3179376d
// converted property getter: - (float)contrast;	// 0x317934b1
- (void)dealloc;	// 0x3178eaa9
- (id)devicePropertiesDictionary;	// 0x3178f021
- (BOOL)doesHandleNotification:(id)notification;	// 0x31793915
// converted property getter: - (XXStruct_pwHToB)exposureDuration;	// 0x3179060d
// converted property getter: - (float)exposureGain;	// 0x31790715
// converted property getter: - (int)exposureMode;	// 0x31790379
// converted property getter: - (CGPoint)exposurePointOfInterest;	// 0x3179099d
// converted property getter: - (CGRect)faceRectangle;	// 0x31792e39
// converted property getter: - (int)faceRectangleAngle;	// 0x31792ed9
// converted property getter: - (int)flashMode;	// 0x31791225
// converted property getter: - (int)focusMode;	// 0x3178fd5d
// converted property getter: - (CGPoint)focusPointOfInterest;	// 0x3178ff19
// converted property getter: - (id)formats;	// 0x3178ee21
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x31793a51
- (BOOL)hasFlash;	// 0x31790f85
- (BOOL)hasMediaType:(id)type;	// 0x3178ed61
- (BOOL)hasTorch;	// 0x31791379
// converted property getter: - (int)imageControlMode;	// 0x317926d5
// converted property getter: - (BOOL)isAdjustingExposure;	// 0x31790a75
// converted property getter: - (BOOL)isAdjustingFocus;	// 0x3178fff1
- (BOOL)isAdjustingWhiteBalance;	// 0x31790a85
// converted property getter: - (BOOL)isConnected;	// 0x3178f009
- (BOOL)isExposureModeSupported:(int)supported;	// 0x31790021
- (BOOL)isExposurePointOfInterestSupported;	// 0x3179095d
// converted property getter: - (BOOL)isFaceDetectionDebugMetadataReportingEnabled;	// 0x31793081
// converted property getter: - (BOOL)isFaceDetectionDrivenImageProcessingEnabled;	// 0x31792b45
- (BOOL)isFaceDetectionDuringVideoPreviewSupported;	// 0x31792b05
- (BOOL)isFaceDetectionSupported;	// 0x31792ac5
// converted property getter: - (BOOL)isFlashActive;	// 0x31790fc5
// converted property getter: - (BOOL)isFlashAvailable;	// 0x31791235
- (BOOL)isFlashModeSupported:(int)supported;	// 0x31790fd5
- (BOOL)isFocusModeSupported:(int)supported;	// 0x3178f949
- (BOOL)isFocusPointOfInterestSupported;	// 0x3178ff01
- (BOOL)isHDRSupported;	// 0x317936dd
- (BOOL)isImageControlModeSupported:(int)supported;	// 0x31792569
- (BOOL)isInUseByAnotherApplication;	// 0x3178f005
// converted property getter: - (BOOL)isLowLightBoostEnabled;	// 0x3179375d
- (BOOL)isLowLightBoostSupported;	// 0x3179371d
// converted property getter: - (BOOL)isManualExposureSupportEnabled;	// 0x317907ed
// converted property getter: - (BOOL)isSubjectAreaChangeMonitoringEnabled;	// 0x317923a1
// converted property getter: - (BOOL)isTorchActive;	// 0x317913b9
// converted property getter: - (BOOL)isTorchAvailable;	// 0x3179147d
- (BOOL)isTorchModeSupported:(int)supported;	// 0x3179140d
- (BOOL)isWhiteBalanceModeSupported:(int)supported;	// 0x31790aa5
- (id)localizedName;	// 0x3178ed21
- (id)modelID;	// 0x3178ecf9
- (int)position;	// 0x3178f905
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)profileConnection userInfo:(id)info;	// 0x3178ebc5
// converted property getter: - (float)saturation;	// 0x31793361
// converted property setter: - (void)setAutoExposureBias:(float)bias;	// 0x31790875
// converted property setter: - (void)setAutomaticallyAdjustsImageControlMode:(BOOL)mode;	// 0x31792589
// converted property setter: - (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)available;	// 0x3179377d
// converted property setter: - (void)setContrast:(float)contrast;	// 0x31793519
// converted property setter: - (void)setExposureDuration:(XXStruct_pwHToB)duration;	// 0x31790641
// converted property setter: - (void)setExposureGain:(float)gain;	// 0x31790725
// converted property setter: - (void)setExposureMode:(int)mode;	// 0x31790389
// converted property setter: - (void)setExposurePointOfInterest:(CGPoint)interest;	// 0x317909b5
// converted property setter: - (void)setFaceDetectionDebugMetadataReportingEnabled:(BOOL)enabled;	// 0x31792ee9
// converted property setter: - (void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)enabled;	// 0x31792c91
// converted property setter: - (void)setFlashMode:(int)mode;	// 0x31791271
// converted property setter: - (void)setFocusMode:(int)mode;	// 0x3178fd6d
// converted property setter: - (void)setFocusPointOfInterest:(CGPoint)interest;	// 0x3178ff31
// converted property setter: - (void)setImageControlMode:(int)mode;	// 0x317927c5
// converted property setter: - (void)setManualExposureSupportEnabled:(BOOL)enabled;	// 0x317907fd
// converted property setter: - (void)setSaturation:(float)saturation;	// 0x317933c9
- (void)setSession:(id)session;	// 0x3178f805
// converted property setter: - (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)enabled;	// 0x31792449
// converted property setter: - (void)setTorchMode:(int)mode;	// 0x31791b0d
- (BOOL)setTorchModeOnWithLevel:(float)level error:(id *)error;	// 0x31791c21
// converted property setter: - (void)setWhiteBalanceMode:(int)mode;	// 0x31790c61
// converted property setter: - (void)setWhiteBalanceTemperature:(float)temperature;	// 0x31790e9d
- (BOOL)startUsingDevice:(id *)device;	// 0x3178f019
- (void)stopUsingDevice;	// 0x3178f01d
- (BOOL)supportsAVCaptureSessionPreset:(id)preset;	// 0x3178edcd
// converted property getter: - (float)torchLevel;	// 0x317913fd
// converted property getter: - (int)torchMode;	// 0x31791afd
- (id)uniqueID;	// 0x3178ecd1
// converted property getter: - (int)whiteBalanceMode;	// 0x31790c51
// converted property getter: - (float)whiteBalanceTemperature;	// 0x31790e35
@end

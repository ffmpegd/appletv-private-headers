/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "MCProfileConnectionObserver.h"
#import "AVCaptureDevice.h"

@class NSArray, NSDictionary, AVWeakReference, AVCaptureDeviceFormat;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface AVCaptureFigVideoDevice : AVCaptureDevice <MCProfileConnectionObserver> {
	NSDictionary *_deviceProperties;	// 8 = 0x8
	NSDictionary *_sensorProperties;	// 12 = 0xc
	AVCaptureDeviceFormat *_activeFormat;	// 16 = 0x10
	XXStruct_pwHToB _activeMinFrameDuration;	// 20 = 0x14
	XXStruct_pwHToB _activeMaxFrameDuration;	// 44 = 0x2c
	int _focusMode;	// 68 = 0x44
	CGPoint _focusPointOfInterest;	// 72 = 0x48
	float _focusPosition;	// 80 = 0x50
	BOOL _manualFocusSupportEnabled;	// 84 = 0x54
	int _focusInFlightCount;	// 88 = 0x58
	BOOL _adjustingFocus;	// 92 = 0x5c
	int _autoFocusRangeRestriction;	// 96 = 0x60
	BOOL _smoothAutoFocusEnabled;	// 100 = 0x64
	int _exposureMode;	// 104 = 0x68
	XXStruct_pwHToB _exposureDuration;	// 108 = 0x6c
	float _exposureGain;	// 132 = 0x84
	BOOL _manualExposureSupportEnabled;	// 136 = 0x88
	float _autoExposureBias;	// 140 = 0x8c
	CGPoint _exposurePointOfInterest;	// 144 = 0x90
	BOOL _adjustingExposure;	// 152 = 0x98
	int _wbMode;	// 156 = 0x9c
	float _whiteBalanceTemperature;	// 160 = 0xa0
	BOOL _adjustingWB;	// 164 = 0xa4
	BOOL _automaticallyAdjustsImageControlMode;	// 165 = 0xa5
	int _imageControlMode;	// 168 = 0xa8
	int _pendingImageControlMode;	// 172 = 0xac
	int _flashMode;	// 176 = 0xb0
	BOOL _flashActive;	// 180 = 0xb4
	BOOL _flashAvailable;	// 181 = 0xb5
	int _torchMode;	// 184 = 0xb8
	BOOL _torchActive;	// 188 = 0xbc
	float _torchLevel;	// 192 = 0xc0
	BOOL _torchAvailable;	// 196 = 0xc4
	NSObject<OS_dispatch_queue> *_torchAppsSerialQueue;	// 200 = 0xc8
	NSObject<OS_dispatch_source> *_torchAppsKillTimer;	// 204 = 0xcc
	OpaqueFigRecorder *_recorderForTorchApps;	// 208 = 0xd0
	BOOL _isConnected;	// 212 = 0xd4
	BOOL _subjectMonitoringEnabled;	// 213 = 0xd5
	BOOL _faceDetectionDrivenImageProcessingEnabled;	// 214 = 0xd6
	CGRect _faceRectangle;	// 216 = 0xd8
	int _faceRectangleAngle;	// 232 = 0xe8
	BOOL _faceDetectionMetadataEnabled;	// 236 = 0xec
	BOOL _automaticallyEnablesLowLightBoostWhenAvailable;	// 237 = 0xed
	BOOL _lowLightBoostEnabled;	// 238 = 0xee
	BOOL _yoMamaWearsFancyGlassesDetectionEnabled;	// 239 = 0xef
	BOOL _yoMamaWearsFancyGlasses;	// 240 = 0xf0
	float _saturation;	// 244 = 0xf4
	float _contrast;	// 248 = 0xf8
	int _videoZoomDownscaleStageHint;	// 252 = 0xfc
	int _videoZoomUpscaleStageHint;	// 256 = 0x100
	float _videoZoomFactor;	// 260 = 0x104
	float _videoZoomRampTarget;	// 264 = 0x108
	int _videoZoomRampCounter;	// 268 = 0x10c
	float _videoZoomRampAcceleration;	// 272 = 0x110
	BOOL _videoZoomDrawOverlay;	// 276 = 0x114
	NSArray *_formats;	// 280 = 0x118
	OpaqueCMClock *_deviceClock;	// 284 = 0x11c
	BOOL _isNonUIBuild;	// 288 = 0x120
	AVWeakReference *_weakReference;	// 292 = 0x124
}
@property(retain) AVCaptureDeviceFormat *activeFormat;	// G=0x2c2c4edd; S=0x2c2c4fc5; converted property
@property(assign) XXStruct_pwHToB activeVideoMaxFrameDuration;	// G=0x2c2c5aa1; S=0x2c2c5da1; converted property
@property(assign) XXStruct_pwHToB activeVideoMinFrameDuration;	// G=0x2c2c5401; S=0x2c2c5701; converted property
@property(readonly, assign, getter=isAdjustingExposure) BOOL adjustingExposure;	// G=0x2c2c820d; converted property
@property(readonly, assign, getter=isAdjustingFocus) BOOL adjustingFocus;	// G=0x2c2c748d; converted property
@property(assign) float autoExposureBias;	// G=0x2c2c7fa1; S=0x2c2c800d; converted property
@property(assign) int autoFocusRangeRestriction;	// G=0x2c2c74e9; S=0x2c2c74f9; converted property
@property(assign) BOOL automaticallyAdjustsImageControlMode;	// G=0x2c2c9cf9; S=0x2c2c9d09; converted property
@property(assign) BOOL automaticallyEnablesLowLightBoostWhenAvailable;	// G=0x2c2cbc01; S=0x2c2cbc11; converted property
@property(assign) float contrast;	// G=0x2c2cae45; S=0x2c2caeb1; converted property
@property(readonly, assign) OpaqueCMClock *deviceClock;	// G=0x2c2ccf4d; converted property
@property(assign) XXStruct_pwHToB exposureDuration;	// G=0x2c2c7db5; S=0x2c2c7dd5; converted property
@property(assign) float exposureGain;	// G=0x2c2c7ea9; S=0x2c2c7eb9; converted property
@property(assign) int exposureMode;	// G=0x2c2c7b21; S=0x2c2c7b31; converted property
@property(assign) CGPoint exposurePointOfInterest;	// G=0x2c2c8135; S=0x2c2c814d; converted property
@property(assign, getter=isFaceDetectionDebugMetadataReportingEnabled) BOOL faceDetectionDebugMetadataReportingEnabled;	// G=0x2c2ca7ed; S=0x2c2ca651; converted property
@property(assign, getter=isFaceDetectionDrivenImageProcessingEnabled) BOOL faceDetectionDrivenImageProcessingEnabled;	// G=0x2c2ca2c1; S=0x2c2ca40d; converted property
@property(readonly, assign) CGRect faceRectangle;	// G=0x2c2ca5a9; converted property
@property(readonly, assign) int faceRectangleAngle;	// G=0x2c2ca641; converted property
@property(readonly, assign, getter=isFlashActive) BOOL flashActive;	// G=0x2c2c8755; converted property
@property(readonly, assign, getter=isFlashAvailable) BOOL flashAvailable;	// G=0x2c2c89bd; converted property
@property(assign) int flashMode;	// G=0x2c2c89ad; S=0x2c2c89f9; converted property
@property(assign) int focusMode;	// G=0x2c2c71f5; S=0x2c2c7205; converted property
@property(assign) CGPoint focusPointOfInterest;	// G=0x2c2c73b5; S=0x2c2c73cd; converted property
@property(assign) float focusPosition;	// G=0x2c2c75b1; S=0x2c2c75c1; converted property
@property(readonly, retain) NSArray *formats;	// G=0x2c2c40b9; converted property
@property(assign) int imageControlMode;	// G=0x2c2c9e59; S=0x2c2c9f45; converted property
@property(readonly, assign) BOOL isConnected;	// G=0x2c2c6145; converted property
@property(readonly, assign, getter=isLowLightBoostEnabled) BOOL lowLightBoostEnabled;	// G=0x2c2cbab9; converted property
@property(assign, getter=isManualExposureSupportEnabled) BOOL manualExposureSupportEnabled;	// G=0x2c2c7f81; S=0x2c2c7f91; converted property
@property(assign, getter=isManualFocusSupportEnabled) BOOL manualFocusSupportEnabled;	// G=0x2c2c7689; S=0x2c2c7699; converted property
@property(assign) float saturation;	// G=0x2c2cacf1; S=0x2c2cad5d; converted property
@property(assign, getter=isSmoothAutoFocusEnabled) BOOL smoothAutoFocusEnabled;	// G=0x2c2c76e9; S=0x2c2c76f9; converted property
@property(assign, getter=isSubjectAreaChangeMonitoringEnabled) BOOL subjectAreaChangeMonitoringEnabled;	// G=0x2c2c9b29; S=0x2c2c9bd5; converted property
@property(readonly, assign, getter=isTorchActive) BOOL torchActive;	// G=0x2c2c8b41; converted property
@property(readonly, assign, getter=isTorchAvailable) BOOL torchAvailable;	// G=0x2c2c8c05; converted property
@property(readonly, assign) float torchLevel;	// G=0x2c2c8b85; converted property
@property(assign) int torchMode;	// G=0x2c2c928d; S=0x2c2c929d; converted property
@property(assign) int videoZoomDownscaleStageHint;	// G=0x2c2cb11d; S=0x2c2cb12d; converted property
@property(assign) BOOL videoZoomDrawOverlay;	// G=0x2c2cb0cd; S=0x2c2cb0dd; converted property
@property(assign) float videoZoomFactor;	// G=0x2c2cb291; S=0x2c2cb2a1; converted property
@property(assign) float videoZoomRampAcceleration;	// G=0x2c2cb075; S=0x2c2cb085; converted property
@property(assign) int videoZoomUpscaleStageHint;	// G=0x2c2cb18d; S=0x2c2cb19d; converted property
@property(assign) int whiteBalanceMode;	// G=0x2c2c83dd; S=0x2c2c83ed; converted property
@property(assign) float whiteBalanceTemperature;	// G=0x2c2c85c1; S=0x2c2c862d; converted property
@property(readonly, assign) BOOL yoMamaWearsFancyGlasses;	// G=0x2c2ca899; converted property
@property(assign, getter=isYoMamaWearsFancyGlassesDetectionEnabled) BOOL yoMamaWearsFancyGlassesDetectionEnabled;	// G=0x2c2ca889; S=0x2c2ca941; converted property
+ (BOOL)_cameraAccessIsEnabled;	// 0x2c2c3509
+ (id)_devices;	// 0x2c2c31bd
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x2c2cb1fd
+ (void)initialize;	// 0x2c2c3199
- (id)init;	// 0x2c2c3c85
- (id)initWithProperties:(id)properties sensorProperties:(id)properties2;	// 0x2c2c3555
- (BOOL)HDRUsesPreBracketedFrameAsEV0;	// 0x2c2cba35
- (void)_addMissingPresetSensorFormatsAndDefaultFrameRates:(id)rates;	// 0x2c2c4579
- (void)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x2c2caa65
- (void)_applyPendingPropertiesToRecorder;	// 0x2c2c6195
- (OpaqueFigRecorder *)_createFigRecorderForTorchApps;	// 0x2c2c9885
- (id)_createTorchAppsKillTimer;	// 0x2c2c8d45
- (id)_deviceFormatMatchingWidth:(int)width height:(int)height minFrameRate:(int)rate maxFrameRate:(int)rate4 pixelFormat:(int)format inFormatsArray:(id)formatsArray;	// 0x2c2c437d
- (BOOL)_faceDetectionDebugMetadataReportingEnabled;	// 0x2c2ca7fd
- (BOOL)_faceDetectionDrivenImageProcessingEnabled;	// 0x2c2ca50d
- (int)_flashMode;	// 0x2c2c8809
- (float)_floatValueForRecorderProperty:(CFStringRef)recorderProperty;	// 0x2c2cab5d
- (id)_numberForRecorderProperty:(CFStringRef)recorderProperty;	// 0x2c2cac69
- (void)_restoreColorProperties;	// 0x2c2caf9d
- (void)_sessionDidStart;	// 0x2c2c6aa5
- (void)_sessionWillStart;	// 0x2c2c6a05
- (void)_setActiveFormatAndFrameRatesForResolvedOptions:(id)resolvedOptions sendingFrameRatesToFig:(BOOL)fig;	// 0x2c2c4c85
- (void)_setActiveVideoMaxFrameDuration:(XXStruct_pwHToB)duration;	// 0x2c2c5ae5
- (void)_setActiveVideoMinFrameDuration:(XXStruct_pwHToB)duration;	// 0x2c2c5445
- (void)_setAdjustingExposure:(BOOL)exposure;	// 0x2c2c77b1
- (void)_setAdjustingFocus:(BOOL)focus;	// 0x2c2c749d
- (void)_setAdjustingWhiteBalance:(BOOL)balance;	// 0x2c2c822d
- (BOOL)_setAutoExposureBias:(float)bias;	// 0x2c2c7fe5
- (void)_setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)available;	// 0x2c2cbac9
- (BOOL)_setBoolValue:(BOOL)value forRecorderProperty:(CFStringRef)recorderProperty;	// 0x2c2cabc1
- (BOOL)_setContrast:(float)contrast;	// 0x2c2cae89
- (BOOL)_setExposureWithMode:(int)mode pointOfInterest:(id)interest;	// 0x2c2c7855
- (BOOL)_setFaceDetectionDebugMetadataReportingEnabled:(BOOL)enabled;	// 0x2c2ca751
- (BOOL)_setFaceDetectionDrivenImageProcessingEnabled:(BOOL)enabled;	// 0x2c2ca2d1
- (void)_setFlashActive:(BOOL)active;	// 0x2c2c87d5
- (BOOL)_setFlashMode:(int)mode;	// 0x2c2c88d5
- (BOOL)_setFloatValue:(float)value forRecorderProperty:(CFStringRef)recorderProperty;	// 0x2c2cab85
- (BOOL)_setFocusWithMode:(int)mode pointOfInterest:(id)interest;	// 0x2c2c6cd1
- (BOOL)_setImageControlMode:(int)mode;	// 0x2c2c9e69
- (BOOL)_setNumber:(id)number forRecorderProperty:(CFStringRef)recorderProperty;	// 0x2c2cabfd
- (BOOL)_setSaturation:(float)saturation;	// 0x2c2cad35
- (BOOL)_setSubjectAreaChangeMonitoringEnabled:(BOOL)enabled;	// 0x2c2c9b39
- (void)_setTorchActive:(BOOL)active;	// 0x2c2c8b51
- (long)_setTorchMode:(int)mode withLevel:(float)level;	// 0x2c2c8f1d
- (BOOL)_setWhiteBalanceMode:(int)mode;	// 0x2c2c8341
- (BOOL)_setWhiteBalanceTemperature:(float)temperature;	// 0x2c2c8605
- (BOOL)_setYoMamaWearsFancyGlassesDetectionEnabled:(BOOL)enabled;	// 0x2c2ca8a9
- (BOOL)_subjectAreaChangeMonitoringEnabled;	// 0x2c2c9c61
- (void)_teardownFigRecorderForTorchApps;	// 0x2c2c9a25
- (void)_teardownTorchAppsKillTimer;	// 0x2c2c8ead
- (int)_torchMode;	// 0x2c2c8c41
- (void)_updateFlashAndTorchAvailability;	// 0x2c2c954d
- (void)_updateImageControlMode;	// 0x2c2ca0c5
- (int)_whiteBalanceMode;	// 0x2c2c82ad
// converted property getter: - (id)activeFormat;	// 0x2c2c4edd
// converted property getter: - (XXStruct_pwHToB)activeVideoMaxFrameDuration;	// 0x2c2c5aa1
// converted property getter: - (XXStruct_pwHToB)activeVideoMinFrameDuration;	// 0x2c2c5401
// converted property getter: - (float)autoExposureBias;	// 0x2c2c7fa1
// converted property getter: - (int)autoFocusRangeRestriction;	// 0x2c2c74e9
// converted property getter: - (BOOL)automaticallyAdjustsImageControlMode;	// 0x2c2c9cf9
// converted property getter: - (BOOL)automaticallyEnablesLowLightBoostWhenAvailable;	// 0x2c2cbc01
- (void)cancelVideoZoomRamp;	// 0x2c2cb9c1
// converted property getter: - (float)contrast;	// 0x2c2cae45
- (void *)copyFigCaptureStreamFactoryTestProperty:(CFStringRef)property error:(id *)error;	// 0x2c2cbced
- (void)dealloc;	// 0x2c2c3cd9
// converted property getter: - (OpaqueCMClock *)deviceClock;	// 0x2c2ccf4d
- (id)devicePropertiesDictionary;	// 0x2c2c615d
- (BOOL)doesHandleNotification:(id)notification;	// 0x2c2cbf09
// converted property getter: - (XXStruct_pwHToB)exposureDuration;	// 0x2c2c7db5
// converted property getter: - (float)exposureGain;	// 0x2c2c7ea9
// converted property getter: - (int)exposureMode;	// 0x2c2c7b21
// converted property getter: - (CGPoint)exposurePointOfInterest;	// 0x2c2c8135
// converted property getter: - (CGRect)faceRectangle;	// 0x2c2ca5a9
// converted property getter: - (int)faceRectangleAngle;	// 0x2c2ca641
- (void)finishPendingAdjustmentsKVO;	// 0x2c2c6ae5
// converted property getter: - (int)flashMode;	// 0x2c2c89ad
// converted property getter: - (int)focusMode;	// 0x2c2c71f5
// converted property getter: - (CGPoint)focusPointOfInterest;	// 0x2c2c73b5
// converted property getter: - (float)focusPosition;	// 0x2c2c75b1
// converted property getter: - (id)formats;	// 0x2c2c40b9
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x2c2cc079
- (BOOL)hasFlash;	// 0x2c2c8715
- (BOOL)hasMediaType:(id)type;	// 0x2c2c3fcd
- (BOOL)hasTorch;	// 0x2c2c8b01
// converted property getter: - (int)imageControlMode;	// 0x2c2c9e59
// converted property getter: - (BOOL)isAdjustingExposure;	// 0x2c2c820d
// converted property getter: - (BOOL)isAdjustingFocus;	// 0x2c2c748d
- (BOOL)isAdjustingWhiteBalance;	// 0x2c2c821d
- (BOOL)isAutoFocusRangeRestrictionSupported;	// 0x2c2c74ad
// converted property getter: - (BOOL)isConnected;	// 0x2c2c6145
- (BOOL)isExposureModeSupported:(int)supported;	// 0x2c2c77c1
- (BOOL)isExposurePointOfInterestSupported;	// 0x2c2c80f5
// converted property getter: - (BOOL)isFaceDetectionDebugMetadataReportingEnabled;	// 0x2c2ca7ed
// converted property getter: - (BOOL)isFaceDetectionDrivenImageProcessingEnabled;	// 0x2c2ca2c1
- (BOOL)isFaceDetectionDuringVideoPreviewSupported;	// 0x2c2ca281
- (BOOL)isFaceDetectionSupported;	// 0x2c2ca241
// converted property getter: - (BOOL)isFlashActive;	// 0x2c2c8755
// converted property getter: - (BOOL)isFlashAvailable;	// 0x2c2c89bd
- (BOOL)isFlashModeSupported:(int)supported;	// 0x2c2c8765
- (BOOL)isFocusModeSupported:(int)supported;	// 0x2c2c6c01
- (BOOL)isFocusPointOfInterestSupported;	// 0x2c2c739d
- (BOOL)isHDRSupported;	// 0x2c2cb9f5
- (BOOL)isImageControlModeSupported:(int)supported;	// 0x2c2c9ce9
- (BOOL)isInUseByAnotherApplication;	// 0x2c2c6141
// converted property getter: - (BOOL)isLowLightBoostEnabled;	// 0x2c2cbab9
- (BOOL)isLowLightBoostSupported;	// 0x2c2cba79
- (BOOL)isMachineReadableCodeDetectionSupported;	// 0x2c2cab59
// converted property getter: - (BOOL)isManualExposureSupportEnabled;	// 0x2c2c7f81
// converted property getter: - (BOOL)isManualFocusSupportEnabled;	// 0x2c2c7689
- (BOOL)isRampingVideoZoom;	// 0x2c2cb999
// converted property getter: - (BOOL)isSmoothAutoFocusEnabled;	// 0x2c2c76e9
- (BOOL)isSmoothAutoFocusSupported;	// 0x2c2c76a9
// converted property getter: - (BOOL)isSubjectAreaChangeMonitoringEnabled;	// 0x2c2c9b29
// converted property getter: - (BOOL)isTorchActive;	// 0x2c2c8b41
// converted property getter: - (BOOL)isTorchAvailable;	// 0x2c2c8c05
- (BOOL)isTorchModeSupported:(int)supported;	// 0x2c2c8b95
- (BOOL)isWhiteBalanceModeSupported:(int)supported;	// 0x2c2c823d
- (BOOL)isYoMamaWearsCombatBootsSupported;	// 0x2c2cba75
// converted property getter: - (BOOL)isYoMamaWearsFancyGlassesDetectionEnabled;	// 0x2c2ca889
- (BOOL)isYoMamaWearsFancyGlassesDetectionSupported;	// 0x2c2ca885
- (id)localizedName;	// 0x2c2c3f8d
- (id)modelID;	// 0x2c2c3f65
- (int)position;	// 0x2c2c6bbd
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)profileConnection userInfo:(id)info;	// 0x2c2c3e35
- (void)rampToVideoZoomFactor:(float)videoZoomFactor withRate:(float)rate;	// 0x2c2cb529
// converted property getter: - (float)saturation;	// 0x2c2cacf1
// converted property setter: - (void)setActiveFormat:(id)format;	// 0x2c2c4fc5
- (void)setActiveInput:(id)input;	// 0x2c2c695d
// converted property setter: - (void)setActiveVideoMaxFrameDuration:(XXStruct_pwHToB)duration;	// 0x2c2c5da1
// converted property setter: - (void)setActiveVideoMinFrameDuration:(XXStruct_pwHToB)duration;	// 0x2c2c5701
// converted property setter: - (void)setAutoExposureBias:(float)bias;	// 0x2c2c800d
// converted property setter: - (void)setAutoFocusRangeRestriction:(int)restriction;	// 0x2c2c74f9
// converted property setter: - (void)setAutomaticallyAdjustsImageControlMode:(BOOL)mode;	// 0x2c2c9d09
// converted property setter: - (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)available;	// 0x2c2cbc11
// converted property setter: - (void)setContrast:(float)contrast;	// 0x2c2caeb1
// converted property setter: - (void)setExposureDuration:(XXStruct_pwHToB)duration;	// 0x2c2c7dd5
// converted property setter: - (void)setExposureGain:(float)gain;	// 0x2c2c7eb9
// converted property setter: - (void)setExposureMode:(int)mode;	// 0x2c2c7b31
// converted property setter: - (void)setExposurePointOfInterest:(CGPoint)interest;	// 0x2c2c814d
// converted property setter: - (void)setFaceDetectionDebugMetadataReportingEnabled:(BOOL)enabled;	// 0x2c2ca651
// converted property setter: - (void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)enabled;	// 0x2c2ca40d
- (void)setFigCaptureStreamFactoryTestProperty:(CFStringRef)property withValue:(void *)value error:(id *)error;	// 0x2c2cbdd9
// converted property setter: - (void)setFlashMode:(int)mode;	// 0x2c2c89f9
// converted property setter: - (void)setFocusMode:(int)mode;	// 0x2c2c7205
// converted property setter: - (void)setFocusPointOfInterest:(CGPoint)interest;	// 0x2c2c73cd
// converted property setter: - (void)setFocusPosition:(float)position;	// 0x2c2c75c1
// converted property setter: - (void)setImageControlMode:(int)mode;	// 0x2c2c9f45
// converted property setter: - (void)setManualExposureSupportEnabled:(BOOL)enabled;	// 0x2c2c7f91
// converted property setter: - (void)setManualFocusSupportEnabled:(BOOL)enabled;	// 0x2c2c7699
// converted property setter: - (void)setSaturation:(float)saturation;	// 0x2c2cad5d
// converted property setter: - (void)setSmoothAutoFocusEnabled:(BOOL)enabled;	// 0x2c2c76f9
// converted property setter: - (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)enabled;	// 0x2c2c9bd5
// converted property setter: - (void)setTorchMode:(int)mode;	// 0x2c2c929d
- (BOOL)setTorchModeOnWithLevel:(float)level error:(id *)error;	// 0x2c2c93b1
// converted property setter: - (void)setVideoZoomDownscaleStageHint:(int)hint;	// 0x2c2cb12d
// converted property setter: - (void)setVideoZoomDrawOverlay:(BOOL)overlay;	// 0x2c2cb0dd
// converted property setter: - (void)setVideoZoomFactor:(float)factor;	// 0x2c2cb2a1
// converted property setter: - (void)setVideoZoomRampAcceleration:(float)acceleration;	// 0x2c2cb085
// converted property setter: - (void)setVideoZoomUpscaleStageHint:(int)hint;	// 0x2c2cb19d
// converted property setter: - (void)setWhiteBalanceMode:(int)mode;	// 0x2c2c83ed
// converted property setter: - (void)setWhiteBalanceTemperature:(float)temperature;	// 0x2c2c862d
// converted property setter: - (void)setYoMamaWearsFancyGlassesDetectionEnabled:(BOOL)enabled;	// 0x2c2ca941
- (BOOL)startUsingDevice:(id *)device;	// 0x2c2c6155
- (void)stopUsingDevice;	// 0x2c2c6159
- (BOOL)supportsAVCaptureSessionPreset:(id)preset;	// 0x2c2c405d
// converted property getter: - (float)torchLevel;	// 0x2c2c8b85
// converted property getter: - (int)torchMode;	// 0x2c2c928d
- (id)uniqueID;	// 0x2c2c3f3d
// converted property getter: - (int)videoZoomDownscaleStageHint;	// 0x2c2cb11d
// converted property getter: - (BOOL)videoZoomDrawOverlay;	// 0x2c2cb0cd
// converted property getter: - (float)videoZoomFactor;	// 0x2c2cb291
// converted property getter: - (float)videoZoomRampAcceleration;	// 0x2c2cb075
// converted property getter: - (int)videoZoomUpscaleStageHint;	// 0x2c2cb18d
// converted property getter: - (int)whiteBalanceMode;	// 0x2c2c83dd
// converted property getter: - (float)whiteBalanceTemperature;	// 0x2c2c85c1
// converted property getter: - (BOOL)yoMamaWearsFancyGlasses;	// 0x2c2ca899
@end


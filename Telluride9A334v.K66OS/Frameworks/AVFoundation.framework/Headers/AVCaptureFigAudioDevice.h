/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVCaptureDevice.h"

@class NSDictionary, NSString;

@interface AVCaptureFigAudioDevice : AVCaptureDevice {
	NSDictionary *_deviceProperties;	// 8 = 0x8
	BOOL _levelMeteringEnabled;	// 12 = 0xc
	BOOL _isConnected;	// 13 = 0xd
	NSString *_localizedName;	// 16 = 0x10
}
@property(readonly, assign) BOOL isConnected;	// G=0x35479509; converted property
@property(readonly, retain) NSString *localizedName;	// G=0x354794f5; converted property
+ (id)_devices;	// 0x35479575
- (id)init;	// 0x35479521
- (id)initWithProperties:(id)properties;	// 0x354799e9
- (void)audioInputDeviceLocalizedNameDidChangeHandler:(id)audioInputDeviceLocalizedName;	// 0x354796ed
- (void)audioInputDevicesDidChangeHandler:(id)audioInputDevices;	// 0x354797bd
- (void)dealloc;	// 0x35479959
- (id)devicePropertiesDictionary;	// 0x3547989d
- (BOOL)hasMediaType:(id)type;	// 0x354798d5
// converted property getter: - (BOOL)isConnected;	// 0x35479509
- (BOOL)isInUseByAnotherApplication;	// 0x35479505
// converted property getter: - (id)localizedName;	// 0x354794f5
- (id)modelID;	// 0x35479909
- (BOOL)startUsingDevice:(id *)device;	// 0x35479519
- (void)stopUsingDevice;	// 0x3547951d
- (BOOL)supportsAVCaptureSessionPreset:(id)preset;	// 0x35479869
- (id)uniqueID;	// 0x35479931
@end


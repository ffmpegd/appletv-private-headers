/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
 */

#import "BluetoothManager-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface BluetoothManager : NSObject {
	BTLocalDeviceImplRef _localDevice;	// 4 = 0x4
	BTSessionImplRef _session;	// 8 = 0x8
	int _available;	// 12 = 0xc
	BOOL _audioConnected;	// 16 = 0x10
	BOOL _scanningEnabled;	// 17 = 0x11
	BOOL _scanningInProgress;	// 18 = 0x12
	unsigned _scanningServiceMask;	// 20 = 0x14
	BTDiscoveryAgentImplRef _discoveryAgent;	// 24 = 0x18
	BTPairingAgentImplRef _pairingAgent;	// 28 = 0x1c
	BTAccessoryManagerImplRef _accessoryManager;	// 32 = 0x20
	NSMutableDictionary *_btAddrDict;	// 36 = 0x24
	NSMutableDictionary *_btDeviceDict;	// 40 = 0x28
	NSMutableDictionary *_seekingInProgressDict;	// 44 = 0x2c
}
@property(assign) BOOL audioConnected;	// G=0x31442b31; S=0x31442b41; converted property
@property(assign) BOOL connectable;	// G=0x31443319; S=0x314432c1; converted property
@property(assign) BOOL devicePairingEnabled;	// G=0x31442b15; S=0x3144369d; converted property
@property(assign) BOOL deviceScanningEnabled;	// G=0x31442add; S=0x314438f5; converted property
@property(assign, getter=isDiscoverable) BOOL discoverable;	// G=0x3144381d; S=0x314437a1; converted property
+ (int)lastInitError;	// 0x31442ab5
+ (id)sharedInstance;	// 0x31442bbd
- (id)init;	// 0x31442b5d
- (BTAccessoryManagerImplRef)_accessoryManager;	// 0x31442aa5
- (BOOL)_attach:(id)attach;	// 0x31444581
- (void)_cleanup:(BOOL)cleanup;	// 0x314441cd
- (void)_connectabilityChanged;	// 0x31442ff9
- (void)_connectedStatusChanged;	// 0x31443015
- (void)_discoveryStateChanged;	// 0x31443861
- (BOOL)_onlySensorsConnected;	// 0x31443095
- (void)_postNotification:(id)notification;	// 0x31444049
- (void)_postNotificationWithArray:(id)array;	// 0x31444095
- (void)_powerChanged;	// 0x31443dc1
- (void)_removeDevice:(id)device;	// 0x31443b25
- (void)_restartScan;	// 0x3144387d
- (void)_scanForServices:(unsigned)services withMode:(int)mode;	// 0x314439bd
- (void)_sendSeekStart:(id)start forDevice:(id)device;	// 0x31442df1
- (void)_setScanState:(int)state;	// 0x31442afd
- (BOOL)_setup:(BTSessionImplRef)setup;	// 0x3144434d
- (void)_stopSeeking:(id)seeking forDevice:(id)device;	// 0x31442d59
- (void)acceptSSP:(int)ssp forDevice:(id)device;	// 0x314433bd
- (id)addDeviceIfNeeded:(BTDeviceImplRef)needed;	// 0x31443bed
// converted property getter: - (BOOL)audioConnected;	// 0x31442b31
- (BOOL)available;	// 0x31442ac5
- (void)cancelPairing;	// 0x3144365d
- (void)connectDevice:(id)device;	// 0x3144335d
- (void)connectDevice:(id)device withServices:(unsigned)services;	// 0x31443371
// converted property getter: - (BOOL)connectable;	// 0x31443319
- (BOOL)connected;	// 0x31443031
- (id)connectedDevices;	// 0x31443119
- (id)connectingDevices;	// 0x314431ed
- (void)dealloc;	// 0x3144418d
// converted property getter: - (BOOL)devicePairingEnabled;	// 0x31442b15
// converted property getter: - (BOOL)deviceScanningEnabled;	// 0x31442add
- (BOOL)deviceScanningInProgress;	// 0x31442aed
- (void)enableTestMode;	// 0x31442c2d
- (BOOL)enabled;	// 0x31443ecd
- (void)endVoiceCommand:(id)command;	// 0x31442f61
- (BOOL)isAnyoneScanning;	// 0x31443d7d
// converted property getter: - (BOOL)isDiscoverable;	// 0x3144381d
- (BOOL)isServiceSupported:(unsigned)supported;	// 0x31442c6d
- (id)pairedDevices;	// 0x314434b1
- (id)pairedDevices:(BOOL)devices;	// 0x314434c5
- (id)pairedLEDevices;	// 0x3144349d
- (void)postNotification:(id)notification;	// 0x31444015
- (void)postNotificationName:(id)name object:(id)object;	// 0x31443fb1
- (void)postNotificationName:(id)name object:(id)object error:(id)error;	// 0x31443f49
- (int)powerState;	// 0x31443f05
- (BOOL)powered;	// 0x31443ee5
- (void)resetDeviceScanning;	// 0x31443a61
- (void)scanForConnectableDevices:(unsigned)connectableDevices;	// 0x31443995
- (void)scanForServices:(unsigned)services;	// 0x314439a9
- (void)sendAllContactsToDevice:(id)device;	// 0x31442ca5
- (void)sendContact:(id)contact toDevice:(id)device;	// 0x31442ce1
// converted property setter: - (void)setAudioConnected:(BOOL)connected;	// 0x31442b41
// converted property setter: - (void)setConnectable:(BOOL)connectable;	// 0x314432c1
// converted property setter: - (void)setDevicePairingEnabled:(BOOL)enabled;	// 0x3144369d
// converted property setter: - (void)setDeviceScanningEnabled:(BOOL)enabled;	// 0x314438f5
// converted property setter: - (void)setDiscoverable:(BOOL)discoverable;	// 0x314437a1
- (BOOL)setEnabled:(BOOL)enabled;	// 0x31443e35
- (void)setPincode:(id)pincode forDevice:(id)device;	// 0x3144341d
- (BOOL)setPowered:(BOOL)powered;	// 0x31443e6d
- (void)startVoiceCommand:(id)command;	// 0x31442fad
- (void)unpairDevice:(id)device;	// 0x314435e5
- (BOOL)wasDeviceDiscovered:(id)discovered;	// 0x31443a8d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
 */

#import "BluetoothManager-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface BluetoothDevice : NSObject {
	NSString *_name;	// 4 = 0x4
	NSString *_address;	// 8 = 0x8
	BTDeviceImplRef _device;	// 12 = 0xc
	BOOL _isLowEnergy;	// 16 = 0x10
}
@property(readonly, retain) NSString *address;	// G=0x30dfd839; converted property
@property(assign) BTDeviceImplRef device;	// G=0x30dfd0c1; S=0x30dfd0d1; converted property
@property(readonly, assign) BOOL isLowEnergy;	// G=0x30dfd0e9; converted property
@property(readonly, retain) NSString *name;	// G=0x30dfd879; converted property
@property(assign) XXStruct_La4IvC syncSettings;	// G=0x30dfd2d9; S=0x30dfd285; converted property
- (id)initWithDevice:(BTDeviceImplRef)device address:(id)address isLE:(BOOL)le;	// 0x30dfd111
- (void)_clearName;	// 0x30dfd92d
- (BOOL)_isNameCached;	// 0x30dfd0f9
- (void)acceptSSP:(int)ssp;	// 0x30dfd3c1
// converted property getter: - (id)address;	// 0x30dfd839
- (int)batteryLevel;	// 0x30dfd58d
- (int)compare:(id)compare;	// 0x30dfd959
- (void)connect;	// 0x30dfd4b9
- (void)connectWithServices:(unsigned)services;	// 0x30dfd47d
- (BOOL)connected;	// 0x30dfd67d
- (unsigned)connectedServices;	// 0x30dfd659
- (unsigned)connectedServicesCount;	// 0x30dfd611
- (id)copyWithZone:(NSZone *)zone;	// 0x30dfd9a1
- (void)dealloc;	// 0x30dfda45
- (id)description;	// 0x30dfd73d
// converted property getter: - (BTDeviceImplRef)device;	// 0x30dfd0c1
- (void)disconnect;	// 0x30dfd439
- (void)endVoiceCommand;	// 0x30dfd319
- (BOOL)isAccessory;	// 0x30dfd525
// converted property getter: - (BOOL)isLowEnergy;	// 0x30dfd0e9
- (BOOL)isServiceSupported:(unsigned)supported;	// 0x30dfd4f1
- (unsigned)majorClass;	// 0x30dfd7e5
- (unsigned)minorClass;	// 0x30dfd7b9
// converted property getter: - (id)name;	// 0x30dfd879
- (BOOL)paired;	// 0x30dfd6b9
- (id)scoUID;	// 0x30dfd6e9
// converted property setter: - (void)setDevice:(BTDeviceImplRef)device;	// 0x30dfd0d1
- (void)setPIN:(id)pin;	// 0x30dfd3fd
- (void)setSyncGroup:(int)group enabled:(BOOL)enabled;	// 0x30dfd199
// converted property setter: - (void)setSyncSettings:(XXStruct_La4IvC)settings;	// 0x30dfd285
- (void)startVoiceCommand;	// 0x30dfd351
- (BOOL)supportsBatteryLevel;	// 0x30dfd5f9
- (id)syncGroups;	// 0x30dfd1b1
// converted property getter: - (XXStruct_La4IvC)syncSettings;	// 0x30dfd2d9
- (int)type;	// 0x30dfd811
- (void)unpair;	// 0x30dfd389
@end


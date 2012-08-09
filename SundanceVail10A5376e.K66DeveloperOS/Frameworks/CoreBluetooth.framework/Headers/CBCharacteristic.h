/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import <NSObject.h> // Unknown library

@class CBUUID, NSData, NSArray, CBService;

@interface CBCharacteristic : NSObject {
	CBService *_service;	// 4 = 0x4
	CBUUID *_UUID;	// 8 = 0x8
	int _properties;	// 12 = 0xc
	NSData *_value;	// 16 = 0x10
	NSArray *_descriptors;	// 20 = 0x14
	BOOL _isBroadcasted;	// 24 = 0x18
	BOOL _isNotifying;	// 25 = 0x19
}
@property(readonly, assign, nonatomic) CBUUID *UUID;	// G=0x311543cd; @synthesize=_UUID
@property(retain) NSArray *descriptors;	// G=0x31154411; S=0x31154425; @synthesize=_descriptors
@property(readonly, assign) BOOL isBroadcasted;	// G=0x31154435; @synthesize=_isBroadcasted
@property(readonly, assign) BOOL isNotifying;	// G=0x3115444d; @synthesize=_isNotifying
@property(readonly, assign, nonatomic) int properties;	// G=0x311543dd; @synthesize=_properties
@property(assign, nonatomic) CBService *service;	// G=0x311543ad; S=0x311543bd; @synthesize=_service
@property(retain) NSData *value;	// G=0x311543ed; S=0x31154401; @synthesize=_value
// declared property getter: - (id)UUID;	// 0x311543cd
// declared property getter: - (id)descriptors;	// 0x31154411
// declared property getter: - (BOOL)isBroadcasted;	// 0x31154435
// declared property getter: - (BOOL)isNotifying;	// 0x3115444d
// declared property getter: - (int)properties;	// 0x311543dd
// declared property getter: - (id)service;	// 0x311543ad
// declared property setter: - (void)setDescriptors:(id)descriptors;	// 0x31154425
// declared property setter: - (void)setService:(id)service;	// 0x311543bd
// declared property setter: - (void)setValue:(id)value;	// 0x31154401
// declared property getter: - (id)value;	// 0x311543ed
@end

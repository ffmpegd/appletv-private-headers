/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import <NSObject.h> // Unknown library

@class CBUUID, CBPeripheral, NSArray;

@interface CBService : NSObject {
	CBPeripheral *_peripheral;	// 4 = 0x4
	CBUUID *_UUID;	// 8 = 0x8
	BOOL _isPrimary;	// 12 = 0xc
	NSArray *_includedServices;	// 16 = 0x10
	NSArray *_characteristics;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) CBUUID *UUID;	// G=0x30e7bd21; @synthesize=_UUID
@property(retain) NSArray *characteristics;	// G=0x30e7bd65; S=0x30e7bd79; @synthesize=_characteristics
@property(retain) NSArray *includedServices;	// G=0x30e7bd41; S=0x30e7bd55; @synthesize=_includedServices
@property(readonly, assign, nonatomic) BOOL isPrimary;	// G=0x30e7bd31; @synthesize=_isPrimary
@property(readonly, assign, nonatomic) CBPeripheral *peripheral;	// G=0x30e7bd11; @synthesize=_peripheral
// declared property getter: - (id)UUID;	// 0x30e7bd21
// declared property getter: - (id)characteristics;	// 0x30e7bd65
// declared property getter: - (id)includedServices;	// 0x30e7bd41
// declared property getter: - (BOOL)isPrimary;	// 0x30e7bd31
// declared property getter: - (id)peripheral;	// 0x30e7bd11
// declared property setter: - (void)setCharacteristics:(id)characteristics;	// 0x30e7bd79
// declared property setter: - (void)setIncludedServices:(id)services;	// 0x30e7bd55
@end

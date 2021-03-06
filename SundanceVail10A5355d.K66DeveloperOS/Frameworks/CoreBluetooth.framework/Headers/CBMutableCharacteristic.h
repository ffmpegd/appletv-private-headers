/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import "CBCharacteristic.h"

@class CBUUID, NSData, NSArray, NSNumber;

@interface CBMutableCharacteristic : CBCharacteristic {
	int _permissions;	// 28 = 0x1c
	NSNumber *_ID;	// 32 = 0x20
}
@property(retain) NSNumber *ID;	// G=0x34cb0dfd; S=0x34cb0e11; @synthesize=_ID
@property(retain, nonatomic) CBUUID *UUID;
@property(retain) NSArray *descriptors;	// S=0x34cb0b39; 
@property(assign, nonatomic) int permissions;	// G=0x34cb0ddd; S=0x34cb0ded; @synthesize=_permissions
@property(assign, nonatomic) int properties;	// S=0x34cb0a2d; 
@property(retain) NSData *value;
- (id)initWithType:(id)type properties:(int)properties value:(id)value permissions:(int)permissions;	// 0x34cb08d9
// declared property getter: - (id)ID;	// 0x34cb0dfd
- (id)description;	// 0x34cb097d
// declared property getter: - (int)permissions;	// 0x34cb0ddd
// declared property setter: - (void)setDescriptors:(id)descriptors;	// 0x34cb0b39
// declared property setter: - (void)setID:(id)anId;	// 0x34cb0e11
// declared property setter: - (void)setPermissions:(int)permissions;	// 0x34cb0ded
// declared property setter: - (void)setProperties:(int)properties;	// 0x34cb0a2d
@end


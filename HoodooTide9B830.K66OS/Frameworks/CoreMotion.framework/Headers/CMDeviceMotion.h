/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import "CMLogItem.h"

@class CMAttitude;

@interface CMDeviceMotion : CMLogItem {
@private
	id _internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) CMAttitude *attitude;	// G=0x3677aec9; 
@property(readonly, assign, nonatomic) XXStruct_taVrlB gravity;	// G=0x3677af2d; 
@property(readonly, assign, nonatomic) XXStruct_1dFDiB magneticField;	// G=0x3677afb5; 
@property(readonly, assign, nonatomic) XXStruct_taVrlB rotationRate;	// G=0x3677aee9; 
@property(readonly, assign, nonatomic) XXStruct_taVrlB userAcceleration;	// G=0x3677af71; 
- (id)initWithCoder:(id)coder;	// 0x3677a641
- (id)initWithDeviceMotion:(XXStruct_96S$IC)deviceMotion andTimestamp:(double)timestamp;	// 0x3677a55d
// declared property getter: - (id)attitude;	// 0x3677aec9
- (id)copyWithZone:(NSZone *)zone;	// 0x3677abf5
- (void)dealloc;	// 0x3677aba9
- (id)description;	// 0x3677ac59
- (void)encodeWithCoder:(id)coder;	// 0x3677a91d
// declared property getter: - (XXStruct_taVrlB)gravity;	// 0x3677af2d
// declared property getter: - (XXStruct_1dFDiB)magneticField;	// 0x3677afb5
// declared property getter: - (XXStruct_taVrlB)rotationRate;	// 0x3677aee9
// declared property getter: - (XXStruct_taVrlB)userAcceleration;	// 0x3677af71
@end


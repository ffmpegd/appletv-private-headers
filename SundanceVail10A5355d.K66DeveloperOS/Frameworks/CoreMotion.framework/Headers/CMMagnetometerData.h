/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import "CMLogItem.h"


@interface CMMagnetometerData : CMLogItem {
	id _internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) XXStruct_taVrlB magneticField;	// G=0x3775df75; 
- (id)initWithCoder:(id)coder;	// 0x3775dc35
- (id)initWithMagneticField:(XXStruct_ZUkpeA)magneticField andTimestamp:(double)timestamp;	// 0x3775dbad
- (id)copyWithZone:(NSZone *)zone;	// 0x3775de4d
- (void)dealloc;	// 0x3775de01
- (id)description;	// 0x3775dea9
- (void)encodeWithCoder:(id)coder;	// 0x3775dd31
// declared property getter: - (XXStruct_taVrlB)magneticField;	// 0x3775df75
@end

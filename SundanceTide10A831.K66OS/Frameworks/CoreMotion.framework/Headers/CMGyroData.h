/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import "CMLogItem.h"


@interface CMGyroData : CMLogItem {
	id _internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) XXStruct_taVrlB rotationRate;	// G=0x370b72d1; 
- (id)initWithCoder:(id)coder;	// 0x370b6f49
- (id)initWithRotationRate:(XXStruct_ZUkpeA)rotationRate andTimestamp:(double)timestamp;	// 0x370b6ebd
- (id)copyWithZone:(NSZone *)zone;	// 0x370b71a5
- (void)dealloc;	// 0x370b7159
- (id)description;	// 0x370b7201
- (void)encodeWithCoder:(id)coder;	// 0x370b7069
// declared property getter: - (XXStruct_taVrlB)rotationRate;	// 0x370b72d1
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADShade.h"
#import "OfficeImport-Structs.h"


@interface OADLinearShade : OADShade {
	float mAngle;	// 12 = 0xc
	BOOL mIsAngleOverridden;	// 16 = 0x10
	BOOL mScaled;	// 17 = 0x11
	BOOL mIsScaledOverridden;	// 18 = 0x12
}
@property(assign) float angle;	// G=0x348876a5; S=0x34885385; converted property
@property(assign) BOOL scaled;	// G=0x34a4cda5; S=0x348853a5; converted property
+ (id)defaultProperties;	// 0x348852e1
- (id)initWithDefaults;	// 0x34885329
// converted property getter: - (float)angle;	// 0x348876a5
- (id)copyWithZone:(NSZone *)zone;	// 0x3495c531
- (unsigned)hash;	// 0x34a4ce09
- (BOOL)isAngleOverridden;	// 0x348876d5
- (BOOL)isEqual:(id)equal;	// 0x34a4ce59
- (BOOL)isScaledOverridden;	// 0x34a4cdd5
// converted property getter: - (BOOL)scaled;	// 0x34a4cda5
// converted property setter: - (void)setAngle:(float)angle;	// 0x34885385
// converted property setter: - (void)setScaled:(BOOL)scaled;	// 0x348853a5
@end


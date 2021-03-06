/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADEffect.h"

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADShadowEffect : OADEffect {
@private
	OADColor *mColor;	// 8 = 0x8
	float mBlurRadius;	// 12 = 0xc
	float mDistance;	// 16 = 0x10
	float mAngle;	// 20 = 0x14
}
@property(assign) float angle;	// G=0x3444acad; S=0x3443ee55; converted property
@property(assign) float blurRadius;	// G=0x3444ac8d; S=0x3443ed65; converted property
@property(retain) id color;	// G=0x3444ac7d; S=0x3443ecc1; converted property
@property(assign) float distance;	// G=0x3444ac9d; S=0x3443ee45; converted property
- (id)initWithShadowEffect:(id)shadowEffect type:(int)type;	// 0x34537d95
- (id)initWithType:(int)type;	// 0x3443eaad
// converted property getter: - (float)angle;	// 0x3444acad
// converted property getter: - (float)blurRadius;	// 0x3444ac8d
// converted property getter: - (id)color;	// 0x3444ac7d
- (void)dealloc;	// 0x3444c88d
// converted property getter: - (float)distance;	// 0x3444ac9d
- (unsigned)hash;	// 0x3458ea49
- (BOOL)isEqual:(id)equal;	// 0x3444ab3d
// converted property setter: - (void)setAngle:(float)angle;	// 0x3443ee55
// converted property setter: - (void)setBlurRadius:(float)radius;	// 0x3443ed65
// converted property setter: - (void)setColor:(id)color;	// 0x3443ecc1
// converted property setter: - (void)setDistance:(float)distance;	// 0x3443ee45
- (void)setStyleColor:(id)color;	// 0x34537ef9
@end


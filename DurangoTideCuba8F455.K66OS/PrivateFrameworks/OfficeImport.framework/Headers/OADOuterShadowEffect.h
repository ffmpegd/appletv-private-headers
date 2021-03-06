/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADShadowEffect.h"


__attribute__((visibility("hidden")))
@interface OADOuterShadowEffect : OADShadowEffect {
@private
	float mXScale;	// 24 = 0x18
	float mYScale;	// 28 = 0x1c
	float mXSkew;	// 32 = 0x20
	float mYSkew;	// 36 = 0x24
	int mAlignment;	// 40 = 0x28
	BOOL mRotateWithShape;	// 44 = 0x2c
}
@property(assign) int alignment;	// G=0x32b94b1d; S=0x32c82101; converted property
@property(assign) BOOL rotateWithShape;	// G=0x32b94b2d; S=0x32c534c9; converted property
@property(assign) float xScale;	// G=0x32b94add; S=0x32c95c29; converted property
@property(assign) float xSkew;	// G=0x32b94afd; S=0x32c969f1; converted property
@property(assign) float yScale;	// G=0x32b94aed; S=0x32c969e1; converted property
@property(assign) float ySkew;	// G=0x32b94b0d; S=0x32c95c19; converted property
- (id)init;	// 0x32b88a25
// converted property getter: - (int)alignment;	// 0x32b94b1d
- (id)copyWithZone:(NSZone *)zone;	// 0x32c81ced
- (unsigned)hash;	// 0x32cd6aa1
- (BOOL)isEqual:(id)equal;	// 0x32b94961
// converted property getter: - (BOOL)rotateWithShape;	// 0x32b94b2d
// converted property setter: - (void)setAlignment:(int)alignment;	// 0x32c82101
// converted property setter: - (void)setRotateWithShape:(BOOL)shape;	// 0x32c534c9
// converted property setter: - (void)setXScale:(float)scale;	// 0x32c95c29
// converted property setter: - (void)setXSkew:(float)skew;	// 0x32c969f1
// converted property setter: - (void)setYScale:(float)scale;	// 0x32c969e1
// converted property setter: - (void)setYSkew:(float)skew;	// 0x32c95c19
// converted property getter: - (float)xScale;	// 0x32b94add
// converted property getter: - (float)xSkew;	// 0x32b94afd
// converted property getter: - (float)yScale;	// 0x32b94aed
// converted property getter: - (float)ySkew;	// 0x32b94b0d
@end


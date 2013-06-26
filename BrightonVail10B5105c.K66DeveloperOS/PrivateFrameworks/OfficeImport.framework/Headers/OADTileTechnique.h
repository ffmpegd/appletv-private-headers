/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADImageFillTechnique.h"
#import "OfficeImport-Structs.h"


@interface OADTileTechnique : OADImageFillTechnique {
	float mOffsetX;	// 12 = 0xc
	BOOL mIsOffsetXOverridden;	// 16 = 0x10
	float mOffsetY;	// 20 = 0x14
	BOOL mIsOffsetYOverridden;	// 24 = 0x18
	float mScaleX;	// 28 = 0x1c
	BOOL mIsScaleXOverridden;	// 32 = 0x20
	float mScaleY;	// 36 = 0x24
	BOOL mIsScaleYOverridden;	// 40 = 0x28
	int mFlipMode;	// 44 = 0x2c
	BOOL mIsFlipModeOverridden;	// 48 = 0x30
	int mAlignment;	// 52 = 0x34
	BOOL mIsAlignmentOverridden;	// 56 = 0x38
}
@property(assign) int alignment;	// G=0x37af07fd; S=0x3790ba2d; converted property
@property(assign) int flipMode;	// G=0x37af0799; S=0x3790ba0d; converted property
@property(assign) float offsetX;	// G=0x37af0609; S=0x3790b98d; converted property
@property(assign) float offsetY;	// G=0x37af066d; S=0x3790b9ad; converted property
@property(assign) float scaleX;	// G=0x37af06d1; S=0x3790b9cd; converted property
@property(assign) float scaleY;	// G=0x37af0735; S=0x3790b9ed; converted property
+ (id)defaultProperties;	// 0x3790b895
- (id)initWithDefaults;	// 0x3790b8dd
// converted property getter: - (int)alignment;	// 0x37af07fd
- (id)copyWithZone:(NSZone *)zone;	// 0x37a6509d
// converted property getter: - (int)flipMode;	// 0x37af0799
- (unsigned)hash;	// 0x37af0861
- (BOOL)isAlignmentOverridden;	// 0x37af082d
- (BOOL)isEqual:(id)equal;	// 0x37af0981
- (BOOL)isFlipModeOverridden;	// 0x37af07c9
- (BOOL)isOffsetXOverridden;	// 0x37af0639
- (BOOL)isOffsetYOverridden;	// 0x37af069d
- (BOOL)isScaleXOverridden;	// 0x37af0701
- (BOOL)isScaleYOverridden;	// 0x37af0765
// converted property getter: - (float)offsetX;	// 0x37af0609
// converted property getter: - (float)offsetY;	// 0x37af066d
// converted property getter: - (float)scaleX;	// 0x37af06d1
// converted property getter: - (float)scaleY;	// 0x37af0735
// converted property setter: - (void)setAlignment:(int)alignment;	// 0x3790ba2d
// converted property setter: - (void)setFlipMode:(int)mode;	// 0x3790ba0d
// converted property setter: - (void)setOffsetX:(float)x;	// 0x3790b98d
// converted property setter: - (void)setOffsetY:(float)y;	// 0x3790b9ad
// converted property setter: - (void)setScaleX:(float)x;	// 0x3790b9cd
// converted property setter: - (void)setScaleY:(float)y;	// 0x3790b9ed
@end

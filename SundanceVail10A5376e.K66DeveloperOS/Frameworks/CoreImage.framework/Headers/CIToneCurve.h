/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIVector, CIImage;

__attribute__((visibility("hidden")))
@interface CIToneCurve : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputPoint0;	// 40 = 0x28
	CIVector *inputPoint1;	// 44 = 0x2c
	CIVector *inputPoint2;	// 48 = 0x30
	CIVector *inputPoint3;	// 52 = 0x34
	CIVector *inputPoint4;	// 56 = 0x38
	CIImage *_curveImage;	// 60 = 0x3c
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x37305101; S=0x37305111; @synthesize
@property(copy, nonatomic) CIVector *inputPoint0;	// G=0x37305121; S=0x37303d71; @synthesize
@property(copy, nonatomic) CIVector *inputPoint1;	// G=0x37305135; S=0x37303dd5; @synthesize
@property(copy, nonatomic) CIVector *inputPoint2;	// G=0x37305149; S=0x37303e39; @synthesize
@property(copy, nonatomic) CIVector *inputPoint3;	// G=0x3730515d; S=0x37303e9d; @synthesize
@property(copy, nonatomic) CIVector *inputPoint4;	// G=0x37305171; S=0x37303f01; @synthesize
+ (id)curveImageFromPoints:(const CGPoint *)points;	// 0x37304ac9
+ (id)curveImageFromPoints:(const CGPoint *)points linear:(BOOL)linear;	// 0x373048b1
+ (id)customAttributes;	// 0x37303f65
+ (void)splineCurveTable:(float *)table tableSize:(int)size gamma:(float)gamma from:(const CGPoint *)from;	// 0x37304ae9
- (id)_initFromProperties:(id)properties;	// 0x37305849
- (BOOL)_isIdentity;	// 0x37304521
- (id)_kernel16;	// 0x37304389
- (id)_outputProperties;	// 0x37305189
- (void)dealloc;	// 0x37303d21
// declared property getter: - (id)inputImage;	// 0x37305101
// declared property getter: - (id)inputPoint0;	// 0x37305121
// declared property getter: - (id)inputPoint1;	// 0x37305135
// declared property getter: - (id)inputPoint2;	// 0x37305149
// declared property getter: - (id)inputPoint3;	// 0x3730515d
// declared property getter: - (id)inputPoint4;	// 0x37305171
- (id)outputImage;	// 0x37304699
- (void)setDefaults;	// 0x373042b9
// declared property setter: - (void)setInputImage:(id)image;	// 0x37305111
// declared property setter: - (void)setInputPoint0:(id)a0;	// 0x37303d71
// declared property setter: - (void)setInputPoint1:(id)a1;	// 0x37303dd5
// declared property setter: - (void)setInputPoint2:(id)a2;	// 0x37303e39
// declared property setter: - (void)setInputPoint3:(id)a3;	// 0x37303e9d
// declared property setter: - (void)setInputPoint4:(id)a4;	// 0x37303f01
@end

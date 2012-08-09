/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIVector, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPinchDistortion : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputCenter;	// 40 = 0x28
	NSNumber *inputRadius;	// 44 = 0x2c
	NSNumber *inputScale;	// 48 = 0x30
}
@property(copy, nonatomic) CIVector *inputCenter;	// G=0x37339441; S=0x37339455; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x37339421; S=0x37339431; @synthesize
@property(copy, nonatomic) NSNumber *inputRadius;	// G=0x37339465; S=0x37339479; @synthesize
@property(copy, nonatomic) NSNumber *inputScale;	// G=0x37339489; S=0x3733949d; @synthesize
+ (id)customAttributes;	// 0x37338049
- (id)_pinchDistortionScaleGE1;	// 0x3733855d
- (id)_pinchDistortionScaleLT1;	// 0x37338399
- (CGRect)computeDOD:(float)dod scale:(float)scale;	// 0x373387bd
// declared property getter: - (id)inputCenter;	// 0x37339441
// declared property getter: - (id)inputImage;	// 0x37339421
// declared property getter: - (id)inputRadius;	// 0x37339465
// declared property getter: - (id)inputScale;	// 0x37339489
- (id)outputImage;	// 0x37338d71
- (void)setDefaults;	// 0x37338721
// declared property setter: - (void)setInputCenter:(id)center;	// 0x37339455
// declared property setter: - (void)setInputImage:(id)image;	// 0x37339431
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x37339479
// declared property setter: - (void)setInputScale:(id)scale;	// 0x3733949d
@end

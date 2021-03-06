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
@interface CIVortexDistortion : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputCenter;	// 40 = 0x28
	NSNumber *inputRadius;	// 44 = 0x2c
	NSNumber *inputAngle;	// 48 = 0x30
}
@property(copy, nonatomic) NSNumber *inputAngle;	// G=0x30d7b829; S=0x30d7b83d; @synthesize
@property(copy, nonatomic) CIVector *inputCenter;	// G=0x30d7b7e1; S=0x30d7b7f5; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x30d7b7c1; S=0x30d7b7d1; @synthesize
@property(copy, nonatomic) NSNumber *inputRadius;	// G=0x30d7b805; S=0x30d7b819; @synthesize
+ (id)customAttributes;	// 0x30d7ad39
- (bool)_isIdentity;	// 0x30d7b2e9
- (id)_kernel;	// 0x30d7b089
// declared property getter: - (id)inputAngle;	// 0x30d7b829
// declared property getter: - (id)inputCenter;	// 0x30d7b7e1
// declared property getter: - (id)inputImage;	// 0x30d7b7c1
// declared property getter: - (id)inputRadius;	// 0x30d7b805
- (id)outputImage;	// 0x30d7b379
- (void)setDefaults;	// 0x30d7b249
// declared property setter: - (void)setInputAngle:(id)angle;	// 0x30d7b83d
// declared property setter: - (void)setInputCenter:(id)center;	// 0x30d7b7f5
// declared property setter: - (void)setInputImage:(id)image;	// 0x30d7b7d1
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x30d7b819
@end


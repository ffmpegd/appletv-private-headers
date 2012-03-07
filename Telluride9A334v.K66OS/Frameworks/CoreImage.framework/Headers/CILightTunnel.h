/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIVector, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CILightTunnel : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputPoint;	// 40 = 0x28
	NSNumber *inputRotation;	// 44 = 0x2c
	NSNumber *inputRadius;	// 48 = 0x30
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x358b7305; S=0x358b7315; @synthesize
@property(copy, nonatomic) CIVector *inputPoint;	// G=0x358b7339; S=0x358b7349; @synthesize
@property(copy, nonatomic) NSNumber *inputRadius;	// G=0x358b73a1; S=0x358b73b1; @synthesize
@property(copy, nonatomic) NSNumber *inputRotation;	// G=0x358b736d; S=0x358b737d; @synthesize
+ (id)customAttributes;	// 0x358b6b89
- (id)_kernel;	// 0x358b6e3d
// declared property getter: - (id)inputImage;	// 0x358b7305
// declared property getter: - (id)inputPoint;	// 0x358b7339
// declared property getter: - (id)inputRadius;	// 0x358b73a1
// declared property getter: - (id)inputRotation;	// 0x358b736d
- (id)outputImage;	// 0x358b7089
- (void)setDefaults;	// 0x358b7001
// declared property setter: - (void)setInputImage:(id)image;	// 0x358b7315
// declared property setter: - (void)setInputPoint:(id)point;	// 0x358b7349
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x358b73b1
// declared property setter: - (void)setInputRotation:(id)rotation;	// 0x358b737d
@end


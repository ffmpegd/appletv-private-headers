/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIBloom : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputRadius;	// 40 = 0x28
	NSNumber *inputIntensity;	// 44 = 0x2c
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x315605c5; S=0x315605d5; @synthesize
@property(copy, nonatomic) NSNumber *inputIntensity;	// G=0x31560609; S=0x3156061d; @synthesize
@property(copy, nonatomic) NSNumber *inputRadius;	// G=0x315605e5; S=0x315605f9; @synthesize
+ (id)customAttributes;	// 0x3155fed9
- (BOOL)_isIdentity;	// 0x315603e9
- (id)_kernel;	// 0x315601c9
// declared property getter: - (id)inputImage;	// 0x315605c5
// declared property getter: - (id)inputIntensity;	// 0x31560609
// declared property getter: - (id)inputRadius;	// 0x315605e5
- (id)outputImage;	// 0x31560469
- (void)setDefaults;	// 0x31560381
// declared property setter: - (void)setInputImage:(id)image;	// 0x315605d5
// declared property setter: - (void)setInputIntensity:(id)intensity;	// 0x3156061d
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x315605f9
@end


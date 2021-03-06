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
@interface CITemperatureAndTint : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputNeutral;	// 40 = 0x28
	CIVector *inputTargetNeutral;	// 44 = 0x2c
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x352f04c9; S=0x352f04d9; @synthesize
@property(copy, nonatomic) CIVector *inputNeutral;	// G=0x352ef015; S=0x352ef029; @dynamic
@property(copy, nonatomic) CIVector *inputTargetNeutral;	// G=0x352f04fd; S=0x352f0511; @synthesize
+ (id)customAttributes;	// 0x352eee09
// declared property getter: - (id)inputImage;	// 0x352f04c9
// declared property getter: - (id)inputNeutral;	// 0x352ef015
// declared property getter: - (id)inputTargetNeutral;	// 0x352f04fd
- (id)outputImage;	// 0x352efaf9
- (void)setDefaults;	// 0x352efa81
// declared property setter: - (void)setInputImage:(id)image;	// 0x352f04d9
// declared property setter: - (void)setInputNeutral:(id)neutral;	// 0x352ef029
// declared property setter: - (void)setInputTargetNeutral:(id)neutral;	// 0x352f0511
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIImage, NSNumber, CIColor;

__attribute__((visibility("hidden")))
@interface CIColorBalance : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIColor *inputColor;	// 40 = 0x28
	NSNumber *inputStrength;	// 44 = 0x2c
	NSNumber *inputWarmth;	// 48 = 0x30
	NSNumber *inputDamping;	// 52 = 0x34
}
@property(copy, nonatomic) CIColor *inputColor;	// G=0x36ef3b05; S=0x36ef3b15; @synthesize
@property(copy, nonatomic) NSNumber *inputDamping;	// G=0x36ef3ba1; S=0x36ef3bb1; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36ef3ad1; S=0x36ef3ae1; @synthesize
@property(copy, nonatomic) NSNumber *inputStrength;	// G=0x36ef3b39; S=0x36ef3b49; @synthesize
@property(copy, nonatomic) NSNumber *inputWarmth;	// G=0x36ef3b6d; S=0x36ef3b7d; @synthesize
+ (id)customAttributes;	// 0x36ef3095
- (id)_kernel;	// 0x36ef35f1
// declared property getter: - (id)inputColor;	// 0x36ef3b05
// declared property getter: - (id)inputDamping;	// 0x36ef3ba1
// declared property getter: - (id)inputImage;	// 0x36ef3ad1
// declared property getter: - (id)inputStrength;	// 0x36ef3b39
// declared property getter: - (id)inputWarmth;	// 0x36ef3b6d
- (id)outputImage;	// 0x36ef37ad
- (void)setDefaults;	// 0x36ef3551
// declared property setter: - (void)setInputColor:(id)color;	// 0x36ef3b15
// declared property setter: - (void)setInputDamping:(id)damping;	// 0x36ef3bb1
// declared property setter: - (void)setInputImage:(id)image;	// 0x36ef3ae1
// declared property setter: - (void)setInputStrength:(id)strength;	// 0x36ef3b49
// declared property setter: - (void)setInputWarmth:(id)warmth;	// 0x36ef3b7d
@end


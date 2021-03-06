/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIImage, CIColor;

__attribute__((visibility("hidden")))
@interface CIFalseColor : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIColor *inputColor0;	// 40 = 0x28
	CIColor *inputColor1;	// 44 = 0x2c
}
@property(retain, nonatomic) CIColor *inputColor0;	// G=0x2d6ff4f9; S=0x2d6ff509; @synthesize
@property(retain, nonatomic) CIColor *inputColor1;	// G=0x2d6ff519; S=0x2d6ff529; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x2d6ff4d9; S=0x2d6ff4e9; @synthesize
+ (id)customAttributes;	// 0x2d6ff2f9
- (id)_kernel;	// 0x2d6fefe1
// declared property getter: - (id)inputColor0;	// 0x2d6ff4f9
// declared property getter: - (id)inputColor1;	// 0x2d6ff519
// declared property getter: - (id)inputImage;	// 0x2d6ff4d9
- (id)outputImage;	// 0x2d6ff1a1
- (void)setDefaults;	// 0x2d6ff279
// declared property setter: - (void)setInputColor0:(id)a0;	// 0x2d6ff509
// declared property setter: - (void)setInputColor1:(id)a1;	// 0x2d6ff529
// declared property setter: - (void)setInputImage:(id)image;	// 0x2d6ff4e9
@end


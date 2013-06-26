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
@interface CIWhitePointAdjust : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIColor *inputColor;	// 40 = 0x28
}
@property(copy, nonatomic) CIColor *inputColor;	// G=0x3156416d; S=0x31564181; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x3156414d; S=0x3156415d; @synthesize
+ (id)customAttributes;	// 0x31563fb1
- (BOOL)_isIdentity;	// 0x31563d89
- (id)_kernel;	// 0x31563bed
// declared property getter: - (id)inputColor;	// 0x3156416d
// declared property getter: - (id)inputImage;	// 0x3156414d
- (id)outputImage;	// 0x31563e81
- (void)setDefaults;	// 0x31563f65
// declared property setter: - (void)setInputColor:(id)color;	// 0x31564181
// declared property setter: - (void)setInputImage:(id)image;	// 0x3156415d
@end

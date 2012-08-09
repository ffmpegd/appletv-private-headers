/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIVector, NSNumber, CIColor;

__attribute__((visibility("hidden")))
@interface CIGaussianGradient : CIFilter {
	CIVector *inputCenter;	// 36 = 0x24
	CIColor *inputColor0;	// 40 = 0x28
	CIColor *inputColor1;	// 44 = 0x2c
	NSNumber *inputRadius;	// 48 = 0x30
}
@property(retain, nonatomic) CIVector *inputCenter;	// G=0x3699f769; S=0x3699f779; @synthesize
@property(retain, nonatomic) CIColor *inputColor0;	// G=0x3699f79d; S=0x3699f7ad; @synthesize
@property(retain, nonatomic) CIColor *inputColor1;	// G=0x3699f7d1; S=0x3699f7e1; @synthesize
@property(retain, nonatomic) NSNumber *inputRadius;	// G=0x3699f805; S=0x3699f815; @synthesize
+ (id)customAttributes;	// 0x3699f079
- (id)_kernel;	// 0x3699ee91
// declared property getter: - (id)inputCenter;	// 0x3699f769
// declared property getter: - (id)inputColor0;	// 0x3699f79d
// declared property getter: - (id)inputColor1;	// 0x3699f7d1
// declared property getter: - (id)inputRadius;	// 0x3699f805
- (id)outputImage;	// 0x3699f451
- (void)setDefaults;	// 0x3699f361
// declared property setter: - (void)setInputCenter:(id)center;	// 0x3699f779
// declared property setter: - (void)setInputColor0:(id)a0;	// 0x3699f7ad
// declared property setter: - (void)setInputColor1:(id)a1;	// 0x3699f7e1
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x3699f815
@end

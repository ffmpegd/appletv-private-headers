/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIVector, NSNumber, CIColor;

__attribute__((visibility("hidden")))
@interface CIRadialGradient : CIFilter {
@private
	CIVector *inputCenter;	// 36 = 0x24
	NSNumber *inputRadius0;	// 40 = 0x28
	NSNumber *inputRadius1;	// 44 = 0x2c
	CIColor *inputColor0;	// 48 = 0x30
	CIColor *inputColor1;	// 52 = 0x34
}
@property(retain, nonatomic) CIVector *inputCenter;	// G=0x358bf6f1; S=0x358bf701; @synthesize
@property(retain, nonatomic) CIColor *inputColor0;	// G=0x358bf78d; S=0x358bf79d; @synthesize
@property(retain, nonatomic) CIColor *inputColor1;	// G=0x358bf7c1; S=0x358bf7d1; @synthesize
@property(retain, nonatomic) NSNumber *inputRadius0;	// G=0x358bf725; S=0x358bf735; @synthesize
@property(retain, nonatomic) NSNumber *inputRadius1;	// G=0x358bf759; S=0x358bf769; @synthesize
+ (id)customAttributes;	// 0x358befd1
- (id)_kernel;	// 0x358bedc9
// declared property getter: - (id)inputCenter;	// 0x358bf6f1
// declared property getter: - (id)inputColor0;	// 0x358bf78d
// declared property getter: - (id)inputColor1;	// 0x358bf7c1
// declared property getter: - (id)inputRadius0;	// 0x358bf725
// declared property getter: - (id)inputRadius1;	// 0x358bf759
- (id)outputImage;	// 0x358bf4a9
- (void)setDefaults;	// 0x358bf39d
// declared property setter: - (void)setInputCenter:(id)center;	// 0x358bf701
// declared property setter: - (void)setInputColor0:(id)a0;	// 0x358bf79d
// declared property setter: - (void)setInputColor1:(id)a1;	// 0x358bf7d1
// declared property setter: - (void)setInputRadius0:(id)a0;	// 0x358bf735
// declared property setter: - (void)setInputRadius1:(id)a1;	// 0x358bf769
@end


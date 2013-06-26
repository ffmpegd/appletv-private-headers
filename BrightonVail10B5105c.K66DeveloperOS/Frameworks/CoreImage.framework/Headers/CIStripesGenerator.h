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
@interface CIStripesGenerator : CIFilter {
	CIVector *inputCenter;	// 36 = 0x24
	CIColor *inputColor0;	// 40 = 0x28
	CIColor *inputColor1;	// 44 = 0x2c
	NSNumber *inputWidth;	// 48 = 0x30
	NSNumber *inputSharpness;	// 52 = 0x34
}
@property(retain, nonatomic) CIVector *inputCenter;	// G=0x33cdae75; S=0x33cdae85; @synthesize
@property(retain, nonatomic) CIColor *inputColor0;	// G=0x33cdae95; S=0x33cdaea5; @synthesize
@property(retain, nonatomic) CIColor *inputColor1;	// G=0x33cdaeb5; S=0x33cdaec5; @synthesize
@property(retain, nonatomic) NSNumber *inputSharpness;	// G=0x33cdaef5; S=0x33cdaf05; @synthesize
@property(retain, nonatomic) NSNumber *inputWidth;	// G=0x33cdaed5; S=0x33cdaee5; @synthesize
+ (id)customAttributes;	// 0x33cda809
- (id)_kernel;	// 0x33cda601
// declared property getter: - (id)inputCenter;	// 0x33cdae75
// declared property getter: - (id)inputColor0;	// 0x33cdae95
// declared property getter: - (id)inputColor1;	// 0x33cdaeb5
// declared property getter: - (id)inputSharpness;	// 0x33cdaef5
// declared property getter: - (id)inputWidth;	// 0x33cdaed5
- (id)outputImage;	// 0x33cdacd1
- (void)setDefaults;	// 0x33cdabc1
// declared property setter: - (void)setInputCenter:(id)center;	// 0x33cdae85
// declared property setter: - (void)setInputColor0:(id)a0;	// 0x33cdaea5
// declared property setter: - (void)setInputColor1:(id)a1;	// 0x33cdaec5
// declared property setter: - (void)setInputSharpness:(id)sharpness;	// 0x33cdaf05
// declared property setter: - (void)setInputWidth:(id)width;	// 0x33cdaee5
@end

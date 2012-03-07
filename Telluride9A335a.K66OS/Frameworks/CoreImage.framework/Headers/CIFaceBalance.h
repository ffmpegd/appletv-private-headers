/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIFaceBalance : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputOrigI;	// 40 = 0x28
	NSNumber *inputOrigQ;	// 44 = 0x2c
	NSNumber *inputStrength;	// 48 = 0x30
	NSNumber *inputWarmth;	// 52 = 0x34
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x3071fcd5; S=0x3071fce5; @synthesize
@property(copy, nonatomic) NSNumber *inputOrigI;	// G=0x3071fd09; S=0x3071fd19; @synthesize
@property(copy, nonatomic) NSNumber *inputOrigQ;	// G=0x3071fd3d; S=0x3071fd4d; @synthesize
@property(copy, nonatomic) NSNumber *inputStrength;	// G=0x3071fd71; S=0x3071fd81; @synthesize
@property(copy, nonatomic) NSNumber *inputWarmth;	// G=0x3071fda5; S=0x3071fdb5; @synthesize
+ (id)customAttributes;	// 0x3071f0e9
- (id)_initFromProperties:(id)properties;	// 0x307200d1
- (BOOL)_isIdentity;	// 0x3071f899
- (id)_kernel;	// 0x3071f709
- (id)_outputProperties;	// 0x3071fdd9
// declared property getter: - (id)inputImage;	// 0x3071fcd5
// declared property getter: - (id)inputOrigI;	// 0x3071fd09
// declared property getter: - (id)inputOrigQ;	// 0x3071fd3d
// declared property getter: - (id)inputStrength;	// 0x3071fd71
// declared property getter: - (id)inputWarmth;	// 0x3071fda5
- (id)outputImage;	// 0x3071f9c9
- (void)setDefaults;	// 0x3071f631
// declared property setter: - (void)setInputImage:(id)image;	// 0x3071fce5
// declared property setter: - (void)setInputOrigI:(id)i;	// 0x3071fd19
// declared property setter: - (void)setInputOrigQ:(id)q;	// 0x3071fd4d
// declared property setter: - (void)setInputStrength:(id)strength;	// 0x3071fd81
// declared property setter: - (void)setInputWarmth:(id)warmth;	// 0x3071fdb5
@end


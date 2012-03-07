/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class NSValue, CIImage;

__attribute__((visibility("hidden")))
@interface CIAffineTransform : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSValue *inputTransform;	// 40 = 0x28
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x34561d3d; S=0x34561d4d; @synthesize
@property(copy, nonatomic) NSValue *inputTransform;	// G=0x34561d71; S=0x34561d81; @synthesize
+ (id)customAttributes;	// 0x345619d1
- (id)_initFromProperties:(id)properties;	// 0x34561f09
- (id)_outputProperties;	// 0x34561da5
// declared property getter: - (id)inputImage;	// 0x34561d3d
// declared property getter: - (id)inputTransform;	// 0x34561d71
- (id)outputImage;	// 0x34561b79
- (void)setDefaults;	// 0x34561b29
// declared property setter: - (void)setInputImage:(id)image;	// 0x34561d4d
// declared property setter: - (void)setInputTransform:(id)transform;	// 0x34561d81
@end


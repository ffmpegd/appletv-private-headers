/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface _CICompositeFilter : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIImage *inputBackgroundImage;	// 40 = 0x28
}
@property(retain, nonatomic) CIImage *inputBackgroundImage;	// G=0x36bbecf9; S=0x36bbed09; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36bbecc5; S=0x36bbecd5; @synthesize
+ (id)_filter_display_name;	// 0x36bbe699
+ (id)_kernel;	// 0x36bbe7a1
+ (id)_kernel_name;	// 0x36bbe69d
+ (id)_kernel_source;	// 0x36bbe6a1
+ (id)customAttributes;	// 0x36bbe6a5
- (CGRect)_extentForInputExtent:(CGRect)inputExtent backgroundExtent:(CGRect)extent;	// 0x36bbeb81
// declared property getter: - (id)inputBackgroundImage;	// 0x36bbecf9
// declared property getter: - (id)inputImage;	// 0x36bbecc5
- (id)outputImage;	// 0x36bbebb5
// declared property setter: - (void)setInputBackgroundImage:(id)image;	// 0x36bbed09
// declared property setter: - (void)setInputImage:(id)image;	// 0x36bbecd5
@end


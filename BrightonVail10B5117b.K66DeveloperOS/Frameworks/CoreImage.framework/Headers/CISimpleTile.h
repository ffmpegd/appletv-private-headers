/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface CISimpleTile : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x315bcdb5; S=0x315bcdc5; @synthesize
+ (id)customAttributes;	// 0x315bc565
- (id)_kernel;	// 0x315bc635
// declared property getter: - (id)inputImage;	// 0x315bcdb5
- (id)outputImage;	// 0x315bc7f9
// declared property setter: - (void)setInputImage:(id)image;	// 0x315bcdc5
@end

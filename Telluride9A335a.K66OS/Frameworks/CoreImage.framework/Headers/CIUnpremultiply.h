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
@interface CIUnpremultiply : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x3074089d; S=0x307408ad; @synthesize
+ (id)customAttributes;	// 0x307406ad
// declared property getter: - (id)inputImage;	// 0x3074089d
- (id)outputImage;	// 0x307407a5
// declared property setter: - (void)setInputImage:(id)image;	// 0x307408ad
@end


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
@interface CILumaMap : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIImage *_tableImage;	// 40 = 0x28
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x315a7a49; S=0x315a7a59; @synthesize
+ (id)customAttributes;	// 0x315a765d
- (id)_kernel;	// 0x315a7661
// declared property getter: - (id)inputImage;	// 0x315a7a49
- (const char *)lumaTable;	// 0x315a780d
- (id)outputImage;	// 0x315a7811
- (void)setDefaults;	// 0x315a77f9
// declared property setter: - (void)setInputImage:(id)image;	// 0x315a7a59
@end


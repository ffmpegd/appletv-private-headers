/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIVector, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CISqueeze : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputPoint;	// 40 = 0x28
	NSNumber *inputAmount;	// 44 = 0x2c
}
@property(copy, nonatomic) NSNumber *inputAmount;	// G=0x36ef417d; S=0x36ef418d; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36ef4115; S=0x36ef4125; @synthesize
@property(copy, nonatomic) CIVector *inputPoint;	// G=0x36ef4149; S=0x36ef4159; @synthesize
+ (id)customAttributes;	// 0x36ef3bd5
- (id)_kernel;	// 0x36ef3d4d
// declared property getter: - (id)inputAmount;	// 0x36ef417d
// declared property getter: - (id)inputImage;	// 0x36ef4115
// declared property getter: - (id)inputPoint;	// 0x36ef4149
- (id)outputImage;	// 0x36ef3ef1
- (void)setDefaults;	// 0x36ef3edd
// declared property setter: - (void)setInputAmount:(id)amount;	// 0x36ef418d
// declared property setter: - (void)setInputImage:(id)image;	// 0x36ef4125
// declared property setter: - (void)setInputPoint:(id)point;	// 0x36ef4159
@end


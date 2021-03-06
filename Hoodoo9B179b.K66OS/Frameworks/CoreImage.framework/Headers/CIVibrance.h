/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class NSNumber, CIImage;

__attribute__((visibility("hidden")))
@interface CIVibrance : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputAmount;	// 40 = 0x28
}
@property(copy, nonatomic) NSNumber *inputAmount;	// G=0x36d6cb69; S=0x36d6cb79; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36d6cb35; S=0x36d6cb45; @synthesize
+ (id)customAttributes;	// 0x36d6c2a9
- (id)_initFromProperties:(id)properties;	// 0x36d6ccb1
- (BOOL)_isIdentity;	// 0x36d6c86d
- (id)_kernelNeg;	// 0x36d6c501
- (id)_kernelPos;	// 0x36d6c691
- (id)_outputProperties;	// 0x36d6cb9d
// declared property getter: - (id)inputAmount;	// 0x36d6cb69
// declared property getter: - (id)inputImage;	// 0x36d6cb35
- (id)outputImage;	// 0x36d6c8b5
- (void)setDefaults;	// 0x36d6c821
// declared property setter: - (void)setInputAmount:(id)amount;	// 0x36d6cb79
// declared property setter: - (void)setInputImage:(id)image;	// 0x36d6cb45
@end


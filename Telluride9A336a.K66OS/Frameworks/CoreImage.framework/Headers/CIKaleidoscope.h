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
@interface CIKaleidoscope : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputPoint;	// 40 = 0x28
	NSNumber *inputAmount;	// 44 = 0x2c
	NSNumber *inputRotation;	// 48 = 0x30
}
@property(copy, nonatomic) NSNumber *inputAmount;	// G=0x3459754d; S=0x3459755d; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x345974e5; S=0x345974f5; @synthesize
@property(copy, nonatomic) CIVector *inputPoint;	// G=0x34597519; S=0x34597529; @synthesize
@property(copy, nonatomic) NSNumber *inputRotation;	// G=0x34597581; S=0x34597591; @synthesize
+ (id)customAttributes;	// 0x345967c5
- (id)_colorKernel;	// 0x34596b31
- (id)_geomKernel;	// 0x34596d65
// declared property getter: - (id)inputAmount;	// 0x3459754d
// declared property getter: - (id)inputImage;	// 0x345974e5
// declared property getter: - (id)inputPoint;	// 0x34597519
// declared property getter: - (id)inputRotation;	// 0x34597581
- (id)outputImage;	// 0x34597021
- (void)setDefaults;	// 0x34596f81
// declared property setter: - (void)setInputAmount:(id)amount;	// 0x3459755d
// declared property setter: - (void)setInputImage:(id)image;	// 0x345974f5
// declared property setter: - (void)setInputPoint:(id)point;	// 0x34597529
// declared property setter: - (void)setInputRotation:(id)rotation;	// 0x34597591
@end


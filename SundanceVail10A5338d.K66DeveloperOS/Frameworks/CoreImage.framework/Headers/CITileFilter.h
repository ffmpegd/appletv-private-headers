/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class NSNumber, CIVector, CIImage;

__attribute__((visibility("hidden")))
@interface CITileFilter : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputCenter;	// 40 = 0x28
	NSNumber *inputAngle;	// 44 = 0x2c
	NSNumber *inputWidth;	// 48 = 0x30
}
@property(retain) NSNumber *inputAngle;	// G=0x3534e209; S=0x3534e21d; @synthesize
@property(retain) CIVector *inputCenter;	// G=0x3534e1d1; S=0x3534e1e5; @synthesize
@property(retain) CIImage *inputImage;	// G=0x3534e199; S=0x3534e1ad; @synthesize
@property(retain) NSNumber *inputWidth;	// G=0x3534e241; S=0x3534e255; @synthesize
+ (id)_filter_display_name;	// 0x3534dd91
+ (id)customAttributes;	// 0x3534dda1
// declared property getter: - (id)inputAngle;	// 0x3534e209
// declared property getter: - (id)inputCenter;	// 0x3534e1d1
// declared property getter: - (id)inputImage;	// 0x3534e199
// declared property getter: - (id)inputWidth;	// 0x3534e241
- (void)setDefaults;	// 0x3534e0e9
// declared property setter: - (void)setInputAngle:(id)angle;	// 0x3534e21d
// declared property setter: - (void)setInputCenter:(id)center;	// 0x3534e1e5
// declared property setter: - (void)setInputImage:(id)image;	// 0x3534e1ad
// declared property setter: - (void)setInputWidth:(id)width;	// 0x3534e255
@end

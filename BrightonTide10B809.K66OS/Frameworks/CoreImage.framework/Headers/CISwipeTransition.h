/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class NSNumber, CIVector, CIColor, CIImage;

__attribute__((visibility("hidden")))
@interface CISwipeTransition : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIImage *inputTargetImage;	// 40 = 0x28
	CIVector *inputExtent;	// 44 = 0x2c
	CIColor *inputColor;	// 48 = 0x30
	NSNumber *inputTime;	// 52 = 0x34
	NSNumber *inputAngle;	// 56 = 0x38
	NSNumber *inputWidth;	// 60 = 0x3c
	NSNumber *inputOpacity;	// 64 = 0x40
}
@property(copy, nonatomic) NSNumber *inputAngle;	// G=0x31564629; S=0x3156463d; @synthesize
@property(copy, nonatomic) CIColor *inputColor;	// G=0x315645e1; S=0x315645f5; @synthesize
@property(copy, nonatomic) CIVector *inputExtent;	// G=0x315645bd; S=0x315645d1; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x3156457d; S=0x3156458d; @synthesize
@property(copy, nonatomic) NSNumber *inputOpacity;	// G=0x31564671; S=0x31564685; @synthesize
@property(retain, nonatomic) CIImage *inputTargetImage;	// G=0x3156459d; S=0x315645ad; @synthesize
@property(copy, nonatomic) NSNumber *inputTime;	// G=0x31564605; S=0x31564619; @synthesize
@property(copy, nonatomic) NSNumber *inputWidth;	// G=0x3156464d; S=0x31564661; @synthesize
+ (id)customAttributes;	// 0x31563969
- (id)_kernel;	// 0x31563ec1
// declared property getter: - (id)inputAngle;	// 0x31564629
// declared property getter: - (id)inputColor;	// 0x315645e1
// declared property getter: - (id)inputExtent;	// 0x315645bd
// declared property getter: - (id)inputImage;	// 0x3156457d
// declared property getter: - (id)inputOpacity;	// 0x31564671
// declared property getter: - (id)inputTargetImage;	// 0x3156459d
// declared property getter: - (id)inputTime;	// 0x31564605
// declared property getter: - (id)inputWidth;	// 0x3156464d
- (id)outputImage;	// 0x31564219
- (void)setDefaults;	// 0x315640c9
// declared property setter: - (void)setInputAngle:(id)angle;	// 0x3156463d
// declared property setter: - (void)setInputColor:(id)color;	// 0x315645f5
// declared property setter: - (void)setInputExtent:(id)extent;	// 0x315645d1
// declared property setter: - (void)setInputImage:(id)image;	// 0x3156458d
// declared property setter: - (void)setInputOpacity:(id)opacity;	// 0x31564685
// declared property setter: - (void)setInputTargetImage:(id)image;	// 0x315645ad
// declared property setter: - (void)setInputTime:(id)time;	// 0x31564619
// declared property setter: - (void)setInputWidth:(id)width;	// 0x31564661
@end

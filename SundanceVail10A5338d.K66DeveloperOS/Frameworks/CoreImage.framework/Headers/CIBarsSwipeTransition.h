/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class NSNumber, CIImage;

__attribute__((visibility("hidden")))
@interface CIBarsSwipeTransition : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIImage *inputTargetImage;	// 40 = 0x28
	NSNumber *inputAngle;	// 44 = 0x2c
	NSNumber *inputWidth;	// 48 = 0x30
	NSNumber *inputBarOffset;	// 52 = 0x34
	NSNumber *inputTime;	// 56 = 0x38
}
@property(retain) NSNumber *inputAngle;	// G=0x353536f9; S=0x3535370d; @synthesize
@property(retain) NSNumber *inputBarOffset;	// G=0x35353769; S=0x3535377d; @synthesize
@property(retain) CIImage *inputImage;	// G=0x35353689; S=0x3535369d; @synthesize
@property(retain) CIImage *inputTargetImage;	// G=0x353536c1; S=0x353536d5; @synthesize
@property(retain) NSNumber *inputTime;	// G=0x353537a1; S=0x353537b5; @synthesize
@property(retain) NSNumber *inputWidth;	// G=0x35353731; S=0x35353745; @synthesize
+ (id)customAttributes;	// 0x35352021
- (id)_geomKernel;	// 0x35352541
// declared property getter: - (id)inputAngle;	// 0x353536f9
// declared property getter: - (id)inputBarOffset;	// 0x35353769
// declared property getter: - (id)inputImage;	// 0x35353689
// declared property getter: - (id)inputTargetImage;	// 0x353536c1
// declared property getter: - (id)inputTime;	// 0x353537a1
// declared property getter: - (id)inputWidth;	// 0x35353731
- (id)outputImage;	// 0x35352731
- (void)setDefaults;	// 0x35352481
// declared property setter: - (void)setInputAngle:(id)angle;	// 0x3535370d
// declared property setter: - (void)setInputBarOffset:(id)offset;	// 0x3535377d
// declared property setter: - (void)setInputImage:(id)image;	// 0x3535369d
// declared property setter: - (void)setInputTargetImage:(id)image;	// 0x353536d5
// declared property setter: - (void)setInputTime:(id)time;	// 0x353537b5
// declared property setter: - (void)setInputWidth:(id)width;	// 0x35353745
@end


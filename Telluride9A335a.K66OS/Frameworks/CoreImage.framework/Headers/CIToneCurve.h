/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIVector, CIImage;

__attribute__((visibility("hidden")))
@interface CIToneCurve : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputPoint0;	// 40 = 0x28
	CIVector *inputPoint1;	// 44 = 0x2c
	CIVector *inputPoint2;	// 48 = 0x30
	CIVector *inputPoint3;	// 52 = 0x34
	CIVector *inputPoint4;	// 56 = 0x38
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x3071ad75; S=0x3071ad85; @synthesize
@property(copy, nonatomic) CIVector *inputPoint0;	// G=0x3071ada9; S=0x3071adb9; @synthesize
@property(copy, nonatomic) CIVector *inputPoint1;	// G=0x3071addd; S=0x3071aded; @synthesize
@property(copy, nonatomic) CIVector *inputPoint2;	// G=0x3071ae11; S=0x3071ae21; @synthesize
@property(copy, nonatomic) CIVector *inputPoint3;	// G=0x3071ae45; S=0x3071ae55; @synthesize
@property(copy, nonatomic) CIVector *inputPoint4;	// G=0x3071ae79; S=0x3071ae89; @synthesize
+ (id)curveImageFromPoints:(const CGPoint *)points;	// 0x3071a7bd
+ (id)curveImageFromPoints:(const CGPoint *)points linear:(BOOL)linear;	// 0x3071a5c1
+ (id)customAttributes;	// 0x30719a91
+ (void)splineCurveTable:(float *)table tableSize:(int)size gamma:(float)gamma from:(const CGPoint *)from;	// 0x3071a7dd
- (id)_initFromProperties:(id)properties;	// 0x3071b645
- (BOOL)_isIdentity;	// 0x3071a211
- (id)_kernel16;	// 0x3071a081
- (id)_kernel8;	// 0x30719ef1
- (id)_outputProperties;	// 0x3071aead
// declared property getter: - (id)inputImage;	// 0x3071ad75
// declared property getter: - (id)inputPoint0;	// 0x3071ada9
// declared property getter: - (id)inputPoint1;	// 0x3071addd
// declared property getter: - (id)inputPoint2;	// 0x3071ae11
// declared property getter: - (id)inputPoint3;	// 0x3071ae45
// declared property getter: - (id)inputPoint4;	// 0x3071ae79
- (id)outputImage;	// 0x3071a3a1
- (void)setDefaults;	// 0x30719e21
// declared property setter: - (void)setInputImage:(id)image;	// 0x3071ad85
// declared property setter: - (void)setInputPoint0:(id)a0;	// 0x3071adb9
// declared property setter: - (void)setInputPoint1:(id)a1;	// 0x3071aded
// declared property setter: - (void)setInputPoint2:(id)a2;	// 0x3071ae21
// declared property setter: - (void)setInputPoint3:(id)a3;	// 0x3071ae55
// declared property setter: - (void)setInputPoint4:(id)a4;	// 0x3071ae89
@end


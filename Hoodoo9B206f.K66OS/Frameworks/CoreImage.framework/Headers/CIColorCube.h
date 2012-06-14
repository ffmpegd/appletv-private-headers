/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class NSNumber, NSData, CIImage;

__attribute__((visibility("hidden")))
@interface CIColorCube : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputCubeDimension;	// 40 = 0x28
	NSData *inputCubeData;	// 44 = 0x2c
	CIImage *_cubeImage;	// 48 = 0x30
}
@property(readonly, retain) CIImage *cubeImage;	// G=0x36e36ca9; converted property
@property(retain, nonatomic) NSData *inputCubeData;	// G=0x36e37281; S=0x36e36781; @synthesize
@property(copy, nonatomic) NSNumber *inputCubeDimension;	// G=0x36e3724d; S=0x36e3725d; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36e37219; S=0x36e37229; @synthesize
+ (id)customAttributes;	// 0x36e367e5
- (id)_kernel;	// 0x36e36aed
// converted property getter: - (id)cubeImage;	// 0x36e36ca9
- (void)dealloc;	// 0x36e3672d
// declared property getter: - (id)inputCubeData;	// 0x36e37281
// declared property getter: - (id)inputCubeDimension;	// 0x36e3724d
// declared property getter: - (id)inputImage;	// 0x36e37219
- (id)outputImage;	// 0x36e36f49
- (void)setDefaults;	// 0x36e36a4d
// declared property setter: - (void)setInputCubeData:(id)data;	// 0x36e36781
// declared property setter: - (void)setInputCubeDimension:(id)dimension;	// 0x36e3725d
// declared property setter: - (void)setInputImage:(id)image;	// 0x36e37229
@end

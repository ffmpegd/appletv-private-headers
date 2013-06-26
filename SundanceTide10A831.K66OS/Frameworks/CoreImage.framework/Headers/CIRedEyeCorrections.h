/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIImage, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CIRedEyeCorrections : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	NSString *inputCameraModel;	// 40 = 0x28
	NSArray *inputCorrectionInfo;	// 44 = 0x2c
}
@property(retain, nonatomic) NSString *inputCameraModel;	// G=0x30d2c41d; S=0x30d2c42d; @synthesize
@property(retain, nonatomic) NSArray *inputCorrectionInfo;	// G=0x30d2c43d; S=0x30d2c44d; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x30d2c3fd; S=0x30d2c40d; @synthesize
- (id)_initFromProperties:(id)properties;	// 0x30d2ce95
- (BOOL)_isIdentity;	// 0x30d2c059
- (id)_outputProperties;	// 0x30d2c45d
// declared property getter: - (id)inputCameraModel;	// 0x30d2c41d
// declared property getter: - (id)inputCorrectionInfo;	// 0x30d2c43d
// declared property getter: - (id)inputImage;	// 0x30d2c3fd
- (id)outputImage;	// 0x30d2c089
- (void)setDefaults;	// 0x30d2c021
// declared property setter: - (void)setInputCameraModel:(id)model;	// 0x30d2c42d
// declared property setter: - (void)setInputCorrectionInfo:(id)info;	// 0x30d2c44d
// declared property setter: - (void)setInputImage:(id)image;	// 0x30d2c40d
@end

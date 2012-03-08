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
@interface CIGammaAdjust : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputPower;	// 40 = 0x28
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36d6f7cd; S=0x36d6f7dd; @synthesize
@property(copy, nonatomic) NSNumber *inputPower;	// G=0x36d6f801; S=0x36d6f811; @synthesize
+ (id)customAttributes;	// 0x36d6f361
- (BOOL)_isIdentity;	// 0x36d6f5c9
// declared property getter: - (id)inputImage;	// 0x36d6f7cd
// declared property getter: - (id)inputPower;	// 0x36d6f801
- (id)outputImage;	// 0x36d6f619
- (void)setDefaults;	// 0x36d6f585
// declared property setter: - (void)setInputImage:(id)image;	// 0x36d6f7dd
// declared property setter: - (void)setInputPower:(id)power;	// 0x36d6f811
@end

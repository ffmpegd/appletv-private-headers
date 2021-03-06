/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIColor;

__attribute__((visibility("hidden")))
@interface CIConstantColorGenerator : CIFilter {
@private
	CIColor *inputColor;	// 36 = 0x24
}
@property(copy, nonatomic) CIColor *inputColor;	// G=0x3073e851; S=0x3073e861; @synthesize
+ (id)customAttributes;	// 0x3073e6a1
// declared property getter: - (id)inputColor;	// 0x3073e851
- (id)outputImage;	// 0x3073e825
- (void)setDefaults;	// 0x3073e7dd
// declared property setter: - (void)setInputColor:(id)color;	// 0x3073e861
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIColor;

__attribute__((visibility("hidden")))
@interface CIConstantColorGenerator : CIFilter {
	CIColor *inputColor;	// 36 = 0x24
}
@property(copy, nonatomic) CIColor *inputColor;	// G=0x33cd3de5; S=0x33cd3df9; @synthesize
+ (id)customAttributes;	// 0x33cd3c31
// declared property getter: - (id)inputColor;	// 0x33cd3de5
- (id)outputImage;	// 0x33cd3db9
- (void)setDefaults;	// 0x33cd3d71
// declared property setter: - (void)setInputColor:(id)color;	// 0x33cd3df9
@end


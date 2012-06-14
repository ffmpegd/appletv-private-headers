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
@property(copy, nonatomic) CIColor *inputColor;	// G=0x34a32d6d; S=0x34a32d7d; @synthesize
+ (id)customAttributes;	// 0x34a32bbd
// declared property getter: - (id)inputColor;	// 0x34a32d6d
- (id)outputImage;	// 0x34a32d41
- (void)setDefaults;	// 0x34a32cf9
// declared property setter: - (void)setInputColor:(id)color;	// 0x34a32d7d
@end

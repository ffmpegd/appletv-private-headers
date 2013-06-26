/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface CICodeGenerator : CIFilter {
	NSData *inputMessage;	// 36 = 0x24
	NSDictionary *inputOptions;	// 40 = 0x28
}
@property(copy, nonatomic) NSData *inputMessage;	// G=0x315a9799; S=0x315a97ad; @synthesize
@property(copy, nonatomic) NSDictionary *inputOptions;	// G=0x315a97bd; S=0x315a97d1; @synthesize
// declared property getter: - (id)inputMessage;	// 0x315a9799
// declared property getter: - (id)inputOptions;	// 0x315a97bd
- (CGImageRef)outputCGImage;	// 0x315a970d
- (id)outputImage;	// 0x315a9711
- (void)setDefaults;	// 0x315a96d9
// declared property setter: - (void)setInputMessage:(id)message;	// 0x315a97ad
// declared property setter: - (void)setInputOptions:(id)options;	// 0x315a97d1
@end

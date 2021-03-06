/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
 */

#import </libobjc.A.h>
#import "FaceCore-Structs.h"


__attribute__((visibility("hidden")))
@interface AEVConversionUtils : NSObject {
}
+ (char *)convertCGImageToBufferUsingDataProvider:(CGImageRef)bufferUsingDataProvider;	// 0x30a31fc5
+ (char *)convertCGImageToBufferUsingGrayDevice:(CGImageRef)bufferUsingGrayDevice;	// 0x30a31eb9
+ (char *)convertCGImageToBufferUsingRGBDevice:(CGImageRef)bufferUsingRGBDevice;	// 0x30a32049
+ (char *)convertCGImageToGrayscale:(CGImageRef)grayscale;	// 0x30a32119
+ (CGImageRef)createImageFromGrayscaleData:(char *)grayscaleData ofWidth:(int)width andHeight:(int)height;	// 0x30a3221d
@end


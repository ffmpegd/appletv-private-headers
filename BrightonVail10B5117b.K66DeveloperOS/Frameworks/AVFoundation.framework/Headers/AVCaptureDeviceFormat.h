/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVCaptureDeviceFormatInternal, NSString, NSArray;

@interface AVCaptureDeviceFormat : NSObject {
	AVCaptureDeviceFormatInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) opaqueCMFormatDescription *formatDescription;	// G=0x302e8a81; 
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x302e8a61; 
@property(readonly, assign, nonatomic) NSArray *videoSupportedFrameRateRanges;	// G=0x302e8c7d; 
+ (id)_stringForFormatDescription:(opaqueCMFormatDescription *)formatDescription frameRateRanges:(id)ranges;	// 0x302e8481
+ (id)deviceFormatWithDictionary:(id)dictionary mediaType:(id)type mediaSubType:(int)type3;	// 0x302e86cd
+ (void)initialize;	// 0x302e8725
- (id)initWithDictionary:(id)dictionary mediaType:(id)type mediaSubType:(int)type3;	// 0x302e87f9
- (void)dealloc;	// 0x302e89b5
- (id)description;	// 0x302e8625
// declared property getter: - (opaqueCMFormatDescription *)formatDescription;	// 0x302e8a81
- (BOOL)hasBinned;	// 0x302e8d9d
- (BOOL)isBinned;	// 0x302e8de1
- (BOOL)isEqual:(id)equal;	// 0x302e88fd
// declared property getter: - (id)mediaType;	// 0x302e8a61
- (int)supportedStabilizationMethod;	// 0x302e8e2d
- (BOOL)supportsLowLightBoost;	// 0x302e8e7d
// declared property getter: - (id)videoSupportedFrameRateRanges;	// 0x302e8c7d
@end

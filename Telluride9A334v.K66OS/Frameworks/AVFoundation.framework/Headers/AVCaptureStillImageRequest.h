/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"


@interface AVCaptureStillImageRequest : NSObject <NSCopying> {
	id _sbufCompletionBlock;	// 4 = 0x4
	id _iosurfaceCompletionBlock;	// 8 = 0x8
	int _stillImageOrientation;	// 12 = 0xc
	BOOL _stillImageMirrored;	// 16 = 0x10
	CGSize _previewImageSize;	// 20 = 0x14
	unsigned _imageDataFormatType;	// 28 = 0x1c
	BOOL _isHDRImage;	// 32 = 0x20
	BOOL _isEV0Image;	// 33 = 0x21
	BOOL _chromaNoiseReductionEnabled;	// 34 = 0x22
	BOOL _suspendsVideoProcessing;	// 35 = 0x23
}
@property(assign) BOOL chromaNoiseReductionEnabled;	// G=0x3548add1; S=0x3548ade1; @synthesize=_chromaNoiseReductionEnabled
@property(assign) unsigned imageDataFormatType;	// G=0x3548ae71; S=0x3548ae81; @synthesize=_imageDataFormatType
@property(copy) id iosurfaceCompletionBlock;	// G=0x3548b14d; S=0x3548b125; @synthesize=_iosurfaceCompletionBlock
@property(assign) BOOL isEV0Image;	// G=0x3548adf1; S=0x3548ae01; @synthesize=_isEV0Image
@property(assign) BOOL isHDRImage;	// G=0x3548ae11; S=0x3548ae21; @synthesize=_isHDRImage
@property(assign) CGSize previewImageSize;	// G=0x3548b0c1; S=0x3548b08d; @synthesize=_previewImageSize
@property(copy) id sbufCompletionBlock;	// G=0x3548b10d; S=0x3548b0e5; @synthesize=_sbufCompletionBlock
@property(assign, getter=isStillImageMirrored) BOOL stillImageMirrored;	// G=0x3548ae51; S=0x3548ae61; @synthesize=_stillImageMirrored
@property(assign) int stillImageOrientation;	// G=0x3548ae31; S=0x3548ae41; @synthesize=_stillImageOrientation
@property(assign) BOOL suspendsVideoProcessing;	// G=0x3548adb1; S=0x3548adc1; @synthesize=_suspendsVideoProcessing
+ (id)request;	// 0x3548b049
// declared property getter: - (BOOL)chromaNoiseReductionEnabled;	// 0x3548add1
- (id)copyWithZone:(NSZone *)zone;	// 0x3548b1b9
- (void)dealloc;	// 0x3548b165
// declared property getter: - (unsigned long)imageDataFormatType;	// 0x3548ae71
// declared property getter: - (id)iosurfaceCompletionBlock;	// 0x3548b14d
// declared property getter: - (BOOL)isEV0Image;	// 0x3548adf1
// declared property getter: - (BOOL)isHDRImage;	// 0x3548ae11
// declared property getter: - (BOOL)isStillImageMirrored;	// 0x3548ae51
// declared property getter: - (CGSize)previewImageSize;	// 0x3548b0c1
// declared property getter: - (id)sbufCompletionBlock;	// 0x3548b10d
// declared property setter: - (void)setChromaNoiseReductionEnabled:(BOOL)enabled;	// 0x3548ade1
// declared property setter: - (void)setImageDataFormatType:(unsigned long)type;	// 0x3548ae81
// declared property setter: - (void)setIosurfaceCompletionBlock:(id)block;	// 0x3548b125
// declared property setter: - (void)setIsEV0Image:(BOOL)image;	// 0x3548ae01
// declared property setter: - (void)setIsHDRImage:(BOOL)image;	// 0x3548ae21
// declared property setter: - (void)setPreviewImageSize:(CGSize)size;	// 0x3548b08d
// declared property setter: - (void)setSbufCompletionBlock:(id)block;	// 0x3548b0e5
// declared property setter: - (void)setStillImageMirrored:(BOOL)mirrored;	// 0x3548ae61
// declared property setter: - (void)setStillImageOrientation:(int)orientation;	// 0x3548ae41
// declared property setter: - (void)setSuspendsVideoProcessing:(BOOL)processing;	// 0x3548adc1
// declared property getter: - (int)stillImageOrientation;	// 0x3548ae31
// declared property getter: - (BOOL)suspendsVideoProcessing;	// 0x3548adb1
@end


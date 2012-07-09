/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVCaptureOutput.h"
#import "AVFoundation-Structs.h"

@class NSDictionary, AVCaptureStillImageOutputInternal, NSArray;

@interface AVCaptureStillImageOutput : AVCaptureOutput {
	AVCaptureStillImageOutputInternal *_internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *availableImageDataCVPixelFormatTypes;	// G=0x317a4245; 
@property(readonly, assign, nonatomic) NSArray *availableImageDataCodecTypes;	// G=0x317a4311; 
@property(readonly, assign, getter=isCapturingStillImage) BOOL capturingStillImage;	// G=0x317a474d; 
@property(assign, getter=isChromaNoiseReductionEnabled) BOOL chromaNoiseReductionEnabled;	// G=0x317a44d5; S=0x317a44f5; converted property
@property(assign, getter=isEV0CaptureEnabled) BOOL eV0CaptureEnabled;	// G=0x317a4495; S=0x317a44b5; converted property
@property(assign, getter=isHDRCaptureEnabled) BOOL hDRCaptureEnabled;	// G=0x317a4455; S=0x317a4475; converted property
@property(copy, nonatomic) NSDictionary *outputSettings;	// G=0x317a3ea5; S=0x317a3edd; 
@property(assign) CGSize previewImageSize;	// G=0x317a43e5; S=0x317a440d; converted property
@property(assign, getter=isRawCaptureEnabled) BOOL rawCaptureEnabled;	// G=0x317a4585; S=0x317a45a5; converted property
@property(assign) BOOL suspendsVideoProcessingDuringStillImageCapture;	// G=0x317a46a9; S=0x317a46c9; converted property
+ (CGImageRef)cgImageForBGRASurface:(IOSurfaceRef)bgrasurface size:(unsigned long)size;	// 0x317a5d69
+ (void)initialize;	// 0x317a3c81
+ (id)jpegStillImageNSDataRepresentation:(opaqueCMSampleBuffer *)representation;	// 0x317a5add
+ (id)jpegStillImageNSDataRepresentationForBGRASurface:(IOSurfaceRef)bgrasurface size:(unsigned long)size;	// 0x317a5ef1
+ (id)jpegStillImageNSDataRepresentationForSurface:(IOSurfaceRef)surface size:(unsigned long)size metadata:(id)metadata;	// 0x317a5c5d
- (id)init;	// 0x317a3ca5
- (void)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x317a3d71
- (void)_updateStillImageDataSizeForCaptureOptions:(id)captureOptions;	// 0x317a5835
// declared property getter: - (id)availableImageDataCVPixelFormatTypes;	// 0x317a4245
// declared property getter: - (id)availableImageDataCodecTypes;	// 0x317a4311
- (void)captureStillImageAsynchronouslyFromConnection:(id)connection completionHandler:(id)handler;	// 0x317a5049
- (void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)connection completionHandler:(id)handler;	// 0x317a5161
- (void)configureAndInitiateCopyStillImageForRequest:(id)request;	// 0x317a4911
- (id)connectionMediaTypes;	// 0x317a4369
- (void)dealloc;	// 0x317a3d25
- (id)firstActiveConnection;	// 0x317a476d
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x317a5585
- (void)handlePhotoTakenForRequest:(id)request info:(id)info;	// 0x317a5279
- (unsigned long)imageDataFormatType;	// 0x317a4435
// declared property getter: - (BOOL)isCapturingStillImage;	// 0x317a474d
// converted property getter: - (BOOL)isChromaNoiseReductionEnabled;	// 0x317a44d5
// converted property getter: - (BOOL)isEV0CaptureEnabled;	// 0x317a4495
// converted property getter: - (BOOL)isHDRCaptureEnabled;	// 0x317a4455
// converted property getter: - (BOOL)isRawCaptureEnabled;	// 0x317a4585
- (BOOL)isRawCaptureSupported;	// 0x317a4515
- (long long)maxStillImageDataSize;	// 0x317a43c1
// declared property getter: - (id)outputSettings;	// 0x317a3ea5
// converted property getter: - (CGSize)previewImageSize;	// 0x317a43e5
- (BOOL)resumeVideoProcessing;	// 0x317a46e9
- (id)scaleAndCropDictionary;	// 0x317a47b5
// converted property setter: - (void)setChromaNoiseReductionEnabled:(BOOL)enabled;	// 0x317a44f5
// converted property setter: - (void)setEV0CaptureEnabled:(BOOL)enabled;	// 0x317a44b5
// converted property setter: - (void)setHDRCaptureEnabled:(BOOL)enabled;	// 0x317a4475
// declared property setter: - (void)setOutputSettings:(id)settings;	// 0x317a3edd
// converted property setter: - (void)setPreviewImageSize:(CGSize)size;	// 0x317a440d
// converted property setter: - (void)setRawCaptureEnabled:(BOOL)enabled;	// 0x317a45a5
// converted property setter: - (void)setSuspendsVideoProcessingDuringStillImageCapture:(BOOL)capture;	// 0x317a46c9
// converted property getter: - (BOOL)suspendsVideoProcessingDuringStillImageCapture;	// 0x317a46a9
@end

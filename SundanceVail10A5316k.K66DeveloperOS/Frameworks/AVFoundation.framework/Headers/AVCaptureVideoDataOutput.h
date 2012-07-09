/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVCaptureOutput.h"

@class NSDictionary, AVCaptureVideoDataOutputInternal, NSArray;
@protocol AVCaptureVideoDataOutputSampleBufferDelegate, OS_dispatch_queue;

@interface AVCaptureVideoDataOutput : AVCaptureOutput {
@private
	AVCaptureVideoDataOutputInternal *_internal;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL alwaysDiscardsLateVideoFrames;	// G=0x3676e535; S=0x3676e555; 
@property(readonly, assign, nonatomic) NSArray *availableVideoCVPixelFormatTypes;	// G=0x3676d9cd; 
@property(readonly, assign, nonatomic) NSArray *availableVideoCodecTypes;	// G=0x3676daa5; 
@property(assign, nonatomic) XXStruct_pwHToB minFrameDuration;	// G=0x3676e375; S=0x3676e455; 
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;	// G=0x3676d9ad; 
@property(readonly, assign, nonatomic) id<AVCaptureVideoDataOutputSampleBufferDelegate> sampleBufferDelegate;	// G=0x3676d98d; 
@property(copy, nonatomic) NSDictionary *videoSettings;	// G=0x3676dd6d; S=0x3676de05; 
+ (void)initialize;	// 0x3676d5e5
+ (id)supportedVideoSettingsKeys;	// 0x3676ddd9
- (id)init;	// 0x3676d609
- (void)_AVCaptureVideoDataOutput_VideoDataBecameReady;	// 0x3676ed85
- (void)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x3676e699
- (id)addConnection:(id)connection error:(id *)error;	// 0x3676e615
// declared property getter: - (BOOL)alwaysDiscardsLateVideoFrames;	// 0x3676e535
// declared property getter: - (id)availableVideoCVPixelFormatTypes;	// 0x3676d9cd
// declared property getter: - (id)availableVideoCodecTypes;	// 0x3676daa5
- (id)connectionMediaTypes;	// 0x3676e5bd
- (void)dealloc;	// 0x3676d689
- (void)didStartForSession:(id)session;	// 0x3676ec99
- (void)didStopForSession:(id)session error:(id)error;	// 0x3676ebd1
- (void)handleEnabledChangedForConnection:(id)connection;	// 0x3676ea41
- (BOOL)isTheOnlyDataOutput;	// 0x3676d6d5
// declared property getter: - (XXStruct_pwHToB)minFrameDuration;	// 0x3676e375
// declared property getter: - (id)sampleBufferCallbackQueue;	// 0x3676d9ad
// declared property getter: - (id)sampleBufferDelegate;	// 0x3676d98d
// declared property setter: - (void)setAlwaysDiscardsLateVideoFrames:(BOOL)frames;	// 0x3676e555
// declared property setter: - (void)setMinFrameDuration:(XXStruct_pwHToB)duration;	// 0x3676e455
- (void)setSampleBufferDelegate:(id)delegate queue:(id)queue;	// 0x3676d89d
- (void)setSession:(id)session;	// 0x3676d82d
// declared property setter: - (void)setVideoSettings:(id)settings;	// 0x3676de05
- (id)vettedVideoSettingsForSettingsDictionary:(id)settingsDictionary;	// 0x3676dac1
// declared property getter: - (id)videoSettings;	// 0x3676dd6d
@end

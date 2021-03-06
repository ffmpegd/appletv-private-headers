/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVCaptureOutput.h"
#import "AVFoundation-Structs.h"

@class AVCaptureAudioDataOutputInternal;
@protocol AVCaptureAudioDataOutputSampleBufferDelegate;

@interface AVCaptureAudioDataOutput : AVCaptureOutput {
@private
	AVCaptureAudioDataOutputInternal *_internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) dispatch_queue_s *sampleBufferCallbackQueue;	// G=0x30aedbf1; 
@property(readonly, assign, nonatomic) id<AVCaptureAudioDataOutputSampleBufferDelegate> sampleBufferDelegate;	// G=0x30aedbd1; 
+ (void)initialize;	// 0x30aed85d
- (id)init;	// 0x30aed861
- (void)_AVCaptureAudioDataOutput_AudioDataBecameReady;	// 0x30aedda9
- (id)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x30aedc69
- (id)connectionMediaTypes;	// 0x30aedc11
- (void)dealloc;	// 0x30aed8e1
- (void)didStartForSession:(id)session;	// 0x30aedd69
- (void)didStopForSession:(id)session error:(id)error;	// 0x30aedd55
- (void)handleEnabledChangedForConnection:(id)connection;	// 0x30aedcd9
- (BOOL)isTheOnlyDataOutput;	// 0x30aed92d
// declared property getter: - (dispatch_queue_s *)sampleBufferCallbackQueue;	// 0x30aedbf1
// declared property getter: - (id)sampleBufferDelegate;	// 0x30aedbd1
- (void)setSampleBufferDelegate:(id)delegate queue:(dispatch_queue_s *)queue;	// 0x30aedadd
- (void)setSession:(id)session;	// 0x30aeda6d
@end


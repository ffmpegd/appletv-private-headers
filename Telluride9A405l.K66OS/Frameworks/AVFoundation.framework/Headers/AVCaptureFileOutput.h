/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVCaptureOutput.h"

@class NSURL, AVCaptureFileOutputInternal;

@interface AVCaptureFileOutput : AVCaptureOutput {
@private
	AVCaptureFileOutputInternal *_fileOutputInternal;	// 8 = 0x8
}
@property(assign, nonatomic) XXStruct_pwHToB maxRecordedDuration;	// G=0x346d9dd9; S=0x346d9e11; 
@property(assign, nonatomic) long long maxRecordedFileSize;	// G=0x346d9e51; S=0x346d9e75; 
@property(assign, nonatomic) long long minFreeDiskSpaceLimit;	// G=0x346d9e9d; S=0x346d9ec1; 
@property(readonly, assign, nonatomic) NSURL *outputFileURL;	// G=0x346d9d7d; 
@property(assign) BOOL pausesRecordingOnInterruption;	// G=0x346d9d99; S=0x346d9db9; converted property
@property(readonly, assign, nonatomic) XXStruct_pwHToB recordedDuration;	// G=0x346da231; 
@property(readonly, assign, nonatomic) long long recordedFileSize;	// G=0x346da185; 
@property(readonly, assign, nonatomic, getter=isRecording) BOOL recording;	// G=0x346d9d81; 
+ (void)initialize;	// 0x346d9d79
- (id)init;	// 0x346da2f1
- (void)dealloc;	// 0x346da139
// declared property getter: - (BOOL)isRecording;	// 0x346d9d81
- (BOOL)isRecordingPaused;	// 0x346d9d8d
// declared property getter: - (XXStruct_pwHToB)maxRecordedDuration;	// 0x346d9dd9
// declared property getter: - (long long)maxRecordedFileSize;	// 0x346d9e51
// declared property getter: - (long long)minFreeDiskSpaceLimit;	// 0x346d9e9d
// declared property getter: - (id)outputFileURL;	// 0x346d9d7d
- (void)pauseRecording;	// 0x346d9d91
// converted property getter: - (BOOL)pausesRecordingOnInterruption;	// 0x346d9d99
// declared property getter: - (XXStruct_pwHToB)recordedDuration;	// 0x346da231
// declared property getter: - (long long)recordedFileSize;	// 0x346da185
- (void)resumeRecording;	// 0x346d9d95
// declared property setter: - (void)setMaxRecordedDuration:(XXStruct_pwHToB)duration;	// 0x346d9e11
// declared property setter: - (void)setMaxRecordedFileSize:(long long)size;	// 0x346d9e75
// declared property setter: - (void)setMinFreeDiskSpaceLimit:(long long)limit;	// 0x346d9ec1
// converted property setter: - (void)setPausesRecordingOnInterruption:(BOOL)interruption;	// 0x346d9db9
- (void)startRecordingToOutputFileURL:(id)outputFileURL recordingDelegate:(id)delegate;	// 0x346d9d85
- (void)stopRecording;	// 0x346d9d89
@end


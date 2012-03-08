/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVCaptureFileOutput.h"

@class AVCaptureMovieFileOutputInternal, NSArray;

@interface AVCaptureMovieFileOutput : AVCaptureFileOutput {
@private
	AVCaptureMovieFileOutputInternal *_internal;	// 12 = 0xc
}
@property(copy, nonatomic) NSArray *metadata;	// G=0x30eb6bed; S=0x30eb6b75; 
@property(assign, nonatomic) XXStruct_pwHToB movieFragmentInterval;	// G=0x30eb4c7d; S=0x30eb6c31; 
@property(assign) BOOL sendsLastVideoPreviewFrame;	// G=0x30eb4cd5; S=0x30eb4cb5; converted property
+ (BOOL)consolidateMovieFragmentsInFile:(id)file error:(id *)error;	// 0x30eb4e7d
+ (void)initialize;	// 0x30eb4c79
+ (id)recorderCommonMetadataForAVMetadataItemArray:(id)avmetadataItemArray;	// 0x30eb4f5d
+ (BOOL)updateMovieMetadataInFile:(id)file withMetadata:(id)metadata error:(id *)error;	// 0x30eb4edd
- (id)init;	// 0x30eb4df1
- (long)_avErrorForDidStopRecordingReason:(id)_avErrorFor;	// 0x30eb6ac1
- (void)_handleStartRecordingErrorWithDomain:(id)domain code:(long)code info:(id)info;	// 0x30eb68e9
- (long)_startRecording:(id)recording;	// 0x30eb50d9
- (long)_stopRecording;	// 0x30eb50b1
- (id)connectionMediaTypes;	// 0x30eb71d9
- (void)dealloc;	// 0x30eb7231
- (void)didStopForSession:(id)session error:(id)error;	// 0x30eb6d65
- (BOOL)getRecorderBoolForKey:(id)key withDefault:(BOOL)aDefault;	// 0x30eb727d
- (void)handleEnabledChangedForConnection:(id)connection;	// 0x30eb6d19
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x30eb58e1
- (BOOL)isRecording;	// 0x30eb719d
- (BOOL)isRecordingPaused;	// 0x30eb7171
// declared property getter: - (id)metadata;	// 0x30eb6bed
// declared property getter: - (XXStruct_pwHToB)movieFragmentInterval;	// 0x30eb4c7d
- (id)outputFileURL;	// 0x30eb6ff1
- (void)pauseRecording;	// 0x30eb70f5
- (void)resumeRecording;	// 0x30eb707d
// converted property getter: - (BOOL)sendsLastVideoPreviewFrame;	// 0x30eb4cd5
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x30eb6b75
// declared property setter: - (void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;	// 0x30eb6c31
// converted property setter: - (void)setSendsLastVideoPreviewFrame:(BOOL)frame;	// 0x30eb4cb5
- (void)startRecordingToOutputFileURL:(id)outputFileURL recordingDelegate:(id)delegate;	// 0x30eb6da9
- (void)stopRecording;	// 0x30eb6d99
@end

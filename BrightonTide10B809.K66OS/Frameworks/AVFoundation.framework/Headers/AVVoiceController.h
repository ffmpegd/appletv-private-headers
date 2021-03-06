/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSString, NSDictionary;
@protocol AVVoiceControllerRecordDelegate, AVVoiceControllerPlaybackDelegate, Endpointer;

@interface AVVoiceController : NSObject {
	void *_impl;	// 4 = 0x4
}
@property(assign) float alertVolume;	// G=0x302d9a41; S=0x302d994d; 
@property(assign, getter=isBargeInDetectEnabled) BOOL bargeInDetectEnabled;	// G=0x302d63b1; S=0x302d63c9; 
@property(assign) id<Endpointer> endpointerDelegate;	// G=0x302d961d; S=0x302d9631; 
@property(readonly, assign) unsigned long long lastRecordStartTime;	// G=0x302d639d; 
@property(assign, getter=isMeteringEnabled) BOOL meteringEnabled;	// G=0x302d9b5d; S=0x302d9b75; 
@property(assign) id<AVVoiceControllerPlaybackDelegate> playbackDelegate;	// G=0x302d9871; S=0x302d9885; @dynamic
@property(readonly, assign) NSDictionary *playbackSettings;	// G=0x302d98a9; 
@property(assign) float playbackVolume;	// G=0x302d9b49; S=0x302d9a55; 
@property(readonly, assign, getter=isPlaying) BOOL playing;	// G=0x302d9911; 
@property(assign) id<AVVoiceControllerRecordDelegate> recordDelegate;	// G=0x302d9245; S=0x302d9259; @dynamic
@property(assign) double recordEndWaitTime;	// G=0x302d97f9; S=0x302d9811; 
@property(assign) int recordEndpointMode;	// G=0x302d96bd; S=0x302d96d1; 
@property(assign) double recordInterspeechWaitTime;	// G=0x302d9781; S=0x302d9799; 
@property(readonly, assign) NSString *recordRoute;	// G=0x302d6389; 
@property(readonly, assign) NSDictionary *recordSettings;	// G=0x302d9281; 
@property(assign) double recordStartWaitTime;	// G=0x302d9709; S=0x302d9721; 
@property(readonly, assign, getter=isRecording) BOOL recording;	// G=0x302d9929; 
@property(assign, getter=isStopOnBargeInEnabled) BOOL stopOnBargeInEnabled;	// G=0x302d63e5; S=0x302d63fd; 
@property(assign, getter=isStopOnEndpointEnabled) BOOL stopOnEndpointEnabled;	// G=0x302d9e55; S=0x302d9e6d; 
- (id)initWithContext:(id)context error:(id *)error;	// 0x302d64f1
// declared property getter: - (float)alertVolume;	// 0x302d9a41
- (float)averagePowerForChannel:(unsigned)channel;	// 0x302d9e21
- (void)beganPlaying;	// 0x302d5eb1
- (void)beganRecording;	// 0x302d5add
- (void)beginPlaybackInterruption;	// 0x302d6329
- (void)beginRecordInterruption;	// 0x302d62c9
- (void)dealloc;	// 0x302d6d79
- (void)decodeError;	// 0x302d6239
- (void)encodeError;	// 0x302d5e21
- (void)endPlaybackInterruption;	// 0x302d6359
- (void)endRecordInterruption;	// 0x302d62f9
- (void)endpointDetected;	// 0x302d5dc5
// declared property getter: - (id)endpointerDelegate;	// 0x302d961d
- (void)finalize;	// 0x302d6bbd
- (void)finishedPlaying;	// 0x302d5f7d
- (void)finishedRecording;	// 0x302d5bad
- (double)getPlaybackBufferDuration;	// 0x302d98bd
- (double)getRecordBufferDuration;	// 0x302d9295
- (void)hardwareConfigChanged;	// 0x302d58cd
- (ControllerImpl *)impl;	// 0x302d58bd
- (void)interspeechPointDetected;	// 0x302d5d65
// declared property getter: - (BOOL)isBargeInDetectEnabled;	// 0x302d63b1
// declared property getter: - (BOOL)isMeteringEnabled;	// 0x302d9b5d
// declared property getter: - (BOOL)isPlaying;	// 0x302d9911
// declared property getter: - (BOOL)isRecording;	// 0x302d9929
// declared property getter: - (BOOL)isStopOnBargeInEnabled;	// 0x302d63e5
// declared property getter: - (BOOL)isStopOnEndpointEnabled;	// 0x302d9e55
// declared property getter: - (unsigned long long)lastRecordStartTime;	// 0x302d639d
- (float)peakPowerForChannel:(unsigned)channel;	// 0x302d9ded
- (BOOL)playAlertSoundForType:(int)type;	// 0x302d8129
- (void)playbackBufferReceived:(MyAudioQueueBuffer *)received;	// 0x302d5f05
// declared property getter: - (id)playbackDelegate;	// 0x302d9871
// declared property getter: - (id)playbackSettings;	// 0x302d98a9
// declared property getter: - (float)playbackVolume;	// 0x302d9b49
- (BOOL)preparePlaybackFromURL:(id)url error:(id *)error;	// 0x302d8a05
- (BOOL)preparePlaybackWithSettings:(id)settings error:(id *)error;	// 0x302d8561
- (BOOL)prepareRecordWithSettings:(id)settings error:(id *)error;	// 0x302d7581
- (void)recordBufferReceived:(MyAudioQueueBuffer *)received;	// 0x302d5b39
// declared property getter: - (id)recordDelegate;	// 0x302d9245
// declared property getter: - (double)recordEndWaitTime;	// 0x302d97f9
// declared property getter: - (int)recordEndpointMode;	// 0x302d96bd
// declared property getter: - (double)recordInterspeechWaitTime;	// 0x302d9781
// declared property getter: - (id)recordRoute;	// 0x302d6389
// declared property getter: - (id)recordSettings;	// 0x302d9281
// declared property getter: - (double)recordStartWaitTime;	// 0x302d9709
- (void)releaseAudioSession;	// 0x302d7309
- (BOOL)setAlertSoundFromURL:(id)url forType:(int)type;	// 0x302d808d
// declared property setter: - (void)setAlertVolume:(float)volume;	// 0x302d994d
// declared property setter: - (void)setBargeInDetectEnabled:(BOOL)detectEnabled;	// 0x302d63c9
- (BOOL)setCurrentContext:(id)context error:(id *)error;	// 0x302d73dd
// declared property setter: - (void)setEndpointerDelegate:(id)delegate;	// 0x302d9631
// declared property setter: - (void)setMeteringEnabled:(BOOL)enabled;	// 0x302d9b75
- (BOOL)setPlaybackBufferDuration:(double)duration;	// 0x302d98d9
// declared property setter: - (void)setPlaybackDelegate:(id)delegate;	// 0x302d9885
// declared property setter: - (void)setPlaybackVolume:(float)volume;	// 0x302d9a55
- (BOOL)setRecordBufferDuration:(double)duration;	// 0x302d9301
// declared property setter: - (void)setRecordDelegate:(id)delegate;	// 0x302d9259
// declared property setter: - (void)setRecordEndWaitTime:(double)time;	// 0x302d9811
// declared property setter: - (void)setRecordEndpointMode:(int)mode;	// 0x302d96d1
// declared property setter: - (void)setRecordInterspeechWaitTime:(double)time;	// 0x302d9799
// declared property setter: - (void)setRecordStartWaitTime:(double)time;	// 0x302d9721
// declared property setter: - (void)setStopOnBargeInEnabled:(BOOL)enabled;	// 0x302d63fd
// declared property setter: - (void)setStopOnEndpointEnabled:(BOOL)enabled;	// 0x302d9e6d
- (BOOL)startPlaying;	// 0x302d9045
- (BOOL)startRecording;	// 0x302d83a5
- (void)startpointDetected;	// 0x302d5d09
- (void)stopPlaying;	// 0x302d9231
- (void)stopRecording;	// 0x302d8549
- (void)updateMeters;	// 0x302d9ca5
@end


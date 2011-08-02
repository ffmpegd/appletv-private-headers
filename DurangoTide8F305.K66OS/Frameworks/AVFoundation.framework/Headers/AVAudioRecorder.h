/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSURL;
@protocol AVAudioRecorderDelegate;

@interface AVAudioRecorder : NSObject {
@private
	void *_impl;	// 4 = 0x4
}
@property(readonly, assign) double currentTime;	// G=0x3472d41d; @dynamic
@property(assign) id<AVAudioRecorderDelegate> delegate;	// G=0x3472ba31; S=0x3472c425; @dynamic
@property(assign, getter=isMeteringEnabled) BOOL meteringEnabled;	// G=0x3472ba41; S=0x3472c97d; @dynamic
@property(readonly, assign, getter=isRecording) BOOL recording;	// G=0x3472b9fd; @dynamic
@property(readonly, assign) NSDictionary *settings;	// G=0x3472ba21; @dynamic
@property(readonly, assign) NSURL *url;	// G=0x3472ba11; @dynamic
- (id)initWithURL:(id)url settings:(id)settings error:(id *)error;	// 0x3472c475
- (float)averagePowerForChannel:(unsigned)channel;	// 0x3472ba81
- (id)baseInit;	// 0x3472c445
- (void)baseInitFailed;	// 0x3472bead
- (void)beginInterruption;	// 0x3472bb5d
// declared property getter: - (double)currentTime;	// 0x3472d41d
- (void)dealloc;	// 0x3472c221
// declared property getter: - (id)delegate;	// 0x3472ba31
- (BOOL)deleteRecording;	// 0x3472bb81
- (void)endInterruption;	// 0x3472bb11
- (void)endInterruptionWithFlags;	// 0x3472bb35
- (void)finalize;	// 0x3472c32d
- (void)finishedRecording;	// 0x3472bdd1
- (AudioRecorderImpl *)impl;	// 0x3472b9ed
// declared property getter: - (BOOL)isMeteringEnabled;	// 0x3472ba41
// declared property getter: - (BOOL)isRecording;	// 0x3472b9fd
- (void)pause;	// 0x3472d371
- (float)peakPowerForChannel:(unsigned)channel;	// 0x3472ba55
- (BOOL)prepareToRecord;	// 0x3472d059
- (void)privCommonCleanup;	// 0x3472bf3d
- (BOOL)record;	// 0x3472d2c1
- (BOOL)recordForDuration:(double)duration;	// 0x3472d211
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3472c425
// declared property setter: - (void)setMeteringEnabled:(BOOL)enabled;	// 0x3472c97d
// declared property getter: - (id)settings;	// 0x3472ba21
- (void)stop;	// 0x3472bcd5
- (void)updateMeters;	// 0x3472d4ed
// declared property getter: - (id)url;	// 0x3472ba11
@end

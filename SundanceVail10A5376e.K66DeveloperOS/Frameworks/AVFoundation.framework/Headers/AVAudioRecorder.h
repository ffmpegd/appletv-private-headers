/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSURL, NSArray, NSDictionary;
@protocol AVAudioRecorderDelegate;

@interface AVAudioRecorder : NSObject {
	void *_impl;	// 4 = 0x4
}
@property(copy, nonatomic) NSArray *channelAssignments;	// G=0x36882ab5; S=0x36882ac9; 
@property(readonly, assign) double currentTime;	// G=0x368825f1; 
@property(assign) id<AVAudioRecorderDelegate> delegate;	// G=0x3688271d; S=0x36882731; 
@property(readonly, assign) double deviceCurrentTime;	// G=0x368826d1; 
@property(assign, getter=isMeteringEnabled) BOOL meteringEnabled;	// G=0x3688274d; S=0x36882765; 
@property(readonly, assign, getter=isRecording) BOOL recording;	// G=0x36881721; 
@property(readonly, assign) NSDictionary *settings;	// G=0x3688174d; 
@property(readonly, assign) NSURL *url;	// G=0x36881739; 
- (id)initWithURL:(id)url settings:(id)settings error:(id *)error;	// 0x36881131
- (float)averagePowerForChannel:(unsigned)channel;	// 0x368829bd
- (id)baseInit;	// 0x368810c9
- (void)beginInterruption;	// 0x368829f1
// declared property getter: - (id)channelAssignments;	// 0x36882ab5
// declared property getter: - (double)currentTime;	// 0x368825f1
- (void)dealloc;	// 0x36880f91
// declared property getter: - (id)delegate;	// 0x3688271d
- (BOOL)deleteRecording;	// 0x368824c1
// declared property getter: - (double)deviceCurrentTime;	// 0x368826d1
- (void)endInterruption;	// 0x36882a91
- (void)endInterruptionWithFlags;	// 0x36882a15
- (void)finalize;	// 0x36880e9d
- (void)finishedRecording;	// 0x368809f9
- (AudioRecorderImpl *)impl;	// 0x368809e9
// declared property getter: - (BOOL)isMeteringEnabled;	// 0x3688274d
// declared property getter: - (BOOL)isRecording;	// 0x36881721
- (void)pause;	// 0x3688233d
- (float)peakPowerForChannel:(unsigned)channel;	// 0x36882989
- (BOOL)prepareToRecord;	// 0x36881761
- (void)privCommonCleanup;	// 0x36880b31
- (BOOL)record;	// 0x36881e19
- (BOOL)recordAtTime:(double)time;	// 0x36881fe1
- (BOOL)recordAtTime:(double)time forDuration:(double)duration;	// 0x368821f5
- (BOOL)recordForDuration:(double)duration;	// 0x36882125
// declared property setter: - (void)setChannelAssignments:(id)assignments;	// 0x36882ac9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x36882731
// declared property setter: - (void)setMeteringEnabled:(BOOL)enabled;	// 0x36882765
// declared property getter: - (id)settings;	// 0x3688174d
- (void)stop;	// 0x36882409
- (void)updateMeters;	// 0x36882855
// declared property getter: - (id)url;	// 0x36881739
@end


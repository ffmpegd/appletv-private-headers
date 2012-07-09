/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSURL, NSData, NSArray;
@protocol AVAudioPlayerDelegate;

@interface AVAudioPlayer : NSObject {
@private
	void *_impl;	// 4 = 0x4
}
@property(copy, nonatomic) NSArray *channelAssignments;	// G=0x366f5369; S=0x366f537d; 
@property(assign) double currentTime;	// G=0x366f4799; S=0x366f4811; 
@property(readonly, assign) NSData *data;	// G=0x366f3fe5; 
@property(assign) id<AVAudioPlayerDelegate> delegate;	// G=0x366f3ff9; S=0x366f400d; 
@property(readonly, assign) double deviceCurrentTime;	// G=0x366f47d5; 
@property(readonly, assign) double duration;	// G=0x366f4039; 
@property(assign) BOOL enableRate;	// G=0x366f43d5; S=0x366f4235; 
@property(assign, getter=isMeteringEnabled) BOOL meteringEnabled;	// G=0x366f4b51; S=0x366f4b69; 
@property(readonly, assign) unsigned numberOfChannels;	// G=0x366f476d; 
@property(assign) int numberOfLoops;	// G=0x366f4b3d; S=0x366f499d; 
@property(assign) float pan;	// G=0x366f4751; S=0x366f45ad; 
@property(readonly, assign, getter=isPlaying) BOOL playing;	// G=0x366f3f9d; 
@property(assign) float rate;	// G=0x366f4591; S=0x366f43ed; 
@property(readonly, assign) NSDictionary *settings;	// G=0x366f4025; 
@property(readonly, assign) NSURL *url;	// G=0x366f3fd1; 
@property(assign) float volume;	// G=0x366f4219; S=0x366f4075; 
- (id)initWithContentsOfURL:(id)url error:(id *)error;	// 0x366f2475
- (id)initWithData:(id)data error:(id *)error;	// 0x366f345d
- (float)averagePowerForChannel:(unsigned)channel;	// 0x366f50e9
- (id)baseInit;	// 0x366f2029
- (void)beginInterruption;	// 0x366f217d
// declared property getter: - (id)channelAssignments;	// 0x366f5369
// declared property getter: - (double)currentTime;	// 0x366f4799
// declared property getter: - (id)data;	// 0x366f3fe5
- (void)dealloc;	// 0x366f23ed
- (void)decodeError:(id)error;	// 0x366f20d1
// declared property getter: - (id)delegate;	// 0x366f3ff9
// declared property getter: - (double)deviceCurrentTime;	// 0x366f47d5
// declared property getter: - (double)duration;	// 0x366f4039
// declared property getter: - (BOOL)enableRate;	// 0x366f43d5
- (void)endInterruption;	// 0x366f21e5
- (void)endInterruptionWithFlags:(id)flags;	// 0x366f21a1
- (void)finalize;	// 0x366f2399
- (void)finishedPlaying:(id)playing;	// 0x366f2061
- (AudioPlayerImpl *)impl;	// 0x366f2019
// declared property getter: - (BOOL)isMeteringEnabled;	// 0x366f4b51
// declared property getter: - (BOOL)isPlaying;	// 0x366f3f9d
// declared property getter: - (unsigned)numberOfChannels;	// 0x366f476d
// declared property getter: - (int)numberOfLoops;	// 0x366f4b3d
// declared property getter: - (float)pan;	// 0x366f4751
- (void)pause;	// 0x366f3cdd
- (float)peakPowerForChannel:(unsigned)channel;	// 0x366f4e69
- (BOOL)play;	// 0x366f3821
- (BOOL)playAtTime:(double)time;	// 0x366f3a6d
- (BOOL)prepareToPlay;	// 0x366f35d5
- (void)privCommonCleanup;	// 0x366f2209
// declared property getter: - (float)rate;	// 0x366f4591
// declared property setter: - (void)setChannelAssignments:(id)assignments;	// 0x366f537d
// declared property setter: - (void)setCurrentTime:(double)time;	// 0x366f4811
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x366f400d
// declared property setter: - (void)setEnableRate:(BOOL)rate;	// 0x366f4235
// declared property setter: - (void)setMeteringEnabled:(BOOL)enabled;	// 0x366f4b69
// declared property setter: - (void)setNumberOfLoops:(int)loops;	// 0x366f499d
// declared property setter: - (void)setPan:(float)pan;	// 0x366f45ad
// declared property setter: - (void)setRate:(float)rate;	// 0x366f43ed
// declared property setter: - (void)setVolume:(float)volume;	// 0x366f4075
// declared property getter: - (id)settings;	// 0x366f4025
- (void)stop;	// 0x366f3e3d
- (void)updateMeters;	// 0x366f4d09
// declared property getter: - (id)url;	// 0x366f3fd1
// declared property getter: - (float)volume;	// 0x366f4219
@end

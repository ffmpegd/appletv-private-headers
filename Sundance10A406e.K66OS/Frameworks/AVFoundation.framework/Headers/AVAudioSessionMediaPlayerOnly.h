/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSString, AVAudioSessionMediaPlayerOnlyInternal;
@protocol AVAudioSessionDelegateMediaPlayerOnly;

@interface AVAudioSessionMediaPlayerOnly : NSObject {
	AVAudioSessionMediaPlayerOnlyInternal *_audioSession;	// 4 = 0x4
}
@property(assign, getter=isApplicationAudioSession) BOOL applicationAudioSession;	// G=0x3032e511; S=0x3032e5a5; converted property
@property(readonly, assign) NSString *category;	// G=0x3032e0f1; 
@property(readonly, assign) int currentHardwareInputNumberOfChannels;	// G=0x3032e1c9; 
@property(readonly, assign) int currentHardwareOutputNumberOfChannels;	// G=0x3032e1cd; 
@property(readonly, assign) double currentHardwareSampleRate;	// G=0x3032e1b1; 
@property(assign) id<AVAudioSessionDelegateMediaPlayerOnly> delegate;	// G=0x3032dd3d; S=0x3032dd5d; 
@property(readonly, assign) BOOL inputIsAvailable;	// G=0x3032e1a9; 
@property(readonly, assign) NSString *mode;	// G=0x3032e1d1; 
@property(readonly, assign) double preferredHardwareSampleRate;	// G=0x3032e179; 
@property(readonly, assign) double preferredIOBufferDuration;	// G=0x3032e191; 
+ (void)initialize;	// 0x3032dad1
- (id)init;	// 0x3032db65
- (void)_addFPListeners;	// 0x3032e745
- (void)_removeFPListeners;	// 0x3032e8e9
- (void)_setFigPlayer:(OpaqueFigPlayer *)player;	// 0x3032e649
- (id)_weakReference;	// 0x3032e629
// declared property getter: - (id)category;	// 0x3032e0f1
// declared property getter: - (int)currentHardwareInputNumberOfChannels;	// 0x3032e1c9
// declared property getter: - (int)currentHardwareOutputNumberOfChannels;	// 0x3032e1cd
// declared property getter: - (double)currentHardwareSampleRate;	// 0x3032e1b1
- (void)dealloc;	// 0x3032dc75
// declared property getter: - (id)delegate;	// 0x3032dd3d
// declared property getter: - (BOOL)inputIsAvailable;	// 0x3032e1a9
// converted property getter: - (BOOL)isApplicationAudioSession;	// 0x3032e511
// declared property getter: - (id)mode;	// 0x3032e1d1
// declared property getter: - (double)preferredHardwareSampleRate;	// 0x3032e179
// declared property getter: - (double)preferredIOBufferDuration;	// 0x3032e191
- (BOOL)setActive:(BOOL)active error:(id *)error;	// 0x3032dd81
- (BOOL)setActive:(BOOL)active withFlags:(int)flags error:(id *)error;	// 0x3032dda1
// converted property setter: - (void)setApplicationAudioSession:(BOOL)session;	// 0x3032e5a5
- (BOOL)setCategory:(id)category error:(id *)error;	// 0x3032de59
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3032dd5d
- (BOOL)setMode:(id)mode error:(id *)error;	// 0x3032e1f1
- (BOOL)setPreferredHardwareSampleRate:(double)rate error:(id *)error;	// 0x3032e0e9
- (BOOL)setPreferredIOBufferDuration:(double)duration error:(id *)error;	// 0x3032e0ed
@end

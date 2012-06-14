/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library
#import "MPMediaPlayback.h"

@class NSURL, UIView;

@interface MPMoviePlayerController : NSObject <MPMediaPlayback> {
@private
	void *_internal;	// 4 = 0x4
}
@property(assign) BOOL allowsAirPlay;	// G=0x3462d041; S=0x3462d075; converted property
@property(readonly, assign, nonatomic) UIView *backgroundView;	// G=0x3462cd61; 
@property(copy, nonatomic) NSURL *contentURL;	// G=0x3462ccdd; S=0x3462cd09; 
@property(assign, nonatomic) int controlStyle;	// G=0x3462cde5; S=0x3462ce11; 
@property(assign, nonatomic) float currentPlaybackRate;	// G=0x3462d4f9; S=0x3462d525; 
@property(assign, nonatomic) double currentPlaybackTime;	// G=0x3462d499; S=0x3462d4c5; 
@property(assign) double endPlaybackTime;	// G=0x3462d46d; S=0x3462d439; converted property
@property(assign, nonatomic, getter=isFullscreen) BOOL fullscreen;	// G=0x3462cf55; S=0x3462cf89; 
@property(assign) double initialPlaybackTime;	// G=0x3462d40d; S=0x3462d3d9; converted property
@property(readonly, assign, nonatomic) BOOL isPreparedToPlay;	// G=0x3462d101; 
@property(readonly, assign, nonatomic) int loadState;	// G=0x3462cdb9; 
@property(assign) int movieSourceType;	// G=0x3462d319; S=0x3462d2ed; converted property
@property(readonly, assign, nonatomic) int playbackState;	// G=0x3462cd8d; 
@property(assign, nonatomic) int repeatMode;	// G=0x3462ce3d; S=0x3462ce69; 
@property(assign, nonatomic) int scalingMode;	// G=0x3462cfe9; S=0x3462d015; 
@property(assign, nonatomic) BOOL shouldAutoplay;	// G=0x3462ce95; S=0x3462cec9; 
@property(assign, nonatomic) BOOL useApplicationAudioSession;	// G=0x3462cef5; S=0x3462cf29; 
@property(readonly, assign, nonatomic) UIView *view;	// G=0x3462cd35; 
+ (void)allInstancesResignActive;	// 0x3462d551
- (id)init;	// 0x3462c8a1
- (id)initWithContentURL:(id)contentURL;	// 0x3462c995
- (void)_resignActive;	// 0x3462d589
// converted property getter: - (BOOL)allowsAirPlay;	// 0x3462d041
// declared property getter: - (id)backgroundView;	// 0x3462cd61
- (void)beginSeekingBackward;	// 0x3462d1e5
- (void)beginSeekingForward;	// 0x3462d1b9
// declared property getter: - (id)contentURL;	// 0x3462ccdd
// declared property getter: - (int)controlStyle;	// 0x3462cde5
// declared property getter: - (float)currentPlaybackRate;	// 0x3462d4f9
// declared property getter: - (double)currentPlaybackTime;	// 0x3462d499
- (void)dealloc;	// 0x3462cba1
- (double)duration;	// 0x3462d345
// converted property getter: - (double)endPlaybackTime;	// 0x3462d46d
- (void)endSeeking;	// 0x3462d211
- (void)forwardInvocation:(id)invocation;	// 0x3462cc91
// converted property getter: - (double)initialPlaybackTime;	// 0x3462d40d
- (BOOL)isAirPlayVideoActive;	// 0x3462d0a1
// declared property getter: - (BOOL)isFullscreen;	// 0x3462cf55
// declared property getter: - (BOOL)isPreparedToPlay;	// 0x3462d101
// declared property getter: - (int)loadState;	// 0x3462cdb9
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3462cc39
- (int)movieMediaTypes;	// 0x3462d2c1
// converted property getter: - (int)movieSourceType;	// 0x3462d319
- (CGSize)naturalSize;	// 0x3462d39d
- (void)pause;	// 0x3462d161
- (void)play;	// 0x3462d135
- (double)playableDuration;	// 0x3462d371
// declared property getter: - (int)playbackState;	// 0x3462cd8d
- (void)prepareToPlay;	// 0x3462d0d5
// declared property getter: - (int)repeatMode;	// 0x3462ce3d
// declared property getter: - (int)scalingMode;	// 0x3462cfe9
// converted property setter: - (void)setAllowsAirPlay:(BOOL)play;	// 0x3462d075
// declared property setter: - (void)setContentURL:(id)url;	// 0x3462cd09
// declared property setter: - (void)setControlStyle:(int)style;	// 0x3462ce11
// declared property setter: - (void)setCurrentPlaybackRate:(float)rate;	// 0x3462d525
// declared property setter: - (void)setCurrentPlaybackTime:(double)time;	// 0x3462d4c5
// converted property setter: - (void)setEndPlaybackTime:(double)time;	// 0x3462d439
// declared property setter: - (void)setFullscreen:(BOOL)fullscreen;	// 0x3462cf89
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;	// 0x3462cfb5
// converted property setter: - (void)setInitialPlaybackTime:(double)time;	// 0x3462d3d9
// converted property setter: - (void)setMovieSourceType:(int)type;	// 0x3462d2ed
// declared property setter: - (void)setRepeatMode:(int)mode;	// 0x3462ce69
// declared property setter: - (void)setScalingMode:(int)mode;	// 0x3462d015
// declared property setter: - (void)setShouldAutoplay:(BOOL)autoplay;	// 0x3462cec9
// declared property setter: - (void)setUseApplicationAudioSession:(BOOL)session;	// 0x3462cf29
// declared property getter: - (BOOL)shouldAutoplay;	// 0x3462ce95
- (void)skipToBeginning;	// 0x3462d269
- (void)skipToNextItem;	// 0x3462d23d
- (void)skipToPreviousItem;	// 0x3462d295
- (void)stop;	// 0x3462d18d
// declared property getter: - (BOOL)useApplicationAudioSession;	// 0x3462cef5
// declared property getter: - (id)view;	// 0x3462cd35
@end

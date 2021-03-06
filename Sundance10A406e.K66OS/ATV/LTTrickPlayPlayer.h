/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, LTAVPlayer, LTSkipAssetVisualControl, LTTrickPlayAsset, NSTimer;

__attribute__((visibility("hidden")))
@interface LTTrickPlayPlayer : XXUnknownSuperclass {
	NSTimer *_playTimer;	// 4 = 0x4
	NSTimer *_highFreqProgressTimer;	// 8 = 0x8
	double _timeIntervalOfLastHighFreqUpdate;	// 12 = 0xc
	int _preferredTimeScale;	// 20 = 0x14
	double _forwardPlaybackEndTime;	// 24 = 0x18
	double _reversePlaybackEndTime;	// 32 = 0x20
	BOOL _didSetLayerContents;	// 40 = 0x28
	LTTrickPlayAsset *_asset;	// 44 = 0x2c
	LTSkipAssetVisualControl *_visuals;	// 48 = 0x30
	float _rate;	// 52 = 0x34
	double _previousTimeIntervalCheck;	// 56 = 0x38
	double _currentTimeInterval;	// 64 = 0x40
	NSMutableDictionary *_cachedChapterImageProxies;	// 72 = 0x48
	LTAVPlayer *_avPlayer;	// 76 = 0x4c
}
@property(readonly, retain) LTAVPlayer *avPlayer;	// G=0x5786d; converted property
@property(assign) float rate;	// G=0x57a89; S=0x578d1; converted property
@property(readonly, retain) LTSkipAssetVisualControl *visuals;	// G=0x57b55; converted property
+ (id)trickPlayerWithAsset:(id)asset;	// 0x576a1
- (id)initWithTrickPlayAsset:(id)trickPlayAsset;	// 0x57735
- (void).cxx_destruct;	// 0x57b6d
- (void)_checkAtEitherEndOfPlayback;	// 0x57c91
- (BOOL)_hasChapterImages;	// 0x584a1
- (void)_highFreqProgressTimerFired:(id)fired;	// 0x583cd
- (void)_postUpdateProgress;	// 0x57bf1
- (void)_resetVisuals;	// 0x57e89
- (double)_timeAdjustedForInterstitials:(double)interstitials;	// 0x57f9d
- (void)_updatePlayer:(id)player;	// 0x5806d
// converted property getter: - (id)avPlayer;	// 0x5786d
- (void)bufferAheadFromTime:(XXStruct_pwHToB)time;	// 0x57b69
- (XXStruct_pwHToB)currentTime;	// 0x57b25
- (void)invalidate;	// 0x57829
// converted property getter: - (float)rate;	// 0x57a89
- (void)seekToTime:(XXStruct_pwHToB)time;	// 0x57a99
- (void)setAVPlayer:(id)player;	// 0x57881
- (void)setForwardPlaybackEndTime:(double)time;	// 0x578a9
// converted property setter: - (void)setRate:(float)rate;	// 0x578d1
- (void)setReversePlaybackEndTime:(double)time;	// 0x578bd
// converted property getter: - (id)visuals;	// 0x57b55
@end


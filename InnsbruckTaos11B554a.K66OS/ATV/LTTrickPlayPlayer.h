/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, LTTrickPlayAsset, LTAVPlayer, NSMutableDictionary, LTSkipAssetVisualControl;

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
@property(readonly, retain) LTAVPlayer *avPlayer;	// G=0x4a54fd; converted property
@property(assign) float rate;	// G=0x4a5719; S=0x4a5561; converted property
@property(readonly, retain) LTSkipAssetVisualControl *visuals;	// G=0x4a57e5; converted property
+ (id)trickPlayerWithAsset:(id)asset;	// 0x4a5339
- (id)initWithTrickPlayAsset:(id)trickPlayAsset;	// 0x4a53cd
- (void).cxx_destruct;	// 0x4a57fd
- (void)_checkAtEitherEndOfPlayback;	// 0x4a5921
- (BOOL)_hasChapterImages;	// 0x4a6125
- (void)_highFreqProgressTimerFired:(id)fired;	// 0x4a6051
- (void)_postUpdateProgress;	// 0x4a5881
- (void)_resetVisuals;	// 0x4a5b19
- (double)_timeAdjustedForInterstitials:(double)interstitials;	// 0x4a5c2d
- (void)_updatePlayer:(id)player;	// 0x4a5cfd
// converted property getter: - (id)avPlayer;	// 0x4a54fd
- (void)bufferAheadFromTime:(XXStruct_pwHToB)time;	// 0x4a57f9
- (XXStruct_pwHToB)currentTime;	// 0x4a57b5
- (void)invalidate;	// 0x4a54b9
// converted property getter: - (float)rate;	// 0x4a5719
- (void)seekToTime:(XXStruct_pwHToB)time;	// 0x4a5729
- (void)setAVPlayer:(id)player;	// 0x4a5511
- (void)setForwardPlaybackEndTime:(double)time;	// 0x4a5539
// converted property setter: - (void)setRate:(float)rate;	// 0x4a5561
- (void)setReversePlaybackEndTime:(double)time;	// 0x4a554d
// converted property getter: - (id)visuals;	// 0x4a57e5
@end


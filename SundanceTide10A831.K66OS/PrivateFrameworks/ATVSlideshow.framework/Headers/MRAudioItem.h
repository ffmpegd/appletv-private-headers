/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class AVPlayerItem;

@interface MRAudioItem : NSObject {
	AVPlayerItem *_avPlayerItem;	// 4 = 0x4
	double _startTime;	// 8 = 0x8
	double _duration;	// 16 = 0x10
	double _localTimeOffset;	// 24 = 0x18
	float _volume;	// 32 = 0x20
	double _fadeInDuration;	// 36 = 0x24
	double _fadeOutDuration;	// 44 = 0x2c
	float _duckLevel;	// 52 = 0x34
	double _duckInDuration;	// 56 = 0x38
	double _duckOutDuration;	// 64 = 0x40
}
@property(readonly, assign) AVPlayerItem *avPlayerItem;	// G=0x33aee275; @synthesize=_avPlayerItem
@property(assign) double duckInDuration;	// G=0x33aee481; S=0x33aee4b5; @synthesize=_duckInDuration
@property(assign) float duckLevel;	// G=0x33aee455; S=0x33aee469; @synthesize=_duckLevel
@property(assign) double duckOutDuration;	// G=0x33aee4e9; S=0x33aee51d; @synthesize=_duckOutDuration
@property(readonly, assign) double duration;	// G=0x33aee2bd; @synthesize=_duration
@property(assign) double fadeInDuration;	// G=0x33aee385; S=0x33aee3b9; @synthesize=_fadeInDuration
@property(assign) double fadeOutDuration;	// G=0x33aee3ed; S=0x33aee421; @synthesize=_fadeOutDuration
@property(assign) double localTimeOffset;	// G=0x33aee2f1; S=0x33aee325; @synthesize=_localTimeOffset
@property(readonly, assign) double startTime;	// G=0x33aee289; @synthesize=_startTime
@property(assign) float volume;	// G=0x33aee359; S=0x33aee36d; @synthesize=_volume
- (id)initWithURL:(id)url startTime:(double)time andDuration:(double)duration;	// 0x33aede61
// declared property getter: - (id)avPlayerItem;	// 0x33aee275
- (void)dealloc;	// 0x33aee059
// declared property getter: - (double)duckInDuration;	// 0x33aee481
// declared property getter: - (float)duckLevel;	// 0x33aee455
// declared property getter: - (double)duckOutDuration;	// 0x33aee4e9
// declared property getter: - (double)duration;	// 0x33aee2bd
// declared property getter: - (double)fadeInDuration;	// 0x33aee385
// declared property getter: - (double)fadeOutDuration;	// 0x33aee3ed
- (void)gotoTime:(double)time;	// 0x33aee151
// declared property getter: - (double)localTimeOffset;	// 0x33aee2f1
// declared property setter: - (void)setDuckInDuration:(double)duration;	// 0x33aee4b5
// declared property setter: - (void)setDuckLevel:(float)level;	// 0x33aee469
// declared property setter: - (void)setDuckOutDuration:(double)duration;	// 0x33aee51d
// declared property setter: - (void)setFadeInDuration:(double)duration;	// 0x33aee3b9
// declared property setter: - (void)setFadeOutDuration:(double)duration;	// 0x33aee421
// declared property setter: - (void)setLocalTimeOffset:(double)offset;	// 0x33aee325
// declared property setter: - (void)setVolume:(float)volume;	// 0x33aee36d
// declared property getter: - (double)startTime;	// 0x33aee289
- (void)syncVolumeToSong:(id)song;	// 0x33aee201
// declared property getter: - (float)volume;	// 0x33aee359
- (float)volumeAtTime:(double)time;	// 0x33aee0a9
@end


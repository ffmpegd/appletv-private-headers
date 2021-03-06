/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class MCAssetAudio, MCAudioPlaylist, MCSlide;

@interface MCSong : MCObject {
	MCAssetAudio *mAsset;	// 12 = 0xc
	float mVolume;	// 16 = 0x10
	double mFadeInDuration;	// 20 = 0x14
	double mFadeOutDuration;	// 28 = 0x1c
	unsigned mIndex;	// 36 = 0x24
	double mStartTime;	// 40 = 0x28
	double mDuration;	// 48 = 0x30
	BOOL mStartTimeIsDefined;	// 56 = 0x38
	BOOL mDurationIsDefined;	// 57 = 0x39
	MCAudioPlaylist *mAudioPlaylistIfAudioPlaylistSong;	// 60 = 0x3c
	MCSlide *mSlideIfSlideSong;	// 64 = 0x40
}
@property(retain) MCAssetAudio *asset;	// G=0x335dbc55; S=0x335dbd49; 
@property(assign) MCAudioPlaylist *audioPlaylistIfAudioPlaylistSong;	// G=0x335dc15d; S=0x335dc16d; @synthesize=mAudioPlaylistIfAudioPlaylistSong
@property(assign, nonatomic) double duration;	// G=0x335dc135; S=0x335dbebd; @synthesize=mDuration
@property(readonly, assign) BOOL durationIsDefined;	// G=0x335dc14d; @synthesize=mDurationIsDefined
@property(assign, nonatomic) double fadeInDuration;	// G=0x335dc095; S=0x335dc0ad; @synthesize=mFadeInDuration
@property(assign, nonatomic) double fadeOutDuration;	// G=0x335dc0c1; S=0x335dc0d9; @synthesize=mFadeOutDuration
@property(assign, nonatomic) unsigned index;	// G=0x335dc0ed; S=0x335dc0fd; @synthesize=mIndex
@property(assign) MCSlide *slideIfSlideSong;	// G=0x335dc17d; S=0x335dc18d; @synthesize=mSlideIfSlideSong
@property(assign, nonatomic) double startTime;	// G=0x335dc10d; S=0x335dbe81; @synthesize=mStartTime
@property(readonly, assign) BOOL startTimeIsDefined;	// G=0x335dc125; @synthesize=mStartTimeIsDefined
@property(assign, nonatomic) float volume;	// G=0x335dc075; S=0x335dc085; @synthesize=mVolume
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x335db491
- (id)init;	// 0x335db5dd
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x335db61d
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x335dbee5
// declared property getter: - (id)asset;	// 0x335dbc55
// declared property getter: - (id)audioPlaylistIfAudioPlaylistSong;	// 0x335dc15d
- (void)demolish;	// 0x335db905
// declared property getter: - (double)duration;	// 0x335dc135
// declared property getter: - (BOOL)durationIsDefined;	// 0x335dc14d
// declared property getter: - (double)fadeInDuration;	// 0x335dc095
// declared property getter: - (double)fadeOutDuration;	// 0x335dc0c1
- (id)imprint;	// 0x335db989
// declared property getter: - (unsigned)index;	// 0x335dc0ed
// declared property setter: - (void)setAsset:(id)asset;	// 0x335dbd49
// declared property setter: - (void)setAudioPlaylistIfAudioPlaylistSong:(id)song;	// 0x335dc16d
// declared property setter: - (void)setDuration:(double)duration;	// 0x335dbebd
// declared property setter: - (void)setFadeInDuration:(double)duration;	// 0x335dc0ad
// declared property setter: - (void)setFadeOutDuration:(double)duration;	// 0x335dc0d9
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x335dc0fd
// declared property setter: - (void)setSlideIfSlideSong:(id)song;	// 0x335dc18d
// declared property setter: - (void)setStartTime:(double)time;	// 0x335dbe81
// declared property setter: - (void)setVolume:(float)volume;	// 0x335dc085
// declared property getter: - (id)slideIfSlideSong;	// 0x335dc17d
// declared property getter: - (double)startTime;	// 0x335dc10d
// declared property getter: - (BOOL)startTimeIsDefined;	// 0x335dc125
- (void)undefineDuration;	// 0x335dbea9
- (void)undefineStartTime;	// 0x335dbe6d
// declared property getter: - (float)volume;	// 0x335dc075
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class NSArray, NSSet, NSMutableSet, MCContainer;

@interface MCAudioPlaylist : MCObject {
	NSMutableSet *mSongs;	// 12 = 0xc
	NSArray *mCachedOrderedSongs;	// 16 = 0x10
	float mVolume;	// 20 = 0x14
	double mFadeInDuration;	// 24 = 0x18
	double mFadeOutDuration;	// 32 = 0x20
	float mDuckLevel;	// 40 = 0x28
	double mDuckInDuration;	// 44 = 0x2c
	double mDuckOutDuration;	// 52 = 0x34
	MCContainer *mContainer;	// 60 = 0x3c
}
@property(assign) MCContainer *container;	// G=0x31b9aadd; S=0x31b9aaed; @synthesize=mContainer
@property(assign, nonatomic) double duckInDuration;	// G=0x31b9aa85; S=0x31b9aa9d; @synthesize=mDuckInDuration
@property(assign, nonatomic) float duckLevel;	// G=0x31b9aa65; S=0x31b9aa75; @synthesize=mDuckLevel
@property(assign, nonatomic) double duckOutDuration;	// G=0x31b9aab1; S=0x31b9aac9; @synthesize=mDuckOutDuration
@property(assign, nonatomic) double fadeInDuration;	// G=0x31b9aa0d; S=0x31b9aa25; @synthesize=mFadeInDuration
@property(assign, nonatomic) double fadeOutDuration;	// G=0x31b9aa39; S=0x31b9aa51; @synthesize=mFadeOutDuration
@property(readonly, assign) NSArray *orderedSongs;	// G=0x31b9a821; 
@property(readonly, assign) NSSet *songs;	// G=0x31b998a1; 
@property(assign, nonatomic) float volume;	// G=0x31b9a9ed; S=0x31b9a9fd; @synthesize=mVolume
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x31b98d6d
- (id)init;	// 0x31b98ef9
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x31b98f7d
- (id)addSongForAsset:(id)asset;	// 0x31b99c59
- (id)addSongsForAssets:(id)assets;	// 0x31b99cbd
// declared property getter: - (id)container;	// 0x31b9aadd
- (unsigned)countOfSongs;	// 0x31b999cd
- (void)demolish;	// 0x31b9929d
// declared property getter: - (double)duckInDuration;	// 0x31b9aa85
// declared property getter: - (float)duckLevel;	// 0x31b9aa65
// declared property getter: - (double)duckOutDuration;	// 0x31b9aab1
// declared property getter: - (double)fadeInDuration;	// 0x31b9aa0d
// declared property getter: - (double)fadeOutDuration;	// 0x31b9aa39
- (id)imprint;	// 0x31b994bd
- (id)insertSongForAsset:(id)asset atIndex:(unsigned)index;	// 0x31b99cf1
- (id)insertSongsForAssets:(id)assets atIndex:(unsigned)index;	// 0x31b99d41
- (void)moveSongsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x31b9a589
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x31b99835
// declared property getter: - (id)orderedSongs;	// 0x31b9a821
- (void)removeAllSongs;	// 0x31b9a535
- (void)removeSongsAtIndices:(id)indices;	// 0x31b9a199
// declared property setter: - (void)setContainer:(id)container;	// 0x31b9aaed
// declared property setter: - (void)setDuckInDuration:(double)duration;	// 0x31b9aa9d
// declared property setter: - (void)setDuckLevel:(float)level;	// 0x31b9aa75
// declared property setter: - (void)setDuckOutDuration:(double)duration;	// 0x31b9aac9
// declared property setter: - (void)setFadeInDuration:(double)duration;	// 0x31b9aa25
// declared property setter: - (void)setFadeOutDuration:(double)duration;	// 0x31b9aa51
// declared property setter: - (void)setVolume:(float)volume;	// 0x31b9a9fd
- (id)songAtIndex:(unsigned)index;	// 0x31b99a89
// declared property getter: - (id)songs;	// 0x31b998a1
// declared property getter: - (float)volume;	// 0x31b9a9ed
@end


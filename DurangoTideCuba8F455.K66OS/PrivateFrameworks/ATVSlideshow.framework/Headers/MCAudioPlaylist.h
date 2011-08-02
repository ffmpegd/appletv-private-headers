/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class MCContainer, NSSet, NSArray, NSMutableSet;

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
@property(assign) MCContainer *container;	// G=0x33db012d; S=0x33db013d; @synthesize=mContainer
@property(assign, nonatomic) double duckInDuration;	// G=0x33db00cd; S=0x33db00e5; @synthesize=mDuckInDuration
@property(assign, nonatomic) float duckLevel;	// G=0x33db00ad; S=0x33db00bd; @synthesize=mDuckLevel
@property(assign, nonatomic) double duckOutDuration;	// G=0x33db00fd; S=0x33db0115; @synthesize=mDuckOutDuration
@property(assign, nonatomic) double fadeInDuration;	// G=0x33db004d; S=0x33db0065; @synthesize=mFadeInDuration
@property(assign, nonatomic) double fadeOutDuration;	// G=0x33db007d; S=0x33db0095; @synthesize=mFadeOutDuration
@property(readonly, assign) NSArray *orderedSongs;	// G=0x33dafe41; 
@property(readonly, assign) NSSet *songs;	// G=0x33daedd5; 
@property(assign, nonatomic) float volume;	// G=0x33db002d; S=0x33db003d; @synthesize=mVolume
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x33dae209
- (id)init;	// 0x33dae395
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x33dae41d
- (id)addSongForAsset:(id)asset;	// 0x33daf211
- (id)addSongsForAssets:(id)assets;	// 0x33daf275
// declared property getter: - (id)container;	// 0x33db012d
- (unsigned)countOfSongs;	// 0x33daef21
- (void)demolish;	// 0x33dae751
// declared property getter: - (double)duckInDuration;	// 0x33db00cd
// declared property getter: - (float)duckLevel;	// 0x33db00ad
// declared property getter: - (double)duckOutDuration;	// 0x33db00fd
// declared property getter: - (double)fadeInDuration;	// 0x33db004d
// declared property getter: - (double)fadeOutDuration;	// 0x33db007d
- (id)imprint;	// 0x33dae9dd
- (id)insertSongForAsset:(id)asset atIndex:(unsigned)index;	// 0x33daf2a1
- (id)insertSongsForAssets:(id)assets atIndex:(unsigned)index;	// 0x33daf2e9
- (void)moveSongsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x33dafb71
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x33daed69
// declared property getter: - (id)orderedSongs;	// 0x33dafe41
- (void)removeAllSongs;	// 0x33dafb29
- (void)removeSongsAtIndices:(id)indices;	// 0x33daf75d
// declared property setter: - (void)setContainer:(id)container;	// 0x33db013d
// declared property setter: - (void)setDuckInDuration:(double)duration;	// 0x33db00e5
// declared property setter: - (void)setDuckLevel:(float)level;	// 0x33db00bd
// declared property setter: - (void)setDuckOutDuration:(double)duration;	// 0x33db0115
// declared property setter: - (void)setFadeInDuration:(double)duration;	// 0x33db0065
// declared property setter: - (void)setFadeOutDuration:(double)duration;	// 0x33db0095
// declared property setter: - (void)setVolume:(float)volume;	// 0x33db003d
- (id)songAtIndex:(unsigned)index;	// 0x33daf001
// declared property getter: - (id)songs;	// 0x33daedd5
// declared property getter: - (float)volume;	// 0x33db002d
@end

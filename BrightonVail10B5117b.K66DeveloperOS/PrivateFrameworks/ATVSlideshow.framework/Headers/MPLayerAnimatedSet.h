/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPLayer.h"

@class NSArray, MCContainerParallelizer;

@interface MPLayerAnimatedSet : MPLayer {
	NSArray *_animatedSets;	// 48 = 0x30
	MCContainerParallelizer *_layerParallelizer;	// 52 = 0x34
}
@property(retain) NSArray *animatedSets;	// G=0x332f7e4d; S=0x332f7e61; converted property
- (id)init;	// 0x332f7b11
- (id)initWithCoder:(id)coder;	// 0x332f7bd1
// converted property getter: - (id)animatedSets;	// 0x332f7e4d
- (void)cleanup;	// 0x332f87e1
- (id)container;	// 0x332f87d1
- (void)dealloc;	// 0x332f7dc5
- (id)description;	// 0x332f7d19
- (void)encodeWithCoder:(id)coder;	// 0x332f7b75
- (void)finalize;	// 0x332f7d85
- (void)insertEffectContainers:(id)containers atIndex:(int)index;	// 0x332f8089
- (void)moveEffectContainersFromIndices:(id)indices toIndex:(int)index;	// 0x332f8621
- (void)removeEffectContainersAtIndices:(id)indices;	// 0x332f83e9
- (void)resetStartTimes;	// 0x332f88cd
// converted property setter: - (void)setAnimatedSets:(id)sets;	// 0x332f7e61
- (void)setAudioPlaylist:(id)playlist;	// 0x332f86cd
- (void)setLayerParallelizer:(id)parallelizer;	// 0x332f8ac1
@end

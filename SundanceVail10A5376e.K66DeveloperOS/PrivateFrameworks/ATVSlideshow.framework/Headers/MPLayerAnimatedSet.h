/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPLayer.h"

@class MCContainerParallelizer, NSArray;

@interface MPLayerAnimatedSet : MPLayer {
	NSArray *_animatedSets;	// 48 = 0x30
	MCContainerParallelizer *_layerParallelizer;	// 52 = 0x34
}
@property(retain) NSArray *animatedSets;	// G=0x361ff32d; S=0x361ff341; converted property
- (id)init;	// 0x361feff1
- (id)initWithCoder:(id)coder;	// 0x361ff0b1
// converted property getter: - (id)animatedSets;	// 0x361ff32d
- (void)cleanup;	// 0x361ffcc1
- (id)container;	// 0x361ffcb1
- (void)dealloc;	// 0x361ff2a5
- (id)description;	// 0x361ff1f9
- (void)encodeWithCoder:(id)coder;	// 0x361ff055
- (void)finalize;	// 0x361ff265
- (void)insertEffectContainers:(id)containers atIndex:(int)index;	// 0x361ff569
- (void)moveEffectContainersFromIndices:(id)indices toIndex:(int)index;	// 0x361ffb01
- (void)removeEffectContainersAtIndices:(id)indices;	// 0x361ff8c9
- (void)resetStartTimes;	// 0x361ffdad
// converted property setter: - (void)setAnimatedSets:(id)sets;	// 0x361ff341
- (void)setAudioPlaylist:(id)playlist;	// 0x361ffbad
- (void)setLayerParallelizer:(id)parallelizer;	// 0x361fffa1
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRLayer.h"
#import "ATVSlideshow-Structs.h"

@class MRTransition, NSArray, MCContainerSerializer, NSMutableDictionary, NSMutableArray;

@interface MRLayerSerializer : MRLayer {
	MCContainerSerializer *mContainer;	// 120 = 0x78
	NSMutableArray *mSublayers;	// 124 = 0x7c
	NSMutableDictionary *mSublayersForPlugs;	// 128 = 0x80
	MRLayer *mCurrentSublayer;	// 132 = 0x84
	MRLayer *mNextSublayer;	// 136 = 0x88
	MRTransition *mCurrentTransition;	// 140 = 0x8c
	MRLayer *mSublayerForTransition;	// 144 = 0x90
	MRLayer *mSublayerToPrecompute;	// 148 = 0x94
	id mPrecomputingTarget;	// 152 = 0x98
	unsigned mPrecomputingType;	// 156 = 0x9c
	MRLayer *mLiveSourceSublayer;	// 160 = 0xa0
	MRLayer *mLiveTargetSublayer;	// 164 = 0xa4
	BOOL mLiveTransitionIsBackwards;	// 168 = 0xa8
	BOOL mIsTransitioning;	// 169 = 0xa9
	BOOL mNeedsToUpdateSublayersTiming;	// 170 = 0xaa
	BOOL mNeedsToUpdateTransitionAttributes;	// 171 = 0xab
	BOOL mHasWarnedDelegateAboutNearingEnd;	// 172 = 0xac
}
@property(readonly, assign) NSArray *sublayers;	// G=0x2fc7ebe9; @synthesize=mSublayers
- (id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;	// 0x2fc7be49
- (id)_createSublayerForPlug:(id)plug;	// 0x2fc7f1d1
- (id)_currentState;	// 0x2fc7e975
- (void)_deleteSublayer:(id)sublayer;	// 0x2fc7f32d
- (id)_dumpLayerWithOptions:(unsigned)options;	// 0x2fc7ea61
- (void)_executeLayerCommandQueue;	// 0x2fc7ebfd
- (BOOL)_isNative3D;	// 0x2fc7dd51
- (void)_observePlug;	// 0x2fc7f6dd
- (void)_observePlugOnPreactivate;	// 0x2fc7f7d9
- (void)_observeSublayer:(id)sublayer;	// 0x2fc7f4d5
- (void)_observeSublayerOnPreactivate:(id)preactivate;	// 0x2fc7f639
- (void)_precomputeAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fc7f9dd
- (void)_preprecomputeAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fc80919
- (void)_prerenderSublayersAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fc80061
- (void)_renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fc7fc49
- (id)_retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fc7fe21
- (void)_setNeedsToRequestRebuildAudio:(BOOL)requestRebuildAudio;	// 0x2fc7f8f5
- (void)_unobservePlug;	// 0x2fc7f769
- (void)_unobservePlugOnDepreactivate;	// 0x2fc7f875
- (void)_unobserveSublayer:(id)sublayer;	// 0x2fc7f591
- (void)_unobserveSublayerOnDepreactivate:(id)depreactivate;	// 0x2fc7f68d
- (void)_updateSublayersTiming;	// 0x2fc7efc1
- (id)actionForKey:(id)key recursive:(BOOL)recursive;	// 0x2fc7e299
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x2fc7e101
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x2fc7c8fd
- (void)cleanup;	// 0x2fc7bfd1
- (void)deactivate;	// 0x2fc7cae1
- (void)depreactivate:(BOOL)depreactivate;	// 0x2fc7cca1
- (void)endMorphing;	// 0x2fc7ca05
- (void)endTransitionToSublayer;	// 0x2fc7e921
- (BOOL)hasAudio;	// 0x2fc7dc39
- (BOOL)hasSomethingToRender;	// 0x2fc7c7e9
- (BOOL)isAlphaFriendly;	// 0x2fc7cfa5
- (BOOL)isLoadedForTime:(double)time;	// 0x2fc7cdc1
- (BOOL)isOpaque;	// 0x2fc7cf31
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x2fc7c295
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fc7d8f9
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fc7d019
- (void)setPixelSize:(CGSize)size;	// 0x2fc7c701
- (id)sublayerAtIndex:(unsigned)index;	// 0x2fc7dda5
- (id)sublayerForPlugObjectID:(id)plugObjectID recursive:(BOOL)recursive;	// 0x2fc7decd
- (id)sublayerHitAtPoint:(CGPoint)point onlyIfHitElement:(BOOL)element localPoint:(CGPoint *)point3;	// 0x2fc7dab5
// declared property getter: - (id)sublayers;	// 0x2fc7ebe9
- (BOOL)supportsDynamicExpansion;	// 0x2fc7dab1
- (void)synchronizeTime;	// 0x2fc7c871
- (double)transitionToNextSublayer;	// 0x2fc7e3f1
- (double)transitionToPreviousSublayer;	// 0x2fc7e4b1
- (double)transitionToSublayerAtIndex:(unsigned)index;	// 0x2fc7e569
@end


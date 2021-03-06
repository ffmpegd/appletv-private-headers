/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRLayer.h"
#import "ATVSlideshow-Structs.h"

@class NSMutableDictionary, NSMutableArray, MRTransition, MCContainerSerializer, NSArray;

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
@property(readonly, assign) NSArray *sublayers;	// G=0x33a254b9; @synthesize=mSublayers
- (id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;	// 0x33a227e9
- (id)_createSublayerForPlug:(id)plug;	// 0x33a25aa9
- (id)_currentState;	// 0x33a25245
- (void)_deleteSublayer:(id)sublayer;	// 0x33a25c05
- (id)_dumpLayerWithOptions:(unsigned)options;	// 0x33a25331
- (void)_executeLayerCommandQueue;	// 0x33a254cd
- (BOOL)_isNative3D;	// 0x33a24629
- (void)_observePlug;	// 0x33a25fb5
- (void)_observePlugOnPreactivate;	// 0x33a260b1
- (void)_observeSublayer:(id)sublayer;	// 0x33a25dad
- (void)_observeSublayerOnPreactivate:(id)preactivate;	// 0x33a25f11
- (void)_precomputeAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33a262b5
- (void)_preprecomputeAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33a27121
- (void)_prerenderSublayersAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33a26931
- (void)_renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33a26559
- (id)_retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33a26715
- (void)_setNeedsToRequestRebuildAudio:(BOOL)requestRebuildAudio;	// 0x33a261cd
- (void)_unobservePlug;	// 0x33a26041
- (void)_unobservePlugOnDepreactivate;	// 0x33a2614d
- (void)_unobserveSublayer:(id)sublayer;	// 0x33a25e69
- (void)_unobserveSublayerOnDepreactivate:(id)depreactivate;	// 0x33a25f65
- (void)_updateSublayersTiming;	// 0x33a25891
- (id)actionForKey:(id)key recursive:(BOOL)recursive;	// 0x33a24b75
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x33a249e1
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x33a232a9
- (void)cleanup;	// 0x33a22975
- (void)deactivate;	// 0x33a23495
- (void)depreactivate:(BOOL)depreactivate;	// 0x33a23655
- (void)endMorphing;	// 0x33a233b9
- (void)endTransitionToSublayer;	// 0x33a251f1
- (BOOL)hasAudio;	// 0x33a24511
- (BOOL)hasSomethingToRender;	// 0x33a23195
- (BOOL)isAlphaFriendly;	// 0x33a23959
- (BOOL)isLoadedForTime:(double)time;	// 0x33a23775
- (BOOL)isOpaque;	// 0x33a238e5
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x33a22c3d
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33a241dd
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33a239cd
- (void)setPixelSize:(CGSize)size;	// 0x33a230ad
- (id)sublayerAtIndex:(unsigned)index;	// 0x33a2467d
- (id)sublayerForPlugObjectID:(id)plugObjectID recursive:(BOOL)recursive;	// 0x33a247a5
- (id)sublayerHitAtPoint:(CGPoint)point onlyIfHitElement:(BOOL)element localPoint:(CGPoint *)point3;	// 0x33a24389
// declared property getter: - (id)sublayers;	// 0x33a254b9
- (BOOL)supportsDynamicExpansion;	// 0x33a24385
- (void)synchronizeTime;	// 0x33a2321d
- (double)transitionToNextSublayer;	// 0x33a24cc9
- (double)transitionToPreviousSublayer;	// 0x33a24d89
- (double)transitionToSublayerAtIndex:(unsigned)index;	// 0x33a24e41
@end


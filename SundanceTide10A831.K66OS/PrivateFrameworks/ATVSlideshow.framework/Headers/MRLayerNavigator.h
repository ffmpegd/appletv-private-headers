/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRLayer.h"
#import "ATVSlideshow-Structs.h"

@class NSMutableDictionary, NSMutableArray, NSDictionary, MCContainerNavigator, MRTransition, NSArray;

@interface MRLayerNavigator : MRLayer {
	MCContainerNavigator *mContainer;	// 120 = 0x78
	NSMutableArray *mSublayers;	// 124 = 0x7c
	NSMutableDictionary *mSublayersForPlugs;	// 128 = 0x80
	MRLayer *mNextSublayer;	// 132 = 0x84
	MRTransition *mCurrentTransition;	// 136 = 0x88
	BOOL mIsTransitioning;	// 140 = 0x8c
	BOOL mTransitionWasAborted;	// 141 = 0x8d
	MRLayer *mSublayerToPrecompute;	// 144 = 0x90
	id mPrecomputingTarget;	// 148 = 0x94
	unsigned mPrecomputingType;	// 152 = 0x98
	double mTransitionStartTime;	// 156 = 0x9c
	double mTransitionDuration;	// 164 = 0xa4
	BOOL mTransitionIsBackwards;	// 172 = 0xac
	NSDictionary *mTransitionChanges;	// 176 = 0xb0
	NSMutableArray *mHistoryBack;	// 180 = 0xb4
	NSMutableArray *mHistoryForth;	// 184 = 0xb8
	MRLayer *mCurrentSublayer;	// 188 = 0xbc
	BOOL mBackAndForthIsEnabled;	// 192 = 0xc0
	double mForcedTransitionTime;	// 196 = 0xc4
}
@property(assign) BOOL backAndForthIsEnabled;	// G=0x33a1c4c9; S=0x33a1c4e1; @synthesize=mBackAndForthIsEnabled
@property(readonly, assign) MRLayer *currentSublayer;	// G=0x33a1c4b5; @synthesize=mCurrentSublayer
@property(assign, nonatomic) double forcedTransitionTime;	// G=0x33a1c4f9; S=0x33a1c511; @synthesize=mForcedTransitionTime
@property(readonly, assign) NSArray *sublayers;	// G=0x33a1c4a1; @synthesize=mSublayers
- (id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;	// 0x33a18fd9
- (id)_createSublayerForPlug:(id)plug;	// 0x33a1c8b5
- (id)_currentState;	// 0x33a1c231
- (void)_deleteSublayer:(id)sublayer;	// 0x33a1c9fd
- (id)_dumpLayerWithOptions:(unsigned)options;	// 0x33a1c319
- (void)_executeLayerCommandQueue;	// 0x33a1c525
- (BOOL)_isNative3D;	// 0x33a1aab1
- (void)_observePlug;	// 0x33a1cc91
- (void)_observePlugOnPreactivate;	// 0x33a1cd49
- (void)_observeSublayer:(id)sublayer;	// 0x33a1cb91
- (void)_precomputeAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33a1cf4d
- (void)_preprecomputeAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33a1dde9
- (void)_prerenderSublayersAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33a1d519
- (void)_renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33a1d169
- (id)_retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33a1d311
- (void)_setNeedsToRequestRebuildAudio:(BOOL)requestRebuildAudio;	// 0x33a1ce65
- (void)_unobservePlug;	// 0x33a1ccf1
- (void)_unobservePlugOnDepreactivate;	// 0x33a1cde5
- (void)_unobserveSublayer:(id)sublayer;	// 0x33a1cc11
- (double)abortTransition:(id)transition;	// 0x33a1b1a1
- (id)actionForKey:(id)key recursive:(BOOL)recursive;	// 0x33a1af7d
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x33a1ae29
// declared property getter: - (BOOL)backAndForthIsEnabled;	// 0x33a1c4c9
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x33a19a99
- (void)cleanup;	// 0x33a191bd
// declared property getter: - (id)currentSublayer;	// 0x33a1c4b5
- (void)deactivate;	// 0x33a19b49
- (void)depreactivate:(BOOL)depreactivate;	// 0x33a19d35
- (double)doTransition:(id)transition;	// 0x33a1be0d
- (double)doTransition:(id)transition backwards:(BOOL)backwards;	// 0x33a1b291
- (double)doTransitionBackwards:(id)backwards;	// 0x33a1be21
- (void)endMorphing;	// 0x33a19b05
- (void)endTransitionToSublayer;	// 0x33a1c149
- (double)finishTransition:(id)transition;	// 0x33a1b0d1
// declared property getter: - (double)forcedTransitionTime;	// 0x33a1c4f9
- (double)goBack;	// 0x33a1bfc1
- (double)goForth;	// 0x33a1be39
- (BOOL)hasAudio;	// 0x33a1a999
- (BOOL)hasSomethingToRender;	// 0x33a19985
- (BOOL)isAlphaFriendly;	// 0x33a1a065
- (BOOL)isInfinite;	// 0x33a1a0d9
- (BOOL)isLoadedForTime:(double)time;	// 0x33a19e39
- (BOOL)isOpaque;	// 0x33a19ff1
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x33a194bd
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33a1a665
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33a1a10d
// declared property setter: - (void)setBackAndForthIsEnabled:(BOOL)enabled;	// 0x33a1c4e1
// declared property setter: - (void)setForcedTransitionTime:(double)time;	// 0x33a1c511
- (void)setPixelSize:(CGSize)size;	// 0x33a1989d
- (id)sublayerForID:(id)anId;	// 0x33a1ab05
- (id)sublayerForPlugObjectID:(id)plugObjectID recursive:(BOOL)recursive;	// 0x33a1ac21
- (id)sublayerHitAtPoint:(CGPoint)point onlyIfHitElement:(BOOL)element localPoint:(CGPoint *)point3;	// 0x33a1a7f5
// declared property getter: - (id)sublayers;	// 0x33a1c4a1
- (void)synchronizeTime;	// 0x33a19a0d
@end

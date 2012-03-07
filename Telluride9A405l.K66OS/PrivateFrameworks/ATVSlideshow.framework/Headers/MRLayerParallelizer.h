/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MRLayer.h"

@class NSMutableDictionary, NSMutableArray, MCContainerParallelizer, NSString, NSArray;

@interface MRLayerParallelizer : MRLayer {
	MCContainerParallelizer *mContainer;	// 112 = 0x70
	NSMutableArray *mSublayers;	// 116 = 0x74
	NSMutableDictionary *mSublayersForPlugs;	// 120 = 0x78
	NSString *mCurrentPageID;	// 124 = 0x7c
	CGColorRef mBackgroundColor;	// 128 = 0x80
	BOOL mNeedsToUpdateSublayersOrdering;	// 132 = 0x84
	BOOL mNeedsToUpdateBackgroundColor;	// 133 = 0x85
}
@property(copy) NSString *currentPageID;	// G=0x33580665; S=0x33580679; @synthesize=mCurrentPageID
@property(readonly, assign) NSArray *sublayers;	// G=0x33580655; @synthesize=mSublayers
- (id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;	// 0x3357dc0d
- (id)_createSublayerForPlug:(id)plug;	// 0x33580ba9
- (void)_deleteSublayer:(id)sublayer;	// 0x33580d3d
- (id)_dumpLayerWithOptions:(unsigned)options;	// 0x335804e5
- (void)_executeLayerCommandQueue;	// 0x3358069d
- (void)_observePlug;	// 0x33581005
- (void)_observePlugOnPreactivate;	// 0x335810bd
- (void)_observeSublayer:(id)sublayer;	// 0x33580ead
- (void)_observeSublayerOnPreactivate:(id)preactivate;	// 0x33580f49
- (void)_renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x335812cd
- (id)_retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3358166d
- (void)_setNeedsToRequestRebuildAudio:(BOOL)requestRebuildAudio;	// 0x33581209
- (void)_unobservePlug;	// 0x33581065
- (void)_unobservePlugOnDepreactivate;	// 0x33581171
- (void)_unobserveSublayer:(id)sublayer;	// 0x33580ef1
- (void)_unobserveSublayerOnDepreactivate:(id)depreactivate;	// 0x33580fb1
- (void)_updateSublayersOrdering;	// 0x33580b05
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x3357fed9
- (void)cleanup;	// 0x3357dd7d
// declared property getter: - (id)currentPageID;	// 0x33580665
- (void)deactivate;	// 0x3357e7a5
- (void)depreactivate:(BOOL)depreactivate;	// 0x3357e889
- (BOOL)hasAudio;	// 0x3357f69d
- (BOOL)hasSomethingToRender;	// 0x3357e5a9
- (BOOL)isAlphaFriendly;	// 0x3357ed7d
- (BOOL)isInfinite;	// 0x3357edf5
- (BOOL)isLoadedForTime:(double)time;	// 0x3357e985
- (BOOL)isOpaque;	// 0x3357eadd
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3357dff1
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3357f4e1
- (double)phaseInSublayerForID:(id)anId;	// 0x335802c5
- (double)phaseOutSublayerForID:(id)anId;	// 0x335803dd
- (void)preactivate;	// 0x3357e765
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3357ee2d
// declared property setter: - (void)setCurrentPageID:(id)anId;	// 0x33580679
- (void)setNeedsUpdateForPluggerOfSublayer:(id)sublayer;	// 0x3357f5d5
- (void)setPixelSize:(CGSize)size;	// 0x3357e3ed
- (id)sublayerForID:(id)anId;	// 0x3357f795
- (id)sublayerForPlugObjectID:(id)plugObjectID recursive:(BOOL)recursive;	// 0x3357f8cd
- (id)sublayerHitAtPoint:(CGPoint)point onlyIfHitElement:(BOOL)element localPoint:(CGPoint *)point3;	// 0x3357fab1
// declared property getter: - (id)sublayers;	// 0x33580655
- (void)synchronizeTime;	// 0x3357e6a5
@end


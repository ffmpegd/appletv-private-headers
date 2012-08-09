/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MZEffectTiming.h"
#import "MREffect.h"

@class NSMutableArray, NSMutableDictionary;

@interface MREffectShiftingTiles : MREffect <MZEffectTiming> {
	NSMutableDictionary *mSprites;	// 116 = 0x74
	NSMutableArray *mTiming;	// 120 = 0x78
	NSMutableArray *mFirstLayout;	// 124 = 0x7c
	NSMutableArray *mLastLayout;	// 128 = 0x80
	int mLastCol;	// 132 = 0x84
	int mLastSlideIndex;	// 136 = 0x88
	int mSlideStartIndex;	// 140 = 0x8c
	BOOL mNeedsToBeRebuilt;	// 144 = 0x90
	BOOL mNeedsToRecalculateIterations;	// 145 = 0x91
	int mIterationStartIndex;	// 148 = 0x94
	BOOL mCanAddSlides;	// 152 = 0x98
}
@property(readonly, assign, nonatomic) double mainDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseInDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseOutDuration;	// @dynamic
+ (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information textInformation:(id)information4 inAspectRatio:(float)aspectRatio;	// 0x321ecbd9
+ (BOOL)hasCustomTiming;	// 0x321ecbd5
+ (BOOL)supportsDynamicExpansionForEffectID:(id)effectID;	// 0x321ecc99
+ (unsigned)typicalSlideBatchSizeForEffectID:(id)effectID;	// 0x321ecc9d
- (id)initWithEffectID:(id)effectID;	// 0x321eca9d
- (void)_applyTimingToSlideProviders;	// 0x321ed441
- (float)_aspectRatioForSlideIndex:(int)slideIndex;	// 0x321eebc1
- (double)_calculateMainDuration;	// 0x321ee701
- (void)_cleanup;	// 0x321ecb55
- (int)_displaySlideCountForLayout:(int)layout;	// 0x321eec5d
- (int)_displayWidthForLayout:(int)layout;	// 0x321eec75
- (id)_infoForTime:(double)time;	// 0x321f3075
- (id)_layoutForIteration:(int)iteration;	// 0x321f31e1
- (id)_layoutForTime:(double)time;	// 0x321f3155
- (int)_lowestDisplayIteration;	// 0x321eceb5
- (id)_setupFirstLayout;	// 0x321ee749
- (void)_setupLayoutsWithSlideInfo:(id)slideInfo append:(BOOL)append;	// 0x321eecc1
- (int)_slideCountForLayout:(int)layout;	// 0x321eec69
- (id)_slideProviderWithAspectRatio:(BOOL)aspectRatio nearest:(int)nearest actual:(int *)actual;	// 0x321f2fdd
- (void)_unload;	// 0x321f367d
- (void)_updateSizeScripts;	// 0x321edd85
- (int)_widthForLayout:(int)layout;	// 0x321eec99
- (void)appendSlideInformation:(id)information andTextInformation:(id)information2;	// 0x321ed339
- (double)displayTimeForSlideAtIndex:(unsigned)index;	// 0x321eeb81
- (double)displayTimeForTextAtIndex:(unsigned)index;	// 0x321eeba9
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x321f34e9
- (unsigned)firstSlideIndexStillNeededAtTime:(double)time;	// 0x321ecce1
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x321f3635
- (double)lowestDisplayTime;	// 0x321eeb01
- (BOOL)needsMoreSlidesAtTime:(double)time;	// 0x321ed3a9
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x321f06b9
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x321f0ad1
- (void)setMultiImageSlideRange:(NSRange)range;	// 0x321ed1bd
- (void)setPhaseInDuration:(double)duration mainDuration:(double)duration2 phaseOutDuration:(double)duration3;	// 0x321ed3f5
- (double)showDurationForSlideAtIndex:(unsigned)index;	// 0x321ee781
- (double)showTimeForSlideAtIndex:(unsigned)index;	// 0x321ee455
- (BOOL)supportsDynamicExpansion;	// 0x321ecca1
- (int)typicalSlideBatchSize;	// 0x321ecca5
@end

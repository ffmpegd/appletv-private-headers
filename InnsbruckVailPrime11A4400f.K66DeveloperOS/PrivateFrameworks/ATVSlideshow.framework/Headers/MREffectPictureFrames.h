/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"
#import "MZEffectTiming.h"

@class MRImageProvider, MRCroppingSprite, NSString, NSMutableDictionary, NSMutableArray;

@interface MREffectPictureFrames : MREffect <MZEffectTiming> {
	NSMutableDictionary *mSprites;	// 116 = 0x74
	NSMutableDictionary *mFrameProviders;	// 120 = 0x78
	MRCroppingSprite *mFrameSprite;	// 124 = 0x7c
	MRImageProvider *mWallProvider;	// 128 = 0x80
	MRImageProvider *mGradientProvider;	// 132 = 0x84
	NSMutableArray *mTableProviders;	// 136 = 0x88
	NSMutableArray *mWallSprites;	// 140 = 0x8c
	NSMutableArray *mLayoutWidths;	// 144 = 0x90
	float mTotalWidth;	// 148 = 0x94
	float mXOffset;	// 152 = 0x98
	BOOL mIsLoaded;	// 156 = 0x9c
	NSMutableArray *mLayouts;	// 160 = 0xa0
	NSMutableArray *mFrames;	// 164 = 0xa4
	NSMutableArray *mSlideOrder;	// 168 = 0xa8
	NSMutableArray *mAspectRatios;	// 172 = 0xac
	NSString *mFirstFrame;	// 176 = 0xb0
	NSString *mLastFrame;	// 180 = 0xb4
}
@property(readonly, assign, nonatomic) double mainDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseInDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseOutDuration;	// @dynamic
+ (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information textInformation:(id)information4 inAspectRatio:(float)aspectRatio;	// 0x2fd3e421
+ (BOOL)hasCustomTiming;	// 0x2fd3e41d
+ (void)initialize;	// 0x2fd39399
- (id)initWithEffectID:(id)effectID;	// 0x2fd3b5a1
- (void)_applyTimingToSlideProviders;	// 0x2fd3e5c1
- (float)_aspectRatioForSlideIndex:(int)slideIndex;	// 0x2fd3fc25
- (void)_cleanup;	// 0x2fd3b6b5
- (void)_drawBreakFrame:(id)frame provider:(id)provider index:(int)index rect:(CGRect)rect time:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fd423d9
- (void)_drawBreakFrameInRect:(CGRect)rect frameWidth:(float)width time:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fd42985
- (id)_drawFrame:(id)frame provider:(id)provider index:(int)index rect:(CGRect)rect time:(double)time onTable:(BOOL)table inContext:(id)context withArguments:(id)arguments;	// 0x2fd42ee5
- (double)_durationForEffect;	// 0x2fd3e941
- (double)_durationForEffect:(BOOL)effect;	// 0x2fd3e959
- (CGRect)_frameRectFromInfo:(id)info onShelf:(BOOL)shelf;	// 0x2fd3ffad
- (float)_nextSlideProviderAspectRatioToFitInAspectRatio:(id)aspectRatio providerKeys:(id)keys slideInformation:(id)information index:(int *)index force:(BOOL)force;	// 0x2fd419c9
- (id)_populateFrames;	// 0x2fd3fcb5
- (id)_randomFrameForAspectRatio:(id)aspectRatio forTable:(BOOL)table allowMatte:(BOOL)matte onlyLoaded:(BOOL)loaded ignoreFrames:(id)frames randomGenerator:(id)generator;	// 0x2fd41f21
- (CGRect)_rectForFrameID:(id)frameID rect:(CGRect)rect onTable:(BOOL)table aspectRatio:(float)ratio slideAspectRatio:(float)ratio5;	// 0x2fd4220d
- (void)_setSizeScripts:(float)scripts;	// 0x2fd3c1c1
- (void)_setupLayoutWithSlideInformation:(id)slideInformation;	// 0x2fd3ef39
- (float)_startingOffset;	// 0x2fd3eebd
- (float)_startingWidth;	// 0x2fd3ed69
- (void)_unload;	// 0x2fd43671
- (float)_xForSlideAtIndex:(int)index layoutWidth:(float *)width;	// 0x2fd40081
- (double)displayTimeForSlideAtIndex:(unsigned)index;	// 0x2fd40731
- (double)displayTimeForTextAtIndex:(unsigned)index;	// 0x2fd40819
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x2fd434dd
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x2fd43629
- (BOOL)isLoadedForTime:(double)time;	// 0x2fd3beb1
- (id)layoutsWithSlidesInfo:(id)slidesInfo seed:(unsigned)seed hasShelf:(BOOL)shelf;	// 0x2fd3b9ad
- (double)lowestDisplayTime;	// 0x2fd40831
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fd3cfd1
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fd40849
- (void)setPhaseInDuration:(double)duration mainDuration:(double)duration2 phaseOutDuration:(double)duration3;	// 0x2fd3e571
- (void)setPixelSize:(CGSize)size;	// 0x2fd3c0b1
- (double)showDurationForSlideAtIndex:(unsigned)index;	// 0x2fd405e1
- (double)showTimeForSlideAtIndex:(unsigned)index;	// 0x2fd404e1
@end

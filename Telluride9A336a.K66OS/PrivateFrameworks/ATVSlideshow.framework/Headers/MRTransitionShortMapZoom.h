/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRTransition.h"
#import "ATVSlideshow-Structs.h"

@class MRImageProvider;

@interface MRTransitionShortMapZoom : MRTransition {
	MRImageProvider *mGradientProvider;	// 60 = 0x3c
	MRImageProvider *mPinProvider;	// 64 = 0x40
	MRImageProvider *mYellowPinProvider;	// 68 = 0x44
	MRImageProvider *mRedPinProvider;	// 72 = 0x48
	MRImageProvider *mBoxShadowSmall;	// 76 = 0x4c
}
- (id)initWithTransitionID:(id)transitionID;	// 0x3439feb5
- (void)_cleanup;	// 0x343a02c9
- (void)drawSortedPins:(id)pins providers:(id)providers attributes:(id)attributes offset:(CGPoint)offset outro:(BOOL)outro atTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x343a07e5
- (BOOL)isLoadedForTime:(double)time;	// 0x343a0479
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x343a049d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x343a07e1
- (void)setAttributes:(id)attributes;	// 0x343a0581
- (void)setPixelSize:(CGSize)size;	// 0x343a03ad
- (void)unload;	// 0x343a180d
@end


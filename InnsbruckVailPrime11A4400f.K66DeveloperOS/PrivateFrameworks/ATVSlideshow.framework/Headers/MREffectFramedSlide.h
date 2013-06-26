/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRCroppingSprite;

@interface MREffectFramedSlide : MREffect {
	MRCroppingSprite *mSprite;	// 116 = 0x74
	BOOL mHasInnerRect;	// 120 = 0x78
	BOOL mHasOuterRect;	// 121 = 0x79
	BOOL mIsPlayable;	// 122 = 0x7a
	BOOL mIsPlaying;	// 123 = 0x7b
	BOOL mIsPressed;	// 124 = 0x7c
}
+ (void)initialize;	// 0x2fd47569
- (id)init;	// 0x2fd475f5
- (void)_cleanup;	// 0x2fd47659
- (void)_renderImage:(id)image withFrame:(id)frame atTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fd480a9
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x2fd484b5
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x2fd48505
- (BOOL)isNative3D;	// 0x2fd47b2d
- (BOOL)isOpaque;	// 0x2fd47b31
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fd47b35
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fd47d49
- (void)setAttributes:(id)attributes;	// 0x2fd47685
- (void)setLiveAttributes:(id)attributes;	// 0x2fd47a89
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImage, MRTextRenderer, MRCroppingSprite;

@interface MREffectWatercolorTitle : MREffect {
	MRTextRenderer *mTextRenderer;	// 116 = 0x74
	MRImage *mTextImage;	// 120 = 0x78
	MRCroppingSprite *mTextSprite;	// 124 = 0x7c
}
- (id)initWithEffectID:(id)effectID;	// 0x360e0049
- (void)_cleanup;	// 0x360e00a5
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x360e0631
- (int)_maxLinesForTextElement:(id)textElement;	// 0x360e062d
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x360e05f9
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x360e0129
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x360e016d
- (BOOL)isLoadedForTime:(double)time;	// 0x360e01f5
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x360e0279
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x360e02b1
- (void)setPixelSize:(CGSize)size;	// 0x360e01c5
@end

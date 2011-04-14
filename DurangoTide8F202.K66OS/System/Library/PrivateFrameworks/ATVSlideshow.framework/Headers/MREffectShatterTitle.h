/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImageProvider, MRCroppingSprite, MRTextRenderer, MRImage;

@interface MREffectShatterTitle : MREffect {
	MRImageProvider *mMasks[9];	// 112 = 0x70
	MRTextRenderer *mTextRenderer;	// 148 = 0x94
	MRImage *mTextImage;	// 152 = 0x98
	MRCroppingSprite *mTextSprite;	// 156 = 0x9c
}
- (id)initWithEffectID:(id)effectID;	// 0x314de09d
- (void)_cleanup;	// 0x314de26d
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x314de559
- (int)_maxLinesForTextElement:(id)textElement;	// 0x314de7f1
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x314de7c5
- (void)_unload;	// 0x314de76d
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x314de381
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x314de3c5
- (BOOL)isLoadedForTime:(double)time;	// 0x314de411
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x314de4d5
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x314de555
- (void)setPixelSize:(CGSize)size;	// 0x314de305
@end

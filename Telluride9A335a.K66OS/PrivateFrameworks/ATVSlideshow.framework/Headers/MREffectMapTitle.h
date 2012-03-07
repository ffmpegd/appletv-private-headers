/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class MRCroppingSprite, MRTextRenderer, MRImage;

@interface MREffectMapTitle : MREffect {
	MRTextRenderer *mTextRenderer;	// 112 = 0x70
	MRImage *mTextImage;	// 116 = 0x74
	MRCroppingSprite *mTextSprite;	// 120 = 0x78
}
- (id)initWithEffectID:(id)effectID;	// 0x31b044d1
- (void)_cleanup;	// 0x31b0452d
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31b04af1
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x31b045b5
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x31b04605
- (BOOL)isLoadedForTime:(double)time;	// 0x31b04891
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31b04915
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31b0494d
- (void)setAttributes:(id)attributes;	// 0x31b0465d
@end


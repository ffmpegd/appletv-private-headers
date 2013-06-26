/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImageProvider, MRTextRenderer, NSMutableDictionary, MRImage;

@interface MREffectScrapbookTitle : MREffect {
	MRImageProvider *mImageProviders[5];	// 116 = 0x74
	NSMutableDictionary *mSprites;	// 136 = 0x88
	MRTextRenderer *mTextRenderer0;	// 140 = 0x8c
	MRImage *mTextImage0;	// 144 = 0x90
	float mLocalTranslationX;	// 148 = 0x94
	float mLocalTranslationY;	// 152 = 0x98
}
- (id)initWithEffectID:(id)effectID;	// 0x2fc49409
- (void)_cleanup;	// 0x2fc49f21
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fc4a5a9
- (int)_maxLinesForTextElement:(id)textElement;	// 0x2fc4a981
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x2fc4a8f9
- (void)_unload;	// 0x2fc4a985
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x2fc4a039
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x2fc4a24d
- (BOOL)isAlphaFriendly;	// 0x2fc4a449
- (BOOL)isLoadedForTime:(double)time;	// 0x2fc4a3c1
- (BOOL)isOpaque;	// 0x2fc4a445
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fc4a44d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fc4a4cd
- (void)renderEffectTitle2AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fc4bab9
- (void)renderEffectTitleAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fc4aa51
- (void)setPixelSize:(CGSize)size;	// 0x2fc49f89
@end

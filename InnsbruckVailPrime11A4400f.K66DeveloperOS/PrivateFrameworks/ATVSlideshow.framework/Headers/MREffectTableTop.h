/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImageProvider, MRTextRenderer, MRCroppingSprite, NSArray, NSMutableDictionary, MRCAMLBezierData, MRImage;

@interface MREffectTableTop : MREffect {
	NSMutableDictionary *mSprites;	// 116 = 0x74
	MRCroppingSprite *mExtraSprites[2];	// 120 = 0x78
	MRImageProvider *mPhotoBackProvider;	// 128 = 0x80
	MRTextRenderer *mTextRenderer;	// 132 = 0x84
	MRImage *mTextImage;	// 136 = 0x88
	MRCroppingSprite *mTextSprite;	// 140 = 0x8c
	MRCroppingSprite *mPhotoBackSprite;	// 144 = 0x90
	float mLocalMatrix[16];	// 148 = 0x94
	CGSize mMaxTextSize;	// 212 = 0xd4
	BOOL mIsBreak;	// 220 = 0xdc
	BOOL mIsLoaded;	// 221 = 0xdd
	NSArray *mShuffledIndicies;	// 224 = 0xe0
	MRCAMLBezierData *mBezierData;	// 228 = 0xe4
}
+ (void)initialize;	// 0x2fc54b11
- (id)initWithEffectID:(id)effectID;	// 0x2fc54c65
- (void)_cleanup;	// 0x2fc54e05
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fc583a1
- (int)_maxLinesForTextElement:(id)textElement;	// 0x2fc58399
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x2fc58381
- (void)_unload;	// 0x2fc58855
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x2fc58031
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x2fc582b5
- (BOOL)isLoadedForTime:(double)time;	// 0x2fc54fb5
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fc55071
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fc554c9
- (void)setPixelSize:(CGSize)size;	// 0x2fc54f5d
@end

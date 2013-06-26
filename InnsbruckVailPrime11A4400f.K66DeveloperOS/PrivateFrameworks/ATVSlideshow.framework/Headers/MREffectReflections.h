/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class NSMutableDictionary, MRReflectionsRenderable, MRImageProvider;

@interface MREffectReflections : MREffect {
	NSMutableDictionary *mSprites;	// 116 = 0x74
	BOOL mSpeedUpRight;	// 120 = 0x78
	BOOL mIsLoaded;	// 121 = 0x79
	NSMutableDictionary *mLayoutInfo;	// 124 = 0x7c
	NSMutableDictionary *mBreakInformation;	// 128 = 0x80
	BOOL mHasBreak;	// 132 = 0x84
	BOOL mShrink;	// 133 = 0x85
	int mTilt;	// 136 = 0x88
	int mPhaseOutType;	// 140 = 0x8c
	int mDirection;	// 144 = 0x90
	int mLayout;	// 148 = 0x94
	int mAspect;	// 152 = 0x98
	MRImageProvider *mGroundShadowCenterProvider;	// 156 = 0x9c
	MRImageProvider *mGroundShadowLeftProvider;	// 160 = 0xa0
	MRImageProvider *mGroundShadowRightProvider;	// 164 = 0xa4
	MRReflectionsRenderable *mHead;	// 168 = 0xa8
	MRReflectionsRenderable *mTail;	// 172 = 0xac
}
+ (void)initialize;	// 0x2fc368e1
- (id)initWithEffectID:(id)effectID;	// 0x2fc3727d
- (void)_applySizeScripts:(float)scripts;	// 0x2fc37c89
- (void)_cleanup;	// 0x2fc37509
- (float)_tXForTime:(double)time layout:(id)layout;	// 0x2fc38bf5
- (void)_unload;	// 0x2fc3a671
- (float)_yOffsetForTime:(double)time layout:(id)layout size:(CGSize)size position:(CGPoint)position aspectRatio:(float)ratio;	// 0x2fc38d31
- (float)_yRotationForTime:(double)time layout:(id)layout;	// 0x2fc389a9
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x2fc3a5bd
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x2fc396bd
- (void)endMorphing;	// 0x2fc3a61d
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x2fc398c1
- (BOOL)isLoadedForTime:(double)time;	// 0x2fc3770d
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fc3777d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fc37fd1
- (void)renderKey:(id)key size:(CGSize)size position:(CGPoint)position yRot:(float)rot tX:(float)x time:(double)time inContext:(id)context withArguments:(id)arguments flipped:(BOOL)flipped shadow:(BOOL)shadow;	// 0x2fc38eb9
- (void)renderStuffAtTime:(double)time alpha:(float)alpha inContext:(id)context withArguments:(id)arguments;	// 0x2fc39909
- (void)setAttributes:(id)attributes;	// 0x2fc37671
- (void)setPixelSize:(CGSize)size;	// 0x2fc375e1
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class MRCroppingSprite, MRImageProvider;

@interface MREffectModern : MREffect {
	MRCroppingSprite *mSprite;	// 112 = 0x70
	MRImageProvider *mGradientProvider;	// 116 = 0x74
}
- (id)initWithEffectID:(id)effectID;	// 0x349bc025
- (void)_cleanup;	// 0x349bc151
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x349bc975
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x349bc9c5
- (BOOL)isAlphaFriendly;	// 0x349bc201
- (BOOL)isNative3D;	// 0x349bc1f9
- (BOOL)isOpaque;	// 0x349bc1fd
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x349bc919
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x349bc205
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x349bc309
- (void)renderImage:(id)image withMask:(id)mask inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size zRotation:(float)rotation;	// 0x349bc9ed
- (void)setPixelSize:(CGSize)size;	// 0x349bc1a1
@end


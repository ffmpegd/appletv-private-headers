/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImageProvider;

@interface MREffectWatercolorBackground : MREffect {
	MRImageProvider *mPlasmaProvider;	// 116 = 0x74
}
- (id)initWithEffectID:(id)effectID;	// 0x334573c1
- (void)_cleanup;	// 0x334574c5
- (void)_unload;	// 0x33457de1
- (BOOL)isLoadedForTime:(double)time;	// 0x33457555
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33457579
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x334577d1
- (void)setAttributes:(id)attributes;	// 0x334575e1
- (void)setPixelSize:(CGSize)size;	// 0x33457501
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImageProvider;

@interface MREffectHangingPicturesBackgroundLights : MREffect {
	MRImageProvider *mBackgroundImageProvider;	// 116 = 0x74
	MRImageProvider *mBokehImageProvider;	// 120 = 0x78
}
- (id)initWithEffectID:(id)effectID;	// 0x33407ea9
- (void)_cleanup;	// 0x33408109
- (void)_unload;	// 0x334091c1
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3340822d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x334082b1
- (void)setPixelSize:(CGSize)size;	// 0x33408179
@end


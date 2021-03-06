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
	MRImageProvider *mBackgroundImageProvider;	// 112 = 0x70
	MRImageProvider *mBokehImageProvider;	// 116 = 0x74
}
- (id)initWithEffectID:(id)effectID;	// 0x33d14d51
- (void)_cleanup;	// 0x33d14fc5
- (void)_unload;	// 0x33d15f89
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d150f5
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d1517d
- (void)setPixelSize:(CGSize)size;	// 0x33d15035
@end


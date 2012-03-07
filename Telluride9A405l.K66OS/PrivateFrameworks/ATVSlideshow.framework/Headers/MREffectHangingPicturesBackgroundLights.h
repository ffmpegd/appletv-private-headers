/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class MRImageProvider;

@interface MREffectHangingPicturesBackgroundLights : MREffect {
	MRImageProvider *mBackgroundImageProvider;	// 112 = 0x70
	MRImageProvider *mBokehImageProvider;	// 116 = 0x74
}
- (id)initWithEffectID:(id)effectID;	// 0x3351a6e9
- (void)_cleanup;	// 0x3351a989
- (void)_unload;	// 0x3351b959
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3351aab1
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3351ab3d
- (void)setPixelSize:(CGSize)size;	// 0x3351a9fd
@end


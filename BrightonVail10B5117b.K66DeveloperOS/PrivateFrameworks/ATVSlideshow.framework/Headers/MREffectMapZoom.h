/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class NSMutableArray, MRImageProvider;

@interface MREffectMapZoom : MREffect {
	NSMutableArray *mTileProviders;	// 116 = 0x74
	MRImageProvider *mGradientProvider;	// 120 = 0x78
}
- (id)initWithEffectID:(id)effectID;	// 0x33354a11
- (void)_cleanup;	// 0x33354b11
- (void)_unload;	// 0x33355bb9
- (BOOL)isLoadedForTime:(double)time;	// 0x33354c75
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33354d71
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33355559
- (void)setPixelSize:(CGSize)size;	// 0x33354c21
@end

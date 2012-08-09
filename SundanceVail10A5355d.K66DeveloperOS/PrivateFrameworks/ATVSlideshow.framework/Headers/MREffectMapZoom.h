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
- (id)initWithEffectID:(id)effectID;	// 0x320d8639
- (void)_cleanup;	// 0x320d8739
- (void)_unload;	// 0x320d9881
- (BOOL)isLoadedForTime:(double)time;	// 0x320d889d
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320d8999
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320d9179
- (void)setPixelSize:(CGSize)size;	// 0x320d8849
@end

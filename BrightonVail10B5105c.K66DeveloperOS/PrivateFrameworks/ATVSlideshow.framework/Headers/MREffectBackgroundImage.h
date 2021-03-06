/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class NSString, MRImageProvider;

@interface MREffectBackgroundImage : MREffect {
	MRImageProvider *mImageProvider;	// 116 = 0x74
	NSString *mClampingMode;	// 120 = 0x78
}
@property(retain) id assetPath;	// G=0x3244b581; S=0x3244b5a9; converted property
- (id)initWithEffectID:(id)effectID;	// 0x3244a9e9
- (void)_cleanup;	// 0x3244ac95
- (void)_unload;	// 0x3244b5cd
// converted property getter: - (id)assetPath;	// 0x3244b581
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3244ada1
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3244ae19
// converted property setter: - (void)setAssetPath:(id)path;	// 0x3244b5a9
- (void)setPixelSize:(CGSize)size;	// 0x3244acfd
@end


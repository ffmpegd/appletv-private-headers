/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class MPDocument;

@interface MPCropController : NSObject {
	id _delegate;	// 4 = 0x4
	MPDocument *_authoredDocument;	// 8 = 0x8
}
@property(assign) id delegate;	// G=0x309b39c1; S=0x309b39d1; converted property
+ (void)releaseSharedController;	// 0x309b3955
+ (id)sharedController;	// 0x309b390d
- (id)init;	// 0x309b3981
- (void)_applyCropToSlidesInEffectContainersWithArguments:(id)arguments;	// 0x309b4341
- (void)applyAnimatedCropToSlide:(id)slide withOptions:(id)options;	// 0x309b4c8d
- (void)applyAnimatedCropToSlide:(id)slide withOptions:(id)options centeredAt:(CGPoint)at alwaysZoomIn:(BOOL)anIn;	// 0x309b6595
- (void)applyAnimatedCropWithROIsToSlide:(id)slide withOptions:(id)options;	// 0x309b4cbd
- (void)applyCropToSlide:(id)slide inDocument:(id)document withOptions:(id)options;	// 0x309b47ed
- (void)applyCropToSlide:(id)slide withOptions:(id)options;	// 0x309b498d
- (void)applyCropToSlidesInEffectContainers:(id)effectContainers inDocument:(id)document withOptions:(id)options;	// 0x309b43dd
- (void)applyMultiFaceAnimatedCropToSlide:(id)slide withOptions:(id)options;	// 0x309b6e79
- (void)applyStationaryCropToSlide:(id)slide withOptions:(id)options;	// 0x309b500d
- (void)batchCrop:(id)crop;	// 0x309b39e1
- (CGPoint)checkFarApartROIs:(id)rois withImageSize:(CGSize)imageSize visibleAspectRatio:(float)ratio roiCenter:(CGPoint)center;	// 0x309b5805
- (void)cleanup;	// 0x309b4961
- (void)cropSlidesForLayerGroup:(id)layerGroup inDocument:(id)document withOptions:(id)options;	// 0x309b3d89
- (void)cropSlidesInDocument:(id)document withOptions:(id)options;	// 0x309b3d4d
// converted property getter: - (id)delegate;	// 0x309b39c1
- (double)durationOfSlide:(id)slide;	// 0x309b77ed
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x309b39d1
- (void)setupWithDocument:(id)document andOptions:(id)options;	// 0x309b4919
@end

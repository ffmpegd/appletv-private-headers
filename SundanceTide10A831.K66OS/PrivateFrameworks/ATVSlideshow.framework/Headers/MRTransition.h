/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRLoadable.h"
#import "ATVSlideshow-Structs.h"
#import "MRRenderable.h"
#import <NSObject.h> // Unknown library

@class MRLayer, NSString, NSDictionary, MRImage;

@interface MRTransition : NSObject <MRLoadable, MRRenderable> {
	NSDictionary *mDescription;	// 4 = 0x4
	id mTransitioner;	// 8 = 0x8
	MRLayer *mSourceLayer;	// 12 = 0xc
	MRLayer *mTargetLayer;	// 16 = 0x10
	MRImage *mSourceLayerImage;	// 20 = 0x14
	MRImage *mTargetLayerImage;	// 24 = 0x18
	MRImage *mOutputImage;	// 28 = 0x1c
	NSString *mTransitionID;	// 32 = 0x20
	NSString *mPresetID;	// 36 = 0x24
	NSDictionary *mAttributes;	// 40 = 0x28
	NSDictionary *mFlattenedAttributes;	// 44 = 0x2c
	BOOL mNeedsToUpdateAttributes;	// 48 = 0x30
	CGSize mPixelSize;	// 52 = 0x34
}
@property(retain, nonatomic) NSDictionary *attributes;	// G=0x33a4cebd; S=0x33a4c829; @synthesize=mAttributes
@property(readonly, assign, nonatomic) BOOL isAlphaFriendly;	// G=0x33a4cb79; 
@property(readonly, assign, nonatomic) BOOL isInfinite;	// G=0x33a4cbe1; 
@property(readonly, assign, nonatomic) BOOL isNative3D;	// G=0x33a4caf9; 
@property(readonly, assign, nonatomic) BOOL isOpaque;	// G=0x33a4cb39; 
@property(readonly, assign, nonatomic) BOOL needsSourceLayerImageForPrecomputing;	// G=0x33a4c7a9; 
@property(readonly, assign, nonatomic) BOOL needsTargetLayerImageForPrecomputing;	// G=0x33a4c7e9; 
@property(readonly, assign, nonatomic) BOOL noContentsMotion;	// G=0x33a4c769; 
@property(assign, nonatomic) CGSize pixelSize;	// G=0x33a4cecd; S=0x33a4cee5; @synthesize=mPixelSize
@property(copy) NSString *presetID;	// G=0x33a4ce99; S=0x33a4cead; @synthesize=mPresetID
@property(retain) MRLayer *sourceLayer;	// G=0x33a4ce1d; S=0x33a4ce31; @synthesize=mSourceLayer
@property(retain, nonatomic) MRImage *sourceLayerImage;	// G=0x33a4ce65; S=0x33a4c9f9; @synthesize=mSourceLayerImage
@property(retain) MRLayer *targetLayer;	// G=0x33a4ce41; S=0x33a4ce55; @synthesize=mTargetLayer
@property(retain, nonatomic) MRImage *targetLayerImage;	// G=0x33a4ce75; S=0x33a4ca39; @synthesize=mTargetLayerImage
@property(readonly, assign) NSString *transitionID;	// G=0x33a4ce85; @synthesize=mTransitionID
+ (id)retainedTransitionWithTransitionID:(id)transitionID forTransitioner:(id)transitioner;	// 0x33a4c3c9
- (id)initWithTransitionID:(id)transitionID;	// 0x33a4c419
// declared property getter: - (id)attributes;	// 0x33a4cebd
- (void)cancelLoading;	// 0x33a4caf5
- (void)cleanup;	// 0x33a4c5d9
- (void)dealloc;	// 0x33a4c559
- (void)finalize;	// 0x33a4c599
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x33a4cb79
// declared property getter: - (BOOL)isInfinite;	// 0x33a4cbe1
- (BOOL)isLoadedForTime:(double)time;	// 0x33a4ca79
// declared property getter: - (BOOL)isNative3D;	// 0x33a4caf9
// declared property getter: - (BOOL)isOpaque;	// 0x33a4cb39
- (BOOL)isRetainedByTransitioner;	// 0x33a4c751
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x33a4ca7d
// declared property getter: - (BOOL)needsSourceLayerImageForPrecomputing;	// 0x33a4c7a9
// declared property getter: - (BOOL)needsTargetLayerImageForPrecomputing;	// 0x33a4c7e9
// declared property getter: - (BOOL)noContentsMotion;	// 0x33a4c769
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33a4ccb5
// declared property getter: - (CGSize)pixelSize;	// 0x33a4cecd
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33a4cbe5
// declared property getter: - (id)presetID;	// 0x33a4ce99
- (void)releaseByTransitioner:(id)transitioner;	// 0x33a4c675
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33a4cc89
- (void)retainByTransitioner:(id)transitioner;	// 0x33a4c64d
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33a4cc9d
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x33a4c829
// declared property setter: - (void)setPixelSize:(CGSize)size;	// 0x33a4cee5
// declared property setter: - (void)setPresetID:(id)anId;	// 0x33a4cead
// declared property setter: - (void)setSourceLayer:(id)layer;	// 0x33a4ce31
// declared property setter: - (void)setSourceLayerImage:(id)image;	// 0x33a4c9f9
// declared property setter: - (void)setTargetLayer:(id)layer;	// 0x33a4ce55
// declared property setter: - (void)setTargetLayerImage:(id)image;	// 0x33a4ca39
// declared property getter: - (id)sourceLayer;	// 0x33a4ce1d
// declared property getter: - (id)sourceLayerImage;	// 0x33a4ce65
// declared property getter: - (id)targetLayer;	// 0x33a4ce41
// declared property getter: - (id)targetLayerImage;	// 0x33a4ce75
// declared property getter: - (id)transitionID;	// 0x33a4ce85
- (void)unload;	// 0x33a4ca81
@end

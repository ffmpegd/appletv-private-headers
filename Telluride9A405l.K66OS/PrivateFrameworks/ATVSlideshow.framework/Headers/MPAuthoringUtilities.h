/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"


@interface MPAuthoringUtilities : NSObject {
}
+ (id)absolutePathAtIndex:(int)index inPaths:(id)paths withOptions:(id)options;	// 0x334a87c9
+ (id)absolutePathForPath:(id)path withOptions:(id)options;	// 0x334a8495
+ (id)absolutePathsForPaths:(id)paths withOptions:(id)options;	// 0x334a893d
+ (BOOL)alignToBeatsFromOptions:(id)options;	// 0x334a61ad
+ (BOOL)alwaysIncludeLastTransitionFromOptions:(id)options;	// 0x334a8515
+ (float)aspectRatioFromOptions:(id)options;	// 0x334a6b65
+ (double)audioDurationFromOptions:(id)options;	// 0x334a5d3d
+ (int)audioScalingModeFromOptions:(id)options;	// 0x334a5d85
+ (CGColorRef)backgroundColorFromOptions:(id)options;	// 0x334a6415
+ (double)beatFactorFromOptions:(id)options;	// 0x334a63c9
+ (BOOL)canAdjustPhaseDurations:(id)durations;	// 0x334a827d
+ (BOOL)canRepeatEffectWithPreset:(id)preset;	// 0x334a670d
+ (BOOL)canRepeatPreset:(id)preset;	// 0x334a6885
+ (BOOL)collectVersionInformationFromOptions:(id)options;	// 0x334a6d0d
+ (id)colorSchemeFromOptions:(id)options;	// 0x334a7ead
+ (BOOL)createBeatsFromOptions:(id)options;	// 0x334a6215
+ (int)croppingModeFromOptions:(id)options;	// 0x334a5dc5
+ (double)distanceBetween:(CGPoint)between andPoint:(CGPoint)point;	// 0x334a8c15
+ (double)durationPerEffectFromOptions:(id)options;	// 0x334a65bd
+ (BOOL)effectDecidesTransitionFromOptions:(id)options;	// 0x334a7df1
+ (id)effectListFromOptions:(id)options;	// 0x334a6bb1
+ (BOOL)effectNeedsPreviousAttributesFromOptions:(id)options;	// 0x334a67c9
+ (float)effectPadding:(id)padding;	// 0x334a76d5
+ (double)exportTransitionDurationFromOptions:(id)options;	// 0x334a7801
+ (id)exportTransitionIDFromOptions:(id)options;	// 0x334a7791
+ (BOOL)fadeOutAudioFromOptions:(id)options;	// 0x334a8455
+ (double)fadeOutDurationFromOptions:(id)options;	// 0x334a8849
+ (id)gapInformationFromOptions:(id)options;	// 0x334a8ac9
+ (id)idFromPresetID:(id)presetID;	// 0x334a72a5
+ (BOOL)ignoreClusteringForImages:(id)images withOptions:(id)options;	// 0x334a5a2d
+ (id)ignoreTransitionListFromOptions:(id)options;	// 0x334a6e09
+ (id)introEffectIDFromOptions:(id)options;	// 0x334a70f5
+ (CGPoint)kbCenterPointFromRect:(CGRect)rect;	// 0x334a8b3d
+ (int)kenBurnsLevelFromOptions:(id)options;	// 0x334a5fbd
+ (float)kenBurnsLikelihoodFromOptions:(id)options;	// 0x334a5e71
+ (float)kenBurnsPanFactorFromOptions:(id)options;	// 0x334a5f75
+ (float)kenBurnsZoomFactorFromOptions:(id)options;	// 0x334a6c45
+ (id)lastPresetFromOptions:(id)options;	// 0x334a74d1
+ (BOOL)layerCanSkipScaleCalculation:(id)calculation withOptions:(id)options;	// 0x334a606d
+ (id)layerDescriptionForLayerWithZIndex:(int)zindex forStyle:(id)style;	// 0x334a7881
+ (BOOL)layerHasImagesFromOptions:(id)options;	// 0x334a799d
+ (int)layerIndexFromOptions:(id)options;	// 0x334a5cfd
+ (double)layerOffsetFromOptions:(id)options;	// 0x334a6679
+ (double)layerTimeScaleFromOptions:(id)options;	// 0x334a6311
+ (id)layerTypeFromOptions:(id)options;	// 0x334a85d5
+ (BOOL)lockTransitionDurationFromOptions:(id)options;	// 0x334a6255
+ (id)loopTransitionIDFromOptions:(id)options;	// 0x334a7721
+ (BOOL)matchPhasesWithTransitionFromOptions:(id)options;	// 0x334a6501
+ (float)maxKenBurnsZoomFromOptions:(id)options;	// 0x334a5f2d
+ (int)maxNumberOfSlidesToPreloadFromOptions:(id)options;	// 0x334a70b5
+ (double)maximumTransitionDurationFromOptions:(id)options;	// 0x334a7b99
+ (double)minimumEffectDurationFromOptions:(id)options;	// 0x334a7c61
+ (int)minimumNumberOfDynamicSlidesToAddFromOptions:(id)options;	// 0x334a7075
+ (double)minimumTransitionDurationFromOptions:(id)options;	// 0x334a7ad1
+ (float)movieVolumeFromOptions:(id)options;	// 0x334a7da9
+ (float)multilineSizeFactorFromOptions:(id)options;	// 0x334a8c4d
+ (int)numberOfLayersFromOptions:(id)options;	// 0x334a7a59
+ (double)outroDurationFromOptions:(id)options;	// 0x334a6f75
+ (id)outroEffectIDFromOptions:(id)options;	// 0x334a6eb5
+ (BOOL)padTextOnlyEffects:(id)effects;	// 0x334a7d69
+ (BOOL)performFaceDetectionFromOptions:(id)options;	// 0x334a8731
+ (BOOL)pickEffectsEvenlyByIDWithOptions:(id)options;	// 0x334a8141
+ (BOOL)pickTransitionsEvenlyByIDWithOptions:(id)options;	// 0x334a8075
+ (int)presentationOrderFromOptions:(id)options;	// 0x334a8555
+ (id)presetIDFromPresetID:(id)presetID;	// 0x334a7321
+ (unsigned)randomSeedFromOptions:(id)options;	// 0x334a6afd
+ (NSRange)reconfigureRangeFromOptions:(id)options;	// 0x334a8655
+ (CGRect)rectToFitIn:(CGRect)anIn withAspectRatio:(float)aspectRatio;	// 0x334a8aed
+ (int)regionOfInterestPickModeFromOptions:(id)options;	// 0x334a86b1
+ (int)reorderModeFromOptions:(id)options;	// 0x334a7f85
+ (BOOL)repeatTransitionsFromOptions:(id)options;	// 0x334a6d4d
+ (BOOL)replaceAudioPlaylistFromOptions:(id)options;	// 0x334a63d5
+ (BOOL)requestGeneratedImagesFromOptions:(id)options;	// 0x334a8349
+ (BOOL)scaleOutroEffectFromOptions:(id)options;	// 0x334a6fb9
+ (BOOL)shouldComputeFramesFromOptions:(id)options;	// 0x334a7381
+ (BOOL)shouldComputeLoopTransitionFromOptions:(id)options;	// 0x334a7625
+ (BOOL)shouldComputeSlideFiltersFromOptions:(id)options;	// 0x334a7565
+ (BOOL)shouldComputeTransitionsFromOptions:(id)options;	// 0x334a740d
+ (BOOL)shouldDuckMoviesFromOptions:(id)options;	// 0x334a84d5
+ (id)styleFromOptions:(id)options;	// 0x334a5cc5
+ (id)subtitlesFromOptions:(id)options;	// 0x334a87a5
+ (id)titleEffectFromOptions:(id)options;	// 0x334a7189
+ (double)transitionDurationFromOptions:(id)options;	// 0x334a6941
+ (id)transitionListFromOptions:(id)options;	// 0x334a6e2d
+ (id)urlsFromPaths:(id)paths;	// 0x334a5bed
+ (BOOL)useBestAspectRatioFromOptions:(id)options;	// 0x334a69fd
+ (BOOL)useDefaultAudioFromOptions:(id)options;	// 0x334a6abd
+ (BOOL)useLargestEffectsFromOptions:(id)options;	// 0x334a8a39
+ (BOOL)useROIAspectRatioFromOptions:(id)options;	// 0x334a7ffd
+ (BOOL)useROIFromOptions:(id)options;	// 0x334a6a3d
+ (BOOL)useTitleEffectFromOptions:(id)options;	// 0x334a6a7d
+ (BOOL)useTransitionLayoutTagsWithOptions:(id)options;	// 0x334a8389
+ (BOOL)useUniformDurations:(id)durations;	// 0x334a7d29
+ (NSRange)videoPathsRangeFromOptions:(id)options;	// 0x334a88e1
@end


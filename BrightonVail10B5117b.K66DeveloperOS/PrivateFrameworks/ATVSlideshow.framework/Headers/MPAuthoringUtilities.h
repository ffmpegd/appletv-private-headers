/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library


@interface MPAuthoringUtilities : NSObject {
}
+ (id)absolutePathAtIndex:(int)index inPaths:(id)paths withOptions:(id)options;	// 0x332c2425
+ (id)absolutePathForPath:(id)path withOptions:(id)options;	// 0x332c20e9
+ (id)absolutePathsForPaths:(id)paths withOptions:(id)options;	// 0x332c28bd
+ (BOOL)alignToBeatsFromOptions:(id)options;	// 0x332bfb11
+ (BOOL)alwaysIncludeLastTransitionFromOptions:(id)options;	// 0x332c216d
+ (float)aspectRatioFromOptions:(id)options;	// 0x332c058d
+ (BOOL)aspectRatioMatchesDefault:(id)aDefault withOptions:(id)options;	// 0x332c2b09
+ (double)audioDurationFromOptions:(id)options;	// 0x332bf2a9
+ (int)audioScalingModeFromOptions:(id)options;	// 0x332bf2f1
+ (CGColorRef)backgroundColorFromOptions:(id)options;	// 0x332bfd71
+ (float)baseBreakAspectRatioFromOptions:(id)options;	// 0x332c270d
+ (float)basePortraitBreakAspectRatioFromOptions:(id)options;	// 0x332c2795
+ (double)beatFactorFromOptions:(id)options;	// 0x332bfd25
+ (float)breakDurationScaleFromOptions:(id)options;	// 0x332c25fd
+ (BOOL)canAdjustPhaseDurations:(id)durations;	// 0x332c1ed9
+ (BOOL)canHaveTransitionsFromOptions:(id)options;	// 0x332c1b4d
+ (BOOL)canRepeatEffectWithPreset:(id)preset;	// 0x332c0069
+ (BOOL)canRepeatPreset:(id)preset;	// 0x332c01d9
+ (BOOL)collectVersionInformationFromOptions:(id)options;	// 0x332c0729
+ (id)colorSchemeFromOptions:(id)options;	// 0x332c1975
+ (BOOL)createBeatsFromOptions:(id)options;	// 0x332bfb75
+ (int)croppingModeForFitMoviesFromOptions:(id)options;	// 0x332bf3d1
+ (int)croppingModeFromOptions:(id)options;	// 0x332bf335
+ (double)distanceBetween:(CGPoint)between andPoint:(CGPoint)point;	// 0x332c2d61
+ (double)durationPerEffectFromOptions:(id)options;	// 0x332bff19
+ (BOOL)easeKenBurnsPanFromOptions:(id)options;	// 0x332bf815
+ (BOOL)effectDecidesTransitionFromOptions:(id)options;	// 0x332c18bd
+ (id)effectListFromOptions:(id)options;	// 0x332c05d5
+ (BOOL)effectNeedsPreviousAttributesFromOptions:(id)options;	// 0x332c0121
+ (float)effectPadding:(id)padding;	// 0x332c11a9
+ (double)exportTransitionDurationFromOptions:(id)options;	// 0x332c12cd
+ (id)exportTransitionIDFromOptions:(id)options;	// 0x332c125d
+ (BOOL)fadeOutAudioFromOptions:(id)options;	// 0x332c20a9
+ (double)fadeOutDurationFromOptions:(id)options;	// 0x332c24b1
+ (BOOL)fitMoviesWhenPossibleFromOptions:(id)options;	// 0x332c04e1
+ (id)gapInformationFromOptions:(id)options;	// 0x332c2ae1
+ (id)idFromPresetID:(id)presetID;	// 0x332c0d85
+ (BOOL)ignoreClusteringForImages:(id)images withOptions:(id)options;	// 0x332bef79
+ (id)ignoreTransitionListFromOptions:(id)options;	// 0x332c0821
+ (double)introDurationFromOptions:(id)options;	// 0x332c098d
+ (id)introEffectIDFromOptions:(id)options;	// 0x332c0bc9
+ (CGPoint)kbCenterPointFromRect:(CGRect)rect;	// 0x332c2c8d
+ (BOOL)kenBurnsAlwaysZoomInFromOptions:(id)options;	// 0x332bf70d
+ (BOOL)kenBurnsBreaksFromOptions:(id)options;	// 0x332bf791
+ (float)kenBurnsEndZoomLevelFromOptions:(id)options;	// 0x332bf685
+ (int)kenBurnsLevelFromOptions:(id)options;	// 0x332bf899
+ (float)kenBurnsLikelihoodFromOptions:(id)options;	// 0x332bf44d
+ (int)kenBurnsOffsetTypeFromOptions:(id)options;	// 0x332bf949
+ (float)kenBurnsPanFactorFromOptions:(id)options;	// 0x332bf54d
+ (float)kenBurnsStartZoomLevelFromOptions:(id)options;	// 0x332bf5fd
+ (float)kenBurnsZoomFactorFromOptions:(id)options;	// 0x332c066d
+ (id)lastPresetFromOptions:(id)options;	// 0x332c0fa9
+ (BOOL)layerCanSkipScaleCalculation:(id)calculation withOptions:(id)options;	// 0x332bf9cd
+ (id)layerDescriptionForLayerWithZIndex:(int)zindex forStyle:(id)style;	// 0x332c134d
+ (BOOL)layerHasImagesFromOptions:(id)options;	// 0x332c1485
+ (int)layerIndexFromOptions:(id)options;	// 0x332bf265
+ (double)layerOffsetFromOptions:(id)options;	// 0x332bffd9
+ (double)layerTimeScaleFromOptions:(id)options;	// 0x332bfc6d
+ (id)layerTypeFromOptions:(id)options;	// 0x332c222d
+ (BOOL)lockTransitionDurationFromOptions:(id)options;	// 0x332bfbb5
+ (id)loopTransitionIDFromOptions:(id)options;	// 0x332c11ed
+ (BOOL)matchEffectsUsingTagsFromOptions:(id)options;	// 0x332c2a5d
+ (BOOL)matchPhasesWithTransitionFromOptions:(id)options;	// 0x332bfe61
+ (float)maxKenBurnsZoomFromOptions:(id)options;	// 0x332bf509
+ (int)maxNumberOfSlidesToPreloadFromOptions:(id)options;	// 0x332c0b85
+ (double)maximumTransitionDurationFromOptions:(id)options;	// 0x332c1679
+ (double)minimumEffectDurationFromOptions:(id)options;	// 0x332c1739
+ (int)minimumNumberOfDynamicSlidesToAddFromOptions:(id)options;	// 0x332c0b41
+ (double)minimumTransitionDurationFromOptions:(id)options;	// 0x332c15b9
+ (float)movieVolumeFromOptions:(id)options;	// 0x332c1879
+ (float)multilineSizeFactorFromOptions:(id)options;	// 0x332c2d99
+ (BOOL)needsFitMovieAttributeFromOptions:(id)options;	// 0x332c1c55
+ (int)numberOfLayersFromOptions:(id)options;	// 0x332c153d
+ (double)outroDurationFromOptions:(id)options;	// 0x332c09d5
+ (id)outroEffectIDFromOptions:(id)options;	// 0x332c08cd
+ (BOOL)padTextOnlyEffects:(id)effects;	// 0x332c1839
+ (BOOL)performFaceDetectionFromOptions:(id)options;	// 0x332c2389
+ (BOOL)pickEffectsEvenlyByIDWithOptions:(id)options;	// 0x332c1d95
+ (BOOL)pickTransitionsEvenlyByIDWithOptions:(id)options;	// 0x332c1ccd
+ (float)portraitBreakDurationScaleFromOptions:(id)options;	// 0x332c2685
+ (int)presentationOrderFromOptions:(id)options;	// 0x332c21ad
+ (id)presetIDFromPresetID:(id)presetID;	// 0x332c0df5
+ (unsigned)randomSeedFromOptions:(id)options;	// 0x332c0521
+ (NSRange)reconfigureRangeFromOptions:(id)options;	// 0x332c22ad
+ (CGRect)rectToFitIn:(CGRect)anIn withAspectRatio:(float)aspectRatio;	// 0x332c2c3d
+ (int)regionOfInterestPickModeFromOptions:(id)options;	// 0x332c2309
+ (int)reorderModeFromOptions:(id)options;	// 0x332c1a45
+ (BOOL)repeatTransitionsFromOptions:(id)options;	// 0x332c0769
+ (BOOL)replaceAudioPlaylistFromOptions:(id)options;	// 0x332bfd31
+ (BOOL)requestGeneratedImagesFromOptions:(id)options;	// 0x332c1fa1
+ (BOOL)scaleEffectsForBreaksFromOptions:(id)options;	// 0x332c2549
+ (BOOL)scaleOutroEffectFromOptions:(id)options;	// 0x332c0a89
+ (int)screenSizeFromOptions:(id)options;	// 0x332c281d
+ (BOOL)shouldComputeFramesFromOptions:(id)options;	// 0x332c0e55
+ (BOOL)shouldComputeLoopTransitionFromOptions:(id)options;	// 0x332c10fd
+ (BOOL)shouldComputeSlideFiltersFromOptions:(id)options;	// 0x332c103d
+ (BOOL)shouldComputeTransitionsFromOptions:(id)options;	// 0x332c0ee5
+ (BOOL)shouldDuckMoviesFromOptions:(id)options;	// 0x332c212d
+ (id)styleFromOptions:(id)options;	// 0x332bf229
+ (id)subtitlesFromOptions:(id)options;	// 0x332c2401
+ (id)titleEffectFromOptions:(id)options;	// 0x332c0c5d
+ (double)transitionDurationFromOptions:(id)options;	// 0x332c0291
+ (id)transitionListFromOptions:(id)options;	// 0x332c0845
+ (id)urlsFromPaths:(id)paths;	// 0x332bf135
+ (BOOL)useBestAspectRatioFromOptions:(id)options;	// 0x332c0369
+ (BOOL)useDefaultAudioFromOptions:(id)options;	// 0x332c04a1
+ (BOOL)useLargestEffectsFromOptions:(id)options;	// 0x332c29d9
+ (BOOL)useROIAspectRatioFromOptions:(id)options;	// 0x332c1bdd
+ (BOOL)useROIFromOptions:(id)options;	// 0x332c03a9
+ (BOOL)useTitleEffectFromOptions:(id)options;	// 0x332c0461
+ (BOOL)useTransitionLayoutTagsWithOptions:(id)options;	// 0x332c1fe1
+ (BOOL)useUniformDurations:(id)durations;	// 0x332c17f9
+ (NSRange)videoPathsRangeFromOptions:(id)options;	// 0x332c2861
@end

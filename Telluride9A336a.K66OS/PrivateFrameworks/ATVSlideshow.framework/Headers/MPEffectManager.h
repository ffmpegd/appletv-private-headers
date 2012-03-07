/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MPEffectManager : NSObject {
	NSMutableDictionary *mEffects;	// 4 = 0x4
	NSMutableDictionary *mCategories;	// 8 = 0x8
	NSMutableDictionary *mCachedAspectRatios;	// 12 = 0xc
}
+ (void)initialize;	// 0x342bb619
+ (void)loadEffectManagerWithPaths:(id)paths;	// 0x342bd881
+ (void)releaseSharedManager;	// 0x342bb68d
+ (id)sharedManager;	// 0x342bb645
- (id)initWithPaths:(id)paths;	// 0x342bd8dd
- (void)_loadFontsFromPath:(id)path requiredFonts:(id)fonts;	// 0x342be2b9
- (id)allCategoryIDs;	// 0x342bbee5
- (id)allEffectIDs;	// 0x342bbec5
- (BOOL)allowTextCustomizationForEffectID:(id)effectID presetID:(id)anId forTextAtIndex:(int)index;	// 0x342bd7c5
- (id)attributesForEffectID:(id)effectID andPresetID:(id)anId;	// 0x342bc199
- (id)categoryIDsForEffectID:(id)effectID;	// 0x342bb9dd
- (id)controlForAttribute:(id)attribute forEffectID:(id)effectID;	// 0x342bbcb1
- (void)dealloc;	// 0x342bb6b9
- (void)defaultDurationsForEffectID:(id)effectID phaseInDuration:(double *)duration mainDuration:(double *)duration3 phaseOutDuration:(double *)duration4;	// 0x342bca65
- (double)defaultFullDurationForEffectID:(id)effectID;	// 0x342bd175
- (double)defaultMainDurationForEffectID:(id)effectID;	// 0x342bc9f5
- (double)defaultPhaseInDurationForEffectID:(id)effectID;	// 0x342bc9c1
- (double)defaultPhaseOutDurationForEffectID:(id)effectID;	// 0x342bca2d
- (double)defaultPosterFrameTimeForEffect:(id)effect;	// 0x342bcd49
- (double)defaultPosterFrameTimeForEffectID:(id)effectID andPresetID:(id)anId;	// 0x342bcc65
- (id)defaultStringForTextInEffectID:(id)effectID presetID:(id)anId atIndex:(int)index;	// 0x342bc089
- (id)descriptionForEffectID:(id)effectID;	// 0x342bc2e9
- (double)durationPaddingForEffectID:(id)effectID;	// 0x342bd6ad
- (BOOL)effectDoesAccumulate:(id)accumulate;	// 0x342bd3cd
- (id)effectIDsForCategoryID:(id)categoryID;	// 0x342bba15
- (id)effectsWithNumOfImages:(unsigned)images;	// 0x342bbde1
- (id)imageInputInfoForEffectID:(id)effectID;	// 0x342bc969
- (id)localizedCategoryNameFromCategoryID:(id)categoryID;	// 0x342bbb71
- (id)localizedEffectNameForEffectID:(id)effectID;	// 0x342bbb31
- (id)localizedSettingsUITitleForTitleKey:(id)titleKey inEffect:(id)effect;	// 0x342bbc69
- (float)maxFontSizeInEffectID:(id)effectID presetID:(id)anId atIndex:(int)index;	// 0x342bc08d
- (unsigned)maxNumOfImagesPerEffectInList:(id)list;	// 0x342bd285
- (float)mediaAspectRatioForEffectID:(id)effectID usingAttributes:(id)attributes atIndex:(int)index defaultAspectRatio:(float)ratio;	// 0x342bc6cd
- (float)mediaAspectRatioForEffectID:(id)effectID usingPresetID:(id)anId atIndex:(int)index;	// 0x342bc421
- (float)mediaAspectRatioForEffectID:(id)effectID usingPresetID:(id)anId atIndex:(int)index defaultAspectRatio:(float)ratio;	// 0x342bc5b9
- (float)mediaAspectRatioHintForEffectID:(id)effectID usingAttributes:(id)attributes atIndex:(int)index defaultAspectRatio:(float)ratio;	// 0x342bd5dd
- (id)mediaAspectRatioHintsForEffectID:(id)effectID usingPresetID:(id)anId defaultAspectRatio:(float)ratio;	// 0x342bd411
- (id)mediaAspectRatiosForEffectID:(id)effectID usingPresetID:(id)anId;	// 0x342bc309
- (id)mediaAspectRatiosForEffectID:(id)effectID usingPresetID:(id)anId defaultAspectRatio:(float)ratio;	// 0x342bc4b1
- (unsigned)minNumOfImagesPerEffectInList:(id)list;	// 0x342bd329
- (double)minimumEffectDurationForEffectID:(id)effectID;	// 0x342bd02d
- (unsigned)numOfImagesForEffectID:(id)effectID;	// 0x342bb785
- (unsigned)numOfImagesForEffectPresetID:(id)effectPresetID;	// 0x342bd1e9
- (unsigned)numOfTextsForEffectID:(id)effectID;	// 0x342bb995
- (int)numberOfSecondarySlidesForEffectID:(id)effectID;	// 0x342bceb1
- (int)numberOfSlidesForEffectID:(id)effectID;	// 0x342bcded
- (BOOL)posterTimeIsStaticForEffectID:(id)effectID andPresetID:(id)anId;	// 0x342bcefd
- (id)presetIDsForEffectID:(id)effectID;	// 0x342bc151
- (id)settingsUIControlDescriptionsForEffect:(id)effect;	// 0x342bbda9
- (id)showTimeScriptForEffectID:(id)effectID atSlideIndex:(int)slideIndex;	// 0x342bcfb9
- (id)sizeScriptForEffectID:(id)effectID atIndex:(int)index;	// 0x342bd101
- (BOOL)useUppercaseForEffectID:(id)effectID presetID:(id)anId forTextAtIndex:(int)index;	// 0x342bd709
- (id)versionOfEffectID:(id)effectID;	// 0x342bb74d
@end


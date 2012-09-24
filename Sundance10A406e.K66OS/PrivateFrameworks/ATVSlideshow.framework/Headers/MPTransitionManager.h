/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MPTransitionManager : NSObject {
	NSMutableDictionary *mTransitions;	// 4 = 0x4
	NSMutableDictionary *mTransitionCategories;	// 8 = 0x8
	NSMutableDictionary *mTransitionPresets;	// 12 = 0xc
}
+ (void)loadTransitionManagerWithPaths:(id)paths;	// 0x36066459
+ (void)releaseSharedManager;	// 0x36065825
+ (id)sharedManager;	// 0x36065731
- (id)initWithPaths:(id)paths;	// 0x36066fd1
- (id)allCategoryIDs;	// 0x360659a1
- (id)allTransitionIDs;	// 0x36065981
- (id)attributesForTransitionID:(id)transitionID andPresetID:(id)anId;	// 0x36066079
- (float)beatStrengthForTransitionID:(id)transitionID;	// 0x36066ed9
- (double)bestBeatTimeForTransitionID:(id)transitionID;	// 0x36066f2d
- (id)categoryIDsForTransitionID:(id)transitionID;	// 0x36065bad
- (id)constraintsForTransitionPresetsMatchingList:(id)transitionPresetsMatchingList andCriteria:(id)criteria;	// 0x360664b5
- (id)controlForAttribute:(id)attribute forTransitionID:(id)transitionID;	// 0x36066299
- (void)dealloc;	// 0x360658f1
- (double)defaultDurationForTransitionID:(id)transitionID;	// 0x36066391
- (id)descriptionForTransitionID:(id)transitionID;	// 0x36065c05
- (id)localizedCategoryNameFromCategoryID:(id)categoryID;	// 0x36065f61
- (id)localizedNameForTransitionID:(id)transitionID withLanguage:(id)language;	// 0x36065de5
- (id)localizedSettingsUITitleForTitleKey:(id)titleKey inTransition:(id)transition;	// 0x360661f5
- (id)localizedTransitionNameForTransitionID:(id)transitionID;	// 0x36065d69
- (id)localizedTransitionNameForTransitionID:(id)transitionID andPresetID:(id)anId;	// 0x36065eb5
- (id)presetsForTransitionID:(id)transitionID;	// 0x36066411
- (id)randomTransitionPresetFromList:(id)list abidingWithConstraints:(id)constraints;	// 0x3606695d
- (id)settingsUIControlDescriptionsForTransition:(id)transition;	// 0x36066241
- (int)transitionNeedsRandomSeedInformation:(id)information;	// 0x36066f89
- (id)transitionPresetsMatchingCriteria:(id)criteria;	// 0x36066b91
- (id)transitionsForCategoryID:(id)categoryID;	// 0x36065c25
- (id)versionOfTransitionID:(id)transitionID;	// 0x36065b75
@end

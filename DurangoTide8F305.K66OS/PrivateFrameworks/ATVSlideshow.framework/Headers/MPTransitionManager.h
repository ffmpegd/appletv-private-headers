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
+ (void)loadTransitionManagerWithPaths:(id)paths;	// 0x332717cd
+ (void)releaseSharedManager;	// 0x33270bf9
+ (id)sharedManager;	// 0x33270bb1
- (id)initWithPaths:(id)paths;	// 0x3327230d
- (id)allCategoryIDs;	// 0x33270cdd
- (id)allTransitionIDs;	// 0x33270cbd
- (id)attributesForTransitionID:(id)transitionID andPresetID:(id)anId;	// 0x33271251
- (float)beatStrengthForTransitionID:(id)transitionID;	// 0x3327226d
- (double)bestBeatTimeForTransitionID:(id)transitionID;	// 0x332722b5
- (id)categoryIDsForTransitionID:(id)transitionID;	// 0x33270edd
- (id)constraintsForTransitionPresetsMatchingList:(id)transitionPresetsMatchingList andCriteria:(id)criteria;	// 0x3327182d
- (id)controlForAttribute:(id)attribute forTransitionID:(id)transitionID;	// 0x3327163d
- (void)dealloc;	// 0x33270c29
- (double)defaultDurationForTransitionID:(id)transitionID;	// 0x33271719
- (id)localizedCategoryNameFromCategoryID:(id)categoryID;	// 0x33271151
- (id)localizedSettingsUITitleForTitleKey:(id)titleKey inTransition:(id)transition;	// 0x332715ad
- (id)localizedTransitionNameForTransitionID:(id)transitionID;	// 0x3327104d
- (id)localizedTransitionNameForTransitionID:(id)transitionID andPresetID:(id)anId;	// 0x332710b9
- (id)presetsForTransitionID:(id)transitionID;	// 0x3327178d
- (id)randomTransitionPresetFromList:(id)list abidingWithConstraints:(id)constraints;	// 0x33271cc5
- (id)settingsUIControlDescriptionsForTransition:(id)transition;	// 0x332715f1
- (id)transitionPresetsMatchingCriteria:(id)criteria;	// 0x33271f19
- (id)transitionsForCategoryID:(id)categoryID;	// 0x33270f29
- (id)versionOfTransitionID:(id)transitionID;	// 0x33270ead
@end

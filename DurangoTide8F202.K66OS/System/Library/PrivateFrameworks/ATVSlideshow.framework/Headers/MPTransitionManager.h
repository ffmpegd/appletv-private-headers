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
+ (void)loadTransitionManagerWithPaths:(id)paths;	// 0x3148e7cd
+ (void)releaseSharedManager;	// 0x3148dbf9
+ (id)sharedManager;	// 0x3148dbb1
- (id)initWithPaths:(id)paths;	// 0x3148f30d
- (id)allCategoryIDs;	// 0x3148dcdd
- (id)allTransitionIDs;	// 0x3148dcbd
- (id)attributesForTransitionID:(id)transitionID andPresetID:(id)anId;	// 0x3148e251
- (float)beatStrengthForTransitionID:(id)transitionID;	// 0x3148f26d
- (double)bestBeatTimeForTransitionID:(id)transitionID;	// 0x3148f2b5
- (id)categoryIDsForTransitionID:(id)transitionID;	// 0x3148dedd
- (id)constraintsForTransitionPresetsMatchingList:(id)transitionPresetsMatchingList andCriteria:(id)criteria;	// 0x3148e82d
- (id)controlForAttribute:(id)attribute forTransitionID:(id)transitionID;	// 0x3148e63d
- (void)dealloc;	// 0x3148dc29
- (double)defaultDurationForTransitionID:(id)transitionID;	// 0x3148e719
- (id)localizedCategoryNameFromCategoryID:(id)categoryID;	// 0x3148e151
- (id)localizedSettingsUITitleForTitleKey:(id)titleKey inTransition:(id)transition;	// 0x3148e5ad
- (id)localizedTransitionNameForTransitionID:(id)transitionID;	// 0x3148e04d
- (id)localizedTransitionNameForTransitionID:(id)transitionID andPresetID:(id)anId;	// 0x3148e0b9
- (id)presetsForTransitionID:(id)transitionID;	// 0x3148e78d
- (id)randomTransitionPresetFromList:(id)list abidingWithConstraints:(id)constraints;	// 0x3148ecc5
- (id)settingsUIControlDescriptionsForTransition:(id)transition;	// 0x3148e5f1
- (id)transitionPresetsMatchingCriteria:(id)criteria;	// 0x3148ef19
- (id)transitionsForCategoryID:(id)categoryID;	// 0x3148df29
- (id)versionOfTransitionID:(id)transitionID;	// 0x3148dead
@end


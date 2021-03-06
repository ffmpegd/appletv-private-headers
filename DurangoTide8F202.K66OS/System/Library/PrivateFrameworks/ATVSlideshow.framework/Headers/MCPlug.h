/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"
#import "MCActionSupport.h"
#import "MCAnimationPathSupport.h"
#import "MCFilterSupport.h"

@class NSDictionary, NSSet, NSArray, NSMutableSet, MCContainer, NSMutableDictionary;

@interface MCPlug : MCObject <MCActionSupport, MCFilterSupport, MCAnimationPathSupport> {
	MCContainer *mContainer;	// 12 = 0xc
	NSMutableSet *mAnimationPaths;	// 16 = 0x10
	NSMutableSet *mFilters;	// 20 = 0x14
	NSArray *mCachedOrderedFilters;	// 24 = 0x18
	NSMutableDictionary *mActions;	// 28 = 0x1c
	double mPhaseInDuration;	// 32 = 0x20
	double mMainDuration;	// 40 = 0x28
	double mPhaseOutDuration;	// 48 = 0x30
	double mNumberOfLoops;	// 56 = 0x38
}
@property(readonly, assign) NSDictionary *actions;	// G=0x3154eea9; 
@property(readonly, assign) NSSet *animationPaths;	// G=0x3154caed; 
@property(retain) MCContainer *container;	// G=0x3154bde5; S=0x3154bedd; 
@property(readonly, assign) unsigned countOfActions;	// G=0x3154eff5; 
@property(readonly, assign) unsigned countOfAnimationPaths;	// G=0x3154cc39; 
@property(readonly, assign) unsigned countOfFilters;	// G=0x3154dd21; 
@property(readonly, assign) NSSet *filters;	// G=0x3154dbd5; 
@property(readonly, assign) double fullDuration;	// G=0x3154c089; 
@property(assign, nonatomic) double mainDuration;	// G=0x3154c69d; S=0x3154c059; @synthesize=mMainDuration
@property(assign, nonatomic) double numberOfLoops;	// G=0x3154c6cd; S=0x3154c0c9; @synthesize=mNumberOfLoops
@property(readonly, assign) NSArray *orderedFilters;	// G=0x3154d9e9; 
@property(assign, nonatomic) double phaseInDuration;	// G=0x3154c685; S=0x3154c041; @synthesize=mPhaseInDuration
@property(assign, nonatomic) double phaseOutDuration;	// G=0x3154c6b5; S=0x3154c071; @synthesize=mPhaseOutDuration
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x3154b6fd
- (id)init;	// 0x3154b7d1
- (void)initActionsWithImprints:(id)imprints;	// 0x3154eac1
- (void)initAnimationPathsWithImprints:(id)imprints;	// 0x3154c6e5
- (void)initFiltersWithImprints:(id)imprints;	// 0x3154d5f9
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x3154b8a9
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x3154c0e1
- (void)_setAction:(id)action forKey:(id)key;	// 0x3154f1ed
- (id)actionForKey:(id)key;	// 0x3154f0d5
// declared property getter: - (id)actions;	// 0x3154eea9
- (id)addFilterWithFilterID:(id)filterID;	// 0x3154e011
- (id)animationPathForKey:(id)key;	// 0x3154d075
- (id)animationPathForKey:(id)key createIfNeeded:(BOOL)needed;	// 0x3154cd19
// declared property getter: - (id)animationPaths;	// 0x3154caed
// declared property getter: - (id)container;	// 0x3154bde5
// declared property getter: - (unsigned)countOfActions;	// 0x3154eff5
// declared property getter: - (unsigned)countOfAnimationPaths;	// 0x3154cc39
// declared property getter: - (unsigned)countOfFilters;	// 0x3154dd21
- (void)demolish;	// 0x3154bab5
- (void)demolishActions;	// 0x3154ebd9
- (void)demolishAnimationPaths;	// 0x3154c815
- (void)demolishFilters;	// 0x3154d719
- (id)filterAtIndex:(unsigned)index;	// 0x3154de01
// declared property getter: - (id)filters;	// 0x3154dbd5
// declared property getter: - (double)fullDuration;	// 0x3154c089
- (id)imprint;	// 0x3154bb29
- (id)imprintsForActions;	// 0x3154ed9d
- (id)imprintsForAnimationPaths;	// 0x3154ca05
- (id)imprintsForFilters;	// 0x3154d901
- (id)insertFilterWithFilterID:(id)filterID atIndex:(unsigned)index;	// 0x3154e03d
// declared property getter: - (double)mainDuration;	// 0x3154c69d
- (void)moveFiltersAtIndices:(id)indices toIndex:(unsigned)index;	// 0x3154e6f5
// declared property getter: - (double)numberOfLoops;	// 0x3154c6cd
- (void)observeFilter:(id)filter;	// 0x3154e9c5
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3154bd7d
// declared property getter: - (id)orderedFilters;	// 0x3154d9e9
// declared property getter: - (double)phaseInDuration;	// 0x3154c685
// declared property getter: - (double)phaseOutDuration;	// 0x3154c6b5
- (void)removeActionForKey:(id)key;	// 0x3154f355
- (void)removeAllAnimationPaths;	// 0x3154d351
- (void)removeAllFilters;	// 0x3154e6ad
- (void)removeAnimationPathForKey:(id)key;	// 0x3154d08d
- (void)removeFiltersAtIndices:(id)indices;	// 0x3154e36d
- (id)setActionGroupForKey:(id)key;	// 0x3154f65d
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x3154c4b1
- (id)setAnimationTriggerForTargetPlugObjectID:(id)targetPlugObjectID withAnimationKey:(id)animationKey forKey:(id)key;	// 0x3154f51d
- (id)setConditionalActionWithPredicate:(id)predicate forKey:(id)key;	// 0x3154f6cd
// declared property setter: - (void)setContainer:(id)container;	// 0x3154bedd
- (id)setGenericActionForTargetPlugObjectID:(id)targetPlugObjectID withAttributes:(id)attributes forKey:(id)key;	// 0x3154f5bd
// declared property setter: - (void)setMainDuration:(double)duration;	// 0x3154c059
// declared property setter: - (void)setNumberOfLoops:(double)loops;	// 0x3154c0c9
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x3154c041
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x3154c071
- (id)setTransitionForTargetPlugObjectID:(id)targetPlugObjectID withTransitionID:(id)transitionID forKey:(id)key;	// 0x3154f47d
- (void)unobserveFilter:(id)filter;	// 0x3154ea51
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAnimationPathSupport.h"
#import "MCObject.h"

@class NSSet, NSDictionary, NSMutableSet, NSMutableDictionary, NSString;

@interface MCFilter : MCObject <MCAnimationPathSupport> {
@private
	NSMutableDictionary *mAttributes;	// 12 = 0xc
	NSMutableSet *mAnimationPaths;	// 16 = 0x10
	unsigned mIndex;	// 20 = 0x14
	NSString *mFilterID;	// 24 = 0x18
}
@property(readonly, assign) NSSet *animationPaths;	// G=0x36544edd; 
@property(copy) NSDictionary *attributes;	// G=0x365443dd; S=0x365444d9; 
@property(readonly, assign) unsigned countOfAnimationPaths;	// G=0x3654502d; 
@property(copy) NSString *filterID;	// G=0x365448b1; S=0x365448c5; @synthesize=mFilterID
@property(assign, nonatomic) unsigned index;	// G=0x36544891; S=0x365448a1; @synthesize=mIndex
- (void)initAnimationPathsWithImprints:(id)imprints;	// 0x365448e9
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x36543e99
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x365445e9
- (void)addAnimationPath:(id)path;	// 0x36545401
- (id)animationPathForKey:(id)key;	// 0x36545131
// declared property getter: - (id)animationPaths;	// 0x36544edd
- (id)attributeForKey:(id)key;	// 0x36544131
// declared property getter: - (id)attributes;	// 0x365443dd
// declared property getter: - (unsigned)countOfAnimationPaths;	// 0x3654502d
- (void)demolish;	// 0x36543f91
- (void)demolishAnimationPaths;	// 0x36544b0d
// declared property getter: - (id)filterID;	// 0x365448b1
- (id)imprint;	// 0x36544019
- (id)imprintsForAnimationPaths;	// 0x36544ddd
// declared property getter: - (unsigned)index;	// 0x36544891
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x365440f5
- (void)removeAllAnimationPaths;	// 0x36545a3d
- (void)removeAnimationPathForKey:(id)key;	// 0x365456d1
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x36544269
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x365444d9
// declared property setter: - (void)setFilterID:(id)anId;	// 0x365448c5
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x365448a1
@end


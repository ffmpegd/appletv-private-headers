/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAnimationPathSupport.h"
#import "MCAnimationPath.h"

@class NSSet, NSMutableSet, NSString;

@interface MCAnimationPathCombo : MCAnimationPath <MCAnimationPathSupport> {
@private
	NSMutableSet *mAnimationPaths;	// 12 = 0xc
	NSString *mCombineOperation;	// 16 = 0x10
	BOOL mIsSnapshot;	// 20 = 0x14
}
@property(readonly, assign) NSSet *animationPaths;	// G=0x36533e39; 
@property(copy) NSString *combineOperation;	// G=0x365337fd; S=0x36533811; @synthesize=mCombineOperation
@property(readonly, assign) unsigned countOfAnimationPaths;	// G=0x36533f89; 
- (void)initAnimationPathsWithImprints:(id)imprints;	// 0x36533845
- (id)initWithImprint:(id)imprint;	// 0x36533471
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x36533645
- (void)addAnimationPath:(id)path;	// 0x3653435d
- (id)animationPathForKey:(id)key;	// 0x3653408d
// declared property getter: - (id)animationPaths;	// 0x36533e39
// declared property getter: - (id)combineOperation;	// 0x365337fd
// declared property getter: - (unsigned)countOfAnimationPaths;	// 0x36533f89
- (void)demolish;	// 0x3653350d
- (void)demolishAnimationPaths;	// 0x36533a69
- (id)imprint;	// 0x36533595
- (id)imprintsForAnimationPaths;	// 0x36533d39
- (BOOL)isSnapshot;	// 0x36533835
- (void)removeAllAnimationPaths;	// 0x36534999
- (void)removeAnimationPathForKey:(id)key;	// 0x3653462d
// declared property setter: - (void)setCombineOperation:(id)operation;	// 0x36533811
@end


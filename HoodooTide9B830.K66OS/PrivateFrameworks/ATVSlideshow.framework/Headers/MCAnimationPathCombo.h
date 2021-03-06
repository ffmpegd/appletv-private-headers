/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAnimationPath.h"
#import "MCAnimationPathSupport.h"

@class NSMutableSet, NSSet, NSString;

@interface MCAnimationPathCombo : MCAnimationPath <MCAnimationPathSupport> {
	NSMutableSet *mAnimationPaths;	// 12 = 0xc
	NSString *mCombineOperation;	// 16 = 0x10
}
@property(readonly, assign) NSSet *animationPaths;	// G=0x32179a45; 
@property(copy) NSString *combineOperation;	// G=0x3217948d; S=0x321794a1; @synthesize=mCombineOperation
@property(readonly, assign) unsigned countOfAnimationPaths;	// G=0x32179b95; 
- (void)initAnimationPathsWithImprints:(id)imprints;	// 0x321794c5
- (id)initWithImprint:(id)imprint;	// 0x32179135
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x32179309
- (void)addAnimationPath:(id)path;	// 0x32179f21
- (id)animationPathForKey:(id)key;	// 0x32179c99
// declared property getter: - (id)animationPaths;	// 0x32179a45
// declared property getter: - (id)combineOperation;	// 0x3217948d
// declared property getter: - (unsigned)countOfAnimationPaths;	// 0x32179b95
- (void)demolish;	// 0x321791cd
- (void)demolishAnimationPaths;	// 0x321796d1
- (id)imprint;	// 0x32179259
- (id)imprintsForAnimationPaths;	// 0x32179965
- (void)removeAllAnimationPaths;	// 0x3217a50d
- (void)removeAnimationPathForKey:(id)key;	// 0x3217a1e9
// declared property setter: - (void)setCombineOperation:(id)operation;	// 0x321794a1
@end


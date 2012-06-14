/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAnimationPath.h"
#import "ATVSlideshow-Structs.h"

@class NSArray, NSMutableSet, NSSet;

@interface MCAnimationPathKeyframed : MCAnimationPath {
	NSMutableSet *mKeyframes;	// 12 = 0xc
	NSArray *mCachedOrderedKeyframes;	// 16 = 0x10
}
@property(readonly, assign) NSSet *keyframes;	// G=0x30ad6d51; 
+ (id)animationPathWithKey:(id)key;	// 0x30ad689d
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x30ad681d
+ (double)timeForKeyframe:(id)keyframe inPlug:(id)plug;	// 0x30ad740d
- (id)init;	// 0x30ad68c9
- (id)initWithImprint:(id)imprint;	// 0x30ad692d
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x30ad7f8d
- (void)addKeyframe:(id)keyframe;	// 0x30ad79e1
- (unsigned)countOfKeyframes;	// 0x30ad6ea5
- (id)createKeyframeWithFunction:(id)function atTime:(double)time offsetKind:(int)kind forDuration:(double)duration;	// 0x30ad7841
- (id)createKeyframeWithPoint:(CGPoint)point atTime:(double)time;	// 0x30ad78a9
- (id)createKeyframeWithPoint:(CGPoint)point atTime:(double)time offsetKind:(int)kind;	// 0x30ad78d5
- (id)createKeyframeWithScalar:(float)scalar atTime:(double)time;	// 0x30ad77b5
- (id)createKeyframeWithScalar:(float)scalar atTime:(double)time offsetKind:(int)kind;	// 0x30ad77d9
- (id)createKeyframeWithVector:(XXStruct_Te64nB)vector atTime:(double)time;	// 0x30ad7935
- (id)createKeyframeWithVector:(XXStruct_Te64nB)vector atTime:(double)time offsetKind:(int)kind;	// 0x30ad7969
- (void)demolish;	// 0x30ad6a51
- (id)description;	// 0x30ad7f35
- (id)imprint;	// 0x30ad6c09
// declared property getter: - (id)keyframes;	// 0x30ad6d51
- (id)orderedKeyframesInPlug:(id)plug;	// 0x30ad6fa1
- (void)removeAllKeyframes;	// 0x30ad7ce9
- (void)removeKeyframe:(id)keyframe;	// 0x30ad7b59
@end

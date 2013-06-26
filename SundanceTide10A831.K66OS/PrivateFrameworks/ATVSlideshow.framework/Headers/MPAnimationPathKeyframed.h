/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MPAnimationPath.h"
#import "ATVSlideshow-Structs.h"

@class NSMutableSet;

@interface MPAnimationPathKeyframed : MPAnimationPath {
	NSMutableSet *_keyframes;	// 16 = 0x10
}
@property(readonly, retain) NSMutableSet *keyframes;	// G=0x338f87d9; converted property
+ (id)animationPath;	// 0x338f844d
- (id)init;	// 0x338f8485
- (id)initWithCoder:(id)coder;	// 0x338f8545
- (void)addKeyframe:(id)keyframe;	// 0x338f882d
- (void)addKeyframes:(id)keyframes;	// 0x338f8869
- (void)cleanup;	// 0x338fa869
- (void)copyKeyframes:(id)keyframes;	// 0x338fa755
- (id)copyWithZone:(NSZone *)zone;	// 0x338f86dd
- (id)createKeyframeWithFunction:(id)function atTime:(double)time forDuration:(double)duration;	// 0x338f96e5
- (id)createKeyframeWithFunction:(id)function atTime:(double)time offsetType:(int)type forDuration:(double)duration;	// 0x338f9731
- (id)createKeyframeWithPoint:(CGPoint)point atTime:(double)time;	// 0x338f95b9
- (id)createKeyframeWithPoint:(CGPoint)point atTime:(double)time offsetType:(int)type;	// 0x338f9601
- (id)createKeyframeWithScalar:(float)scalar atTime:(double)time;	// 0x338f9521
- (id)createKeyframeWithScalar:(float)scalar atTime:(double)time offsetType:(int)type;	// 0x338f9565
- (id)createKeyframeWithVector:(id)vector atTime:(double)time;	// 0x338f964d
- (id)createKeyframeWithVector:(id)vector atTime:(double)time offsetType:(int)type;	// 0x338f9691
- (void)dealloc;	// 0x338f867d
- (id)description;	// 0x338f8731
- (void)dump;	// 0x338f9dc9
- (void)encodeWithCoder:(id)coder;	// 0x338f84e9
- (id)fullDebugLog;	// 0x338f9df1
// converted property getter: - (id)keyframes;	// 0x338f87d9
- (id)orderedKeyframes;	// 0x338f87e9
- (id)parent;	// 0x338f9785
- (double)parentMainDuration;	// 0x338f9be9
- (double)parentPhaseInDuration;	// 0x338f98e9
- (double)parentPhaseOutDuration;	// 0x338f9a69
- (double)relativeTimeForKeyframe:(id)keyframe;	// 0x338f9795
- (void)removeAllKeyframes;	// 0x338f9439
- (void)removeKeyframe:(id)keyframe;	// 0x338f9221
- (void)removeKeyframes:(id)keyframes;	// 0x338f9381
- (void)setAnimationPath:(id)path;	// 0x338fa879
@end

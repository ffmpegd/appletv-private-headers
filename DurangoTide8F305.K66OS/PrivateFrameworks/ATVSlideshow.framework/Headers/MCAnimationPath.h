/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MCObject.h"

@class MCSlide, NSSet, MCFilter, NSArray, NSMutableSet, MCPlug, NSString;

@interface MCAnimationPath : MCObject {
	NSString *mKey;	// 12 = 0xc
	NSMutableSet *mKeyframes;	// 16 = 0x10
	MCPlug *mPlugIfPlugAnimationPath;	// 20 = 0x14
	MCSlide *mSlideIfSlideAnimationPath;	// 24 = 0x18
	MCFilter *mFilterIfFilterAnimationPath;	// 28 = 0x1c
	NSArray *mCachedOrderedKeyframes;	// 32 = 0x20
	BOOL mIsTriggered;	// 36 = 0x24
}
@property(assign) MCFilter *filterIfFilterAnimationPath;	// G=0x3331ec55; S=0x3331ec65; @synthesize=mFilterIfFilterAnimationPath
@property(assign) BOOL isTriggered;	// G=0x3331ebf5; S=0x3331ec05; @synthesize=mIsTriggered
@property(copy) NSString *key;	// G=0x3331ebb1; S=0x3331ebc9; @synthesize=mKey
@property(readonly, assign) NSSet *keyframes;	// G=0x3331d4c1; 
@property(assign) MCPlug *plugIfPlugAnimationPath;	// G=0x3331ec15; S=0x3331ec25; @synthesize=mPlugIfPlugAnimationPath
@property(assign) MCSlide *slideIfSlideAnimationPath;	// G=0x3331ec35; S=0x3331ec45; @synthesize=mSlideIfSlideAnimationPath
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x3331cdfd
- (id)init;	// 0x3331ce7d
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x3331cee9
- (unsigned)countOfKeyframes;	// 0x3331d60d
- (id)createKeyframeWithFunction:(id)function atTime:(double)time offsetKind:(int)kind forDuration:(double)duration;	// 0x3331df31
- (id)createKeyframeWithPoint:(CGPoint)point atTime:(double)time;	// 0x3331e199
- (id)createKeyframeWithPoint:(CGPoint)point atTime:(double)time offsetKind:(int)kind;	// 0x3331e1c1
- (id)createKeyframeWithScalar:(float)scalar atTime:(double)time;	// 0x3331dcbd
- (id)createKeyframeWithScalar:(float)scalar atTime:(double)time offsetKind:(int)kind;	// 0x3331dce1
- (id)createKeyframeWithVector:(XXStruct_Te64nB)vector atTime:(double)time;	// 0x3331e455
- (id)createKeyframeWithVector:(XXStruct_Te64nB)vector atTime:(double)time offsetKind:(int)kind;	// 0x3331e48d
- (void)demolish;	// 0x3331d07d
- (id)description;	// 0x3331eb61
// declared property getter: - (id)filterIfFilterAnimationPath;	// 0x3331ec55
- (id)imprint;	// 0x3331d2ed
// declared property getter: - (BOOL)isTriggered;	// 0x3331ebf5
// declared property getter: - (id)key;	// 0x3331ebb1
// declared property getter: - (id)keyframes;	// 0x3331d4c1
- (id)orderedKeyframesInPlug:(id)plug;	// 0x3331d6ed
// declared property getter: - (id)plugIfPlugAnimationPath;	// 0x3331ec15
- (double)relativeTimeForKeyframe:(id)keyframe inPlug:(id)plug;	// 0x3331d9c1
- (void)removeAllKeyframes;	// 0x3331e8c9
- (void)removeKeyframe:(id)keyframe;	// 0x3331e6fd
// declared property setter: - (void)setFilterIfFilterAnimationPath:(id)path;	// 0x3331ec65
// declared property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x3331ec05
// declared property setter: - (void)setKey:(id)key;	// 0x3331ebc9
// declared property setter: - (void)setPlugIfPlugAnimationPath:(id)path;	// 0x3331ec25
// declared property setter: - (void)setSlideIfSlideAnimationPath:(id)path;	// 0x3331ec45
// declared property getter: - (id)slideIfSlideAnimationPath;	// 0x3331ec35
@end


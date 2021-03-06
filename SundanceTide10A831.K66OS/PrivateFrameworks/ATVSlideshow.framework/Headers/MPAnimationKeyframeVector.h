/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAnimationKeyframe.h"

@class MPVector;

@interface MPAnimationKeyframeVector : MPAnimationKeyframe {
	MPVector *_vector;	// 44 = 0x2c
}
@property(copy, nonatomic) MPVector *vector;	// G=0x338f61ed; S=0x338f6095; @synthesize=_vector
+ (id)keyframeVectorWithVector:(id)vector atTime:(double)time;	// 0x338f5cb9
+ (id)keyframeVectorWithVector:(id)vector atTime:(double)time offsetType:(int)type;	// 0x338f5d05
- (id)initKeyframeVectorWithVector:(id)vector atTime:(double)time offsetType:(int)type;	// 0x338f5d51
- (id)initWithCoder:(id)coder;	// 0x338f5f11
- (id)copyWithZone:(NSZone *)zone;	// 0x338f5de5
- (void)dealloc;	// 0x338f5e5d
- (id)description;	// 0x338f5f89
- (void)encodeWithCoder:(id)coder;	// 0x338f5ea9
- (id)keyframe;	// 0x338f7109
// declared property setter: - (void)setVector:(id)vector;	// 0x338f6095
// declared property getter: - (id)vector;	// 0x338f61ed
@end


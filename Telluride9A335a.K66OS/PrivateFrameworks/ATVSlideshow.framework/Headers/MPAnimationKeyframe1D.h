/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MPAnimationKeyframe.h"
#import "ATVSlideshow-Structs.h"


@interface MPAnimationKeyframe1D : MPAnimationKeyframe {
@private
	float _scalar;	// 20 = 0x14
}
@property(assign, nonatomic) float scalar;	// G=0x31a43325; S=0x31a43335; @synthesize=_scalar
+ (id)keyframe1DWithScalar:(float)scalar atTime:(double)time;	// 0x31a42f75
+ (id)keyframe1DWithScalar:(float)scalar atTime:(double)time offsetType:(int)type;	// 0x31a42fc1
- (id)initKeyframe1DWithScalar:(float)scalar atTime:(double)time offsetType:(int)type;	// 0x31a4300d
- (id)initWithCoder:(id)coder;	// 0x31a43145
- (id)copyWithZone:(NSZone *)zone;	// 0x31a431d5
- (id)description;	// 0x31a43229
- (void)encodeWithCoder:(id)coder;	// 0x31a430a9
- (id)keyframe;	// 0x31a45b1d
// declared property getter: - (float)scalar;	// 0x31a43325
// declared property setter: - (void)setScalar:(float)scalar;	// 0x31a43335
@end


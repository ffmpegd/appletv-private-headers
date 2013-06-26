/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAnimationKeyframe.h"


@interface MPAnimationKeyframe2D : MPAnimationKeyframe {
	CGPoint _point;	// 44 = 0x2c
}
@property(assign, nonatomic) CGPoint point;	// G=0x2fb48c01; S=0x2fb48c19; @synthesize=_point
+ (id)keyframe2DWithPoint:(CGPoint)point atTime:(double)time;	// 0x2fb48755
+ (id)keyframe2DWithPoint:(CGPoint)point atTime:(double)time offsetType:(unsigned)type;	// 0x2fb487a5
- (id)initKeyframe2DWithPoint:(CGPoint)point atTime:(double)time offsetType:(unsigned)type;	// 0x2fb487f5
- (id)initWithCoder:(id)coder;	// 0x2fb48971
- (id)copyWithZone:(NSZone *)zone;	// 0x2fb48861
- (id)description;	// 0x2fb48aa9
- (void)encodeWithCoder:(id)coder;	// 0x2fb488b9
- (id)keyframe;	// 0x2fb4aa19
// declared property getter: - (CGPoint)point;	// 0x2fb48c01
// declared property setter: - (void)setPoint:(CGPoint)point;	// 0x2fb48c19
@end

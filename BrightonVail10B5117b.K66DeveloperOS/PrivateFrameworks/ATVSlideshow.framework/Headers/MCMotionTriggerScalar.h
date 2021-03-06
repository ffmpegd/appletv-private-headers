/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCMotionTrigger.h"


@interface MCMotionTriggerScalar : MCMotionTrigger {
	float _value;	// 32 = 0x20
}
@property(assign, nonatomic) float value;	// G=0x333f7cad; S=0x333f7cbd; @synthesize=_value
+ (id)motionTriggerForTargetPlugObjectID:(id)targetPlugObjectID withKey:(id)key duration:(double)duration andValue:(float)value;	// 0x333f7aa5
- (id)initWithImprint:(id)imprint;	// 0x333f7aed
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x333f7bfd
- (id)description;	// 0x333f7c49
- (id)imprint;	// 0x333f7b71
// declared property setter: - (void)setValue:(float)value;	// 0x333f7cbd
// declared property getter: - (float)value;	// 0x333f7cad
@end


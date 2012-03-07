/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "CAAnimation.h"
#import "QuartzCore-Structs.h"

@class NSArray;

@interface CAAnimationGroup : CAAnimation {
}
@property(copy) NSArray *animations;	// G=0x31ac2edd; S=0x31ac2e15; 
- (void)CA_prepareRenderValue;	// 0x31ac3125
- (Animation *)_copyRenderAnimationForLayer:(id)layer;	// 0x31ac33b9
- (unsigned)_propertyFlagsForLayer:(id)layer;	// 0x31ac2ef5
// declared property getter: - (id)animations;	// 0x31ac2edd
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;	// 0x31b2759d
// declared property setter: - (void)setAnimations:(id)animations;	// 0x31ac2e15
- (void)setDefaultDuration:(double)duration;	// 0x31ac2e2d
@end


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
@property(copy) NSArray *animations;	// G=0x312e7edd; S=0x312e7e15; 
- (void)CA_prepareRenderValue;	// 0x312e8125
- (Animation *)_copyRenderAnimationForLayer:(id)layer;	// 0x312e83b9
- (unsigned)_propertyFlagsForLayer:(id)layer;	// 0x312e7ef5
// declared property getter: - (id)animations;	// 0x312e7edd
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;	// 0x3134c59d
// declared property setter: - (void)setAnimations:(id)animations;	// 0x312e7e15
- (void)setDefaultDuration:(double)duration;	// 0x312e7e2d
@end

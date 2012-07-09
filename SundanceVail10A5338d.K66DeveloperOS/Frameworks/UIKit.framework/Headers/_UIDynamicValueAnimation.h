/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UIDynamicAnimation.h"
#import "UIKit-Structs.h"

@class NSArray, NSMutableArray;

@interface _UIDynamicValueAnimation : _UIDynamicAnimation {
	id _applier;	// 16 = 0x10
	id _viewApplier;	// 20 = 0x14
	double _value;	// 24 = 0x18
	double _velocity;	// 32 = 0x20
	double _unitSize;	// 40 = 0x28
	double _friction;	// 48 = 0x30
	double _decelerationFactor;	// 56 = 0x38
	double _decelerationLnFactor;	// 64 = 0x40
	double _multiplier;	// 72 = 0x48
	NSMutableArray *_activeValues;	// 80 = 0x50
	void *_stepFunction;	// 84 = 0x54
}
@property(copy, nonatomic) NSArray *activeValues;	// G=0x30fbe8a9; S=0x30fbdcb9; @synthesize=_activeValues
@property(assign, nonatomic) double friction;	// G=0x30fbe891; S=0x30fbe491; @synthesize=_friction
@property(assign, nonatomic) double value;	// G=0x30fbe865; S=0x30fbe87d; @synthesize=_value
@property(assign, nonatomic) double velocity;	// G=0x30fbe5e1; S=0x30fbe851; @synthesize=_velocity
- (id)init;	// 0x30fbd1c1
- (id)initWithValue:(double)value velocity:(double)velocity unitSize:(double)size;	// 0x30fbcf99
- (BOOL)_animateForInterval:(double)interval;	// 0x30fbde79
- (void)_appendSubclassDescription:(id)description atLevel:(int)level;	// 0x30fbe631
- (double)_multiplier;	// 0x30fbe5b1
- (void)_setDecelerationFactor:(double)factor;	// 0x30fbe521
- (void)_setMultiplier:(double)multiplier;	// 0x30fbe5c9
- (void)_setVelocity:(double)velocity;	// 0x30fbe609
- (void)_stopAnimation;	// 0x30fbd341
- (void)_updateStepFunction;	// 0x30fbd3b9
// declared property getter: - (id)activeValues;	// 0x30fbe8a9
- (void)addActiveValue:(id)value;	// 0x30fbdb8d
- (void)dealloc;	// 0x30fbd209
// declared property getter: - (double)friction;	// 0x30fbe891
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x30fbe47d
- (void)removeActiveValue:(id)value;	// 0x30fbdc41
- (void)runWithCompletion:(id)completion;	// 0x30fbe405
- (void)runWithValueApplier:(id)valueApplier completion:(id)completion;	// 0x30fbe3dd
- (void)runWithValueApplier:(id)valueApplier completion:(id)completion forScreen:(id)screen runLoopMode:(id)mode;	// 0x30fbe301
// declared property setter: - (void)setActiveValues:(id)values;	// 0x30fbdcb9
// declared property setter: - (void)setFriction:(double)friction;	// 0x30fbe491
// declared property setter: - (void)setValue:(double)value;	// 0x30fbe87d
// declared property setter: - (void)setVelocity:(double)velocity;	// 0x30fbe851
// declared property getter: - (double)value;	// 0x30fbe865
// declared property getter: - (double)velocity;	// 0x30fbe5e1
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UIDynamicAnimation.h"
#import "UIKit-Structs.h"

@class NSMutableArray, NSArray;

@interface _UIDynamicValueAnimation : _UIDynamicAnimation {
@private
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
@property(copy, nonatomic) NSArray *activeValues;	// G=0x33020989; S=0x3301fd99; @synthesize=_activeValues
@property(assign, nonatomic) double friction;	// G=0x33020971; S=0x33020585; @synthesize=_friction
@property(assign, nonatomic) double value;	// G=0x33020945; S=0x3302095d; @synthesize=_value
@property(assign, nonatomic) double velocity;	// G=0x330206c9; S=0x33020931; @synthesize=_velocity
- (id)init;	// 0x3301f355
- (id)initWithValue:(double)value velocity:(double)velocity unitSize:(double)size;	// 0x3301f14d
- (BOOL)_animateForInterval:(double)interval;	// 0x3301ff39
- (void)_appendSubclassDescription:(id)description atLevel:(int)level;	// 0x33020719
- (double)_multiplier;	// 0x3302069d
- (void)_setDecelerationFactor:(double)factor;	// 0x33020611
- (void)_setMultiplier:(double)multiplier;	// 0x330206b5
- (void)_setVelocity:(double)velocity;	// 0x330206f1
- (void)_stopAnimation;	// 0x3301f4b1
- (void)_updateStepFunction;	// 0x3301f529
// declared property getter: - (id)activeValues;	// 0x33020989
- (void)addActiveValue:(id)value;	// 0x3301fc81
- (void)dealloc;	// 0x3301f399
// declared property getter: - (double)friction;	// 0x33020971
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x33020575
- (void)removeActiveValue:(id)value;	// 0x3301fd21
- (void)runWithCompletion:(id)completion;	// 0x330204fd
- (void)runWithValueApplier:(id)valueApplier completion:(id)completion;	// 0x330204d9
- (void)runWithValueApplier:(id)valueApplier completion:(id)completion forScreen:(id)screen runLoopMode:(id)mode;	// 0x330203dd
// declared property setter: - (void)setActiveValues:(id)values;	// 0x3301fd99
// declared property setter: - (void)setFriction:(double)friction;	// 0x33020585
// declared property setter: - (void)setValue:(double)value;	// 0x3302095d
// declared property setter: - (void)setVelocity:(double)velocity;	// 0x33020931
// declared property getter: - (double)value;	// 0x33020945
// declared property getter: - (double)velocity;	// 0x330206c9
@end


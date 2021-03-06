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
@property(copy, nonatomic) NSArray *activeValues;	// G=0x33da6249; S=0x33da5659; @synthesize=_activeValues
@property(assign, nonatomic) double friction;	// G=0x33da6231; S=0x33da5e31; @synthesize=_friction
@property(assign, nonatomic) double value;	// G=0x33da6205; S=0x33da621d; @synthesize=_value
@property(assign, nonatomic) double velocity;	// G=0x33da5f81; S=0x33da61f1; @synthesize=_velocity
- (id)init;	// 0x33da4b61
- (id)initWithValue:(double)value velocity:(double)velocity unitSize:(double)size;	// 0x33da4939
- (BOOL)_animateForInterval:(double)interval;	// 0x33da5819
- (void)_appendSubclassDescription:(id)description atLevel:(int)level;	// 0x33da5fd1
- (double)_multiplier;	// 0x33da5f51
- (void)_setDecelerationFactor:(double)factor;	// 0x33da5ec1
- (void)_setMultiplier:(double)multiplier;	// 0x33da5f69
- (void)_setVelocity:(double)velocity;	// 0x33da5fa9
- (void)_stopAnimation;	// 0x33da4ce1
- (void)_updateStepFunction;	// 0x33da4d59
// declared property getter: - (id)activeValues;	// 0x33da6249
- (void)addActiveValue:(id)value;	// 0x33da552d
- (void)dealloc;	// 0x33da4ba9
// declared property getter: - (double)friction;	// 0x33da6231
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x33da5e1d
- (void)removeActiveValue:(id)value;	// 0x33da55e1
- (void)runWithCompletion:(id)completion;	// 0x33da5da5
- (void)runWithValueApplier:(id)valueApplier completion:(id)completion;	// 0x33da5d7d
- (void)runWithValueApplier:(id)valueApplier completion:(id)completion forScreen:(id)screen runLoopMode:(id)mode;	// 0x33da5ca1
// declared property setter: - (void)setActiveValues:(id)values;	// 0x33da5659
// declared property setter: - (void)setFriction:(double)friction;	// 0x33da5e31
// declared property setter: - (void)setValue:(double)value;	// 0x33da621d
// declared property setter: - (void)setVelocity:(double)velocity;	// 0x33da61f1
// declared property getter: - (double)value;	// 0x33da6205
// declared property getter: - (double)velocity;	// 0x33da5f81
@end


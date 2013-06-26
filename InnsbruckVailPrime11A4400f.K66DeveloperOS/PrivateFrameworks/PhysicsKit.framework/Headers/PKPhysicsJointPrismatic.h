/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

#import "PhysicsKit-Structs.h"
#import "PKPhysicsJoint.h"


@interface PKPhysicsJointPrismatic : PKPhysicsJoint {
	b2PrismaticJointDef _jointDef;	// 16 = 0x10
	b2PrismaticJoint *_joint;	// 88 = 0x58
	CGPoint _anchor;	// 92 = 0x5c
	CGPoint _axis;	// 100 = 0x64
}
@property(assign) b2Joint *_joint;	// G=0x323cb29d; S=0x323cb2ad; converted property
@property(assign, nonatomic) float lowerDistanceLimit;	// G=0x323cb185; S=0x323cb1b5; 
@property(assign, nonatomic) BOOL shouldEnableLimits;	// G=0x323cb139; S=0x323cb14d; 
@property(assign, nonatomic) float upperDistanceLimit;	// G=0x323cb211; S=0x323cb241; 
+ (id)jointWithBodyA:(id)bodyA bodyB:(id)b anchor:(CGPoint)anchor axis:(CGPoint)axis;	// 0x323cab1d
- (id)initWithBodyA:(id)bodyA bodyB:(id)b anchor:(CGPoint)anchor axis:(CGPoint)axis;	// 0x323ca9c9
- (id)initWithCoder:(id)coder;	// 0x323cae21
- (id).cxx_construct;	// 0x323cb471
// converted property getter: - (b2Joint *)_joint;	// 0x323cb29d
- (b2JointDef *)_jointDef;	// 0x323cb2bd
- (void)create;	// 0x323cb2cd
- (void)encodeWithCoder:(id)coder;	// 0x323cac31
// declared property getter: - (float)lowerDistanceLimit;	// 0x323cb185
// declared property setter: - (void)setLowerDistanceLimit:(float)limit;	// 0x323cb1b5
// declared property setter: - (void)setShouldEnableLimits:(BOOL)enableLimits;	// 0x323cb14d
// declared property setter: - (void)setUpperDistanceLimit:(float)limit;	// 0x323cb241
// converted property setter: - (void)set_joint:(b2Joint *)joint;	// 0x323cb2ad
// declared property getter: - (BOOL)shouldEnableLimits;	// 0x323cb139
// declared property getter: - (float)upperDistanceLimit;	// 0x323cb211
@end

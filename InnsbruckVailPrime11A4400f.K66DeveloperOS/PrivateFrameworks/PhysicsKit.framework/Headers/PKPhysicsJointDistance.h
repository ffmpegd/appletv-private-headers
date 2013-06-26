/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

#import "PhysicsKit-Structs.h"
#import "PKPhysicsJoint.h"


@interface PKPhysicsJointDistance : PKPhysicsJoint {
	b2DistanceJointDef _jointDef;	// 16 = 0x10
	b2DistanceJoint *_joint;	// 64 = 0x40
	CGPoint _anchorA;	// 68 = 0x44
	CGPoint _anchorB;	// 76 = 0x4c
}
@property(assign) b2Joint *_joint;	// G=0x323c9f79; S=0x323c9f89; converted property
@property(assign, nonatomic) float damping;	// G=0x323ca1ad; S=0x323ca17d; 
@property(assign, nonatomic) float frequency;	// G=0x323ca27d; S=0x323ca24d; 
@property(assign, nonatomic) float length;	// G=0x323ca21d; S=0x323ca1c1; 
+ (id)jointWithBodyA:(id)bodyA bodyB:(id)b anchorA:(CGPoint)a anchorB:(CGPoint)b4;	// 0x323c99d9
+ (id)jointWithBodyA:(id)bodyA bodyB:(id)b localAnchorA:(CGPoint)a localAnchorB:(CGPoint)b4;	// 0x323c9635
- (id)initWithBodyA:(id)bodyA bodyB:(id)b anchorA:(CGPoint)a anchorB:(CGPoint)b4;	// 0x323c94e1
- (id)initWithBodyA:(id)bodyA bodyB:(id)b localAnchorA:(CGPoint)a localAnchorB:(CGPoint)b4;	// 0x323c9749
- (id)initWithCoder:(id)coder;	// 0x323c9ca1
- (id).cxx_construct;	// 0x323ca291
// converted property getter: - (b2Joint *)_joint;	// 0x323c9f79
- (b2JointDef *)_jointDef;	// 0x323c9f99
- (void)create;	// 0x323c9fa9
// declared property getter: - (float)damping;	// 0x323ca1ad
- (void)encodeWithCoder:(id)coder;	// 0x323c9aed
// declared property getter: - (float)frequency;	// 0x323ca27d
// declared property getter: - (float)length;	// 0x323ca21d
// declared property setter: - (void)setDamping:(float)damping;	// 0x323ca17d
// declared property setter: - (void)setFrequency:(float)frequency;	// 0x323ca24d
// declared property setter: - (void)setLength:(float)length;	// 0x323ca1c1
// converted property setter: - (void)set_joint:(b2Joint *)joint;	// 0x323c9f89
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CABehavior.h"

@class NSArray;

@interface CADynamicsBehavior : CABehavior {
}
@property(assign) float angularDrag;	// G=0x31b39781; S=0x31b39551; 
@property(assign) double collisionInterval;	// G=0x31b396fd; S=0x31b394cd; 
@property(assign) float drag;	// G=0x31b39769; S=0x31b39539; 
@property(copy) NSArray *forceFields;	// G=0x31b39681; S=0x31b39451; 
@property(assign) double minimumTimeStep;	// G=0x31b396d9; S=0x31b394a9; 
@property(assign) BOOL reactsToCollisions;	// G=0x31b39699; S=0x31b39469; 
@property(assign) float springScale;	// G=0x31b39751; S=0x31b39521; 
@property(copy) NSArray *springs;	// G=0x31b39669; S=0x31b39439; 
@property(assign) float stoppedAngularVelocity;	// G=0x31b39739; S=0x31b39509; 
@property(assign) float stoppedVelocity;	// G=0x31b39721; S=0x31b394f1; 
@property(assign) double timeStep;	// G=0x31b396b5; S=0x31b39485; 
+ (id)defaultValueForKey:(id)key;	// 0x31b39289
- (Object *)CA_copyRenderValue;	// 0x31b39799
// declared property getter: - (float)angularDrag;	// 0x31b39781
// declared property getter: - (double)collisionInterval;	// 0x31b396fd
// declared property getter: - (float)drag;	// 0x31b39769
// declared property getter: - (id)forceFields;	// 0x31b39681
// declared property getter: - (double)minimumTimeStep;	// 0x31b396d9
// declared property getter: - (BOOL)reactsToCollisions;	// 0x31b39699
// declared property setter: - (void)setAngularDrag:(float)drag;	// 0x31b39551
// declared property setter: - (void)setCollisionInterval:(double)interval;	// 0x31b394cd
// declared property setter: - (void)setDrag:(float)drag;	// 0x31b39539
// declared property setter: - (void)setForceFields:(id)fields;	// 0x31b39451
// declared property setter: - (void)setMinimumTimeStep:(double)step;	// 0x31b394a9
// declared property setter: - (void)setReactsToCollisions:(BOOL)collisions;	// 0x31b39469
// declared property setter: - (void)setSpringScale:(float)scale;	// 0x31b39521
// declared property setter: - (void)setSprings:(id)springs;	// 0x31b39439
// declared property setter: - (void)setStoppedAngularVelocity:(float)velocity;	// 0x31b39509
// declared property setter: - (void)setStoppedVelocity:(float)velocity;	// 0x31b394f1
// declared property setter: - (void)setTimeStep:(double)step;	// 0x31b39485
// declared property getter: - (float)springScale;	// 0x31b39751
// declared property getter: - (id)springs;	// 0x31b39669
// declared property getter: - (float)stoppedAngularVelocity;	// 0x31b39739
// declared property getter: - (float)stoppedVelocity;	// 0x31b39721
// declared property getter: - (double)timeStep;	// 0x31b396b5
@end


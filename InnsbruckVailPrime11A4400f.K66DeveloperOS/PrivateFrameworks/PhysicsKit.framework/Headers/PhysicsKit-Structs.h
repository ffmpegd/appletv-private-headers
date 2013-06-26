/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

typedef struct _NSZone NSZone;

typedef struct b2Vec2 {
	float x;
	float y;
} b2Vec2;

typedef struct b2BodyDef {
	bool _sk_affectedByGravity;
	unsigned _sk_categoryBitMask;
	unsigned _sk_collisionBitMask;
	unsigned _sk_intersectionCallbackBitMask;
	int type;
	b2Vec2 position;
	float angle;
	b2Vec2 linearVelocity;
	float angularVelocity;
	float linearDamping;
	float angularDamping;
	bool allowSleep;
	bool awake;
	bool fixedRotation;
	bool bullet;
	bool active;
	void *userData;
	float gravityScale;
} b2BodyDef;

typedef struct b2Rot {
	float _field1;
	float _field2;
} b2Rot;

typedef struct b2Transform {
	b2Vec2 _field1;
	b2Rot _field2;
} b2Transform;

typedef struct b2Sweep {
	b2Vec2 _field1;
	b2Vec2 _field2;
	b2Vec2 _field3;
	float _field4;
	float _field5;
	float _field6;
} b2Sweep;

typedef struct b2DestructionListener b2DestructionListener;
typedef struct b2Draw b2Draw;
typedef struct b2Joint b2Joint;
typedef struct b2Body b2Body;
typedef struct b2World {
	b2BlockAllocator _field1;
	b2StackAllocator _field2;
	int _field3;
	b2ContactManager _field4;
	b2Body *_field5;
	b2Joint *_field6;
	int _field7;
	int _field8;
	b2Vec2 _field9;
	bool _field10;
	b2DestructionListener *_field11;
	b2Draw *_field12;
	float _field13;
	bool _field14;
	bool _field15;
	bool _field16;
	bool _field17;
} b2World;

typedef struct b2Fixture b2Fixture;
typedef struct b2JointEdge b2JointEdge;
typedef struct b2ContactEdge b2ContactEdge;
struct b2Body {
	bool _field1;
	unsigned _field2;
	unsigned _field3;
	unsigned _field4;
	int _field5;
	unsigned short _field6;
	int _field7;
	b2Transform _field8;
	b2Sweep _field9;
	b2Vec2 _field10;
	float _field11;
	b2Vec2 _field12;
	float _field13;
	b2World *_field14;
	b2Body *_field15;
	b2Body *_field16;
	b2Fixture *_field17;
	int _field18;
	b2JointEdge *_field19;
	b2ContactEdge *_field20;
	float _field21;
	float _field22;
	float _field23;
	float _field24;
	float _field25;
	float _field26;
	float _field27;
	float _field28;
	void *_field29;
};

struct b2JointEdge {
	b2Body *_field1;
	b2Joint *_field2;
	b2JointEdge *_field3;
	b2JointEdge *_field4;
};

struct b2ContactEdge b2ContactEdge;

typedef struct b2Shape b2Shape;

typedef struct b2Filter {
	unsigned categoryBits;
	unsigned maskBits;
	unsigned groupIndex;
} b2Filter;

typedef struct b2FixtureProxy b2FixtureProxy;
struct b2Fixture {
	float _field1;
	b2Fixture *_field2;
	b2Body *_field3;
	b2Shape *_field4;
	float _field5;
	float _field6;
	b2FixtureProxy *_field7;
	int _field8;
	b2Filter _field9;
	bool _field10;
	void *_field11;
};

typedef struct b2FixtureDef {
	b2Shape *shape;
	void *userData;
	float friction;
	float restitution;
	float density;
	bool isSensor;
	b2Filter filter;
} b2FixtureDef;

struct b2FixtureProxy b2FixtureProxy;

typedef struct CGPath *CGPathRef;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

struct b2Joint {
	/*function-pointer*/ void **_field1;
	int _field2;
	b2Joint *_field3;
	b2Joint *_field4;
	b2JointEdge _field5;
	b2JointEdge _field6;
	b2Body *_field7;
	b2Body *_field8;
	bool _field9;
	bool _field10;
	void *_field11;
};

typedef struct b2JointDef {
	int _field1;
	void *_field2;
	b2Body *_field3;
	b2Body *_field4;
	bool _field5;
} b2JointDef;

typedef struct b2RevoluteJointDef {
	int type;
	void *userData;
	b2Body *bodyA;
	b2Body *bodyB;
	bool collideConnected;
	b2Vec2 localAnchorA;
	b2Vec2 localAnchorB;
	float referenceAngle;
	bool enableLimit;
	float lowerAngle;
	float upperAngle;
	bool enableMotor;
	float motorSpeed;
	float maxMotorTorque;
} b2RevoluteJointDef;

typedef struct b2Vec3 {
	float _field1;
	float _field2;
	float _field3;
} b2Vec3;

typedef struct b2Mat33 {
	b2Vec3 _field1;
	b2Vec3 _field2;
	b2Vec3 _field3;
} b2Mat33;

typedef struct b2RevoluteJoint {
	/*function-pointer*/ void **_field1;
	int _field2;
	b2Joint *_field3;
	b2Joint *_field4;
	b2JointEdge _field5;
	b2JointEdge _field6;
	b2Body *_field7;
	b2Body *_field8;
	bool _field9;
	bool _field10;
	void *_field11;
	b2Vec2 _field12;
	b2Vec2 _field13;
	b2Vec3 _field14;
	float _field15;
	bool _field16;
	float _field17;
	float _field18;
	bool _field19;
	float _field20;
	float _field21;
	float _field22;
	int _field23;
	int _field24;
	b2Vec2 _field25;
	b2Vec2 _field26;
	b2Vec2 _field27;
	b2Vec2 _field28;
	float _field29;
	float _field30;
	float _field31;
	float _field32;
	b2Mat33 _field33;
	float _field34;
	int _field35;
} b2RevoluteJoint;

typedef struct b2DistanceJointDef {
	int type;
	void *userData;
	b2Body *bodyA;
	b2Body *bodyB;
	bool collideConnected;
	b2Vec2 localAnchorA;
	b2Vec2 localAnchorB;
	float length;
	float frequencyHz;
	float dampingRatio;
} b2DistanceJointDef;

typedef struct b2DistanceJoint {
	/*function-pointer*/ void **_field1;
	int _field2;
	b2Joint *_field3;
	b2Joint *_field4;
	b2JointEdge _field5;
	b2JointEdge _field6;
	b2Body *_field7;
	b2Body *_field8;
	bool _field9;
	bool _field10;
	void *_field11;
	float _field12;
	float _field13;
	float _field14;
	b2Vec2 _field15;
	b2Vec2 _field16;
	float _field17;
	float _field18;
	float _field19;
	int _field20;
	int _field21;
	b2Vec2 _field22;
	b2Vec2 _field23;
	b2Vec2 _field24;
	b2Vec2 _field25;
	b2Vec2 _field26;
	float _field27;
	float _field28;
	float _field29;
	float _field30;
	float _field31;
} b2DistanceJoint;

typedef struct b2WeldJointDef {
	int type;
	void *userData;
	b2Body *bodyA;
	b2Body *bodyB;
	bool collideConnected;
	b2Vec2 localAnchorA;
	b2Vec2 localAnchorB;
	float referenceAngle;
} b2WeldJointDef;

typedef struct b2WeldJoint {
	/*function-pointer*/ void **_field1;
	int _field2;
	b2Joint *_field3;
	b2Joint *_field4;
	b2JointEdge _field5;
	b2JointEdge _field6;
	b2Body *_field7;
	b2Body *_field8;
	bool _field9;
	bool _field10;
	void *_field11;
	b2Vec2 _field12;
	b2Vec2 _field13;
	float _field14;
	b2Vec3 _field15;
	int _field16;
	int _field17;
	b2Vec2 _field18;
	b2Vec2 _field19;
	b2Vec2 _field20;
	b2Vec2 _field21;
	float _field22;
	float _field23;
	float _field24;
	float _field25;
	b2Mat33 _field26;
} b2WeldJoint;

typedef struct b2PrismaticJointDef {
	int type;
	void *userData;
	b2Body *bodyA;
	b2Body *bodyB;
	bool collideConnected;
	b2Vec2 localAnchorA;
	b2Vec2 localAnchorB;
	b2Vec2 localAxisA;
	float referenceAngle;
	bool enableLimit;
	float lowerTranslation;
	float upperTranslation;
	bool enableMotor;
	float maxMotorForce;
	float motorSpeed;
} b2PrismaticJointDef;

typedef struct b2PrismaticJoint {
	/*function-pointer*/ void **_field1;
	int _field2;
	b2Joint *_field3;
	b2Joint *_field4;
	b2JointEdge _field5;
	b2JointEdge _field6;
	b2Body *_field7;
	b2Body *_field8;
	bool _field9;
	bool _field10;
	void *_field11;
	b2Vec2 _field12;
	b2Vec2 _field13;
	b2Vec2 _field14;
	b2Vec2 _field15;
	float _field16;
	b2Vec3 _field17;
	float _field18;
	float _field19;
	float _field20;
	float _field21;
	float _field22;
	bool _field23;
	bool _field24;
	int _field25;
	int _field26;
	int _field27;
	b2Vec2 _field28;
	b2Vec2 _field29;
	float _field30;
	float _field31;
	float _field32;
	float _field33;
	b2Vec2 _field34;
	b2Vec2 _field35;
	float _field36;
	float _field37;
	float _field38;
	float _field39;
	b2Mat33 _field40;
	float _field41;
} b2PrismaticJoint;

typedef struct b2RopeJointDef {
	int type;
	void *userData;
	b2Body *bodyA;
	b2Body *bodyB;
	bool collideConnected;
	b2Vec2 localAnchorA;
	b2Vec2 localAnchorB;
	float maxLength;
} b2RopeJointDef;

typedef struct b2RopeJoint {
	/*function-pointer*/ void **_field1;
	int _field2;
	b2Joint *_field3;
	b2Joint *_field4;
	b2JointEdge _field5;
	b2JointEdge _field6;
	b2Body *_field7;
	b2Body *_field8;
	bool _field9;
	bool _field10;
	void *_field11;
	b2Vec2 _field12;
	b2Vec2 _field13;
	float _field14;
	float _field15;
	float _field16;
	int _field17;
	int _field18;
	b2Vec2 _field19;
	b2Vec2 _field20;
	b2Vec2 _field21;
	b2Vec2 _field22;
	b2Vec2 _field23;
	float _field24;
	float _field25;
	float _field26;
	float _field27;
	float _field28;
	int _field29;
} b2RopeJoint;

typedef struct b2Chunk b2Chunk;

typedef struct b2Block b2Block;

typedef struct b2BlockAllocator {
	b2Chunk *_field1;
	int _field2;
	int _field3;
	b2Block *_field4[14];
} b2BlockAllocator;

typedef struct b2StackEntry {
	char *_field1;
	int _field2;
	bool _field3;
} b2StackEntry;

typedef struct b2StackAllocator {
	BOOL _field1[102400];
	int _field2;
	int _field3;
	int _field4;
	b2StackEntry _field5[32];
	int _field6;
} b2StackAllocator;

typedef struct b2TreeNode b2TreeNode;

typedef struct b2DynamicTree {
	int _field1;
	b2TreeNode *_field2;
	int _field3;
	int _field4;
	int _field5;
	unsigned _field6;
	int _field7;
} b2DynamicTree;

typedef struct b2Pair b2Pair;

typedef struct b2BroadPhase {
	b2DynamicTree _field1;
	int _field2;
	int *_field3;
	int _field4;
	int _field5;
	b2Pair *_field6;
	int _field7;
	int _field8;
	int _field9;
} b2BroadPhase;

typedef struct b2Contact b2Contact;

typedef struct b2ContactFilter b2ContactFilter;

typedef struct b2ContactListener b2ContactListener;

typedef struct b2ContactManager {
	b2BroadPhase _field1;
	b2Contact *_field2;
	int _field3;
	b2ContactFilter *_field4;
	b2ContactListener *_field5;
	b2BlockAllocator *_field6;
} b2ContactManager;

struct b2DestructionListener b2DestructionListener;

struct b2Draw b2Draw;

@class NSMutableDictionary;
@protocol PKPhysicsContactDelegate;
typedef struct PKContactListener {
	/*function-pointer*/ void **_vptr$b2ContactListener;
	NSMutableDictionary *_contacts;
	id<PKPhysicsContactDelegate> _contactDelegate;
} PKContactListener;

typedef struct CGRect {
	CGPoint _field1;
	CGSize _field2;
} CGRect;


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDAnimateScaleBehavior.h"
#import "OfficeImport-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface PDAnimateMotionBehavior : PDAnimateScaleBehavior {
@private
	NSString *mPath;	// 36 = 0x24
	BOOL mHasAngle;	// 40 = 0x28
	double mAngle;	// 44 = 0x2c
	BOOL mHasPointType;	// 52 = 0x34
	int mPointType;	// 56 = 0x38
	BOOL mHasOriginType;	// 60 = 0x3c
	int mOriginType;	// 64 = 0x40
	BOOL mHasRotationCenter;	// 68 = 0x44
	CGPoint mRotationCenter;	// 72 = 0x48
}
@property(assign) double angle;	// G=0x34d94ded; S=0x34d94e05; converted property
@property(assign) int originType;	// G=0x34d94e7d; S=0x34d94e8d; converted property
@property(retain) id path;	// G=0x34d94dcd; S=0x34d96f31; converted property
@property(assign) int pointType;	// G=0x34d94e3d; S=0x34d94e4d; converted property
@property(assign) CGPoint rotationCenter;	// G=0x34d94ebd; S=0x34d94ed5; converted property
// converted property getter: - (double)angle;	// 0x34d94ded
- (void)dealloc;	// 0x34d96ee5
- (BOOL)hasAngle;	// 0x34d94ddd
- (BOOL)hasOriginType;	// 0x34d94e6d
- (BOOL)hasPath;	// 0x34d94db5
- (BOOL)hasPointType;	// 0x34d94e2d
- (BOOL)hasRotationCenter;	// 0x34d94ead
// converted property getter: - (int)originType;	// 0x34d94e7d
// converted property getter: - (id)path;	// 0x34d94dcd
// converted property getter: - (int)pointType;	// 0x34d94e3d
// converted property getter: - (CGPoint)rotationCenter;	// 0x34d94ebd
// converted property setter: - (void)setAngle:(double)angle;	// 0x34d94e05
// converted property setter: - (void)setOriginType:(int)type;	// 0x34d94e8d
// converted property setter: - (void)setPath:(id)path;	// 0x34d96f31
// converted property setter: - (void)setPointType:(int)type;	// 0x34d94e4d
// converted property setter: - (void)setRotationCenter:(CGPoint)center;	// 0x34d94ed5
@end


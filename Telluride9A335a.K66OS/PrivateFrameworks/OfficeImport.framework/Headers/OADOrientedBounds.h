/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OADOrientedBounds : NSObject {
@private
	CGRect mBounds;	// 4 = 0x4
	float mRotation;	// 20 = 0x14
	unsigned mFlipX : 1;	// 24 = 0x18
	unsigned mFlipY : 1;	// 24 = 0x18
	int mModeX;	// 28 = 0x1c
	int mModeY;	// 32 = 0x20
}
@property(assign) CGRect bounds;	// G=0x3512844d; S=0x35130c1d; converted property
@property(assign) BOOL flipX;	// G=0x351ec265; S=0x35130be1; converted property
@property(assign) BOOL flipY;	// G=0x351ec281; S=0x35130bfd; converted property
@property(assign) float rotation;	// G=0x351283d5; S=0x35130bd1; converted property
@property(assign) int xMode;	// G=0x351ec29d; S=0x3530dc59; converted property
@property(assign) int yMode;	// G=0x351ec2ad; S=0x3530dc69; converted property
+ (BOOL)directionCloserToVerticalThanToHorizontal:(float)horizontal;	// 0x351283e5
+ (id)orientedBoundsWithBounds:(CGRect)bounds;	// 0x351291bd
+ (id)orientedBoundsWithBounds:(CGRect)bounds rotation:(float)rotation flipX:(BOOL)x flipY:(BOOL)y;	// 0x351291ed
- (id)init;	// 0x35130b45
- (id)initWithBounds:(CGRect)bounds;	// 0x351e3f35
- (id)initWithBounds:(CGRect)bounds rotation:(float)rotation flipX:(BOOL)x flipY:(BOOL)y;	// 0x35129265
// converted property getter: - (CGRect)bounds;	// 0x3512844d
// converted property getter: - (BOOL)flipX;	// 0x351ec265
// converted property getter: - (BOOL)flipY;	// 0x351ec281
- (unsigned)hash;	// 0x353c9bc5
- (BOOL)isEqual:(id)equal;	// 0x351af551
- (BOOL)isEqualToOrientedBounds:(id)orientedBounds;	// 0x353c9c6d
// converted property getter: - (float)rotation;	// 0x351283d5
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x35130c1d
// converted property setter: - (void)setFlipX:(BOOL)x;	// 0x35130be1
// converted property setter: - (void)setFlipY:(BOOL)y;	// 0x35130bfd
- (void)setOrientedBounds:(id)bounds;	// 0x353c9b09
// converted property setter: - (void)setRotation:(float)rotation;	// 0x35130bd1
// converted property setter: - (void)setXMode:(int)mode;	// 0x3530dc59
// converted property setter: - (void)setYMode:(int)mode;	// 0x3530dc69
// converted property getter: - (int)xMode;	// 0x351ec29d
// converted property getter: - (int)yMode;	// 0x351ec2ad
@end


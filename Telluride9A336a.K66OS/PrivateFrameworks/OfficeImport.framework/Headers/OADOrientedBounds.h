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
@property(assign) CGRect bounds;	// G=0x34b8044d; S=0x34b88c1d; converted property
@property(assign) BOOL flipX;	// G=0x34c44265; S=0x34b88be1; converted property
@property(assign) BOOL flipY;	// G=0x34c44281; S=0x34b88bfd; converted property
@property(assign) float rotation;	// G=0x34b803d5; S=0x34b88bd1; converted property
@property(assign) int xMode;	// G=0x34c4429d; S=0x34d65c59; converted property
@property(assign) int yMode;	// G=0x34c442ad; S=0x34d65c69; converted property
+ (BOOL)directionCloserToVerticalThanToHorizontal:(float)horizontal;	// 0x34b803e5
+ (id)orientedBoundsWithBounds:(CGRect)bounds;	// 0x34b811bd
+ (id)orientedBoundsWithBounds:(CGRect)bounds rotation:(float)rotation flipX:(BOOL)x flipY:(BOOL)y;	// 0x34b811ed
- (id)init;	// 0x34b88b45
- (id)initWithBounds:(CGRect)bounds;	// 0x34c3bf35
- (id)initWithBounds:(CGRect)bounds rotation:(float)rotation flipX:(BOOL)x flipY:(BOOL)y;	// 0x34b81265
// converted property getter: - (CGRect)bounds;	// 0x34b8044d
// converted property getter: - (BOOL)flipX;	// 0x34c44265
// converted property getter: - (BOOL)flipY;	// 0x34c44281
- (unsigned)hash;	// 0x34e21bc5
- (BOOL)isEqual:(id)equal;	// 0x34c07551
- (BOOL)isEqualToOrientedBounds:(id)orientedBounds;	// 0x34e21c6d
// converted property getter: - (float)rotation;	// 0x34b803d5
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x34b88c1d
// converted property setter: - (void)setFlipX:(BOOL)x;	// 0x34b88be1
// converted property setter: - (void)setFlipY:(BOOL)y;	// 0x34b88bfd
- (void)setOrientedBounds:(id)bounds;	// 0x34e21b09
// converted property setter: - (void)setRotation:(float)rotation;	// 0x34b88bd1
// converted property setter: - (void)setXMode:(int)mode;	// 0x34d65c59
// converted property setter: - (void)setYMode:(int)mode;	// 0x34d65c69
// converted property getter: - (int)xMode;	// 0x34c4429d
// converted property getter: - (int)yMode;	// 0x34c442ad
@end


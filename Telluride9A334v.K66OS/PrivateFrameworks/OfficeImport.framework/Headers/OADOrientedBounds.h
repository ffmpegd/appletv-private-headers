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
@property(assign) CGRect bounds;	// G=0x354e344d; S=0x354ebc1d; converted property
@property(assign) BOOL flipX;	// G=0x355a7265; S=0x354ebbe1; converted property
@property(assign) BOOL flipY;	// G=0x355a7281; S=0x354ebbfd; converted property
@property(assign) float rotation;	// G=0x354e33d5; S=0x354ebbd1; converted property
@property(assign) int xMode;	// G=0x355a729d; S=0x356c8c59; converted property
@property(assign) int yMode;	// G=0x355a72ad; S=0x356c8c69; converted property
+ (BOOL)directionCloserToVerticalThanToHorizontal:(float)horizontal;	// 0x354e33e5
+ (id)orientedBoundsWithBounds:(CGRect)bounds;	// 0x354e41bd
+ (id)orientedBoundsWithBounds:(CGRect)bounds rotation:(float)rotation flipX:(BOOL)x flipY:(BOOL)y;	// 0x354e41ed
- (id)init;	// 0x354ebb45
- (id)initWithBounds:(CGRect)bounds;	// 0x3559ef35
- (id)initWithBounds:(CGRect)bounds rotation:(float)rotation flipX:(BOOL)x flipY:(BOOL)y;	// 0x354e4265
// converted property getter: - (CGRect)bounds;	// 0x354e344d
// converted property getter: - (BOOL)flipX;	// 0x355a7265
// converted property getter: - (BOOL)flipY;	// 0x355a7281
- (unsigned)hash;	// 0x35784bc5
- (BOOL)isEqual:(id)equal;	// 0x3556a551
- (BOOL)isEqualToOrientedBounds:(id)orientedBounds;	// 0x35784c6d
// converted property getter: - (float)rotation;	// 0x354e33d5
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x354ebc1d
// converted property setter: - (void)setFlipX:(BOOL)x;	// 0x354ebbe1
// converted property setter: - (void)setFlipY:(BOOL)y;	// 0x354ebbfd
- (void)setOrientedBounds:(id)bounds;	// 0x35784b09
// converted property setter: - (void)setRotation:(float)rotation;	// 0x354ebbd1
// converted property setter: - (void)setXMode:(int)mode;	// 0x356c8c59
// converted property setter: - (void)setYMode:(int)mode;	// 0x356c8c69
// converted property getter: - (int)xMode;	// 0x355a729d
// converted property getter: - (int)yMode;	// 0x355a72ad
@end


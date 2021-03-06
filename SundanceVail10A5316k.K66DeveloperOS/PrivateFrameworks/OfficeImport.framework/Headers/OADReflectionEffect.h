/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADEffect.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OADReflectionEffect : OADEffect {
@private
	float mBlurRadius;	// 8 = 0x8
	float mStartOpacity;	// 12 = 0xc
	float mStartPosition;	// 16 = 0x10
	float mEndOpacity;	// 20 = 0x14
	float mEndPosition;	// 24 = 0x18
	float mDistance;	// 28 = 0x1c
	float mDirection;	// 32 = 0x20
	float mFadeDirection;	// 36 = 0x24
	float mXScale;	// 40 = 0x28
	float mYScale;	// 44 = 0x2c
	float mXSkew;	// 48 = 0x30
	float mYSkew;	// 52 = 0x34
	int mAlignment;	// 56 = 0x38
	BOOL mRotateWithShape;	// 60 = 0x3c
}
@property(assign) int alignment;	// G=0x31253475; S=0x311b4d31; converted property
@property(assign) float blurRadius;	// G=0x31253365; S=0x311b4cd1; converted property
@property(assign) float direction;	// G=0x312533d5; S=0x311b4d11; converted property
@property(assign) float distance;	// G=0x312533c5; S=0x311b5dad; converted property
@property(assign) float endOpacity;	// G=0x312533a5; S=0x311b4cf1; converted property
@property(assign) float endPosition;	// G=0x312533b5; S=0x311b4d01; converted property
@property(assign) float fadeDirection;	// G=0x312533e5; S=0x312533f5; converted property
@property(assign) BOOL rotateWithShape;	// G=0x31253485; S=0x311b4d41; converted property
@property(assign) float startOpacity;	// G=0x31253375; S=0x311b4ce1; converted property
@property(assign) float startPosition;	// G=0x31253385; S=0x31253395; converted property
@property(assign) float xScale;	// G=0x31253405; S=0x31253415; converted property
@property(assign) float xSkew;	// G=0x31253435; S=0x31253445; converted property
@property(assign) float yScale;	// G=0x31253425; S=0x311b4d21; converted property
@property(assign) float ySkew;	// G=0x31253455; S=0x31253465; converted property
- (id)init;	// 0x311b4789
// converted property getter: - (int)alignment;	// 0x31253475
// converted property getter: - (float)blurRadius;	// 0x31253365
- (id)copyWithZone:(NSZone *)zone;	// 0x312531dd
// converted property getter: - (float)direction;	// 0x312533d5
// converted property getter: - (float)distance;	// 0x312533c5
// converted property getter: - (float)endOpacity;	// 0x312533a5
// converted property getter: - (float)endPosition;	// 0x312533b5
// converted property getter: - (float)fadeDirection;	// 0x312533e5
- (unsigned)hash;	// 0x31253495
- (BOOL)isEqual:(id)equal;	// 0x311b73b1
// converted property getter: - (BOOL)rotateWithShape;	// 0x31253485
// converted property setter: - (void)setAlignment:(int)alignment;	// 0x311b4d31
// converted property setter: - (void)setBlurRadius:(float)radius;	// 0x311b4cd1
// converted property setter: - (void)setDirection:(float)direction;	// 0x311b4d11
// converted property setter: - (void)setDistance:(float)distance;	// 0x311b5dad
// converted property setter: - (void)setEndOpacity:(float)opacity;	// 0x311b4cf1
// converted property setter: - (void)setEndPosition:(float)position;	// 0x311b4d01
// converted property setter: - (void)setFadeDirection:(float)direction;	// 0x312533f5
// converted property setter: - (void)setRotateWithShape:(BOOL)shape;	// 0x311b4d41
// converted property setter: - (void)setStartOpacity:(float)opacity;	// 0x311b4ce1
// converted property setter: - (void)setStartPosition:(float)position;	// 0x31253395
- (void)setStyleColor:(id)color;	// 0x31253361
// converted property setter: - (void)setXScale:(float)scale;	// 0x31253415
// converted property setter: - (void)setXSkew:(float)skew;	// 0x31253445
// converted property setter: - (void)setYScale:(float)scale;	// 0x311b4d21
// converted property setter: - (void)setYSkew:(float)skew;	// 0x31253465
// converted property getter: - (float)startOpacity;	// 0x31253375
// converted property getter: - (float)startPosition;	// 0x31253385
// converted property getter: - (float)xScale;	// 0x31253405
// converted property getter: - (float)xSkew;	// 0x31253435
// converted property getter: - (float)yScale;	// 0x31253425
// converted property getter: - (float)ySkew;	// 0x31253455
@end


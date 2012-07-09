/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


@interface CHDView3D : NSObject {
	int mRotationX;	// 4 = 0x4
	int mRotationY;	// 8 = 0x8
	int mDepthPercent;	// 12 = 0xc
	int mGapDepthPercent;	// 16 = 0x10
	int mHeightPercent;	// 20 = 0x14
	int mPerspective;	// 24 = 0x18
	bool mRightAngleAxes;	// 28 = 0x1c
	bool mCluster;	// 29 = 0x1d
	bool mAutoscale;	// 30 = 0x1e
}
@property(assign, getter=isAutoscale) bool autoscale;	// G=0x33b4995d; S=0x33b49971; converted property
@property(assign, getter=isCluster) bool cluster;	// G=0x33b49949; S=0x33ad5719; converted property
@property(assign) int depthPercent;	// G=0x33b498f5; S=0x33ad56d1; converted property
@property(assign) int gapDepthPercent;	// G=0x33b49905; S=0x33ad56e1; converted property
@property(assign) int heightPercent;	// G=0x33b49915; S=0x33ad56fd; converted property
@property(assign) int perspective;	// G=0x33b49925; S=0x33ad56a9; converted property
@property(assign, getter=isRightAngleAxes) bool rightAngleAxes;	// G=0x33b49935; S=0x33ad56c1; converted property
@property(assign) int rotationX;	// G=0x33b498e5; S=0x33ad5689; converted property
@property(assign) int rotationY;	// G=0x33b498d5; S=0x33ad5699; converted property
- (id)init;	// 0x33ad55c5
// converted property getter: - (int)depthPercent;	// 0x33b498f5
// converted property getter: - (int)gapDepthPercent;	// 0x33b49905
// converted property getter: - (int)heightPercent;	// 0x33b49915
// converted property getter: - (bool)isAutoscale;	// 0x33b4995d
// converted property getter: - (bool)isCluster;	// 0x33b49949
// converted property getter: - (bool)isRightAngleAxes;	// 0x33b49935
// converted property getter: - (int)perspective;	// 0x33b49925
// converted property getter: - (int)rotationX;	// 0x33b498e5
// converted property getter: - (int)rotationY;	// 0x33b498d5
// converted property setter: - (void)setAutoscale:(bool)autoscale;	// 0x33b49971
// converted property setter: - (void)setCluster:(bool)cluster;	// 0x33ad5719
// converted property setter: - (void)setDepthPercent:(int)percent;	// 0x33ad56d1
// converted property setter: - (void)setGapDepthPercent:(int)percent;	// 0x33ad56e1
// converted property setter: - (void)setHeightPercent:(int)percent;	// 0x33ad56fd
// converted property setter: - (void)setPerspective:(int)perspective;	// 0x33ad56a9
// converted property setter: - (void)setRightAngleAxes:(bool)axes;	// 0x33ad56c1
// converted property setter: - (void)setRotationX:(int)x;	// 0x33ad5689
// converted property setter: - (void)setRotationY:(int)y;	// 0x33ad5699
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "OfficeImport-Structs.h"

@class OADRotation3D;

@interface OADCamera : NSObject <NSCopying> {
	OADRotation3D *mRotation;	// 4 = 0x4
	int mCameraType;	// 8 = 0x8
	float mFieldOfView;	// 12 = 0xc
	float mZoom;	// 16 = 0x10
}
@property(assign) int cameraType;	// G=0x3714c0d9; S=0x3705d4b9; converted property
@property(assign) float fieldOfView;	// G=0x3714c0e9; S=0x370ad691; converted property
@property(retain) id rotation;	// G=0x3714c0c9; S=0x3705d421; converted property
@property(assign) float zoom;	// G=0x3714c0f9; S=0x3714c109; converted property
- (id)init;	// 0x3705d259
// converted property getter: - (int)cameraType;	// 0x3714c0d9
- (id)copyWithZone:(NSZone *)zone;	// 0x3714c019
- (void)dealloc;	// 0x37062881
// converted property getter: - (float)fieldOfView;	// 0x3714c0e9
- (unsigned)hash;	// 0x3714c119
- (BOOL)isEqual:(id)equal;	// 0x3714c189
// converted property getter: - (id)rotation;	// 0x3714c0c9
// converted property setter: - (void)setCameraType:(int)type;	// 0x3705d4b9
// converted property setter: - (void)setFieldOfView:(float)view;	// 0x370ad691
// converted property setter: - (void)setRotation:(id)rotation;	// 0x3705d421
// converted property setter: - (void)setZoom:(float)zoom;	// 0x3714c109
// converted property getter: - (float)zoom;	// 0x3714c0f9
@end


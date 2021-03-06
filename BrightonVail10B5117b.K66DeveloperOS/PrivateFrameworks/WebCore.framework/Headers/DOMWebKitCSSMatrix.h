/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"


@interface DOMWebKitCSSMatrix : DOMObject {
}
@property(assign) double a;	// G=0x36206909; S=0x3620693d; 
@property(assign) double b;	// G=0x36206995; S=0x362069c9; 
@property(assign) double c;	// G=0x36206a1d; S=0x36206a51; 
@property(assign) double d;	// G=0x36206aa5; S=0x36206ad9; 
@property(assign) double e;	// G=0x36206b2d; S=0x36206b61; 
@property(assign) double f;	// G=0x36206bb5; S=0x36206be9; 
@property(assign) double m11;	// G=0x36206c3d; S=0x36206c71; 
@property(assign) double m12;	// G=0x36206cc9; S=0x36206cfd; 
@property(assign) double m13;	// G=0x36206d51; S=0x36206d85; 
@property(assign) double m14;	// G=0x36206dd9; S=0x36206e0d; 
@property(assign) double m21;	// G=0x36206e61; S=0x36206e95; 
@property(assign) double m22;	// G=0x36206ee9; S=0x36206f1d; 
@property(assign) double m23;	// G=0x36206f71; S=0x36206fa5; 
@property(assign) double m24;	// G=0x36206ff9; S=0x3620702d; 
@property(assign) double m31;	// G=0x36207081; S=0x362070b5; 
@property(assign) double m32;	// G=0x36207109; S=0x3620713d; 
@property(assign) double m33;	// G=0x36207191; S=0x362071c5; 
@property(assign) double m34;	// G=0x36207219; S=0x3620724d; 
@property(assign) double m41;	// G=0x362072a1; S=0x362072d5; 
@property(assign) double m42;	// G=0x36207329; S=0x3620735d; 
@property(assign) double m43;	// G=0x362073b1; S=0x362073e5; 
@property(assign) double m44;	// G=0x36207439; S=0x3620746d; 
// declared property getter: - (double)a;	// 0x36206909
// declared property getter: - (double)b;	// 0x36206995
// declared property getter: - (double)c;	// 0x36206a1d
// declared property getter: - (double)d;	// 0x36206aa5
- (void)dealloc;	// 0x3620683d
// declared property getter: - (double)e;	// 0x36206b2d
// declared property getter: - (double)f;	// 0x36206bb5
- (void)finalize;	// 0x362068b5
- (id)inverse;	// 0x36207885
// declared property getter: - (double)m11;	// 0x36206c3d
// declared property getter: - (double)m12;	// 0x36206cc9
// declared property getter: - (double)m13;	// 0x36206d51
// declared property getter: - (double)m14;	// 0x36206dd9
// declared property getter: - (double)m21;	// 0x36206e61
// declared property getter: - (double)m22;	// 0x36206ee9
// declared property getter: - (double)m23;	// 0x36206f71
// declared property getter: - (double)m24;	// 0x36206ff9
// declared property getter: - (double)m31;	// 0x36207081
// declared property getter: - (double)m32;	// 0x36207109
// declared property getter: - (double)m33;	// 0x36207191
// declared property getter: - (double)m34;	// 0x36207219
// declared property getter: - (double)m41;	// 0x362072a1
// declared property getter: - (double)m42;	// 0x36207329
// declared property getter: - (double)m43;	// 0x362073b1
// declared property getter: - (double)m44;	// 0x36207439
- (id)multiply:(id)multiply;	// 0x3620767d
- (id)rotate:(double)rotate rotY:(double)y rotZ:(double)z;	// 0x36207cfd
- (id)rotateAxisAngle:(double)angle y:(double)y z:(double)z angle:(double)angle4;	// 0x36207e7d
- (id)scale:(double)scale scaleY:(double)y scaleZ:(double)z;	// 0x36207b7d
// declared property setter: - (void)setA:(double)a;	// 0x3620693d
// declared property setter: - (void)setB:(double)b;	// 0x362069c9
// declared property setter: - (void)setC:(double)c;	// 0x36206a51
// declared property setter: - (void)setD:(double)d;	// 0x36206ad9
// declared property setter: - (void)setE:(double)e;	// 0x36206b61
// declared property setter: - (void)setF:(double)f;	// 0x36206be9
// declared property setter: - (void)setM11:(double)a11;	// 0x36206c71
// declared property setter: - (void)setM12:(double)a12;	// 0x36206cfd
// declared property setter: - (void)setM13:(double)a13;	// 0x36206d85
// declared property setter: - (void)setM14:(double)a14;	// 0x36206e0d
// declared property setter: - (void)setM21:(double)a21;	// 0x36206e95
// declared property setter: - (void)setM22:(double)a22;	// 0x36206f1d
// declared property setter: - (void)setM23:(double)a23;	// 0x36206fa5
// declared property setter: - (void)setM24:(double)a24;	// 0x3620702d
// declared property setter: - (void)setM31:(double)a31;	// 0x362070b5
// declared property setter: - (void)setM32:(double)a32;	// 0x3620713d
// declared property setter: - (void)setM33:(double)a33;	// 0x362071c5
// declared property setter: - (void)setM34:(double)a34;	// 0x3620724d
// declared property setter: - (void)setM41:(double)a41;	// 0x362072d5
// declared property setter: - (void)setM42:(double)a42;	// 0x3620735d
// declared property setter: - (void)setM43:(double)a43;	// 0x362073e5
// declared property setter: - (void)setM44:(double)a44;	// 0x3620746d
- (void)setMatrixValue:(id)value;	// 0x362074c5
- (id)skewX:(double)x;	// 0x36208005
- (id)skewY:(double)y;	// 0x36208175
- (id)toString;	// 0x362082e5
- (id)translate:(double)translate y:(double)y z:(double)z;	// 0x362079fd
@end


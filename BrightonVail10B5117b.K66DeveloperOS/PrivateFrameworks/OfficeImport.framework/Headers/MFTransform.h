/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@protocol MFDeviceDriver;

@interface MFTransform : NSObject <NSCopying> {
	CGAffineTransform m_world;	// 4 = 0x4
	CGPoint m_windowOrg;	// 28 = 0x1c
	CGPoint m_windowExt;	// 36 = 0x24
	CGPoint m_viewportOrg;	// 44 = 0x2c
	CGPoint m_viewportExt;	// 52 = 0x34
	CGAffineTransform m_combinedTransform;	// 60 = 0x3c
	int m_mapMode;	// 84 = 0x54
	NSObject<MFDeviceDriver> *m_deviceDriver;	// 88 = 0x58
}
- (id)initWithDriver:(id)driver;	// 0x34aa5bf1
- (id).cxx_construct;	// 0x34aa5be9
- (CGPoint)DPtoLP:(CGPoint)lp;	// 0x34c3f151
- (CGPoint)LPtoDP:(CGPoint)dp;	// 0x34c3f1fd
- (id)copyWithZone:(NSZone *)zone;	// 0x34b2f69d
- (int)getMapMode;	// 0x34b2fa91
- (CGAffineTransform)getTransformMatrix;	// 0x34b2fa29
- (CGPoint)getViewportExtent;	// 0x34b2f9f9
- (CGPoint)getViewportOrg;	// 0x34b2f9c9
- (CGPoint)getWindowExtent;	// 0x34b2f999
- (CGPoint)getWindowOrg;	// 0x34b2f969
- (CGAffineTransform)getWorldMatrix;	// 0x34b2f901
- (BOOL)isUpsideDown;	// 0x34c3efe9
- (int)modifyWorldTransform:(const CGAffineTransform *)transform :(int)arg2;	// 0x34b65659
- (int)offsetViewportOrg:(int)org :(int)arg2;	// 0x34c3f105
- (int)offsetWindowOrg:(int)org :(int)arg2;	// 0x34c3f0b9
- (int)scaleViewportExt:(int)ext :(int)arg2 :(int)arg3 :(int)arg4;	// 0x34b9cc3d
- (int)scaleWindowExt:(int)ext :(int)arg2 :(int)arg3 :(int)arg4;	// 0x34c3f011
- (int)setMapMode:(int)mode;	// 0x34aa7cc9
- (void)setTransformMatrix:(CGAffineTransform)matrix;	// 0x34b2fa5d
- (void)setViewportExt:(CGPoint)ext;	// 0x34b2fa15
- (int)setViewportExt:(int)ext :(int)arg2;	// 0x34aa7e35
- (void)setViewportOrg:(CGPoint)org;	// 0x34b2f9e5
- (int)setViewportOrg:(int)org :(int)arg2;	// 0x34b2d155
- (void)setWindowExt:(CGPoint)ext;	// 0x34b2f9b1
- (int)setWindowExt:(int)ext :(int)arg2;	// 0x34aa80c1
- (void)setWindowOrg:(CGPoint)org;	// 0x34b2f981
- (int)setWindowOrg:(int)org :(int)arg2;	// 0x34aa81c9
- (void)setWorldMatrix:(CGAffineTransform)matrix;	// 0x34b2f935
- (int)setWorldTransform:(const CGAffineTransform *)transform;	// 0x34b654c9
- (int)updateTransform;	// 0x34aa7e99
@end


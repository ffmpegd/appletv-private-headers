/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <UIView.h> // Unknown library

@class CALayer, CAShapeLayer;

@interface UIPDFMagnifiedView : UIView {
	CGPoint _position;	// 84 = 0x54
	CGSize _imageSize;	// 92 = 0x5c
	CALayer *_glassLayer;	// 100 = 0x64
	CAShapeLayer *_selectionLayer;	// 104 = 0x68
	CAShapeLayer *_leftBar;	// 108 = 0x6c
	CALayer *_leftGrabber;	// 112 = 0x70
	CGSize _controlPointSize;	// 116 = 0x74
	CAShapeLayer *_rightBar;	// 124 = 0x7c
	CALayer *_rightGrabber;	// 128 = 0x80
	CALayer *_imageLayer;	// 132 = 0x84
	CGPoint _touchPoint;	// 136 = 0x88
	unsigned _pageRotation;	// 144 = 0x90
	CGImageRef _image;	// 148 = 0x94
}
@property(assign, nonatomic) CGImageRef image;	// G=0x34d2432d; S=0x34d23a15; @synthesize=_image
@property(assign, nonatomic) unsigned pageRotation;	// G=0x34d24355; S=0x34d24365; @synthesize=_pageRotation
@property(assign, nonatomic) CGPoint touchPoint;	// G=0x34d2433d; S=0x34d23e2d; @synthesize=_touchPoint
- (id)initWithFrame:(CGRect)frame loupe:(BOOL)loupe;	// 0x34d23539
- (void)createGrabbers;	// 0x34d23f61
- (void)dealloc;	// 0x34d2394d
// declared property getter: - (CGImageRef)image;	// 0x34d2432d
// declared property getter: - (unsigned)pageRotation;	// 0x34d24355
- (void)setGrabbersAt:(CGRect)at and:(CGRect)anAnd;	// 0x34d24155
// declared property setter: - (void)setImage:(CGImageRef)image;	// 0x34d23a15
// declared property setter: - (void)setPageRotation:(unsigned)rotation;	// 0x34d24365
- (void)setSelection:(CGPathRef)selection;	// 0x34d23f3d
// declared property setter: - (void)setTouchPoint:(CGPoint)point;	// 0x34d23e2d
// declared property getter: - (CGPoint)touchPoint;	// 0x34d2433d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library


@interface UIBezierPath : NSObject <NSCopying, NSCoding> {
	CGPathRef _path;	// 4 = 0x4
	float *_lineDashPattern;	// 8 = 0x8
	unsigned _lineDashPatternCount;	// 12 = 0xc
	float _lineWidth;	// 16 = 0x10
	float _miterLimit;	// 20 = 0x14
	float _flatness;	// 24 = 0x18
	float _lineDashPhase;	// 28 = 0x1c
	int _lineCapStyle;	// 32 = 0x20
	int _lineJoinStyle;	// 36 = 0x24
	BOOL _usesEvenOddFillRule;	// 40 = 0x28
	CGPathRef _immutablePath;	// 44 = 0x2c
	BOOL _immutablePathIsValid;	// 48 = 0x30
}
@property(assign, nonatomic) CGPathRef CGPath;	// G=0x32c64de1; S=0x32cb8f31; 
@property(readonly, assign, nonatomic) CGRect bounds;	// G=0x32cb8fb5; 
@property(readonly, assign, nonatomic) CGPoint currentPoint;	// G=0x32cb8fcd; 
@property(readonly, assign, getter=isEmpty) BOOL empty;	// G=0x32cb8f9d; 
@property(assign, nonatomic) float flatness;	// G=0x32cb9e55; S=0x32cb9e65; @synthesize=_flatness
@property(assign, nonatomic) int lineCapStyle;	// G=0x32cb9df5; S=0x32cb9e05; @synthesize=_lineCapStyle
@property(assign, nonatomic) int lineJoinStyle;	// G=0x32cb9e15; S=0x32cb9e25; @synthesize=_lineJoinStyle
@property(assign, nonatomic) float lineWidth;	// G=0x32cb9dd5; S=0x32cb9de5; @synthesize=_lineWidth
@property(assign, nonatomic) float miterLimit;	// G=0x32cb9e35; S=0x32cb9e45; @synthesize=_miterLimit
@property(assign, nonatomic) BOOL usesEvenOddFillRule;	// G=0x32cb9e75; S=0x32cb9e85; @synthesize=_usesEvenOddFillRule
+ (id)_bezierPathWithRoundedRect:(CGRect)roundedRect byRoundingCorners:(unsigned)corners cornerRadius:(float)radius;	// 0x32bc2935
+ (id)_roundedRectBezierPath:(CGRect)path withRoundedCorners:(int)roundedCorners cornerRadius:(float)radius segments:(int)segments;	// 0x32bc296d
+ (id)bezierPath;	// 0x32bb0529
+ (id)bezierPathForBottomOfRect:(CGRect)rect withCornerRadius:(float)cornerRadius;	// 0x32cb9365
+ (id)bezierPathForTopOfRect:(CGRect)rect withCornerRadius:(float)cornerRadius;	// 0x32cb9229
+ (id)bezierPathWithArcCenter:(CGPoint)arcCenter radius:(float)radius startAngle:(float)angle endAngle:(float)angle4 clockwise:(BOOL)clockwise;	// 0x32cb88ed
+ (id)bezierPathWithCGPath:(CGPathRef)cgpath;	// 0x32cb89a9
+ (id)bezierPathWithOvalInRect:(CGRect)rect;	// 0x32cb8899
+ (id)bezierPathWithRect:(CGRect)rect;	// 0x32bb04d5
+ (id)bezierPathWithRoundedRect:(CGRect)roundedRect byRoundingCorners:(unsigned)corners cornerRadii:(CGSize)radii;	// 0x32cad5d9
+ (id)bezierPathWithRoundedRect:(CGRect)roundedRect cornerRadius:(float)radius;	// 0x32c4a731
+ (id)roundedRectBezierPath:(CGRect)path withRoundedCorners:(int)roundedCorners withCornerRadii:(id)cornerRadii;	// 0x32cb9949
+ (id)roundedRectBezierPath:(CGRect)path withRoundedCorners:(int)roundedCorners withCornerRadius:(float)cornerRadius;	// 0x32bc28f9
+ (id)roundedRectBezierPath:(CGRect)path withRoundedEdges:(int)roundedEdges;	// 0x32c2330d
+ (id)roundedRectBezierPath:(CGRect)path withTopCornerRadius:(float)topCornerRadius withBottomCornerRadius:(float)bottomCornerRadius;	// 0x32cb9499
+ (id)shadowBezierPath:(CGRect)path withRoundedEdges:(int)roundedEdges;	// 0x32c565e5
- (id)init;	// 0x32cb8211
- (id)initWithCoder:(id)coder;	// 0x32cb823d
// declared property getter: - (CGPathRef)CGPath;	// 0x32c64de1
- (CGPathRef)_createMutablePathByDecodingData:(id)data;	// 0x32cb956d
- (id)_initWithCGMutablePath:(CGPathRef)cgmutablePath;	// 0x32bb0581
- (CGPathRef)_mutablePath;	// 0x32bb0655
- (CGPathRef)_pathRef;	// 0x32c567fd
- (void)addArcWithCenter:(CGPoint)center radius:(float)radius startAngle:(float)angle endAngle:(float)angle4 clockwise:(BOOL)clockwise;	// 0x32cb8ad1
- (void)addClip;	// 0x32bb0665
- (void)addCurveToPoint:(CGPoint)point controlPoint1:(CGPoint)a1 controlPoint2:(CGPoint)a2;	// 0x32cb8a4d
- (void)addLineToPoint:(CGPoint)point;	// 0x32bc4355
- (void)addQuadCurveToPoint:(CGPoint)point controlPoint:(CGPoint)point2;	// 0x32cb8a95
- (void)appendBezierPath:(id)path;	// 0x32cb9841
- (void)appendBezierPathWithArcWithCenter:(CGPoint)center radius:(float)radius startAngle:(float)angle endAngle:(float)angle4 clockwise:(BOOL)clockwise;	// 0x32c5680d
- (void)appendBezierPathWithOvalInRect:(CGRect)rect;	// 0x32cb98bd
- (void)appendBezierPathWithOvalInRect:(CGRect)rect transform:(CGAffineTransform)transform;	// 0x32cb98f5
- (void)appendBezierPathWithRect:(CGRect)rect;	// 0x32cb9885
- (void)appendPath:(id)path;	// 0x32cb8b31
- (void)applyTransform:(CGAffineTransform)transform;	// 0x32cb8b75
- (id)bezierPathByReversingPath;	// 0x32cb8c29
// declared property getter: - (CGRect)bounds;	// 0x32cb8fb5
- (void)clip;	// 0x32bc2f5d
- (void)closePath;	// 0x32cb8bcd
- (BOOL)containsPoint:(CGPoint)point;	// 0x32cb8fe5
- (id)copyWithZone:(NSZone *)zone;	// 0x32cb8789
// declared property getter: - (CGPoint)currentPoint;	// 0x32cb8fcd
- (void)dealloc;	// 0x32bb06a9
- (void)encodeWithCoder:(id)coder;	// 0x32cb84f1
- (void)fill;	// 0x32c23559
- (void)fillWithBlendMode:(int)blendMode alpha:(float)alpha;	// 0x32c4a8d9
// declared property getter: - (float)flatness;	// 0x32cb9e55
- (void)getLineDash:(float *)dash count:(int *)count phase:(float *)phase;	// 0x32cb90bd
// declared property getter: - (BOOL)isEmpty;	// 0x32cb8f9d
// declared property getter: - (int)lineCapStyle;	// 0x32cb9df5
// declared property getter: - (int)lineJoinStyle;	// 0x32cb9e15
- (void)lineToPoint:(CGPoint)point;	// 0x32bc4345
// declared property getter: - (float)lineWidth;	// 0x32cb9dd5
// declared property getter: - (float)miterLimit;	// 0x32cb9e35
- (void)moveToPoint:(CGPoint)point;	// 0x32bc4319
- (void)removeAllPoints;	// 0x32cb8bf9
// declared property setter: - (void)setCGPath:(CGPathRef)path;	// 0x32cb8f31
// declared property setter: - (void)setFlatness:(float)flatness;	// 0x32cb9e65
// declared property setter: - (void)setLineCapStyle:(int)style;	// 0x32cb9e05
- (void)setLineDash:(const float *)dash count:(int)count phase:(float)phase;	// 0x32cb901d
// declared property setter: - (void)setLineJoinStyle:(int)style;	// 0x32cb9e25
// declared property setter: - (void)setLineWidth:(float)width;	// 0x32cb9de5
// declared property setter: - (void)setMiterLimit:(float)limit;	// 0x32cb9e45
// declared property setter: - (void)setUsesEvenOddFillRule:(BOOL)rule;	// 0x32cb9e85
- (void)stroke;	// 0x32bc2e91
- (void)strokeWithBlendMode:(int)blendMode alpha:(float)alpha;	// 0x32cb9141
// declared property getter: - (BOOL)usesEvenOddFillRule;	// 0x32cb9e75
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CALayer.h"

@class NSArray, NSString;

@interface CAShapeLayer : CALayer {
}
@property(assign) CGColorRef fillColor;	// G=0x30290a35; S=0x30290a61; 
@property(copy) NSString *fillRule;	// G=0x30290aa1; S=0x30290ad1; 
@property(copy) NSString *lineCap;	// G=0x30290a89; S=0x30290ab9; 
@property(copy) NSArray *lineDashPattern;	// G=0x30290a7d; S=0x30290aad; 
@property(assign) float lineDashPhase;	// G=0x30290add; S=0x30290b21; 
@property(copy) NSString *lineJoin;	// G=0x30290a95; S=0x30290ac5; 
@property(assign) float lineWidth;	// G=0x30290af5; S=0x30290b39; 
@property(assign) float miterLimit;	// G=0x30290ae9; S=0x30290b2d; 
@property(assign) CGPathRef path;	// G=0x30290a41; S=0x30290a6d; 
@property(assign) CGColorRef strokeColor;	// G=0x30290a25; S=0x30290a51; 
@property(assign) float strokeEnd;	// G=0x30290b01; S=0x30290b45; 
@property(assign) float strokeStart;	// G=0x30290b11; S=0x30290b55; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x30290479
+ (id)defaultValueForKey:(id)key;	// 0x30290b65
- (Layer *)_copyRenderLayer:(Transaction *)layer layerFlags:(unsigned)flags commitFlags:(unsigned *)flags3;	// 0x302904cd
- (id)_implicitActionForKey:(id)key;	// 0x302903f1
- (void)_renderForegroundInContext:(CGContextRef)context;	// 0x30290c41
- (bool)_renderLayerDefinesProperty:(unsigned)property;	// 0x30290359
- (unsigned)_renderLayerPropertyAnimationFlags:(unsigned)flags;	// 0x3029031d
- (void)didChangeValueForKey:(id)key;	// 0x30290395
// declared property getter: - (CGColorRef)fillColor;	// 0x30290a35
// declared property getter: - (id)fillRule;	// 0x30290aa1
// declared property getter: - (id)lineCap;	// 0x30290a89
// declared property getter: - (id)lineDashPattern;	// 0x30290a7d
// declared property getter: - (float)lineDashPhase;	// 0x30290add
// declared property getter: - (id)lineJoin;	// 0x30290a95
// declared property getter: - (float)lineWidth;	// 0x30290af5
// declared property getter: - (float)miterLimit;	// 0x30290ae9
// declared property getter: - (CGPathRef)path;	// 0x30290a41
// declared property setter: - (void)setFillColor:(CGColorRef)color;	// 0x30290a61
// declared property setter: - (void)setFillRule:(id)rule;	// 0x30290ad1
// declared property setter: - (void)setLineCap:(id)cap;	// 0x30290ab9
// declared property setter: - (void)setLineDashPattern:(id)pattern;	// 0x30290aad
// declared property setter: - (void)setLineDashPhase:(float)phase;	// 0x30290b21
// declared property setter: - (void)setLineJoin:(id)join;	// 0x30290ac5
// declared property setter: - (void)setLineWidth:(float)width;	// 0x30290b39
// declared property setter: - (void)setMiterLimit:(float)limit;	// 0x30290b2d
// declared property setter: - (void)setPath:(CGPathRef)path;	// 0x30290a6d
// declared property setter: - (void)setStrokeColor:(CGColorRef)color;	// 0x30290a51
// declared property setter: - (void)setStrokeEnd:(float)end;	// 0x30290b45
// declared property setter: - (void)setStrokeStart:(float)start;	// 0x30290b55
// declared property getter: - (CGColorRef)strokeColor;	// 0x30290a25
// declared property getter: - (float)strokeEnd;	// 0x30290b01
// declared property getter: - (float)strokeStart;	// 0x30290b11
@end


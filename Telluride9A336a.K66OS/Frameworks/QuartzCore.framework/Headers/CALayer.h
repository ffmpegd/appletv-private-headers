/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "CAPropertyInfo.h"
#import "CAMediaTiming.h"
#import <NSObject.h> // Unknown library

@class CAMeshTransform, NSString, NSDictionary, NSArray;

@interface CALayer : NSObject <CAPropertyInfo, NSCoding, CAMediaTiming> {
@private
	CALayerIvars _attr;	// 4 = 0x4
}
@property(assign) BOOL acceleratesDrawing;	// G=0x360a4cb9; S=0x360d068d; 
@property(assign) BOOL acceptsLights;	// G=0x36159aa9; S=0x3615cb55; 
@property(copy) NSDictionary *actions;	// G=0x36159c89; S=0x360f079d; 
@property(assign) CGAffineTransform affineTransform;	// G=0x360cb29d; S=0x360c999d; converted property
@property(assign) BOOL allowsDisplayCompositing;	// G=0x360c51e1; S=0x3615cb29; 
@property(assign) BOOL allowsHitTesting;	// G=0x360c51fd; S=0x3615ca1d; 
@property(assign) float ambientReflectance;	// G=0x3615b67d; S=0x3615ce89; 
@property(assign) CGPoint anchorPoint;	// G=0x360e173d; S=0x360e12d5; 
@property(assign) float anchorPointZ;	// G=0x36159e69; S=0x360e1309; 
@property(assign) BOOL autoreverses;	// G=0x360ccc35; S=0x36159eb9; 
@property(assign) CGColorRef backgroundColor;	// G=0x360c4ec1; S=0x360cafdd; 
@property(copy) NSArray *backgroundFilters;	// G=0x360ccc99; S=0x36159d29; 
@property(assign) double beginTime;	// G=0x360ccb15; S=0x36159fcd; 
@property(copy) NSArray *behaviors;	// G=0x360ccd39; S=0x3615d25d; 
@property(assign) CGColorRef borderColor;	// G=0x360c4f39; S=0x360d06b9; 
@property(assign) float borderWidth;	// G=0x360c4f11; S=0x360d06e1; 
@property(assign) CGRect bounds;	// G=0x3609be95; S=0x3609c541; 
@property(assign) BOOL canDrawConcurrently;	// G=0x36159a61; S=0x3615ca49; 
@property(assign) BOOL clearsContext;	// G=0x360a4ce9; S=0x3615ca75; 
@property(assign) float coefficientOfRestitution;	// G=0x3615b7bd; S=0x3615cfc9; 
@property(retain) id compositingFilter;	// G=0x360cccc1; S=0x36159d01; 
@property(retain) id contents;	// G=0x3609de85; S=0x360c49a1; 
@property(assign) CGRect contentsCenter;	// G=0x360cd12d; S=0x360caa2d; 
@property(copy) NSString *contentsGravity;	// G=0x360ca6a9; S=0x360cacc5; 
@property(assign) BOOL contentsOpaque;	// G=0x36159a91; S=0x3615cafd; 
@property(assign) CGRect contentsRect;	// G=0x360cd655; S=0x360cab6d; 
@property(assign) float contentsScale;	// G=0x3609f6f5; S=0x360cab11; 
@property(copy) NSString *contentsScaling;	// G=0x360cab39; S=0x360caa69; 
@property(assign) CGAffineTransform contentsTransform;	// G=0x360e6c39; S=0x360caac9; 
@property(assign) float cornerRadius;	// G=0x360c4ee9; S=0x36159c61; 
@property(assign) id delegate;	// G=0x360e0f25; S=0x360c5501; 
@property(assign) float diffuseReflectance;	// G=0x3615b6a5; S=0x3615ceb1; 
@property(assign) CADoubleRect doubleBounds;	// G=0x360ef7c9; S=0x3615c99d; converted property
@property(assign) CADoublePoint doublePosition;	// G=0x3615c27d; S=0x3615c935; converted property
@property(assign, getter=isDoubleSided) BOOL doubleSided;	// G=0x360c5131; S=0x36159e15; 
@property(assign) double duration;	// G=0x360ccb7d; S=0x36159f65; 
@property(assign) unsigned edgeAntialiasingMask;	// G=0x360e59f1; S=0x360d0661; 
@property(copy) NSString *fillMode;	// G=0x360ccc5d; S=0x36159e91; 
@property(copy) NSArray *filters;	// G=0x360a15a1; S=0x360a366d; 
@property(assign, getter=isFlipped) BOOL flipped;	// G=0x3615afe1; S=0x3615aff9; converted property
@property(assign) CGRect frame;	// G=0x3609bf0d; S=0x3609c1bd; 
@property(assign, getter=isFrozen) BOOL frozen;	// G=0x360ced7d; S=0x360ced95; 
@property(assign, getter=isGeometryFlipped) BOOL geometryFlipped;	// G=0x36158fa1; S=0x3615a685; 
@property(assign, getter=isHidden) BOOL hidden;	// G=0x360c9bbd; S=0x360c47d9; 
@property(assign) BOOL invertsShadow;	// G=0x360cce25; S=0x3615cad1; 
@property(copy) NSArray *lights;	// G=0x360ccd11; S=0x3615d235; 
@property(copy) NSString *magnificationFilter;	// G=0x360c4da1; S=0x360c9949; 
@property(retain) CALayer *mask;	// G=0x3615a1e1; S=0x360cee21; 
@property(assign) BOOL masksToBounds;	// G=0x360e565d; S=0x360cac99; 
@property(assign) float mass;	// G=0x3615b76d; S=0x3615cf79; 
@property(copy) CAMeshTransform *meshTransform;	// G=0x360ccce9; S=0x3615d1f9; 
@property(assign) float metallicity;	// G=0x3615b71d; S=0x3615cf29; 
@property(copy) NSString *minificationFilter;	// G=0x360a4d01; S=0x360ef7e9; 
@property(assign) float minificationFilterBias;	// G=0x360c4e71; S=0x36159d51; 
@property(assign) float momentOfInertia;	// G=0x3615b795; S=0x3615cfa1; 
@property(copy) NSString *name;	// G=0x360c4e99; S=0x36159cd9; 
@property(assign) BOOL needsDisplayOnBoundsChange;	// G=0x360c4805; S=0x360cae51; 
@property(assign) BOOL needsLayoutOnGeometryChange;	// G=0x3609ed3d; S=0x360ec3f5; 
@property(assign) float opacity;	// G=0x360a3ced; S=0x3609c825; 
@property(assign, getter=isOpaque) BOOL opaque;	// G=0x360a4cd1; S=0x360a3b2d; 
@property(assign) CGPoint position;	// G=0x360cedc1; S=0x3609c3a9; 
@property(assign) BOOL preloadsCache;	// G=0x360c51c9; S=0x360ced4d; 
@property(assign) float rasterizationScale;	// G=0x360c5165; S=0x360c9971; 
@property(assign) float repeatCount;	// G=0x360ccbd9; S=0x36159f15; 
@property(assign) double repeatDuration;	// G=0x360ccc01; S=0x36159ee1; 
@property(assign) CGColorRef shadowColor;	// G=0x360ccd89; S=0x36159c11; 
@property(assign) CGSize shadowOffset;	// G=0x360ccdb1; S=0x36159bdd; 
@property(assign) float shadowOpacity;	// G=0x360ccd61; S=0x36159c39; 
@property(assign) CGPathRef shadowPath;	// G=0x360ccdfd; S=0x36159b8d; 
@property(assign) float shadowRadius;	// G=0x360ccdd5; S=0x36159bb5; 
@property(assign) float shininess;	// G=0x3615b6f5; S=0x3615cf01; 
@property(assign) BOOL shouldRasterize;	// G=0x360c514d; S=0x360ced1d; 
@property(assign) CGSize sizeRequisition;	// G=0x3615b5e5; S=0x3615cdc9; 
@property(assign) BOOL sortsSublayers;	// G=0x36159a79; S=0x3615caa1; 
@property(assign) float specularReflectance;	// G=0x3615b6cd; S=0x3615ced9; 
@property(assign) float speed;	// G=0x360ccbb1; S=0x36159f3d; 
@property(copy) NSDictionary *style;	// G=0x36159cb1; S=0x360e1075; 
@property(assign) CATransform3D sublayerTransform;	// G=0x36159df1; S=0x36159d79; 
@property(copy) NSArray *sublayers;	// G=0x3609d20d; S=0x3609f849; 
@property(readonly, assign) CALayer *superlayer;	// G=0x3609ef8d; 
@property(assign) double timeOffset;	// G=0x360ccb49; S=0x36159f99; 
@property(assign) CATransform3D transform;	// G=0x360c46f9; S=0x360c9a85; 
@property(assign) float velocityStretch;	// G=0x3615b745; S=0x3615cf51; 
@property(readonly, assign) CGRect visibleRect;	// G=0x360f2049; 
@property(assign) float zPosition;	// G=0x36159e41; S=0x360e12ad; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x360c8289
+ (/*function-pointer*/ void *)CA_getterForType:(int)type;	// 0x36159a4d
+ (/*function-pointer*/ void *)CA_setterForType:(int)type;	// 0x36158fe1
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x36159b6d
+ (id)defaultActionForKey:(id)key;	// 0x360c9999
+ (id)defaultValueForKey:(id)key;	// 0x360c872d
+ (id)layer;	// 0x360e1181
+ (BOOL)needsDisplayForKey:(id)key;	// 0x36158f6d
+ (id)properties;	// 0x3615b399
+ (BOOL)resolveInstanceMethod:(SEL)method;	// 0x360cd919
- (id)init;	// 0x360c78c5
- (id)initWithBounds:(CGRect)bounds;	// 0x36159b1d
- (id)initWithCoder:(id)coder;	// 0x3615aa7d
- (id)initWithLayer:(id)layer;	// 0x360e88c5
- (BOOL)_canDisplayConcurrently;	// 0x3615aee5
- (void)_cancelAnimationTimer;	// 0x36158fd9
- (Layer *)_copyRenderLayer:(Transaction *)layer layerFlags:(unsigned)flags commitFlags:(unsigned *)flags3;	// 0x360a69fd
- (void)_dealloc;	// 0x360cd69d
- (void)_didCommitLayer:(Transaction *)layer;	// 0x360a8915
- (void)_display;	// 0x360a483d
- (CGSize)_preferredSize;	// 0x3615a111
- (void)_prepareContext:(CGContextRef)context;	// 0x360a5c89
- (void)_renderBackgroundInContext:(CGContextRef)context;	// 0x360e5675
- (void)_renderBorderInContext:(CGContextRef)context;	// 0x360e6965
- (void)_renderForegroundInContext:(CGContextRef)context;	// 0x360e5b0d
- (bool)_renderLayerDefinesProperty:(unsigned)property;	// 0x360ceac9
- (unsigned)_renderLayerPropertyAnimationFlags:(unsigned)flags;	// 0x360cf6a9
- (void)_renderSublayersInContext:(CGContextRef)context;	// 0x360e67cd
- (BOOL)_scheduleAnimationTimer;	// 0x36158fd5
- (void)_scrollPoint:(CGPoint)point fromLayer:(id)layer;	// 0x360f2119
- (void)_scrollRect:(CGRect)rect fromLayer:(id)layer;	// 0x360f2165
- (CGRect)_visibleRectOfLayer:(id)layer;	// 0x360f21bd
// declared property getter: - (BOOL)acceleratesDrawing;	// 0x360a4cb9
// declared property getter: - (BOOL)acceptsLights;	// 0x36159aa9
- (id)actionForKey:(id)key;	// 0x3609db51
// declared property getter: - (id)actions;	// 0x36159c89
- (void)addAnimation:(id)animation forKey:(id)key;	// 0x360ce0b9
- (void)addSublayer:(id)sublayer;	// 0x3609effd
// converted property getter: - (CGAffineTransform)affineTransform;	// 0x360cb29d
// declared property getter: - (BOOL)allowsDisplayCompositing;	// 0x360c51e1
// declared property getter: - (BOOL)allowsHitTesting;	// 0x360c51fd
- (BOOL)allowsWeakReference;	// 0x36158f89
// declared property getter: - (float)ambientReflectance;	// 0x3615b67d
- (id)ancestorSharedWithLayer:(id)layer;	// 0x360c4255
// declared property getter: - (CGPoint)anchorPoint;	// 0x360e173d
// declared property getter: - (float)anchorPointZ;	// 0x36159e69
- (id)animationForKey:(id)key;	// 0x360ca6e9
- (id)animationKeys;	// 0x360cb005
// declared property getter: - (BOOL)autoreverses;	// 0x360ccc35
// declared property getter: - (CGColorRef)backgroundColor;	// 0x360c4ec1
// declared property getter: - (id)backgroundFilters;	// 0x360ccc99
// declared property getter: - (double)beginTime;	// 0x360ccb15
// declared property getter: - (id)behaviors;	// 0x360ccd39
// declared property getter: - (CGColorRef)borderColor;	// 0x360c4f39
// declared property getter: - (float)borderWidth;	// 0x360c4f11
// declared property getter: - (CGRect)bounds;	// 0x3609be95
// declared property getter: - (BOOL)canDrawConcurrently;	// 0x36159a61
- (void)clearHasBeenCommitted;	// 0x3615b33d
// declared property getter: - (BOOL)clearsContext;	// 0x360a4ce9
// declared property getter: - (float)coefficientOfRestitution;	// 0x3615b7bd
// declared property getter: - (id)compositingFilter;	// 0x360cccc1
- (BOOL)containsPoint:(CGPoint)point;	// 0x360d0369
// declared property getter: - (id)contents;	// 0x3609de85
- (BOOL)contentsAreFlipped;	// 0x36158fb9
// declared property getter: - (CGRect)contentsCenter;	// 0x360cd12d
// declared property getter: - (id)contentsGravity;	// 0x360ca6a9
// declared property getter: - (BOOL)contentsOpaque;	// 0x36159a91
// declared property getter: - (CGRect)contentsRect;	// 0x360cd655
// declared property getter: - (float)contentsScale;	// 0x3609f6f5
// declared property getter: - (id)contentsScaling;	// 0x360cab39
// declared property getter: - (CGAffineTransform)contentsTransform;	// 0x360e6c39
- (id)context;	// 0x3615bf7d
- (CADoublePoint)convertDoublePoint:(CADoublePoint)point fromLayer:(id)layer;	// 0x3615c449
- (CADoublePoint)convertDoublePoint:(CADoublePoint)point toLayer:(id)layer;	// 0x3615c4a5
- (CADoubleRect)convertDoubleRect:(CADoubleRect)rect fromLayer:(id)layer;	// 0x3615c501
- (CADoubleRect)convertDoubleRect:(CADoubleRect)rect toLayer:(id)layer;	// 0x3615c571
- (CGPoint)convertPoint:(CGPoint)point fromLayer:(id)layer;	// 0x360c3e55
- (CGPoint)convertPoint:(CGPoint)point toLayer:(id)layer;	// 0x360c4761
- (CGRect)convertRect:(CGRect)rect fromLayer:(id)layer;	// 0x360cb561
- (CGRect)convertRect:(CGRect)rect toLayer:(id)layer;	// 0x360cb1b1
- (double)convertTime:(double)time fromLayer:(id)layer;	// 0x3615a641
- (double)convertTime:(double)time toLayer:(id)layer;	// 0x3615a5fd
// declared property getter: - (float)cornerRadius;	// 0x360c4ee9
- (void)dealloc;	// 0x360cd6ad
- (id)debugDescription;	// 0x3615ab45
// declared property getter: - (id)delegate;	// 0x360e0f25
// declared property getter: - (float)diffuseReflectance;	// 0x3615b6a5
- (void)display;	// 0x360a47a5
- (void)displayIfNeeded;	// 0x360e55e1
// converted property getter: - (CADoubleRect)doubleBounds;	// 0x360ef7c9
// converted property getter: - (CADoublePoint)doublePosition;	// 0x3615c27d
- (BOOL)doubleSided;	// 0x3615afc9
- (void)drawInContext:(CGContextRef)context;	// 0x360a5da9
- (BOOL)drawsMipmapLevels;	// 0x36158fdd
// declared property getter: - (double)duration;	// 0x360ccb7d
// declared property getter: - (unsigned)edgeAntialiasingMask;	// 0x360e59f1
- (void)encodeWithCoder:(id)coder;	// 0x3615a935
// declared property getter: - (id)fillMode;	// 0x360ccc5d
// declared property getter: - (id)filters;	// 0x360a15a1
// declared property getter: - (CGRect)frame;	// 0x3609bf0d
- (BOOL)hasBeenCommitted;	// 0x360d0709
- (BOOL)hidden;	// 0x3615af99
- (id)hitTest:(CGPoint)test;	// 0x3615a1f5
- (BOOL)ignoresHitTesting;	// 0x3615af19
- (id)implicitAnimationForKeyPath:(id)keyPath;	// 0x360e17e5
- (void)insertSublayer:(id)sublayer above:(id)above;	// 0x360cae7d
- (void)insertSublayer:(id)sublayer atIndex:(unsigned)index;	// 0x360caba9
- (void)insertSublayer:(id)sublayer below:(id)below;	// 0x360cb41d
- (void)invalidateContents;	// 0x3615bda1
// declared property getter: - (BOOL)invertsShadow;	// 0x360cce25
- (BOOL)isDescendantOf:(id)of;	// 0x3615af61
// declared property getter: - (BOOL)isDoubleSided;	// 0x360c5131
// converted property getter: - (BOOL)isFlipped;	// 0x3615afe1
// declared property getter: - (BOOL)isFrozen;	// 0x360ced7d
// declared property getter: - (BOOL)isGeometryFlipped;	// 0x36158fa1
// declared property getter: - (BOOL)isHidden;	// 0x360c9bbd
// declared property getter: - (BOOL)isOpaque;	// 0x360a4cd1
- (id)layerAtTime:(double)time;	// 0x3615d6a9
- (id)layerBeingDrawn;	// 0x3615d6dd
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x3609ddf5
- (void)layoutBelowIfNeeded;	// 0x360cb3f9
- (void)layoutIfNeeded;	// 0x3609fe0d
- (BOOL)layoutIsActive;	// 0x3615badd
- (void)layoutSublayers;	// 0x360a02a9
// declared property getter: - (id)lights;	// 0x360ccd11
// declared property getter: - (id)magnificationFilter;	// 0x360c4da1
// declared property getter: - (id)mask;	// 0x3615a1e1
// declared property getter: - (BOOL)masksToBounds;	// 0x360e565d
// declared property getter: - (float)mass;	// 0x3615b76d
// declared property getter: - (id)meshTransform;	// 0x360ccce9
// declared property getter: - (float)metallicity;	// 0x3615b71d
// declared property getter: - (id)minificationFilter;	// 0x360a4d01
// declared property getter: - (float)minificationFilterBias;	// 0x360c4e71
- (id)modelLayer;	// 0x360c5869
// declared property getter: - (float)momentOfInertia;	// 0x3615b795
// declared property getter: - (id)name;	// 0x360c4e99
- (BOOL)needsDisplay;	// 0x360e5615
// declared property getter: - (BOOL)needsDisplayOnBoundsChange;	// 0x360c4805
- (BOOL)needsLayout;	// 0x3615a129
// declared property getter: - (BOOL)needsLayoutOnGeometryChange;	// 0x3609ed3d
// declared property getter: - (float)opacity;	// 0x360a3ced
- (BOOL)opaque;	// 0x3615afb1
// declared property getter: - (CGPoint)position;	// 0x360cedc1
- (CGSize)preferredFrameSize;	// 0x3615a001
// declared property getter: - (BOOL)preloadsCache;	// 0x360c51c9
- (id)presentationLayer;	// 0x360e83ed
// declared property getter: - (float)rasterizationScale;	// 0x360c5165
- (void *)regionBeingDrawn;	// 0x360d18e1
- (void)release;	// 0x3609ef11
- (void)reloadValueForKeyPath:(id)keyPath;	// 0x3615c629
- (void)removeAllAnimations;	// 0x360c5719
- (void)removeAnimationForKey:(id)key;	// 0x360ca865
- (void)removeFromSuperlayer;	// 0x3609d559
- (void)renderInContext:(CGContextRef)context;	// 0x360e50d1
// declared property getter: - (float)repeatCount;	// 0x360ccbd9
// declared property getter: - (double)repeatDuration;	// 0x360ccc01
- (void)replaceSublayer:(id)sublayer with:(id)with;	// 0x3615a145
- (id)retain;	// 0x3609d51d
- (unsigned)retainCount;	// 0x36158f71
- (BOOL)retainWeakReference;	// 0x3615ae9d
- (void)scrollPoint:(CGPoint)point;	// 0x360f2149
- (void)scrollRectToVisible:(CGRect)visible;	// 0x360f2195
// declared property setter: - (void)setAcceleratesDrawing:(BOOL)drawing;	// 0x360d068d
// declared property setter: - (void)setAcceptsLights:(BOOL)lights;	// 0x3615cb55
// declared property setter: - (void)setActions:(id)actions;	// 0x360f079d
// converted property setter: - (void)setAffineTransform:(CGAffineTransform)transform;	// 0x360c999d
// declared property setter: - (void)setAllowsDisplayCompositing:(BOOL)compositing;	// 0x3615cb29
// declared property setter: - (void)setAllowsHitTesting:(BOOL)testing;	// 0x3615ca1d
// declared property setter: - (void)setAmbientReflectance:(float)reflectance;	// 0x3615ce89
// declared property setter: - (void)setAnchorPoint:(CGPoint)point;	// 0x360e12d5
// declared property setter: - (void)setAnchorPointZ:(float)z;	// 0x360e1309
// declared property setter: - (void)setAutoreverses:(BOOL)autoreverses;	// 0x36159eb9
// declared property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x360cafdd
// declared property setter: - (void)setBackgroundFilters:(id)filters;	// 0x36159d29
// declared property setter: - (void)setBeginTime:(double)time;	// 0x36159fcd
// declared property setter: - (void)setBehaviors:(id)behaviors;	// 0x3615d25d
// declared property setter: - (void)setBorderColor:(CGColorRef)color;	// 0x360d06b9
// declared property setter: - (void)setBorderWidth:(float)width;	// 0x360d06e1
// declared property setter: - (void)setBounds:(CGRect)bounds;	// 0x3609c541
// declared property setter: - (void)setCanDrawConcurrently:(BOOL)concurrently;	// 0x3615ca49
// declared property setter: - (void)setClearsContext:(BOOL)context;	// 0x3615ca75
// declared property setter: - (void)setCoefficientOfRestitution:(float)restitution;	// 0x3615cfc9
// declared property setter: - (void)setCompositingFilter:(id)filter;	// 0x36159d01
// declared property setter: - (void)setContents:(id)contents;	// 0x360c49a1
// declared property setter: - (void)setContentsCenter:(CGRect)center;	// 0x360caa2d
- (void)setContentsChanged;	// 0x3615aefd
// declared property setter: - (void)setContentsGravity:(id)gravity;	// 0x360cacc5
// declared property setter: - (void)setContentsOpaque:(BOOL)opaque;	// 0x3615cafd
// declared property setter: - (void)setContentsRect:(CGRect)rect;	// 0x360cab6d
// declared property setter: - (void)setContentsScale:(float)scale;	// 0x360cab11
// declared property setter: - (void)setContentsScaling:(id)scaling;	// 0x360caa69
// declared property setter: - (void)setContentsTransform:(CGAffineTransform)transform;	// 0x360caac9
// declared property setter: - (void)setCornerRadius:(float)radius;	// 0x36159c61
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x360c5501
// declared property setter: - (void)setDiffuseReflectance:(float)reflectance;	// 0x3615ceb1
// converted property setter: - (void)setDoubleBounds:(CADoubleRect)bounds;	// 0x3615c99d
// converted property setter: - (void)setDoublePosition:(CADoublePoint)position;	// 0x3615c935
// declared property setter: - (void)setDoubleSided:(BOOL)sided;	// 0x36159e15
// declared property setter: - (void)setDuration:(double)duration;	// 0x36159f65
// declared property setter: - (void)setEdgeAntialiasingMask:(unsigned)mask;	// 0x360d0661
// declared property setter: - (void)setFillMode:(id)mode;	// 0x36159e91
// declared property setter: - (void)setFilters:(id)filters;	// 0x360a366d
// converted property setter: - (void)setFlipped:(BOOL)flipped;	// 0x3615aff9
// declared property setter: - (void)setFrame:(CGRect)frame;	// 0x3609c1bd
// declared property setter: - (void)setFrozen:(BOOL)frozen;	// 0x360ced95
// declared property setter: - (void)setGeometryFlipped:(BOOL)flipped;	// 0x3615a685
// declared property setter: - (void)setHidden:(BOOL)hidden;	// 0x360c47d9
// declared property setter: - (void)setInvertsShadow:(BOOL)shadow;	// 0x3615cad1
// declared property setter: - (void)setLights:(id)lights;	// 0x3615d235
// declared property setter: - (void)setMagnificationFilter:(id)filter;	// 0x360c9949
// declared property setter: - (void)setMask:(id)mask;	// 0x360cee21
// declared property setter: - (void)setMasksToBounds:(BOOL)bounds;	// 0x360cac99
// declared property setter: - (void)setMass:(float)mass;	// 0x3615cf79
// declared property setter: - (void)setMeshTransform:(id)transform;	// 0x3615d1f9
// declared property setter: - (void)setMetallicity:(float)metallicity;	// 0x3615cf29
// declared property setter: - (void)setMinificationFilter:(id)filter;	// 0x360ef7e9
// declared property setter: - (void)setMinificationFilterBias:(float)bias;	// 0x36159d51
// declared property setter: - (void)setMomentOfInertia:(float)inertia;	// 0x3615cfa1
// declared property setter: - (void)setName:(id)name;	// 0x36159cd9
- (void)setNeedsDisplay;	// 0x360a3855
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x360a3885
// declared property setter: - (void)setNeedsDisplayOnBoundsChange:(BOOL)change;	// 0x360cae51
- (void)setNeedsLayout;	// 0x3609ed55
// declared property setter: - (void)setNeedsLayoutOnGeometryChange:(BOOL)change;	// 0x360ec3f5
// declared property setter: - (void)setOpacity:(float)opacity;	// 0x3609c825
// declared property setter: - (void)setOpaque:(BOOL)opaque;	// 0x360a3b2d
// declared property setter: - (void)setPosition:(CGPoint)position;	// 0x3609c3a9
// declared property setter: - (void)setPreloadsCache:(BOOL)cache;	// 0x360ced4d
// declared property setter: - (void)setRasterizationScale:(float)scale;	// 0x360c9971
// declared property setter: - (void)setRepeatCount:(float)count;	// 0x36159f15
// declared property setter: - (void)setRepeatDuration:(double)duration;	// 0x36159ee1
// declared property setter: - (void)setShadowColor:(CGColorRef)color;	// 0x36159c11
// declared property setter: - (void)setShadowOffset:(CGSize)offset;	// 0x36159bdd
// declared property setter: - (void)setShadowOpacity:(float)opacity;	// 0x36159c39
// declared property setter: - (void)setShadowPath:(CGPathRef)path;	// 0x36159b8d
// declared property setter: - (void)setShadowRadius:(float)radius;	// 0x36159bb5
// declared property setter: - (void)setShininess:(float)shininess;	// 0x3615cf01
// declared property setter: - (void)setShouldRasterize:(BOOL)rasterize;	// 0x360ced1d
// declared property setter: - (void)setSizeRequisition:(CGSize)requisition;	// 0x3615cdc9
// declared property setter: - (void)setSortsSublayers:(BOOL)sublayers;	// 0x3615caa1
// declared property setter: - (void)setSpecularReflectance:(float)reflectance;	// 0x3615ced9
// declared property setter: - (void)setSpeed:(float)speed;	// 0x36159f3d
// declared property setter: - (void)setStyle:(id)style;	// 0x360e1075
// declared property setter: - (void)setSublayerTransform:(CATransform3D)transform;	// 0x36159d79
// declared property setter: - (void)setSublayers:(id)sublayers;	// 0x3609f849
// declared property setter: - (void)setTimeOffset:(double)offset;	// 0x36159f99
// declared property setter: - (void)setTransform:(CATransform3D)transform;	// 0x360c9a85
- (void)setValue:(id)value forKey:(id)key;	// 0x360a3429
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x360a186d
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x360e0f39
// declared property setter: - (void)setVelocityStretch:(float)stretch;	// 0x3615cf51
// declared property setter: - (void)setZPosition:(float)position;	// 0x360e12ad
// declared property getter: - (CGColorRef)shadowColor;	// 0x360ccd89
// declared property getter: - (CGSize)shadowOffset;	// 0x360ccdb1
// declared property getter: - (float)shadowOpacity;	// 0x360ccd61
// declared property getter: - (CGPathRef)shadowPath;	// 0x360ccdfd
// declared property getter: - (float)shadowRadius;	// 0x360ccdd5
// declared property getter: - (float)shininess;	// 0x3615b6f5
- (BOOL)shouldArchiveValueForKey:(id)key;	// 0x3615a6bd
// declared property getter: - (BOOL)shouldRasterize;	// 0x360c514d
- (CGSize)size;	// 0x360d0639
// declared property getter: - (CGSize)sizeRequisition;	// 0x3615b5e5
// declared property getter: - (BOOL)sortsSublayers;	// 0x36159a79
// declared property getter: - (float)specularReflectance;	// 0x3615b6cd
// declared property getter: - (float)speed;	// 0x360ccbb1
// declared property getter: - (id)style;	// 0x36159cb1
// declared property getter: - (CATransform3D)sublayerTransform;	// 0x36159df1
// declared property getter: - (id)sublayers;	// 0x3609d20d
// declared property getter: - (id)superlayer;	// 0x3609ef8d
// declared property getter: - (double)timeOffset;	// 0x360ccb49
// declared property getter: - (CATransform3D)transform;	// 0x360c46f9
- (id)valueForKey:(id)key;	// 0x360a0ee9
- (id)valueForKeyPath:(id)keyPath;	// 0x360a046d
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x360e11b9
// declared property getter: - (float)velocityStretch;	// 0x3615b745
// declared property getter: - (CGRect)visibleRect;	// 0x360f2049
// declared property getter: - (float)zPosition;	// 0x36159e41
@end


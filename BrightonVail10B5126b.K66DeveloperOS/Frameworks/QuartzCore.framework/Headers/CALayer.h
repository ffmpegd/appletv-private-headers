/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "NSCoding.h"
#import "QuartzCore-Structs.h"
#import "CAMediaTiming.h"
#import <NSObject.h> // Unknown library
#import "CAPropertyInfo.h"

@class CAMeshTransform, NSArray, NSString, NSDictionary;

@interface CALayer : NSObject <CAPropertyInfo, NSCoding, CAMediaTiming> {
	CALayerIvars _attr;	// 4 = 0x4
}
@property(assign) BOOL acceleratesDrawing;	// G=0x329099c9; S=0x329310a1; 
@property(assign) BOOL acceptsLights;	// G=0x329dfb55; S=0x329dfb6d; 
@property(copy) NSDictionary *actions;	// G=0x329df0f9; S=0x329df121; 
@property(assign) CGAffineTransform affineTransform;	// G=0x32911e11; S=0x32911f7d; converted property
@property(assign) BOOL allowsDisplayCompositing;	// G=0x32928859; S=0x32949709; 
@property(assign) BOOL allowsEdgeAntialiasing;	// G=0x3292881d; S=0x32947d21; 
@property(assign) BOOL allowsGroupBlending;	// G=0x32928875; S=0x329dfaad; 
@property(assign) BOOL allowsGroupOpacity;	// G=0x3292883d; S=0x329477ad; 
@property(assign) BOOL allowsHitTesting;	// G=0x32928891; S=0x329df8f9; 
@property(assign) float ambientReflectance;	// G=0x329dfb99; S=0x329dfbc1; 
@property(assign) CGPoint anchorPoint;	// G=0x32913e99; S=0x32931049; 
@property(assign) float anchorPointZ;	// G=0x329defd9; S=0x32949bd1; 
@property(assign) BOOL autoreverses;	// G=0x3292f4a1; S=0x329def89; 
@property(assign) CGColorRef backgroundColor;	// G=0x32910a7d; S=0x3292a05d; 
@property(copy) NSArray *backgroundFilters;	// G=0x3292f511; S=0x329df081; 
@property(assign) double beginTime;	// G=0x3292f371; S=0x329dee5d; 
@property(copy) NSArray *behaviors;	// G=0x3292f5b9; S=0x329dfd29; 
@property(assign) CGColorRef borderColor;	// G=0x32928779; S=0x329310d1; 
@property(assign) float borderWidth;	// G=0x32928751; S=0x329310f9; 
@property(assign) CGRect bounds;	// G=0x328fda39; S=0x328feb11; 
@property(assign) BOOL canDrawConcurrently;	// G=0x329df97d; S=0x329df995; 
@property(assign) BOOL clearsContext;	// G=0x32909a59; S=0x329df9c1; 
@property(assign) float coefficientOfRestitution;	// G=0x329dfe41; S=0x329dfe69; 
@property(retain) id compositingFilter;	// G=0x3292f539; S=0x32947be9; 
@property(retain) id contents;	// G=0x32903385; S=0x32911079; 
@property(assign) CGRect contentsCenter;	// G=0x32911259; S=0x32911279; 
@property(copy) NSString *contentsGravity;	// G=0x32910cfd; S=0x32929e19; 
@property(assign) BOOL contentsOpaque;	// G=0x329dfa95; S=0x329496dd; 
@property(assign) CGRect contentsRect;	// G=0x3292f79d; S=0x3292e2a5; 
@property(assign) float contentsScale;	// G=0x32910a55; S=0x3292e2dd; 
@property(copy) NSString *contentsScaling;	// G=0x3292e26d; S=0x329112b1; 
@property(assign) CGAffineTransform contentsTransform;	// G=0x3292f05d; S=0x3291130d; 
@property(assign) float cornerRadius;	// G=0x32928729; S=0x329df149; 
@property(assign) id delegate;	// G=0x3293b9a9; S=0x32910685; 
@property(assign) float diffuseReflectance;	// G=0x329dfbe9; S=0x329dfc11; 
@property(assign) CADoubleRect doubleBounds;	// G=0x3293b971; S=0x3293ba75; converted property
@property(assign) CADoublePoint doublePosition;	// G=0x329496a1; S=0x329489a5; converted property
@property(assign, getter=isDoubleSided) BOOL doubleSided;	// G=0x329287a5; S=0x329df029; 
@property(assign) BOOL drawsAsynchronously;	// G=0x329099b1; S=0x329df219; 
@property(assign) double duration;	// G=0x3292f3e1; S=0x329deecd; 
@property(assign) unsigned edgeAntialiasingMask;	// G=0x3293b371; S=0x32931071; 
@property(copy) NSString *fillMode;	// G=0x3292f4c9; S=0x329defb1; 
@property(copy) NSArray *filters;	// G=0x32905d29; S=0x32907cc1; 
@property(assign, getter=isFlipped) BOOL flipped;	// G=0x329df8cd; S=0x329df8e5; converted property
@property(assign) CGRect frame;	// G=0x328fd771; S=0x328fe619; 
@property(assign, getter=isFrozen) BOOL frozen;	// G=0x32949735; S=0x329470d5; 
@property(assign, getter=isGeometryFlipped) BOOL geometryFlipped;	// G=0x329ddce9; S=0x329ddd01; 
@property(assign, getter=isHidden) BOOL hidden;	// G=0x32909249; S=0x32911351; 
@property(assign) BOOL hitTestsAsOpaque;	// G=0x329288ad; S=0x329df925; 
@property(assign) BOOL invertsShadow;	// G=0x3292f6a9; S=0x329dfa39; 
@property(copy) NSArray *lights;	// G=0x3292f58d; S=0x329dfb2d; 
@property(assign) BOOL literalContentsCenter;	// G=0x329288c9; S=0x329df951; 
@property(copy) NSString *magnificationFilter;	// G=0x3292865d; S=0x32935e75; 
@property(retain) CALayer *mask;	// G=0x329487e9; S=0x3292a085; 
@property(assign) BOOL masksToBounds;	// G=0x32939bb5; S=0x3290e0dd; 
@property(assign) float mass;	// G=0x329dfda1; S=0x329dfdc9; 
@property(copy) CAMeshTransform *meshTransform;	// G=0x3292f561; S=0x329df4c9; 
@property(assign) float metallicity;	// G=0x329dfcd9; S=0x329dfd01; 
@property(copy) NSString *minificationFilter;	// G=0x32909a75; S=0x32935e4d; 
@property(assign) float minificationFilterBias;	// G=0x329286d5; S=0x329df055; 
@property(assign) float momentOfInertia;	// G=0x329dfdf1; S=0x329dfe19; 
@property(copy) NSString *name;	// G=0x32928701; S=0x329df0a9; 
@property(assign) BOOL needsDisplayOnBoundsChange;	// G=0x32910a3d; S=0x32929de5; 
@property(assign) BOOL needsLayoutOnGeometryChange;	// G=0x32904111; S=0x3292e349; 
@property(assign) float opacity;	// G=0x328ff0a5; S=0x328fdacd; 
@property(assign, getter=isOpaque) BOOL opaque;	// G=0x32909a3d; S=0x32908175; 
@property(assign) CGPoint position;	// G=0x32911381; S=0x328fe871; 
@property(assign) BOOL preloadsCache;	// G=0x329287d9; S=0x32931549; 
@property(assign) float rasterizationScale;	// G=0x329287f1; S=0x3292e321; 
@property(assign) float repeatCount;	// G=0x3292f441; S=0x329def29; 
@property(assign) double repeatDuration;	// G=0x3292f469; S=0x329def55; 
@property(assign) CGColorRef shadowColor;	// G=0x3292f609; S=0x329df171; 
@property(assign) CGSize shadowOffset;	// G=0x3292f631; S=0x329df19d; 
@property(assign) float shadowOpacity;	// G=0x3292f5e1; S=0x32939551; 
@property(assign) CGPathRef shadowPath;	// G=0x3292f681; S=0x329df1f1; 
@property(assign) BOOL shadowPathIsBounds;	// G=0x3292f6c5; S=0x329dfa65; 
@property(assign) float shadowRadius;	// G=0x3292f659; S=0x329df1c9; 
@property(assign) float shininess;	// G=0x329dfc89; S=0x329dfcb1; 
@property(assign) BOOL shouldRasterize;	// G=0x329287c1; S=0x32931519; 
@property(assign) CGSize sizeRequisition;	// G=0x329dfad9; S=0x329dfafd; 
@property(assign) BOOL sortsSublayers;	// G=0x329df9f1; S=0x329dfa09; 
@property(assign) float specularReflectance;	// G=0x329dfc39; S=0x329dfc61; 
@property(assign) float speed;	// G=0x3292f419; S=0x329def01; 
@property(copy) NSArray *stateTransitions;	// @dynamic
@property(copy) NSArray *states;	// @dynamic
@property(copy) NSDictionary *style;	// G=0x329df0d1; S=0x329498a9; 
@property(assign) CATransform3D sublayerTransform;	// G=0x32947f0d; S=0x32947c99; 
@property(copy) NSArray *sublayers;	// G=0x32902a29; S=0x329048e5; 
@property(readonly, assign) CALayer *superlayer;	// G=0x32902c0d; 
@property(assign) double timeOffset;	// G=0x3292f3a9; S=0x329dee95; 
@property(assign) CATransform3D transform;	// G=0x3290f941; S=0x3291206d; 
@property(assign) float velocityStretch;	// G=0x329dfd51; S=0x329dfd79; 
@property(readonly, assign) CGRect visibleRect;	// G=0x329536b5; 
@property(assign) float zPosition;	// G=0x329df001; S=0x32949ba9; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x3292c189
+ (/*function-pointer*/ void *)CA_getterForType:(int)type;	// 0x3292c5d1
+ (/*function-pointer*/ void *)CA_setterForType:(int)type;	// 0x3292c5c1
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x329dd839
+ (id)defaultActionForKey:(id)key;	// 0x3292e5d9
+ (id)defaultValueForKey:(id)key;	// 0x3292c5e9
+ (id)layer;	// 0x329485d9
+ (BOOL)needsDisplayForKey:(id)key;	// 0x329dce91
+ (BOOL)needsLayoutForKey:(id)key;	// 0x329df249
+ (id)properties;	// 0x329df24d
+ (BOOL)resolveInstanceMethod:(SEL)method;	// 0x3292c54d
- (id)init;	// 0x329102c1
- (id)initWithBounds:(CGRect)bounds;	// 0x329dd36d
- (id)initWithCoder:(id)coder;	// 0x329dd859
- (id)initWithLayer:(id)layer;	// 0x3293c5c1
- (id).cxx_construct;	// 0x329102bd
- (BOOL)_canDisplayConcurrently;	// 0x329df45d
- (void)_cancelAnimationTimer;	// 0x329de70d
- (Layer *)_copyRenderLayer:(Transaction *)layer layerFlags:(unsigned)flags commitFlags:(unsigned *)flags3;	// 0x3290b469
- (void)_dealloc;	// 0x3293157d
- (void)_didCommitLayer:(Transaction *)layer;	// 0x3290c955
- (void)_display;	// 0x32909529
- (CGSize)_preferredSize;	// 0x329decf1
- (void)_prepareContext:(CGContextRef)context;	// 0x3290ab6d
- (void)_renderBackgroundInContext:(CGContextRef)context;	// 0x32939bcd
- (void)_renderBorderInContext:(CGContextRef)context;	// 0x3293b389
- (void)_renderForegroundInContext:(CGContextRef)context;	// 0x32939f39
- (bool)_renderLayerDefinesProperty:(unsigned)property;	// 0x32929745
- (unsigned)_renderLayerPropertyAnimationFlags:(unsigned)flags;	// 0x32930995
- (void)_renderSublayersInContext:(CGContextRef)context;	// 0x3293aa81
- (BOOL)_scheduleAnimationTimer;	// 0x329de709
- (void)_scrollPoint:(CGPoint)point fromLayer:(id)layer;	// 0x329535a5
- (void)_scrollRect:(CGRect)rect fromLayer:(id)layer;	// 0x329535f1
- (CGRect)_visibleRectOfLayer:(id)layer;	// 0x32953659
// declared property getter: - (BOOL)acceleratesDrawing;	// 0x329099c9
// declared property getter: - (BOOL)acceptsLights;	// 0x329dfb55
- (id)actionForKey:(id)key;	// 0x32902fd5
// declared property getter: - (id)actions;	// 0x329df0f9
- (void)addAnimation:(id)animation forKey:(id)key;	// 0x32928e69
- (void)addState:(id)state;	// 0x32952c75
- (void)addSublayer:(id)sublayer;	// 0x329041d9
// converted property getter: - (CGAffineTransform)affineTransform;	// 0x32911e11
// declared property getter: - (BOOL)allowsDisplayCompositing;	// 0x32928859
// declared property getter: - (BOOL)allowsEdgeAntialiasing;	// 0x3292881d
// declared property getter: - (BOOL)allowsGroupBlending;	// 0x32928875
// declared property getter: - (BOOL)allowsGroupOpacity;	// 0x3292883d
// declared property getter: - (BOOL)allowsHitTesting;	// 0x32928891
- (BOOL)allowsWeakReference;	// 0x329dcf4d
// declared property getter: - (float)ambientReflectance;	// 0x329dfb99
- (id)ancestorSharedWithLayer:(id)layer;	// 0x32908819
// declared property getter: - (CGPoint)anchorPoint;	// 0x32913e99
// declared property getter: - (float)anchorPointZ;	// 0x329defd9
- (id)animationForKey:(id)key;	// 0x32910d39
- (id)animationKeys;	// 0x3290f609
// declared property getter: - (BOOL)autoreverses;	// 0x3292f4a1
// declared property getter: - (CGColorRef)backgroundColor;	// 0x32910a7d
// declared property getter: - (id)backgroundFilters;	// 0x3292f511
// declared property getter: - (double)beginTime;	// 0x3292f371
// declared property getter: - (id)behaviors;	// 0x3292f5b9
// declared property getter: - (CGColorRef)borderColor;	// 0x32928779
// declared property getter: - (float)borderWidth;	// 0x32928751
// declared property getter: - (CGRect)bounds;	// 0x328fda39
// declared property getter: - (BOOL)canDrawConcurrently;	// 0x329df97d
- (void)clearHasBeenCommitted;	// 0x329314d1
// declared property getter: - (BOOL)clearsContext;	// 0x32909a59
// declared property getter: - (float)coefficientOfRestitution;	// 0x329dfe41
// declared property getter: - (id)compositingFilter;	// 0x3292f539
- (BOOL)containsPoint:(CGPoint)point;	// 0x3290f901
// declared property getter: - (id)contents;	// 0x32903385
- (BOOL)contentsAreFlipped;	// 0x329491d9
// declared property getter: - (CGRect)contentsCenter;	// 0x32911259
// declared property getter: - (id)contentsGravity;	// 0x32910cfd
// declared property getter: - (BOOL)contentsOpaque;	// 0x329dfa95
// declared property getter: - (CGRect)contentsRect;	// 0x3292f79d
// declared property getter: - (float)contentsScale;	// 0x32910a55
// declared property getter: - (id)contentsScaling;	// 0x3292e26d
// declared property getter: - (CGAffineTransform)contentsTransform;	// 0x3292f05d
- (id)context;	// 0x329df479
- (CADoublePoint)convertDoublePoint:(CADoublePoint)point fromLayer:(id)layer;	// 0x3293b9c9
- (CADoublePoint)convertDoublePoint:(CADoublePoint)point toLayer:(id)layer;	// 0x3293ba1d
- (CADoubleRect)convertDoubleRect:(CADoubleRect)rect fromLayer:(id)layer;	// 0x329df35d
- (CADoubleRect)convertDoubleRect:(CADoubleRect)rect toLayer:(id)layer;	// 0x329df3d5
- (CGPoint)convertPoint:(CGPoint)point fromLayer:(id)layer;	// 0x3290f0a9
- (CGPoint)convertPoint:(CGPoint)point toLayer:(id)layer;	// 0x32910245
- (CGRect)convertRect:(CGRect)rect fromLayer:(id)layer;	// 0x32913f51
- (CGRect)convertRect:(CGRect)rect toLayer:(id)layer;	// 0x32908341
- (double)convertTime:(double)time fromLayer:(id)layer;	// 0x329dddb9
- (double)convertTime:(double)time toLayer:(id)layer;	// 0x329dde01
// declared property getter: - (float)cornerRadius;	// 0x32928729
- (void)dealloc;	// 0x32911725
- (id)debugDescription;	// 0x329dd3b1
// declared property getter: - (id)delegate;	// 0x3293b9a9
- (id)dependentStatesOfState:(id)state;	// 0x32952ed9
// declared property getter: - (float)diffuseReflectance;	// 0x329dfbe9
- (void)display;	// 0x32909485
- (void)displayIfNeeded;	// 0x32939b29
// converted property getter: - (CADoubleRect)doubleBounds;	// 0x3293b971
// converted property getter: - (CADoublePoint)doublePosition;	// 0x329496a1
- (BOOL)doubleSided;	// 0x329df8b5
- (void)drawInContext:(CGContextRef)context;	// 0x3290ab75
// declared property getter: - (BOOL)drawsAsynchronously;	// 0x329099b1
- (BOOL)drawsMipmapLevels;	// 0x329df475
// declared property getter: - (double)duration;	// 0x3292f3e1
// declared property getter: - (unsigned)edgeAntialiasingMask;	// 0x3293b371
- (void)encodeWithCoder:(id)coder;	// 0x329dd93d
// declared property getter: - (id)fillMode;	// 0x3292f4c9
// declared property getter: - (id)filters;	// 0x32905d29
// declared property getter: - (CGRect)frame;	// 0x328fd771
- (BOOL)hasBeenCommitted;	// 0x32935ea1
- (BOOL)hidden;	// 0x329df885
- (id)hitTest:(CGPoint)test;	// 0x329dde49
// declared property getter: - (BOOL)hitTestsAsOpaque;	// 0x329288ad
- (BOOL)ignoresHitTesting;	// 0x329df791
- (id)implicitAnimationForKeyPath:(id)keyPath;	// 0x3293b661
- (void)insertState:(id)state atIndex:(unsigned)index;	// 0x32952c89
- (void)insertSublayer:(id)sublayer above:(id)above;	// 0x32909261
- (void)insertSublayer:(id)sublayer atIndex:(unsigned)index;	// 0x32910aa9
- (void)insertSublayer:(id)sublayer below:(id)below;	// 0x32910ba1
- (void)invalidateContents;	// 0x329df681
// declared property getter: - (BOOL)invertsShadow;	// 0x3292f6a9
- (BOOL)isDescendantOf:(id)of;	// 0x329df7e1
// declared property getter: - (BOOL)isDoubleSided;	// 0x329287a5
// converted property getter: - (BOOL)isFlipped;	// 0x329df8cd
// declared property getter: - (BOOL)isFrozen;	// 0x32949735
// declared property getter: - (BOOL)isGeometryFlipped;	// 0x329ddce9
// declared property getter: - (BOOL)isHidden;	// 0x32909249
// declared property getter: - (BOOL)isOpaque;	// 0x32909a3d
- (id)layerAtTime:(double)time;	// 0x329df84d
- (id)layerBeingDrawn;	// 0x329df825
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x329032d1
- (void)layoutBelowIfNeeded;	// 0x328ff735
- (void)layoutIfNeeded;	// 0x3292e741
- (BOOL)layoutIsActive;	// 0x329df6b1
- (void)layoutSublayers;	// 0x328ffcb5
// declared property getter: - (id)lights;	// 0x3292f58d
// declared property getter: - (BOOL)literalContentsCenter;	// 0x329288c9
// declared property getter: - (id)magnificationFilter;	// 0x3292865d
// declared property getter: - (id)mask;	// 0x329487e9
// declared property getter: - (BOOL)masksToBounds;	// 0x32939bb5
// declared property getter: - (float)mass;	// 0x329dfda1
// declared property getter: - (id)meshTransform;	// 0x3292f561
// declared property getter: - (float)metallicity;	// 0x329dfcd9
// declared property getter: - (id)minificationFilter;	// 0x32909a75
// declared property getter: - (float)minificationFilterBias;	// 0x329286d5
- (id)modelLayer;	// 0x3290f7ed
// declared property getter: - (float)momentOfInertia;	// 0x329dfdf1
// declared property getter: - (id)name;	// 0x32928701
- (BOOL)needsDisplay;	// 0x32939b65
// declared property getter: - (BOOL)needsDisplayOnBoundsChange;	// 0x32910a3d
- (BOOL)needsLayout;	// 0x329decd5
// declared property getter: - (BOOL)needsLayoutOnGeometryChange;	// 0x32904111
// declared property getter: - (float)opacity;	// 0x328ff0a5
- (BOOL)opaque;	// 0x329df89d
// declared property getter: - (CGPoint)position;	// 0x32911381
- (CGSize)preferredFrameSize;	// 0x329ded11
// declared property getter: - (BOOL)preloadsCache;	// 0x329287d9
- (id)presentationLayer;	// 0x32931699
// declared property getter: - (float)rasterizationScale;	// 0x329287f1
- (void *)regionBeingDrawn;	// 0x32931121
- (oneway void)release;	// 0x329041d1
- (void)reloadValueForKeyPath:(id)keyPath;	// 0x329499b9
- (void)removeAllAnimations;	// 0x3292e5e1
- (void)removeAnimationForKey:(id)key;	// 0x32910ecd
- (void)removeFromSuperlayer;	// 0x32902cc1
- (void)removeState:(id)state;	// 0x32952d51
- (void)renderInContext:(CGContextRef)context;	// 0x32939611
// declared property getter: - (float)repeatCount;	// 0x3292f441
// declared property getter: - (double)repeatDuration;	// 0x3292f469
- (void)replaceSublayer:(id)sublayer with:(id)with;	// 0x329de66d
- (id)retain;	// 0x32902c85
- (unsigned)retainCount;	// 0x329dcf35
- (BOOL)retainWeakReference;	// 0x329dcee9
- (void)scrollPoint:(CGPoint)point;	// 0x329535d5
- (void)scrollRectToVisible:(CGRect)visible;	// 0x32953631
// declared property setter: - (void)setAcceleratesDrawing:(BOOL)drawing;	// 0x329310a1
// declared property setter: - (void)setAcceptsLights:(BOOL)lights;	// 0x329dfb6d
// declared property setter: - (void)setActions:(id)actions;	// 0x329df121
// converted property setter: - (void)setAffineTransform:(CGAffineTransform)transform;	// 0x32911f7d
// declared property setter: - (void)setAllowsDisplayCompositing:(BOOL)compositing;	// 0x32949709
// declared property setter: - (void)setAllowsEdgeAntialiasing:(BOOL)antialiasing;	// 0x32947d21
// declared property setter: - (void)setAllowsGroupBlending:(BOOL)blending;	// 0x329dfaad
// declared property setter: - (void)setAllowsGroupOpacity:(BOOL)opacity;	// 0x329477ad
// declared property setter: - (void)setAllowsHitTesting:(BOOL)testing;	// 0x329df8f9
// declared property setter: - (void)setAmbientReflectance:(float)reflectance;	// 0x329dfbc1
// declared property setter: - (void)setAnchorPoint:(CGPoint)point;	// 0x32931049
// declared property setter: - (void)setAnchorPointZ:(float)z;	// 0x32949bd1
// declared property setter: - (void)setAutoreverses:(BOOL)autoreverses;	// 0x329def89
// declared property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x3292a05d
// declared property setter: - (void)setBackgroundFilters:(id)filters;	// 0x329df081
// declared property setter: - (void)setBeginTime:(double)time;	// 0x329dee5d
// declared property setter: - (void)setBehaviors:(id)behaviors;	// 0x329dfd29
// declared property setter: - (void)setBorderColor:(CGColorRef)color;	// 0x329310d1
// declared property setter: - (void)setBorderWidth:(float)width;	// 0x329310f9
// declared property setter: - (void)setBounds:(CGRect)bounds;	// 0x328feb11
// declared property setter: - (void)setCanDrawConcurrently:(BOOL)concurrently;	// 0x329df995
// declared property setter: - (void)setClearsContext:(BOOL)context;	// 0x329df9c1
// declared property setter: - (void)setCoefficientOfRestitution:(float)restitution;	// 0x329dfe69
// declared property setter: - (void)setCompositingFilter:(id)filter;	// 0x32947be9
// declared property setter: - (void)setContents:(id)contents;	// 0x32911079
// declared property setter: - (void)setContentsCenter:(CGRect)center;	// 0x32911279
- (void)setContentsChanged;	// 0x329df695
// declared property setter: - (void)setContentsGravity:(id)gravity;	// 0x32929e19
// declared property setter: - (void)setContentsOpaque:(BOOL)opaque;	// 0x329496dd
// declared property setter: - (void)setContentsRect:(CGRect)rect;	// 0x3292e2a5
// declared property setter: - (void)setContentsScale:(float)scale;	// 0x3292e2dd
// declared property setter: - (void)setContentsScaling:(id)scaling;	// 0x329112b1
// declared property setter: - (void)setContentsTransform:(CGAffineTransform)transform;	// 0x3291130d
// declared property setter: - (void)setCornerRadius:(float)radius;	// 0x329df149
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32910685
// declared property setter: - (void)setDiffuseReflectance:(float)reflectance;	// 0x329dfc11
// converted property setter: - (void)setDoubleBounds:(CADoubleRect)bounds;	// 0x3293ba75
// converted property setter: - (void)setDoublePosition:(CADoublePoint)position;	// 0x329489a5
// declared property setter: - (void)setDoubleSided:(BOOL)sided;	// 0x329df029
// declared property setter: - (void)setDrawsAsynchronously:(BOOL)asynchronously;	// 0x329df219
// declared property setter: - (void)setDuration:(double)duration;	// 0x329deecd
// declared property setter: - (void)setEdgeAntialiasingMask:(unsigned)mask;	// 0x32931071
// declared property setter: - (void)setFillMode:(id)mode;	// 0x329defb1
// declared property setter: - (void)setFilters:(id)filters;	// 0x32907cc1
// converted property setter: - (void)setFlipped:(BOOL)flipped;	// 0x329df8e5
// declared property setter: - (void)setFrame:(CGRect)frame;	// 0x328fe619
// declared property setter: - (void)setFrozen:(BOOL)frozen;	// 0x329470d5
// declared property setter: - (void)setGeometryFlipped:(BOOL)flipped;	// 0x329ddd01
// declared property setter: - (void)setHidden:(BOOL)hidden;	// 0x32911351
// declared property setter: - (void)setHitTestsAsOpaque:(BOOL)opaque;	// 0x329df925
// declared property setter: - (void)setInvertsShadow:(BOOL)shadow;	// 0x329dfa39
// declared property setter: - (void)setLights:(id)lights;	// 0x329dfb2d
// declared property setter: - (void)setLiteralContentsCenter:(BOOL)center;	// 0x329df951
// declared property setter: - (void)setMagnificationFilter:(id)filter;	// 0x32935e75
// declared property setter: - (void)setMask:(id)mask;	// 0x3292a085
// declared property setter: - (void)setMasksToBounds:(BOOL)bounds;	// 0x3290e0dd
// declared property setter: - (void)setMass:(float)mass;	// 0x329dfdc9
// declared property setter: - (void)setMeshTransform:(id)transform;	// 0x329df4c9
// declared property setter: - (void)setMetallicity:(float)metallicity;	// 0x329dfd01
// declared property setter: - (void)setMinificationFilter:(id)filter;	// 0x32935e4d
// declared property setter: - (void)setMinificationFilterBias:(float)bias;	// 0x329df055
// declared property setter: - (void)setMomentOfInertia:(float)inertia;	// 0x329dfe19
// declared property setter: - (void)setName:(id)name;	// 0x329df0a9
- (void)setNeedsDisplay;	// 0x32907e8d
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x32907ebd
// declared property setter: - (void)setNeedsDisplayOnBoundsChange:(BOOL)change;	// 0x32929de5
- (void)setNeedsLayout;	// 0x328ff1b9
// declared property setter: - (void)setNeedsLayoutOnGeometryChange:(BOOL)change;	// 0x3292e349
// declared property setter: - (void)setOpacity:(float)opacity;	// 0x328fdacd
// declared property setter: - (void)setOpaque:(BOOL)opaque;	// 0x32908175
// declared property setter: - (void)setPosition:(CGPoint)position;	// 0x328fe871
// declared property setter: - (void)setPreloadsCache:(BOOL)cache;	// 0x32931549
// declared property setter: - (void)setRasterizationScale:(float)scale;	// 0x3292e321
// declared property setter: - (void)setRepeatCount:(float)count;	// 0x329def29
// declared property setter: - (void)setRepeatDuration:(double)duration;	// 0x329def55
// declared property setter: - (void)setShadowColor:(CGColorRef)color;	// 0x329df171
// declared property setter: - (void)setShadowOffset:(CGSize)offset;	// 0x329df19d
// declared property setter: - (void)setShadowOpacity:(float)opacity;	// 0x32939551
// declared property setter: - (void)setShadowPath:(CGPathRef)path;	// 0x329df1f1
// declared property setter: - (void)setShadowPathIsBounds:(BOOL)bounds;	// 0x329dfa65
// declared property setter: - (void)setShadowRadius:(float)radius;	// 0x329df1c9
// declared property setter: - (void)setShininess:(float)shininess;	// 0x329dfcb1
// declared property setter: - (void)setShouldRasterize:(BOOL)rasterize;	// 0x32931519
// declared property setter: - (void)setSizeRequisition:(CGSize)requisition;	// 0x329dfafd
// declared property setter: - (void)setSortsSublayers:(BOOL)sublayers;	// 0x329dfa09
// declared property setter: - (void)setSpecularReflectance:(float)reflectance;	// 0x329dfc61
// declared property setter: - (void)setSpeed:(float)speed;	// 0x329def01
// declared property setter: - (void)setStyle:(id)style;	// 0x329498a9
// declared property setter: - (void)setSublayerTransform:(CATransform3D)transform;	// 0x32947c99
// declared property setter: - (void)setSublayers:(id)sublayers;	// 0x329048e5
// declared property setter: - (void)setTimeOffset:(double)offset;	// 0x329dee95
// declared property setter: - (void)setTransform:(CATransform3D)transform;	// 0x3291206d
- (void)setValue:(id)value forKey:(id)key;	// 0x32907a8d
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x32905fe9
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x32949751
// declared property setter: - (void)setVelocityStretch:(float)stretch;	// 0x329dfd79
// declared property setter: - (void)setZPosition:(float)position;	// 0x32949ba9
// declared property getter: - (CGColorRef)shadowColor;	// 0x3292f609
// declared property getter: - (CGSize)shadowOffset;	// 0x3292f631
// declared property getter: - (float)shadowOpacity;	// 0x3292f5e1
// declared property getter: - (CGPathRef)shadowPath;	// 0x3292f681
// declared property getter: - (BOOL)shadowPathIsBounds;	// 0x3292f6c5
// declared property getter: - (float)shadowRadius;	// 0x3292f659
// declared property getter: - (float)shininess;	// 0x329dfc89
- (BOOL)shouldArchiveValueForKey:(id)key;	// 0x329ddaa5
// declared property getter: - (BOOL)shouldRasterize;	// 0x329287c1
- (CGSize)size;	// 0x32914079
// declared property getter: - (CGSize)sizeRequisition;	// 0x329dfad9
// declared property getter: - (BOOL)sortsSublayers;	// 0x329df9f1
// declared property getter: - (float)specularReflectance;	// 0x329dfc39
// declared property getter: - (float)speed;	// 0x3292f419
- (id)stateTransitionFrom:(id)from to:(id)to;	// 0x32953061
- (id)stateWithName:(id)name;	// 0x32952de5
// declared property getter: - (id)style;	// 0x329df0d1
// declared property getter: - (CATransform3D)sublayerTransform;	// 0x32947f0d
// declared property getter: - (id)sublayers;	// 0x32902a29
// declared property getter: - (id)superlayer;	// 0x32902c0d
// declared property getter: - (double)timeOffset;	// 0x3292f3a9
// declared property getter: - (CATransform3D)transform;	// 0x3290f941
- (id)valueForKey:(id)key;	// 0x329055d1
- (id)valueForKeyPath:(id)keyPath;	// 0x32904e19
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x32949a9d
// declared property getter: - (float)velocityStretch;	// 0x329dfd51
// declared property getter: - (CGRect)visibleRect;	// 0x329536b5
// declared property getter: - (float)zPosition;	// 0x329df001
@end


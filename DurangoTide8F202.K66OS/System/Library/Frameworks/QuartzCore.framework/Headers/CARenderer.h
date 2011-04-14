/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <NSObject.h> // Unknown library

@class CAContext, CALayer;

@interface CARenderer : NSObject {
@private
	CARendererPriv *_priv;	// 4 = 0x4
}
@property(assign) CGRect bounds;	// G=0x30294429; S=0x30294401; 
@property(retain) CAContext *context;	// G=0x30294485; S=0x30294b4d; 
@property(assign) id delegate;	// G=0x30294495; S=0x30294ced; 
@property(retain) CALayer *layer;	// G=0x302944a5; S=0x302944c9; 
+ (id)rendererWithEAGLContext:(id)eaglcontext options:(id)options;	// 0x302944ed
- (id)_initWithEAGLContext:(id)eaglcontext options:(id)options;	// 0x3029461d
- (id)_initWithOptions:(id)options;	// 0x30294525
- (void)addUpdateRect:(CGRect)rect;	// 0x30294c9d
- (void)beginFrameAtTime:(double)time timeStamp:(XXStruct_soD7RD *)stamp;	// 0x30294899
// declared property getter: - (CGRect)bounds;	// 0x30294429
// declared property getter: - (id)context;	// 0x30294485
- (void)dealloc;	// 0x302947dd
// declared property getter: - (id)delegate;	// 0x30294495
- (void)endFrame;	// 0x3029486d
- (BOOL)hasMissingContent;	// 0x30294469
// declared property getter: - (id)layer;	// 0x302944a5
- (double)nextFrameTime;	// 0x30294445
- (void)render;	// 0x30294d19
// declared property setter: - (void)setBounds:(CGRect)bounds;	// 0x30294401
// declared property setter: - (void)setContext:(id)context;	// 0x30294b4d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30294ced
// declared property setter: - (void)setLayer:(id)layer;	// 0x302944c9
- (CGRect)updateBounds;	// 0x30294a55
@end

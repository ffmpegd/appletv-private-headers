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
@property(assign) CGRect bounds;	// G=0x33f224e9; S=0x33f224c9; 
@property(retain) CAContext *context;	// G=0x33f22555; S=0x33f23029; 
@property(assign) id delegate;	// G=0x33f22569; S=0x33f23075; 
@property(retain) CALayer *layer;	// G=0x33f2259d; S=0x33f2257d; 
+ (id)rendererWithEAGLContext:(id)eaglcontext options:(id)options;	// 0x33f225bd
- (id)_initWithEAGLContext:(id)eaglcontext options:(id)options;	// 0x33f22c61
- (id)_initWithOptions:(id)options;	// 0x33f225fd
- (void)addUpdateRect:(CGRect)rect;	// 0x33f22859
- (void)beginFrameAtTime:(double)time timeStamp:(XXStruct_soD7RD *)stamp;	// 0x33f22995
// declared property getter: - (CGRect)bounds;	// 0x33f224e9
// declared property getter: - (id)context;	// 0x33f22555
- (void)dealloc;	// 0x33f22ba5
// declared property getter: - (id)delegate;	// 0x33f22569
- (void)endFrame;	// 0x33f22721
- (BOOL)hasMissingContent;	// 0x33f22535
// declared property getter: - (id)layer;	// 0x33f2259d
- (double)nextFrameTime;	// 0x33f22509
- (void)render;	// 0x33f22755
// declared property setter: - (void)setBounds:(CGRect)bounds;	// 0x33f224c9
// declared property setter: - (void)setContext:(id)context;	// 0x33f23029
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33f23075
// declared property setter: - (void)setLayer:(id)layer;	// 0x33f2257d
- (CGRect)updateBounds;	// 0x33f228c9
@end

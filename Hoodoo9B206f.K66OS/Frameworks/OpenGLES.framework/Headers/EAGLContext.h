/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/OpenGLES.framework/OpenGLES
 */

#import "OpenGLES-Structs.h"
#import <NSObject.h> // Unknown library

@class EAGLSharegroup;

@interface EAGLContext : NSObject {
	EAGLContextPrivate *_private;	// 4 = 0x4
}
@property(readonly, assign) unsigned API;	// G=0x31663651; 
@property(readonly, assign) EAGLSharegroup *sharegroup;	// G=0x31663665; 
+ (id)currentContext;	// 0x3166363d
+ (BOOL)setCurrentContext:(id)context;	// 0x31664059
- (id)initWithAPI:(unsigned)api;	// 0x31663895
- (id)initWithAPI:(unsigned)api properties:(id)properties;	// 0x31663c09
- (id)initWithAPI:(unsigned)api sharedWithCompute:(BOOL)compute;	// 0x316638a9
- (id)initWithAPI:(unsigned)api sharegroup:(id)sharegroup;	// 0x31663959
// declared property getter: - (unsigned)API;	// 0x31663651
- (EAGLMacroContextRef)GetMacroContextPrivate;	// 0x31663881
- (BOOL)attachImage:(unsigned)image toCoreSurface:(IOSurfaceRef)coreSurface invertedRender:(BOOL)render;	// 0x31664269
- (void)dealloc;	// 0x31664515
- (unsigned)getParameter:(unsigned)parameter to:(int *)to;	// 0x316637f9
- (BOOL)presentRenderbuffer:(unsigned)renderbuffer;	// 0x31663679
- (BOOL)renderbufferStorage:(unsigned)storage fromDrawable:(id)drawable;	// 0x316639e9
- (void)sendNotification:(unsigned)notification forTransaction:(unsigned)transaction onLayer:(unsigned)layer;	// 0x316636e1
- (unsigned)setParameter:(unsigned)parameter to:(int *)to;	// 0x31663771
// declared property getter: - (id)sharegroup;	// 0x31663665
- (void)swapNotification:(IOMobileFramebufferRef)notification forTransaction:(unsigned)transaction onLayer:(unsigned)layer;	// 0x316640f5
- (BOOL)texImageIOSurface:(IOSurfaceRef)surface target:(unsigned)target internalFormat:(unsigned)format width:(unsigned)width height:(unsigned)height format:(unsigned)format6 type:(unsigned)type plane:(unsigned)plane invert:(BOOL)invert;	// 0x316641b1
@end


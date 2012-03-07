/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import <NSObject.h> // Unknown library


@interface CIContext : NSObject {
	void *_priv;	// 4 = 0x4
	opaque_pthread_mutex_t _mutex;	// 8 = 0x8
}
+ (id)_singletonContext;	// 0x34553765
+ (id)clContextOptions:(id)options;	// 0x34554b9d
+ (id)context;	// 0x345537d1
+ (id)contextWithEAGLContext:(id)eaglcontext;	// 0x34553881
+ (id)contextWithEAGLContext:(id)eaglcontext options:(id)options;	// 0x345538c9
+ (id)contextWithOptions:(id)options;	// 0x345537f1
+ (id)glesContextOptions:(id)options;	// 0x345549a1
- (id)init;	// 0x34553b5d
- (id)initWithEAGLContext:(id)eaglcontext;	// 0x34553911
- (id)initWithEAGLContext:(id)eaglcontext options:(id)options;	// 0x34553925
- (id).cxx_construct;	// 0x3455499d
- (CGColorSpaceRef)_colorspace;	// 0x34554e19
- (id)_initWithInternalRepresentation:(void *)internalRepresentation;	// 0x34554d95
- (void *)_internalRepresentation;	// 0x34554e09
- (bool)_isGPUContext;	// 0x3455410d
- (CGImageRef)createCGImage:(id)image fromRect:(CGRect)rect;	// 0x34554739
- (CGImageRef)createCGImage:(id)image fromRect:(CGRect)rect format:(int)format;	// 0x34554799
- (CGImageRef)createCGImage:(id)image fromRect:(CGRect)rect format:(int)format colorSpace:(CGColorSpaceRef)space;	// 0x345547e9
- (IOSurfaceRef)createIOSurface:(id)surface;	// 0x345543f5
- (IOSurfaceRef)createIOSurface:(id)surface fromRect:(CGRect)rect;	// 0x34554449
- (void)dealloc;	// 0x34553bd1
- (void)drawImage:(id)image atPoint:(CGPoint)point fromRect:(CGRect)rect;	// 0x34554135
- (void)drawImage:(id)image inRect:(CGRect)rect fromRect:(CGRect)rect3;	// 0x345541a1
- (CGSize)inputImageMaximumSize;	// 0x3455493d
- (void)lock;	// 0x3455373d
- (unsigned long)maximumInputImageSize;	// 0x34554915
- (unsigned long)maximumOutputImageSize;	// 0x34554929
- (CGSize)outputImageMaximumSize;	// 0x3455496d
- (void)render:(id)render toBitmap:(void *)bitmap rowBytes:(int)bytes bounds:(CGRect)bounds format:(int)format colorSpace:(CGColorSpaceRef)space;	// 0x34553c29
- (void)render:(id)render toCVPixelBuffer:(CVBufferRef)cvpixelBuffer;	// 0x34553e99
- (void)render:(id)render toCVPixelBuffer:(CVBufferRef)cvpixelBuffer bounds:(CGRect)bounds colorSpace:(CGColorSpaceRef)space;	// 0x34553f95
- (void)render:(id)render toIOSurface:(IOSurfaceRef)iosurface bounds:(CGRect)bounds colorSpace:(CGColorSpaceRef)space;	// 0x345545bd
- (void)unlock;	// 0x34553751
@end


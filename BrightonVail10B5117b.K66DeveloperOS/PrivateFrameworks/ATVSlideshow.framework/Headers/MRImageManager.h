/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableSet, NSMutableDictionary, NSLock, MRContext, EAGLContext;

@interface MRImageManager : NSObject {
	MRContext *mBaseContext;	// 4 = 0x4
	EAGLContext *mImageGLContext;	// 8 = 0x8
	NSMutableDictionary *mImageInfos;	// 12 = 0xc
	NSLock *mImageInfosLock;	// 16 = 0x10
	NSMutableDictionary *mFBOs;	// 20 = 0x14
	NSMutableSet *mAvailableFBOs;	// 24 = 0x18
	NSMutableSet *mRecyclableFBOs;	// 28 = 0x1c
	NSMutableSet *mRemoteKeysToRelease;	// 32 = 0x20
	NSMutableDictionary *_assetMasters;	// 36 = 0x24
	unsigned long long mHostTime;	// 40 = 0x28
}
@property(readonly, assign) MRContext *baseContext;	// G=0x333a2edd; @synthesize=mBaseContext
@property(assign, nonatomic) unsigned long long hostTime;	// G=0x333a2f05; S=0x333a2f1d; @synthesize=mHostTime
@property(readonly, assign) EAGLContext *imageGLContext;	// G=0x333a2ef1; @synthesize=mImageGLContext
+ (void)cleanupPictureCache;	// 0x333a3c39
+ (void)initialize;	// 0x333a0d89
- (id)initWithBaseContext:(id)baseContext;	// 0x333a0e09
- (CGImageRef)CGImageWithData:(id)data withOriginalSize:(CGSize)originalSize forSize:(CGSize)size orientation:(char *)orientation;	// 0x333a38e5
- (CGImageRef)CGImageWithMoviePath:(id)moviePath withOriginalSize:(CGSize)originalSize forSize:(CGSize)size atTime:(double)time orientation:(char *)orientation;	// 0x333a3c31
- (CGImageRef)CGImageWithPath:(id)path withOriginalSize:(CGSize)originalSize forSize:(CGSize)size orientation:(char *)orientation;	// 0x333a3569
- (IOSurfaceRef)IOSurfaceWithData:(id)data withOriginalSize:(CGSize)originalSize forSize:(CGSize)size orientation:(char *)orientation;	// 0x333a3149
- (IOSurfaceRef)IOSurfaceWithMoviePath:(id)moviePath withOriginalSize:(CGSize)originalSize forSize:(CGSize)size atTime:(double)time orientation:(char *)orientation;	// 0x333a3565
- (IOSurfaceRef)IOSurfaceWithPath:(id)path withOriginalSize:(CGSize)originalSize forSize:(CGSize)size orientation:(char *)orientation;	// 0x333a2f91
// declared property getter: - (id)baseContext;	// 0x333a2edd
- (BOOL)configureMovieAtPath:(id)path forSize:(CGSize)size time:(double)time intoImageInfo:(id)info;	// 0x333a3ef1
- (void)dealloc;	// 0x333a0fc5
- (id)fboTextureWithSize:(CGSize)size;	// 0x333a1459
// declared property getter: - (unsigned long long)hostTime;	// 0x333a2f05
- (id)imageFromMovieWithImageInfo:(id)imageInfo atTime:(double)time;	// 0x333a3f85
// declared property getter: - (id)imageGLContext;	// 0x333a2ef1
- (id)optimizedPath:(id)path forSize:(CGSize)size;	// 0x333a2f31
- (void)play:(BOOL)play forImageKey:(id)imageKey;	// 0x333a2c85
- (void)purgeResources:(BOOL)resources;	// 0x333a10e9
- (void)recycleFBOTexture:(id)texture;	// 0x333a1685
- (void)releaseStuffForRemoteKey:(id)remoteKey;	// 0x333a4059
- (id)retainedByUserImageForAsset:(id)asset atSize:(CGSize)size andTime:(double)time previousImageBufferKey:(id)key options:(id)options;	// 0x333a16a5
- (id)retainedByUserImageWithCGContext:(CGContextRef)cgcontext;	// 0x333a2e09
- (id)retainedByUserImageWithSize:(CGSize)size andColor:(const float *)color;	// 0x333a2e69
// declared property setter: - (void)setHostTime:(unsigned long long)time;	// 0x333a2f1d
- (void)setTime:(double)time forImageKey:(id)imageKey;	// 0x333a2d45
- (void)tryReleaseImageBufferForImage:(id)image;	// 0x333a2a59
@end

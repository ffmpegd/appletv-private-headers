/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "YouTubeATV-Structs.h"
#import </libobjc.A.h>

@class NSMutableDictionary, NSNotificationCenter, NSTimer, NSLock, NSMutableArray, NSMutableSet;

@interface YTImageLoader : NSObject {
	NSLock *_queueLock;	// 4 = 0x4
	NSMutableArray *_loadQueue;	// 8 = 0x8
	NSMutableSet *_loadsInProgress;	// 12 = 0xc
	NSLock *_cacheLock;	// 16 = 0x10
	NSMutableDictionary *_imageCache;	// 20 = 0x14
	NSMutableDictionary *_roundedThumbnailImageCache;	// 24 = 0x18
	NSMutableDictionary *_largeThumbnailImageCache;	// 28 = 0x1c
	NSMutableDictionary *_pluginImageCache;	// 32 = 0x20
	NSMutableArray *_imageCacheLRU;	// 36 = 0x24
	CFRunLoopRef _loaderRunLoop;	// 40 = 0x28
	CFRunLoopSourceRef _loaderSource;	// 44 = 0x2c
	NSNotificationCenter *_notificationCenter;	// 48 = 0x30
	NSTimer *_loadStatusNotificationTimer;	// 52 = 0x34
	opaque_pthread_mutex_t _startupLock;	// 56 = 0x38
	opaque_pthread_cond_t _startupCondition;	// 100 = 0x64
}
@property(readonly, retain) NSNotificationCenter *notificationCenter;	// G=0x33aa3f0d; converted property
+ (id)sharedImageLoader;	// 0x33aa33e9
- (id)init;	// 0x33aa3431
- (void)_imageLoadFinished:(id)finished;	// 0x33aa4d2d
- (CGImageRef)_largeThumbnailOverlay;	// 0x33aa3921
- (void)_loadImageURL:(id)url videoID:(id)anId;	// 0x33aa4761
- (void)_loadingStatusChanged;	// 0x33aa4349
- (BOOL)_locked_URLIsLoading:(id)loading;	// 0x33aa45f5
- (void)_locked_imageLoadStarted:(id)started;	// 0x33aa4d0d
- (id)_locked_loadImageCache:(id)cache;	// 0x33aa4f05
- (void)_locked_loadImageForURL:(id)url videoID:(id)anId;	// 0x33aa46b1
- (id)_locked_saveImageCache:(id)cache;	// 0x33aa4d9d
- (void)_mainThread_postLoadingStatusChanged;	// 0x33aa42a1
- (void)_postImageLoadedNotification:(id)notification;	// 0x33aa4ca9
- (void)_postLoadingStatusChanged;	// 0x33aa42e5
- (void)_setImageData:(id)data videoID:(id)anId forURL:(id)url cacheLocked:(BOOL)locked;	// 0x33aa4815
- (void)_startLoader;	// 0x33aa43c9
- (CGImageRef)createRoundedThumbnailWithImage:(CGImageRef)image;	// 0x33aa37e5
- (CGImageRef)createSheenedThumbnailWithImage:(CGImageRef)image overlay:(CGImageRef)overlay width:(int)width height:(int)height;	// 0x33aa39a5
- (CGImageRef)imageForURL:(id)url rounded:(BOOL)rounded videoID:(id)anId loadIfAbsent:(BOOL)absent;	// 0x33aa3a91
- (BOOL)isLoadingImages;	// 0x33aa3631
- (CGImageRef)largeImageForURL:(id)url videoID:(id)anId loadIfAbsent:(BOOL)absent;	// 0x33aa3c3d
- (void)loadCache:(id)cache;	// 0x33aa40ad
// converted property getter: - (id)notificationCenter;	// 0x33aa3f0d
- (CGImageRef)pluginImageForURL:(id)url videoID:(id)anId loadIfAbsent:(BOOL)absent;	// 0x33aa3ddd
- (void)saveCache:(id)cache;	// 0x33aa3f5d
@end


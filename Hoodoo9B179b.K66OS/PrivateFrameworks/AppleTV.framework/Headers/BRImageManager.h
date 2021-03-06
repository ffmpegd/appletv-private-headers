/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class BRAsyncTaskContext, NSString, NSMutableDictionary, NSLock, NSMutableArray;

@interface BRImageManager : NSObject {
@private
	unsigned long long _maxCacheSize;	// 4 = 0x4
	unsigned long long _cacheSize;	// 12 = 0xc
	unsigned long long _maxCacheCount;	// 20 = 0x14
	unsigned long long _cacheCount;	// 28 = 0x1c
	unsigned long long _cacheSizePurgeThreshhold;	// 36 = 0x24
	BOOL _cachePurging;	// 44 = 0x2c
	BOOL _purgeCacheOnLoadAndQuit;	// 45 = 0x2d
	BOOL _disableAccessDateUpdates;	// 46 = 0x2e
	NSString *_imageCachePath;	// 48 = 0x30
	NSMutableDictionary *_images;	// 52 = 0x34
	NSMutableDictionary *_remoteImageRequests;	// 56 = 0x38
	NSLock *_remoteImageLock;	// 60 = 0x3c
	NSMutableArray *_jobQueue;	// 64 = 0x40
	NSMutableDictionary *_pendingCachedImagesToFlush;	// 68 = 0x44
	BOOL _processJobs;	// 72 = 0x48
	BRAsyncTaskContext *_loadTaskContext;	// 76 = 0x4c
	BRAsyncTaskContext *_writeTaskContext;	// 80 = 0x50
	NSMutableArray *_activeDelegates;	// 84 = 0x54
	int _pruneCount;	// 88 = 0x58
}
@property(assign, nonatomic) int pruneCount;	// G=0x303655cd; S=0x303655dd; @synthesize=_pruneCount
+ (id)fullScreenImageResizingOptions;	// 0x30362aa9
+ (id)generalPurposeManager;	// 0x30363285
+ (id)screenSaverManager;	// 0x303633e1
+ (id)trickPlayManager;	// 0x303634f1
- (id)initWithCachePath:(id)cachePath purgeCacheOnLoadAndQuit:(BOOL)quit maxCacheSizeInMB:(unsigned long long)mb maxCacheCount:(unsigned long long)count cacheSizePurgeThreshholdInMB:(unsigned long long)mb5 pruneCount:(int)count6 disableAccessDateUpdates:(BOOL)updates;	// 0x30362b39
- (void)_ATVDataImageAvailable:(id)available;	// 0x30367e25
- (void)_addLoadJobToQueue:(id)queue;	// 0x30365b31
- (void)_addWriteJobToQueue:(id)queue withImageID:(id)imageID height:(int)height width:(int)width cropped:(BOOL)cropped;	// 0x303655ed
- (id)_cachedCroppedImageKeyForImageID:(id)imageID forSize:(CGSize)size;	// 0x30367c49
- (id)_cachedCroppedImagePathForImageID:(id)imageID forSize:(CGSize)size;	// 0x30367b2d
- (id)_cachedOriginalImagePathForImageID:(id)imageID;	// 0x303679d5
- (id)_cachedResizedImageKeyForImageID:(id)imageID forSize:(CGSize)size;	// 0x30367be9
- (id)_cachedResizedImagePathForImageID:(id)imageID forSize:(CGSize)size;	// 0x30367a71
- (void)_checkCache;	// 0x3036757d
- (void)_decrementCacheSize:(unsigned long long)size;	// 0x30367535
- (id)_defaultResizingImageOptions;	// 0x30366929
- (id)_extensionForImageID:(id)imageID;	// 0x30367d91
- (id)_imageFromWriteQueue:(id)writeQueue;	// 0x30367ca9
- (void)_imageLoadFailed:(id)failed;	// 0x303671f1
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x30366e41
- (void)_incrementCacheSize:(unsigned long long)size;	// 0x303674d9
- (BOOL)_isLoadJobQueued:(id)queued;	// 0x303676f5
- (void)_maintainImageCache;	// 0x30366b41
- (void)_performLoadJob:(id)job;	// 0x30365e0d
- (void)_performWriteJob:(id)job;	// 0x3036598d
- (void)_postUnavailableImageNotification:(id)notification;	// 0x30367339
- (void)_postUpdateNotification:(id)notification;	// 0x30367301
- (void)_postWriteCompletedNotification:(id)notification size:(CGSize)size cropped:(BOOL)cropped;	// 0x303673a5
- (void)_purgeRemoveDirectory:(BOOL)directory;	// 0x30368001
- (id)_queuedLoadJobWithName:(id)name;	// 0x3036779d
- (void)_removeCacheFile:(id)file;	// 0x30366b05
- (void)_removeLoadJobFromQueue:(id)queue;	// 0x30365ce9
- (void)_removeRemoteImageRequestNamed:(id)named;	// 0x303669b9
- (void)_removeWriteJobFromQueue:(id)queue;	// 0x303658a9
- (void)_scheduleMaintainCache;	// 0x30367681
- (void)_startLoadJob:(id)job;	// 0x30365c59
- (void)_startWriteJob:(id)job;	// 0x30365811
- (void)_terminateNotification:(id)notification;	// 0x303678f9
- (BOOL)_updateExistingImageRecord:(id)record;	// 0x30366241
- (id)_writeIDForImageID:(id)imageID cropped:(BOOL)cropped size:(CGSize)size;	// 0x30367961
- (void)_writeImage:(id)image named:(id)named forSize:(CGSize)size cropped:(BOOL)cropped;	// 0x30366365
- (id)absolutePathForImageID:(id)imageID;	// 0x30365569
- (id)cachePath;	// 0x303655a1
- (float)cacheSize;	// 0x303655b1
- (void)cancelWriteForImageWithURL:(id)url imageID:(id)anId;	// 0x30363a0d
- (void)dealloc;	// 0x30363169
- (id)downSampleImage:(id)image name:(id)name scaledToSize:(CGSize)size writeToDisk:(BOOL)disk;	// 0x30364849
- (id)downSampleImage:(id)image name:(id)name scaledToSize:(CGSize)size writeToDisk:(BOOL)disk original:(BOOL)original rotate:(BOOL)rotate;	// 0x3036487d
- (BOOL)hasRemoteImageBeenRequestedForMediaID:(id)mediaID;	// 0x303652bd
- (id)imageNameFromURL:(id)url;	// 0x30363771
- (id)imageNamed:(id)named;	// 0x30364621
- (id)imageNamed:(id)named croppedToSize:(CGSize)size create:(BOOL)create;	// 0x303640f9
- (id)imageNamed:(id)named scaledToSize:(CGSize)size;	// 0x303645e5
- (BOOL)isImageAvailable:(id)available;	// 0x303635f5
- (BOOL)isImageAvailable:(id)available croppedToSize:(CGSize)size;	// 0x30363735
- (BOOL)isImageAvailable:(id)available scaledToSize:(CGSize)size;	// 0x303636f9
- (BOOL)isImageWritten:(id)written;	// 0x303636e1
- (id)loadImageFromURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x30363a75
- (void)moveImageFromPath:(id)path imageID:(id)anId;	// 0x30363d49
// declared property getter: - (int)pruneCount;	// 0x303655cd
- (void)purge;	// 0x3036558d
- (void)purgeAndRemoveDirectory;	// 0x30365579
- (void)purgeRemoteRequest;	// 0x30365421
- (BOOL)receiveRemoteImageURL:(id)url forID:(id)anId;	// 0x30364f8d
- (BOOL)receiveRemoteImageURL:(id)url forID:(id)anId withResizingOptions:(id)resizingOptions;	// 0x30364fc9
- (void)receivedRemoteITunesImage:(id)image forID:(id)anId;	// 0x30364e35
- (void)receivedRemoteImage:(id)image forID:(id)anId;	// 0x3036515d
- (void)remoteImageRequestForMediaID:(id)mediaID;	// 0x30364c81
// declared property setter: - (void)setPruneCount:(int)count;	// 0x303655dd
- (void)writeCroppedImage:(id)image named:(id)named;	// 0x30363cd5
- (id)writeEncryptedImageFromURL:(id)url;	// 0x30363829
- (void)writeImage:(id)image named:(id)named;	// 0x30363bad
- (void)writeImage:(id)image named:(id)named asynchronous:(BOOL)asynchronous;	// 0x30363bd1
- (id)writeImageFromImageProxy:(id)imageProxy;	// 0x303637a1
- (id)writeImageFromURL:(id)url;	// 0x30363809
- (id)writeImageFromURL:(id)url decryptionAgent:(id)agent;	// 0x3036387d
- (id)writeImageFromURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x303638a1
- (id)writeImageFromURL:(id)url imageID:(id)anId headerFields:(id)fields decryptionAgent:(id)agent;	// 0x303638c5
- (void)writeScaledImage:(id)image named:(id)named withSize:(CGSize)size;	// 0x30363c29
@end


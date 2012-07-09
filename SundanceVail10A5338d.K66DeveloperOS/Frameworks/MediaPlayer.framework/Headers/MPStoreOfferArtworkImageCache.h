/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, CPLRUDictionary;
@protocol OS_dispatch_queue;

@interface MPStoreOfferArtworkImageCache : NSObject {
	CPLRUDictionary *_lruCache;	// 4 = 0x4
	NSMutableDictionary *_didLoadBlocksByURL;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_queue;	// 12 = 0xc
}
+ (id)sharedArtworkImageCache;	// 0x342217f5
- (id)init;	// 0x34221861
- (void)_applicationDidReceiveMemoryWarningNotification:(id)_application;	// 0x34221a1d
- (void)_dumpCache;	// 0x34221f79
- (void)_onQueueCallDidLoadBlocksWithImage:(id)_onQueueCall forURL:(id)url;	// 0x34222001
- (void)dealloc;	// 0x34221969
- (id)imageForURL:(id)url;	// 0x34221a2d
@end

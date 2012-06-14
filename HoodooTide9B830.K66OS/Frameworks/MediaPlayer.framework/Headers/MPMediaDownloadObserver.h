/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"


@interface MPMediaDownloadObserver : NSObject {
	id _progressHandler;	// 4 = 0x4
	dispatch_queue_s *_queue;	// 8 = 0x8
	BOOL _hasPendingProgressHandlerExecution;	// 12 = 0xc
	BOOL _invalidated;	// 13 = 0xd
	int _retainCount;	// 16 = 0x10
}
@property(readonly, assign) BOOL canCancel;	// G=0x346e6ef9; 
@property(readonly, assign, getter=isCurrentlyPlayable) BOOL currentlyPlayable;	// G=0x346e6ef5; 
@property(readonly, assign) double downloadProgress;	// G=0x346e6ee9; 
@property(copy) id progressHandler;	// G=0x346e6f05; S=0x346e70b5; 
@property(readonly, assign, getter=isRestoreDownload) BOOL restoreDownload;	// G=0x346e6f01; 
+ (id)newObserverForDownloadIdentifier:(id)downloadIdentifier downloadPersistentID:(long long)anId;	// 0x346e680d
+ (id)newObserverForDownloadIdentifier:(id)downloadIdentifier downloadStatus:(int)status itemPersistentID:(long long)anId;	// 0x346e69c1
+ (id)newObserverForMediaItem:(id)mediaItem;	// 0x346e69f9
+ (id)sharedITunesStoreDownloadManager;	// 0x346e6d2d
- (id)init;	// 0x346e6765
- (BOOL)_isDeallocating;	// 0x346e6739
- (void)_onQueue_invalidate;	// 0x346e71a9
- (void)_onQueue_setShouldFireProgressHandler;	// 0x346e6d99
- (BOOL)_tryRetain;	// 0x346e66dd
// declared property getter: - (BOOL)canCancel;	// 0x346e6ef9
- (void)cancelDownload;	// 0x346e6efd
- (void)dealloc;	// 0x346e67b5
// declared property getter: - (double)downloadProgress;	// 0x346e6ee9
- (void)invalidate;	// 0x346e71e5
// declared property getter: - (BOOL)isCurrentlyPlayable;	// 0x346e6ef5
// declared property getter: - (BOOL)isRestoreDownload;	// 0x346e6f01
// declared property getter: - (id)progressHandler;	// 0x346e6f05
- (oneway void)release;	// 0x346e6629
- (id)retain;	// 0x346e65f1
- (unsigned)retainCount;	// 0x346e66c9
// declared property setter: - (void)setProgressHandler:(id)handler;	// 0x346e70b5
@end

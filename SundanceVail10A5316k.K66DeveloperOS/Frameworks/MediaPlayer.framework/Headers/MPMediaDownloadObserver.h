/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@protocol OS_dispatch_queue;

@interface MPMediaDownloadObserver : NSObject {
	id _progressHandler;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
	BOOL _hasPendingProgressHandlerExecution;	// 12 = 0xc
	BOOL _invalidated;	// 13 = 0xd
	long long _pid;	// 16 = 0x10
	int _retainCount;	// 24 = 0x18
}
@property(readonly, assign) BOOL canCancel;	// G=0x348d16a1; 
@property(readonly, assign, getter=isCurrentlyPlayable) BOOL currentlyPlayable;	// G=0x348d1675; 
@property(readonly, assign) double downloadProgress;	// G=0x348d1669; 
@property(readonly, assign, nonatomic) long long persistentID;	// G=0x348d1a19; @synthesize=_pid
@property(copy) id progressHandler;	// G=0x348d16ad; S=0x348d1871; 
@property(readonly, assign, getter=isRestoreDownload) BOOL restoreDownload;	// G=0x348d16a9; 
+ (id)newObserverForDownloadIdentifier:(id)downloadIdentifier downloadStatus:(int)status downloadPersistentID:(long long)anId;	// 0x348d1115
+ (id)newObserverForDownloadIdentifier:(id)downloadIdentifier downloadStatus:(int)status itemPersistentID:(long long)anId;	// 0x348d1351
+ (id)newObserverForMediaItem:(id)mediaItem;	// 0x348d137d
+ (id)sharedITunesStoreDownloadManager;	// 0x348d14b5
- (id)init;	// 0x348d106d
- (BOOL)_isDeallocating;	// 0x348d1041
- (void)_onQueue_invalidate;	// 0x348d1961
- (void)_onQueue_setShouldFireProgressHandler;	// 0x348d1521
- (BOOL)_tryRetain;	// 0x348d0ff1
// declared property getter: - (BOOL)canCancel;	// 0x348d16a1
- (void)cancelDownload;	// 0x348d16a5
- (void)dealloc;	// 0x348d10bd
// declared property getter: - (double)downloadProgress;	// 0x348d1669
- (void)invalidate;	// 0x348d199d
// declared property getter: - (BOOL)isCurrentlyPlayable;	// 0x348d1675
// declared property getter: - (BOOL)isRestoreDownload;	// 0x348d16a9
// declared property getter: - (long long)persistentID;	// 0x348d1a19
// declared property getter: - (id)progressHandler;	// 0x348d16ad
- (oneway void)release;	// 0x348d0f39
- (id)retain;	// 0x348d0f01
- (unsigned)retainCount;	// 0x348d0fdd
// declared property setter: - (void)setProgressHandler:(id)handler;	// 0x348d1871
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "SSDownloadManagerObserver.h"

@class SSDownloadManager, NSMutableDictionary, NSOperationQueue;

@interface AsyncSSDownloadManager : NSObject <SSDownloadManagerObserver> {
	SSDownloadManager *_manager;	// 4 = 0x4
	NSOperationQueue *_queue;	// 8 = 0x8
	NSMutableDictionary *_downloads;	// 12 = 0xc
	BOOL _reconnectInProgress;	// 16 = 0x10
}
- (id)initWithDownloadManager:(id)downloadManager;	// 0x3037f8dd
- (void)_attemptReconnect;	// 0x30380cf9
- (void)addDownload:(id)download completionBlock:(id)block;	// 0x30380bc5
- (void)addDownloads:(id)downloads completionBlock:(id)block;	// 0x30380af1
- (void)addOperationWithBlock:(id)block;	// 0x3037ffad
- (void)cancelDownload:(long long)download completionBlock:(id)block;	// 0x303806ed
- (void)dealloc;	// 0x3037fdd5
- (void)downloadHandlerDisconnected:(BOOL)disconnected;	// 0x30380fc1
- (void)downloadManager:(id)manager downloadStatesDidChange:(id)downloadStates;	// 0x3038019d
- (void)downloadManagerDownloadsDidChange:(id)downloadManagerDownloads;	// 0x30380495
- (void)finishDownload:(long long)download;	// 0x30380a1d
- (void)setDelegate:(id)delegate forDownload:(long long)download;	// 0x3037fe49
- (void)withDownload:(long long)download perform:(id)perform;	// 0x30380089
- (void)withDownload:(long long)download performAsync:(id)async;	// 0x303800c9
- (void)withDownloadMatchingIdentifier:(id)downloadMatchingIdentifier perform:(id)perform;	// 0x303807f5
@end

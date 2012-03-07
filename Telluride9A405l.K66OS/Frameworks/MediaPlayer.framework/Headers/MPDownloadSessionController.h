/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "SSDownloadHandlerDelegate.h"
#import <NSObject.h> // Unknown library

@class SSDownloadHandler, NSMutableArray, NSMutableSet, NSMutableDictionary;

@interface MPDownloadSessionController : NSObject <SSDownloadHandlerDelegate> {
@private
	dispatch_queue_s *_activePurchasesQueue;	// 4 = 0x4
	NSMutableSet *_alertViews;	// 8 = 0x8
	dispatch_queue_s *_dispatchQueue;	// 12 = 0xc
	dispatch_queue_s *_downloadSessionQueue;	// 16 = 0x10
	SSDownloadHandler *_downloadHandler;	// 20 = 0x14
	NSMutableArray *_downloadSessions;	// 24 = 0x18
	NSMutableSet *_playerItems;	// 28 = 0x1c
	dispatch_source_s *_progressTimer;	// 32 = 0x20
	dispatch_queue_s *_purchaseQueue;	// 36 = 0x24
	NSMutableDictionary *_purchases;	// 40 = 0x28
	NSMutableSet *_pendingCancellations;	// 44 = 0x2c
}
+ (id)downloadSessionController;	// 0x33c6949d
+ (void)enableDownloadSessions;	// 0x33c694bd
- (id)init;	// 0x33c68fed
- (void)_cellularRestrictionsChangedNotification:(id)notification;	// 0x33c6afa1
- (void)_closeSessionForAsset:(id)asset;	// 0x33c6bab1
- (void)_downloadAssetForMediaItem:(id)mediaItem forPlayback:(BOOL)playback completionHandler:(id)handler;	// 0x33c6bde9
- (void)_downloadAssetsForMediaItems:(id)mediaItems completionHandler:(id)handler;	// 0x33c6c6b5
- (void)_downloadCompleteNotification:(id)notification;	// 0x33c6b0e9
- (void)_downloadFailedNotification:(id)notification;	// 0x33c6b22d
- (id)_downloadSessionForAVAsset:(id)avasset;	// 0x33c6cef9
- (id)_downloadSessionWithID:(id)anId;	// 0x33c6d14d
- (BOOL)_networkIsSufficientForPlayback;	// 0x33c6d3c5
- (id)_openSessionWithProperties:(id)properties style:(int *)style;	// 0x33c6d429
- (void)_setMediaItem:(id)item isTemporaryDownload:(BOOL)download;	// 0x33c6d8b1
- (BOOL)_showCellularRestrictedDialogForMediaItem:(id)mediaItem;	// 0x33c6da05
- (BOOL)_showNoNetworkDialogForMediaItem:(id)mediaItem;	// 0x33c6dd75
- (void)_snapshotSessionProgress;	// 0x33c6e189
- (void)_startProgressTimer;	// 0x33c6e3b1
- (void)_stopProgressTimer;	// 0x33c6e4e5
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0x33c6ba01
- (BOOL)canOpenSessionWithMediaItem:(id)mediaItem;	// 0x33c69511
- (void)cancelDownloadForMediaItemWithPersistentID:(id)persistentID;	// 0x33c69df1
- (void)dealloc;	// 0x33c692bd
- (void)downloadAssetForMediaItem:(id)mediaItem completionHandler:(id)handler;	// 0x33c695c5
- (void)downloadAssetsForMediaItems:(id)mediaItems completionHandler:(id)handler;	// 0x33c697a1
- (void)downloadHandler:(id)handler cancelSession:(id)session;	// 0x33c6b3c1
- (void)downloadHandler:(id)handler handleSession:(id)session;	// 0x33c6b691
- (id)downloadPropertiesForDownloadIdentifier:(id)downloadIdentifier;	// 0x33c69a15
- (BOOL)isDownloadInProgressForMediaItem:(id)mediaItem isPlaybackDownload:(BOOL *)download;	// 0x33c69c39
- (BOOL)isDownloadInProgressForMediaItemWithPersistentID:(id)persistentID isPlaybackDownload:(BOOL *)download;	// 0x33c69c7d
- (BOOL)isSessionRequiredToPlayMediaItem:(id)playMediaItem;	// 0x33c69ead
- (id)openSessionWithMediaItem:(id)mediaItem;	// 0x33c69f71
- (id)openSessionWithProperties:(id)properties;	// 0x33c6a4d1
- (BOOL)prioritizeSessionForAVItem:(id)avitem;	// 0x33c6a999
- (void)registerAVItem:(id)item;	// 0x33c6ad15
- (BOOL)showNetworkConstraintDialogForMediaItem:(id)mediaItem;	// 0x33c6ab69
- (void)unregisterAVItem:(id)item;	// 0x33c6ae69
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MPCloudAssetDownloadController : NSObject {
	NSMutableDictionary *_downloadSessionsForMediaItemIDs;	// 4 = 0x4
	unsigned long long _prioritizedMediaItemID;	// 8 = 0x8
}
+ (id)sharedAssetDownloadController;	// 0x36f9390d
- (id)init;	// 0x36f93979
- (id)_cachedAssetDestinationDirectory;	// 0x36f95059
- (BOOL)_canPlayCachedAssetAtPath:(id)path;	// 0x36f952b9
- (void)_cancelDownloadSession:(id)session;	// 0x36f95181
- (void)_downloadFailedNotification:(id)notification;	// 0x36f93b25
- (void)_downloadFileSizeAvailableNotification:(id)notification;	// 0x36f93cb1
- (id)_downloadKeyCookieWithValue:(id)value URL:(id)url;	// 0x36f9534d
- (void)_downloadSucceededNotification:(id)notification;	// 0x36f93ec1
- (void)_matchCellularDataRestrictedDidChangeNotification:(id)_matchCellularDataRestricted;	// 0x36f9433d
- (void)_networkTypeChangedNotification:(id)notification;	// 0x36f943b9
- (id)_newAVAssetForMediaItem:(id)mediaItem;	// 0x36f955ed
- (id)_newAVAssetForPurchaseResponseDictionary:(id)purchaseResponseDictionary mediaItem:(id)item preferredAssetFlavor:(id)flavor;	// 0x36f956f1
- (id)_newAssetForExistingDownloadSession:(id)existingDownloadSession;	// 0x36f95489
- (void)_removeNotificationObserversForDownloadSession:(id)downloadSession;	// 0x36f96395
- (void)_resumedPausedDownloadSessionsForCompletedMediaItemID:(unsigned long long)completedMediaItemID;	// 0x36f96425
- (void)_stopDownloadsBasedOnCurrentNetworkIfNeeded;	// 0x36f96465
- (id)_urlConnectionRequestForMediaItem:(id)mediaItem;	// 0x36f965c5
- (id)assetForMediaItem:(id)mediaItem;	// 0x36f94435
- (void)dealloc;	// 0x36f93a69
- (BOOL)mediaItemHasDownloadSession:(id)session;	// 0x36f94db5
- (void)prioritizeDownloadSessionForMediaItem:(id)mediaItem;	// 0x36f94e29
@end


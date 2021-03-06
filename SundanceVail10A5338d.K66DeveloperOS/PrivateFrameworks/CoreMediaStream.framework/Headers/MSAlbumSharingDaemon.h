/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSDaemon.h"

@class NSMutableDictionary, MSASDaemonModel;
@protocol MSAlbumSharingDaemonDelegate;

@interface MSAlbumSharingDaemon : MSDaemon {
	id<MSAlbumSharingDaemonDelegate> _delegate;	// 20 = 0x14
	NSMutableDictionary *_personIDToStateMachineMap;	// 24 = 0x18
	NSMutableDictionary *_personIDToDelegateMap;	// 28 = 0x1c
	MSASDaemonModel *_daemonModel;	// 32 = 0x20
	int _busyCount;	// 36 = 0x24
	BOOL _isRetryingOutstandingActivities;	// 40 = 0x28
}
@property(assign, nonatomic) __weak id<MSAlbumSharingDaemonDelegate> delegate;	// G=0x33762e0d; S=0x33762e2d; @synthesize=_delegate
@property(assign, nonatomic) BOOL isRetryingOutstandingActivities;	// G=0x33762e41; S=0x33762e51; @synthesize=_isRetryingOutstandingActivities
- (id)init;	// 0x33760711
- (void).cxx_destruct;	// 0x33762e61
- (id)_delegateForPersonID:(id)personID;	// 0x33762af5
- (void)acceptInvitationWithGUID:(id)guid personID:(id)anId;	// 0x33761df9
- (void)acceptInvitationWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x33761e1d
- (void)acceptInvitationWithToken:(id)token personID:(id)anId completionBlock:(id)block;	// 0x33761cc5
- (void)acceptInvitationWithToken:(id)token personID:(id)anId info:(id)info completionBlock:(id)block;	// 0x33761d75
- (void)addAccessControlEntries:(id)entries toAlbumWithGUID:(id)guid personID:(id)anId;	// 0x33761f19
- (void)addAccessControlEntries:(id)entries toAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x33761f3d
- (void)addAlbum:(id)album personID:(id)anId;	// 0x33761965
- (void)addAlbum:(id)album personID:(id)anId info:(id)info;	// 0x33761989
- (void)addAssetCollections:(id)collections toAlbumWithGUID:(id)guid personID:(id)anId;	// 0x33762179
- (void)addAssetCollections:(id)collections toAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x3376219d
- (void)addComments:(id)comments toAssetCollectionWithGUID:(id)guid personID:(id)anId;	// 0x33762359
- (void)addComments:(id)comments toAssetCollectionWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x3376237d
- (int)assetsInDownloadQueueCountForPersonID:(id)personID;	// 0x337615e1
- (id)boundStateMachineForPersonID:(id)personID;	// 0x33762c59
- (void)cancelActivitiesForPersonID:(id)personID;	// 0x33760fdd
// declared property getter: - (id)delegate;	// 0x33762e0d
- (void)deleteAlbumWithGUID:(id)guid personID:(id)anId;	// 0x33761a85
- (void)deleteAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x33761aa9
- (void)deleteAssetCollectionWithGUID:(id)guid personID:(id)anId;	// 0x33762221
- (void)deleteAssetCollectionWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x33762245
- (void)deleteCommentWithGUID:(id)guid personID:(id)anId;	// 0x33762401
- (void)deleteCommentWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x33762425
- (void)didCreateStateMachineForPersonID:(id)personID;	// 0x33760b55
- (void)didDestroyStateMachineForPersonID:(id)personID;	// 0x33760b5d
- (void)didIdle;	// 0x3376090d
- (void)didReceiveAuthFailureForPersonID:(id)personID;	// 0x33760c75
- (void)didReceiveAuthSuccessForPersonID:(id)personID;	// 0x33760c79
- (void)didReceiveGlobalResetSyncForPersonID:(id)personID;	// 0x33760c7d
- (void)didReceivePushNotificationForPersonID:(id)personID;	// 0x33760b61
- (void)didUnidle;	// 0x337609c9
- (void)dropPersonID:(id)anId;	// 0x337616c1
- (void)forgetEverything;	// 0x33762631
- (void)forgetEverythingAboutPersonID:(id)anId;	// 0x33762559
- (void)forgetPersonID:(id)anId;	// 0x337610a9
- (BOOL)isInRetryState;	// 0x33760b65
// declared property getter: - (BOOL)isRetryingOutstandingActivities;	// 0x33762e41
- (BOOL)isWaitingForAuth;	// 0x33760c81
- (void)markAlbumGUIDAsViewed:(id)viewed personID:(id)anId;	// 0x33761b15
- (void)markAlbumGUIDAsViewed:(id)viewed personID:(id)anId info:(id)info;	// 0x33761b39
- (void)markCommentsForAssetCollectionWithGUID:(id)guid asViewedWithLastViewedDate:(id)lastViewedDate personID:(id)anId;	// 0x337622b1
- (void)markCommentsForAssetCollectionWithGUID:(id)guid asViewedWithLastViewedDate:(id)lastViewedDate personID:(id)anId info:(id)info;	// 0x337622d5
- (id)modelForPersonID:(id)personID;	// 0x3376161d
- (void)modifyAlbumMetadata:(id)metadata personID:(id)anId;	// 0x337619f5
- (void)modifyAlbumMetadata:(id)metadata personID:(id)anId info:(id)info;	// 0x33761a19
- (id)nextActivityDate;	// 0x337608ed
- (id)persistentObjectForKey:(id)key personID:(id)anId;	// 0x33762a1d
- (id)personIDsListeningToPushNotification;	// 0x337612ad
- (void)pollForSubscriptionUpdatesTriggeredByPushNotification;	// 0x33761345
- (void)refreshAccessControlListOfAlbumWithGUID:(id)guid personID:(id)anId;	// 0x3376183d
- (void)refreshAccessControlListOfAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x33761861
- (void)refreshCommentsForAssetCollectionWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)anId;	// 0x337618cd
- (void)refreshCommentsForAssetCollectionWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)anId info:(id)info;	// 0x337618f1
- (void)refreshContentOfAlbumWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)anId;	// 0x337617a5
- (void)refreshContentOfAlbumWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)anId info:(id)info;	// 0x337617c9
- (void)refreshResetSync:(BOOL)sync personID:(id)anId;	// 0x33761721
- (void)refreshResetSync:(BOOL)sync personID:(id)anId info:(id)info;	// 0x33761745
- (void)refreshServerSideConfigurationForPersonID:(id)personID;	// 0x337629e5
- (void)rejectInvitationWithGUID:(id)guid personID:(id)anId;	// 0x33761e89
- (void)rejectInvitationWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x33761ead
- (void)removeAccessControlEntryWithGUID:(id)guid personID:(id)anId;	// 0x33761fc1
- (void)removeAccessControlEntryWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x33761fe5
- (void)retrieveAssets:(id)assets inAlbumWithGUID:(id)guid personID:(id)anId;	// 0x33762491
- (void)retrieveAssetsInAssetCollectionsWithGUIDs:(id)guids assetTypeFlags:(int)flags personID:(id)anId;	// 0x337624fd
- (void)retryOutstandingActivities;	// 0x33760c85
- (void)sendServerSideConfigurationDidChangeNotificationForPersonID:(id)sendServerSideConfiguration;	// 0x33761551
- (id)serverSideConfigurationForPersonID:(id)personID;	// 0x3376299d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33762e2d
- (void)setFocusAlbumGUID:(id)guid forPersonID:(id)personID;	// 0x33760a85
- (void)setFocusAssetCollectionGUID:(id)guid forPersonID:(id)personID;	// 0x33760aed
// declared property setter: - (void)setIsRetryingOutstandingActivities:(BOOL)activities;	// 0x33762e51
- (void)setNextActivityDate:(id)date forPersonID:(id)personID;	// 0x33761531
- (void)setPersistentObject:(id)object forKey:(id)key personID:(id)anId;	// 0x33762a89
- (void)setPublicAccessEnabled:(BOOL)enabled forAlbumWithGUID:(id)guid personID:(id)anId completionBlock:(id)block;	// 0x33762051
- (void)setPublicAccessEnabled:(BOOL)enabled forAlbumWithGUID:(id)guid personID:(id)anId info:(id)info completionBlock:(id)block;	// 0x33762101
- (void)shutDown;	// 0x337607f9
- (void)start;	// 0x337607e9
- (void)stopActivities;	// 0x33760dbd
- (void)stopAssetDownloadsForPersonID:(id)personID;	// 0x33760f09
- (void)subscribeToAlbumWithGUID:(id)guid personID:(id)anId;	// 0x33761ba5
- (void)subscribeToAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x33761bc9
- (void)unsubscribeFromAlbumWithGUID:(id)guid personID:(id)anId;	// 0x33761c35
- (void)unsubscribeFromAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x33761c59
- (void)willDestroyStateMachineForPersonID:(id)personID;	// 0x33760b59
@end


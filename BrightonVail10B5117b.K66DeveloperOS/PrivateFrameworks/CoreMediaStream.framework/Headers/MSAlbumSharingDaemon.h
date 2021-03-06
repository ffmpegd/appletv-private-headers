/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSDaemon.h"

@class MSASDaemonModel, NSObject, NSMutableDictionary;
@protocol MSAlbumSharingDaemonDelegate, OS_dispatch_queue;

@interface MSAlbumSharingDaemon : MSDaemon {
	id<MSAlbumSharingDaemonDelegate> _delegate;	// 24 = 0x18
	NSMutableDictionary *_personIDToStateMachineMap;	// 28 = 0x1c
	NSMutableDictionary *_personIDToDelegateMap;	// 32 = 0x20
	MSASDaemonModel *_daemonModel;	// 36 = 0x24
	int _busyCount;	// 40 = 0x28
	BOOL _isRetryingOutstandingActivities;	// 44 = 0x2c
	NSObject<OS_dispatch_queue> *_mapQueue;	// 48 = 0x30
	NSObject<OS_dispatch_queue> *_workQueue;	// 52 = 0x34
	NSMutableDictionary *_nextUpdateDateByPersonID;	// 56 = 0x38
}
@property(assign, nonatomic) int busyCount;	// G=0x3395c061; S=0x3395c071; @synthesize=_busyCount
@property(retain, nonatomic) MSASDaemonModel *daemonModel;	// G=0x3395c029; S=0x3395c039; @synthesize=_daemonModel
@property(assign, nonatomic) __weak id<MSAlbumSharingDaemonDelegate> delegate;	// G=0x3395bf85; S=0x3395bfa5; @synthesize=_delegate
@property(assign, nonatomic) BOOL isRetryingOutstandingActivities;	// G=0x3395c081; S=0x3395c091; @synthesize=_isRetryingOutstandingActivities
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mapQueue;	// G=0x3395c0a1; S=0x3395c0b1; @synthesize=_mapQueue
@property(retain, nonatomic) NSMutableDictionary *nextUpdateDateByPersonID;	// G=0x3395c111; S=0x3395c121; @synthesize=_nextUpdateDateByPersonID
@property(retain, nonatomic) NSMutableDictionary *personIDToDelegateMap;	// G=0x3395bff1; S=0x3395c001; @synthesize=_personIDToDelegateMap
@property(retain, nonatomic) NSMutableDictionary *personIDToStateMachineMap;	// G=0x3395bfb9; S=0x3395bfc9; @synthesize=_personIDToStateMachineMap
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;	// G=0x3395c0d9; S=0x3395c0e9; @synthesize=_workQueue
- (id)init;	// 0x33954349
- (void).cxx_destruct;	// 0x3395c149
- (id)_delegateForPersonID:(id)personID;	// 0x3395ae85
- (void)_postModelShutdownForPersonID:(id)personID completionBlock:(id)block;	// 0x3395906d
- (void)acceptInvitationWithGUID:(id)guid personID:(id)anId;	// 0x33957c25
- (void)acceptInvitationWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x33957c5d
- (void)acceptInvitationWithToken:(id)token personID:(id)anId completionBlock:(id)block;	// 0x339579d9
- (void)acceptInvitationWithToken:(id)token personID:(id)anId info:(id)info completionBlock:(id)block;	// 0x33957a81
- (void)addAccessControlEntries:(id)entries toAlbumWithGUID:(id)guid personID:(id)anId;	// 0x33957f55
- (void)addAccessControlEntries:(id)entries toAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x33957fa1
- (void)addAlbum:(id)album personID:(id)anId;	// 0x33956fed
- (void)addAlbum:(id)album personID:(id)anId info:(id)info;	// 0x33957025
- (void)addAssetCollections:(id)collections toAlbumWithGUID:(id)guid personID:(id)anId;	// 0x339584fd
- (void)addAssetCollections:(id)collections toAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x33958549
- (void)addComments:(id)comments toAssetCollectionWithGUID:(id)guid personID:(id)anId;	// 0x33958a4d
- (void)addComments:(id)comments toAssetCollectionWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x33958a99
- (int)assetsInDownloadQueueCountForPersonID:(id)personID;	// 0x33956815
- (id)boundStateMachineForPersonID:(id)personID;	// 0x3395b1ed
// declared property getter: - (int)busyCount;	// 0x3395c061
- (void)cancelActivitiesForPersonID:(id)personID;	// 0x33955e51
// declared property getter: - (id)daemonModel;	// 0x3395c029
- (void)dealloc;	// 0x33954479
// declared property getter: - (id)delegate;	// 0x3395bf85
- (void)deleteAlbumWithGUID:(id)guid personID:(id)anId;	// 0x3395731d
- (void)deleteAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x33957355
- (void)deleteAssetCollectionWithGUID:(id)guid personID:(id)anId;	// 0x339586d9
- (void)deleteAssetCollectionWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x33958711
- (void)deleteCommentWithGUID:(id)guid personID:(id)anId;	// 0x33958c29
- (void)deleteCommentWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x33958c61
- (void)didCreateStateMachineForPersonID:(id)personID;	// 0x3395536d
- (void)didDestroyStateMachineForPersonID:(id)personID;	// 0x33955375
- (void)didIdle;	// 0x33954dad
- (void)didReceiveAuthFailureForPersonID:(id)personID;	// 0x339555fd
- (void)didReceiveAuthSuccessForPersonID:(id)personID;	// 0x33955601
- (void)didReceiveCommentTooLongError:(id)error forAssetCollection:(id)assetCollection inAlbum:(id)album personID:(id)anId;	// 0x3395bdc1
- (void)didReceiveGlobalResetSyncForPersonID:(id)personID;	// 0x33955605
- (void)didReceivePushNotificationForPersonID:(id)personID;	// 0x33955379
- (void)didReceiveTooManyAlbumsError:(id)error personID:(id)anId;	// 0x3395b791
- (void)didReceiveTooManyCommentsError:(id)error forAssetCollection:(id)assetCollection inAlbum:(id)album personID:(id)anId;	// 0x3395bbfd
- (void)didReceiveTooManyPhotosError:(id)error forAlbum:(id)album personID:(id)anId;	// 0x3395b8f9
- (void)didReceiveTooManySubscriptionsError:(id)error personID:(id)anId;	// 0x3395ba95
- (void)didUnidle;	// 0x33954e69
- (id)existingModelForPersonID:(id)personID;	// 0x33956851
- (id)existingStateMachineForPersonID:(id)personID;	// 0x3395afe9
- (void)forgetEverythingAboutPersonID:(id)anId;	// 0x33959059
- (void)forgetEverythingAboutPersonID:(id)anId completionBlock:(id)block;	// 0x3395a141
- (void)forgetEverythingCompletionBlock:(id)block;	// 0x3395a58d
- (BOOL)hasCommandsInGroupedCommandQueue;	// 0x3395560d
- (BOOL)isInRetryState;	// 0x3395537d
// declared property getter: - (BOOL)isRetryingOutstandingActivities;	// 0x3395c081
- (BOOL)isWaitingForAuth;	// 0x33955609
// declared property getter: - (id)mapQueue;	// 0x3395c0a1
- (void)mapQueueShutDownStateMachineInMap:(id)map personIDs:(id)ids index:(unsigned)index forDestruction:(BOOL)destruction completionBlock:(id)block;	// 0x339545dd
- (void)markAlbumGUIDAsViewed:(id)viewed personID:(id)anId;	// 0x339574b5
- (void)markAlbumGUIDAsViewed:(id)viewed personID:(id)anId info:(id)info;	// 0x339574ed
- (void)markAlbumGUIDAsViewed:(id)viewed personID:(id)anId moveLastViewedAssetCollectionMarker:(BOOL)marker info:(id)info;	// 0x33957539
- (void)markCommentsForAssetCollectionWithGUID:(id)guid asViewedWithLastViewedDate:(id)lastViewedDate personID:(id)anId;	// 0x33958871
- (void)markCommentsForAssetCollectionWithGUID:(id)guid asViewedWithLastViewedDate:(id)lastViewedDate personID:(id)anId info:(id)info;	// 0x339588bd
- (id)modelForPersonID:(id)personID;	// 0x339568f9
- (void)modifyAlbumMetadata:(id)metadata personID:(id)anId;	// 0x33957185
- (void)modifyAlbumMetadata:(id)metadata personID:(id)anId info:(id)info;	// 0x339571bd
- (id)nextActivityDate;	// 0x33954d8d
// declared property getter: - (id)nextUpdateDateByPersonID;	// 0x3395c111
- (id)persistentObjectForKey:(id)key personID:(id)anId;	// 0x3395adc5
// declared property getter: - (id)personIDToDelegateMap;	// 0x3395bff1
// declared property getter: - (id)personIDToStateMachineMap;	// 0x3395bfb9
- (id)personIDsListeningToPushNotification;	// 0x33956095
- (void)pollForSubscriptionUpdatesTriggeredByPushNotification;	// 0x3395612d
- (void)refreshAccessControlListOfAlbumWithGUID:(id)guid personID:(id)anId;	// 0x33956cad
- (void)refreshAccessControlListOfAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x33956ce5
- (void)refreshCommentsForAssetCollectionWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)anId;	// 0x33956e45
- (void)refreshCommentsForAssetCollectionWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)anId info:(id)info;	// 0x33956e81
- (void)refreshContentOfAlbumWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)anId;	// 0x33956b05
- (void)refreshContentOfAlbumWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)anId info:(id)info;	// 0x33956b41
- (void)refreshResetSync:(BOOL)sync personID:(id)anId;	// 0x339569a1
- (void)refreshResetSync:(BOOL)sync personID:(id)anId info:(id)info;	// 0x339569c5
- (void)refreshServerSideConfigurationForPersonID:(id)personID;	// 0x3395ad8d
- (void)rejectInvitationWithGUID:(id)guid personID:(id)anId;	// 0x33957dbd
- (void)rejectInvitationWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x33957df5
- (void)removeAccessControlEntryWithGUID:(id)guid personID:(id)anId;	// 0x33958131
- (void)removeAccessControlEntryWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x33958169
- (void)retrieveAssets:(id)assets inAlbumWithGUID:(id)guid personID:(id)anId;	// 0x33958dc1
- (void)retrieveAssetsInAssetCollectionsWithGUIDs:(id)guids assetTypeFlags:(int)flags personID:(id)anId;	// 0x33958f1d
- (void)retryOutstandingActivities;	// 0x3395588d
- (void)sendServerSideConfigurationDidChangeNotificationForPersonID:(id)sendServerSideConfiguration;	// 0x339566d1
- (id)serverSideConfigurationForPersonID:(id)personID;	// 0x3395ad45
// declared property setter: - (void)setBusyCount:(int)count;	// 0x3395c071
// declared property setter: - (void)setDaemonModel:(id)model;	// 0x3395c039
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3395bfa5
- (void)setFocusAlbumGUID:(id)guid forPersonID:(id)personID;	// 0x33954f25
- (void)setFocusAssetCollectionGUID:(id)guid forPersonID:(id)personID;	// 0x33955149
// declared property setter: - (void)setIsRetryingOutstandingActivities:(BOOL)activities;	// 0x3395c091
// declared property setter: - (void)setMapQueue:(id)queue;	// 0x3395c0b1
- (void)setNextActivityDate:(id)date forPersonID:(id)personID;	// 0x339563ad
// declared property setter: - (void)setNextUpdateDateByPersonID:(id)anId;	// 0x3395c121
- (void)setPersistentObject:(id)object forKey:(id)key personID:(id)anId;	// 0x3395ae25
// declared property setter: - (void)setPersonIDToDelegateMap:(id)delegateMap;	// 0x3395c001
// declared property setter: - (void)setPersonIDToStateMachineMap:(id)stateMachineMap;	// 0x3395bfc9
- (void)setPublicAccessEnabled:(BOOL)enabled forAlbumWithGUID:(id)guid personID:(id)anId completionBlock:(id)block;	// 0x339582c9
- (void)setPublicAccessEnabled:(BOOL)enabled forAlbumWithGUID:(id)guid personID:(id)anId info:(id)info completionBlock:(id)block;	// 0x33958375
// declared property setter: - (void)setWorkQueue:(id)queue;	// 0x3395c0e9
- (void)shutDown;	// 0x33954541
- (void)shutDownCompletionBlock:(id)block;	// 0x339548c9
- (void)shutDownStateMachine:(id)machine forDestruction:(BOOL)destruction completionBlock:(id)block;	// 0x33959421
- (void)start;	// 0x339544a5
- (void)stopAssetDownloadsForPersonID:(id)personID;	// 0x33955a51
- (void)subscribeToAlbumWithGUID:(id)guid personID:(id)anId;	// 0x339576a9
- (void)subscribeToAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x339576e1
- (void)unsubscribeFromAlbumWithGUID:(id)guid personID:(id)anId;	// 0x33957841
- (void)unsubscribeFromAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x33957879
- (void)willDestroyStateMachineForPersonID:(id)personID;	// 0x33955371
// declared property getter: - (id)workQueue;	// 0x3395c0d9
- (void)workQueueForgetEverythingAboutPersonID:(id)anId completionBlock:(id)block;	// 0x339599d1
- (void)workQueueForgetEverythingAboutPersonIDs:(id)ids index:(unsigned)index completionBlock:(id)block;	// 0x3395a421
@end


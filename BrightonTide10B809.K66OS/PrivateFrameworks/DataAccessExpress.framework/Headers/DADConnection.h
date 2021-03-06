/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import "AccountNotificationProtocol.h"
#import <NSObject.h> // Unknown library

@class NSMutableSet, NSMutableDictionary;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface DADConnection : NSObject <AccountNotificationProtocol> {
	NSObject<OS_xpc_object> *_conn;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_muckingWithConn;	// 8 = 0x8
	NSMutableSet *_accountIdsWithAlreadyResetCerts;	// 12 = 0xc
	NSMutableSet *_accountIdsWithAlreadyResetThrottleTimers;	// 16 = 0x10
	id _statusReportBlock;	// 20 = 0x14
	NSMutableDictionary *_inFlightSearchQueries;	// 24 = 0x18
	NSMutableDictionary *_inFlightFolderChanges;	// 28 = 0x1c
	NSMutableDictionary *_inFlightAttachmentDownloads;	// 32 = 0x20
	NSMutableDictionary *_inFlightShareRequests;	// 36 = 0x24
}
+ (void)accountDidChange:(id)account forDataclass:(id)dataclass;	// 0x33a77421
+ (void)accountWillChange:(id)account forDataclass:(id)dataclass;	// 0x33a77391
+ (void)noteAccountChanges:(id)changes;	// 0x33a772f1
+ (void)setShouldIgnoreAccountChanges;	// 0x33a7325d
+ (id)sharedConnection;	// 0x33a731c5
+ (id)sharedConnectionIfServerIsRunning;	// 0x33a73231
- (id)init;	// 0x33a76885
- (void)_cancelDownloadsWithIDs:(id)ids error:(id)error;	// 0x33a75afd
- (id)_connection;	// 0x33a71c5d
- (id)_createReplyToRequest:(id)request withProperties:(id)properties;	// 0x33a71f55
- (void)_dispatchMessage:(id)message;	// 0x33a770c1
- (void)_downloadFinished:(id)finished;	// 0x33a72fb1
- (void)_downloadProgress:(id)progress;	// 0x33a72e45
- (void)_folderChangeFinished:(id)finished;	// 0x33a729c1
- (void)_foldersUpdated:(id)updated;	// 0x33a7232d
- (void)_getStatusReportsFromClient:(id)client;	// 0x33a72c01
- (id)_init;	// 0x33a768dd
- (void)_logDataAccessStatus:(id)status;	// 0x33a7250d
- (void)_policyKeyChanged:(id)changed;	// 0x33a7219d
- (void)_reallyRegisterForInterrogation;	// 0x33a766ed
- (void)_registerForAppResumedNotification;	// 0x33a77069
- (void)_requestDaemonChangeAgentMonitoringStatus:(BOOL)status waitForReply:(BOOL)reply;	// 0x33a73fb5
- (void)_requestDaemonStopMonitoringAgents_Sync;	// 0x33a74225
- (void)_resetCertWarningsForAccountId:(id)accountId andDataclasses:(int)dataclasses isUserRequested:(BOOL)requested;	// 0x33a76b55
- (void)_resetThrottleTimersForAccountId:(id)accountId;	// 0x33a76d79
- (void)_sendSynchronousXPCMessageWithParameters:(id)parameters handlerBlock:(id)block;	// 0x33a75629
- (void)_serverContactsSearchQueryFinished:(id)finished;	// 0x33a7256d
- (void)_serverDiedWithReason:(id)reason;	// 0x33a71b49
- (void)_shareResponseFinished:(id)finished;	// 0x33a7310d
- (void)_tearDownInFlightObjects;	// 0x33a717b1
- (void)applyNewAccountProperties:(id)properties onAccountWithId:(id)anId forceSave:(BOOL)save;	// 0x33a762f9
- (id)beginDownloadingAttachmentWithUUID:(id)uuid accountID:(id)anId queue:(id)queue progressBlock:(id)block completionBlock:(id)block5;	// 0x33a7575d
- (void)cancelDownloadingAttachmentWithDownloadID:(id)downloadID error:(id)error;	// 0x33a75bf9
- (void)cancelServerContactsSearch:(id)search;	// 0x33a74bd9
- (id)currentPolicyKeyForAccountID:(id)accountID;	// 0x33a73c9d
- (void)dealloc;	// 0x33a76a21
- (id)decodedErrorFromData:(id)data;	// 0x33a71fd9
- (void)fillOutCurrentEASTimeZoneInfo;	// 0x33a76791
- (void)handleURL:(id)url;	// 0x33a75551
- (BOOL)performServerContactsSearch:(id)search forAccountWithID:(id)anId;	// 0x33a747cd
- (BOOL)processFolderChange:(id)change forAccountWithID:(id)anId;	// 0x33a75f69
- (BOOL)processMeetingRequests:(id)requests deliveryIdsToClear:(id)clear deliveryIdsToSoftClear:(id)softClear inFolderWithId:(id)anId forAccountWithId:(id)anId5;	// 0x33a74d6d
- (BOOL)registerForInterrogationWithBlock:(id)block;	// 0x33a7675d
- (void)removeStoresForAccountWithID:(id)anId;	// 0x33a74239
- (void)reportFolderItemsSyncSuccess:(BOOL)success forFolderWithID:(id)anId andAccountWithID:(id)anId3;	// 0x33a75469
- (void)requestDaemonShutdown;	// 0x33a742c9
- (void)requestDaemonStartMonitoringAgents;	// 0x33a741e9
- (void)requestDaemonStartMonitoringAgents_Sync;	// 0x33a74211
- (void)requestDaemonStopMonitoringAgents;	// 0x33a741fd
- (BOOL)requestPolicyUpdateForAccountID:(id)accountID;	// 0x33a73c05
- (void)resetTimersAndWarnings;	// 0x33a76f51
- (void)respondToSharedCalendarInvite:(int)sharedCalendarInvite forCalendarWithID:(id)anId accountID:(id)anId3 queue:(id)queue completionBlock:(id)block;	// 0x33a75cdd
- (BOOL)resumeWatchingFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x33a7332d
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag forAccountID:(id)accountID;	// 0x33a750f1
- (id)statusReports;	// 0x33a763cd
- (BOOL)stopWatchingFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x33a73925
- (BOOL)suspendWatchingFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x33a73645
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)accountID andDataclass:(int)dataclass;	// 0x33a747a9
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)accountID andDataclass:(int)dataclass isUserRequested:(BOOL)requested;	// 0x33a74609
- (BOOL)updateContentsOfFoldersWithKeys:(id)keys forAccountID:(id)accountID andDataclass:(int)dataclass;	// 0x33a74785
- (BOOL)updateContentsOfFoldersWithKeys:(id)keys forAccountID:(id)accountID andDataclass:(int)dataclass isUserRequested:(BOOL)requested;	// 0x33a7448d
- (BOOL)updateFolderListForAccountID:(id)accountID andDataclasses:(int)dataclasses;	// 0x33a74761
- (BOOL)updateFolderListForAccountID:(id)accountID andDataclasses:(int)dataclasses isUserRequested:(BOOL)requested;	// 0x33a74469
- (BOOL)updateFolderListForAccountID:(id)accountID andDataclasses:(int)dataclasses requireChangedFolders:(BOOL)folders isUserRequested:(BOOL)requested;	// 0x33a742dd
- (BOOL)watchFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x33a7326d
@end


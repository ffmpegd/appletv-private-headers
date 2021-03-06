/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
 */

#import "MDM-Structs.h"
#import "MCJobQueueObserver.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, MCJobQueue, MCUserNotificationManager, NSString, MCMDMServer;

@interface MCManagedAppManager : NSObject <MCJobQueueObserver> {
	MCMDMServer *_server;	// 4 = 0x4
	NSString *_manifestPath;	// 8 = 0x8
	NSMutableDictionary *_manifest;	// 12 = 0xc
	dispatch_queue_s *_manifestQueue;	// 16 = 0x10
	MCJobQueue *_jobQueue;	// 20 = 0x14
	MCUserNotificationManager *_userNotificationManager;	// 24 = 0x18
	dispatch_queue_s *_busyCountQueue;	// 28 = 0x1c
	int _busyCount;	// 32 = 0x20
}
@property(assign, nonatomic) MCMDMServer *server;	// G=0x3394d611; S=0x3394d621; @synthesize=_server
+ (id)sharedManager;	// 0x3394f1e5
+ (id)stringForAppState:(int)appState;	// 0x3394d51d
- (id)initWithManifestPath:(id)manifestPath;	// 0x3394ef85
- (int)__appStateForBundleID:(id)bundleID;	// 0x3394d89d
- (void)__commitManifest;	// 0x3394d631
- (BOOL)__hasMetadataForBundleID:(id)bundleID;	// 0x3394d671
- (id)__managedAppMetadataByBundleID;	// 0x3394d6dd
- (id)__metadataForBundleID:(id)bundleID;	// 0x3394d83d
- (void)__removeBundleID:(id)anId;	// 0x3394d9d1
- (void)__setAppState:(int)state forBundleID:(id)bundleID;	// 0x3394d911
- (void)__setManagedAppMetadataByBundleID:(id)anId;	// 0x3394d735
- (void)__setMetadata:(id)metadata forBundleID:(id)bundleID;	// 0x3394d7b1
- (BOOL)_advanceTransientStateForBundleID:(id)bundleID params:(id)params outNewParams:(id *)params3 outSetChanged:(BOOL *)changed;	// 0x3394e671
- (id)_appAlreadyQueuedError:(id)error;	// 0x339512ad
- (BOOL)_appBundleID:(id)anId wasInstalledOutIsManaged:(BOOL *)managed;	// 0x339513cd
- (id)_bundleIDAlreadyInstalledError:(id)error;	// 0x3395130d
- (void)_displayAppInstallationAlertMessage:(id)message isUpdate:(BOOL)update completionBlock:(id)block;	// 0x33950fa5
- (void)_displayAppInstallationFailureAlertTitle:(id)title completionBlock:(id)block;	// 0x33950f31
- (void)_displayAppUpdateFailureAlertTitle:(id)title completionBlock:(id)block;	// 0x33950ebd
- (void)_displayPromptForAppInstallationTitle:(id)appInstallationTitle isAppStore:(BOOL)store isUpdate:(BOOL)update completionBlock:(id)block;	// 0x3395101d
- (id)_downloadingAppIDs;	// 0x3394f31d
- (void)_installEnterpriseAppManifestURL:(id)url completionBlock:(id)block;	// 0x3394ea01
- (id)_invalidManifestErrorWithURL:(id)url underlyingError:(id)error;	// 0x33951249
- (BOOL)_isBundleIDInstalled:(id)installed;	// 0x339514b1
- (id)_notAnAppError;	// 0x3395136d
- (void)_promptUserForEnterpriseAppInstallationManifestURL:(id)enterpriseAppInstallationManifestURL title:(id)title bundleID:(id)anId completionBlock:(id)block;	// 0x339508d5
- (void)_promptUserForEnterpriseAppUpdateManifestURL:(id)enterpriseAppUpdateManifestURL title:(id)title bundleID:(id)anId completionBlock:(id)block;	// 0x33950761
- (void)_promptUserForStoreAppInstallationItem:(id)storeAppInstallationItem title:(id)title bundleID:(id)anId offer:(id)offer completionBlock:(id)block;	// 0x33950be9
- (void)_promptUserForStoreAppUpdateItem:(id)storeAppUpdateItem title:(id)title bundleID:(id)anId offer:(id)offer completionBlock:(id)block;	// 0x33950a51
- (void)_promptUserForiTunesAccount:(id)account accountNameEditable:(BOOL)editable canCreateNewAccount:(BOOL)account3 completionBlock:(id)block;	// 0x33950615
- (void)_purchaseItem:(id)item account:(id)account offer:(id)offer completionBlock:(id)block;	// 0x33950d59
- (void)_userAccount:(id)account hasPurchasedBundleID:(id)anId completionBlock:(id)block;	// 0x3394ecfd
- (BOOL)_willQueueAppBundleID:(id)anId forDownloadManagementFlags:(int)downloadManagementFlags outRejectionReason:(id *)reason outIsUpdate:(BOOL *)update outError:(id *)error;	// 0x3394eb81
- (void)advanceTransientStates;	// 0x3394f26d
- (void)advanceTransientStatesForBundleID:(id)bundleID;	// 0x3394f211
- (int)appStateForBundleID:(id)bundleID;	// 0x339516c9
- (BOOL)applyRedemptionCode:(id)code forBundleID:(id)bundleID outError:(id *)error;	// 0x3394f51d
- (id)bundleIDsWithFlags:(int)flags;	// 0x33951555
- (void)cleanUp;	// 0x339511c1
- (void)dealloc;	// 0x33951a29
- (id)doNotBackupAppIDs;	// 0x3394e65d
- (BOOL)hasMetadataForBundleID:(id)bundleID;	// 0x339518f9
- (BOOL)hasPendingInstallations;	// 0x3394f499
- (BOOL)installITunesStoreID:(unsigned long long)anId managementFlags:(int)flags outBundleID:(id *)anId3 outAppState:(int *)state outRejectionReason:(id *)reason outError:(id *)error;	// 0x3394ff85
- (BOOL)installManifestURL:(id)url managementFlags:(int)flags outBundleID:(id *)anId outAppState:(int *)state outRejectionReason:(id *)reason outError:(id *)error;	// 0x3394f7a5
- (void)jobQueueDidReleaseBusy:(id)jobQueue;	// 0x33951979
- (void)jobQueueDidRetainBusy:(id)jobQueue;	// 0x339519d1
- (id)managedAppMetadataByBundleID;	// 0x33951855
- (id)metadataForBundleID:(id)bundleID;	// 0x33951745
- (void)removeBundleID:(id)anId;	// 0x33951611
// declared property getter: - (id)server;	// 0x3394d611
- (void)setAppState:(int)state forBundleID:(id)bundleID;	// 0x3395166d
- (void)setMetadata:(id)metadata forBundleID:(id)bundleID;	// 0x339517f9
// declared property setter: - (void)setServer:(id)server;	// 0x3394d621
- (void)uninstallManagedAppsAccordingToFlags;	// 0x3394f74d
- (void)updateApplicationInstallationStates;	// 0x3394f2c5
@end

